import yaml
import argparse
import sys

class register(yaml.YAMLObject):
    yaml_loader = yaml.SafeLoader
    yaml_tag = u'!register'
    def __init__(self, name, comment, bits):
        self.name = name
        self.comment = comment
        self.bits = bits
    def __repr__(self):
        return "%s(name=%r, comments=%r, bits=%r)" % (
        self.__class__.__name__, self.name, self.comment, self.bits)
    def finalize_pass(self):
        for bits in self.bits:
            bits.full_name = "{}_{}".format(self.name, bits.name)
    def __str__(self):
        string = "/* {:^64} */\n".format(self.comment)
        return string

class bitset(yaml.YAMLObject):
    yaml_loader = yaml.SafeLoader
    yaml_tag = u'!bitset'
    comment = ''
    def __init__(self, name, mask, comment):
        self.name = name
        self.comment = comment
        self.mask = mask
        self.full_name = ''
    def __repr__(self):
        return "%s(name=%r, comments=%r, bits=%r)" % (
        self.__class__.__name__, self.name, self.comment, self.mask)
    def bitmask(self, lo, hi):
        result = 0
        for shift in range(lo, hi + 1):
            result |= 1 << shift
        return result
    def __str__(self):
        if len(self.mask) == 1:
            mask = 1 << self.mask[0]
        else:
            high_bit, low_bit = self.mask
            mask = self.bitmask(low_bit, high_bit)
        string = "#define {:32} 0x{:08X}".format(self.full_name, mask)
        if self.comment:
            string += " /* {} */".format(self.comment)
        string += "\n"

        if len(self.mask) > 1:
            for idx, bit in enumerate(range(low_bit, high_bit + 1)):
                ident = "{}_{}".format(self.full_name, idx)
                string += "#define {:<32} 0x{:>08X} /* {} logical bit {} */\n".format(ident, 1 << bit, self.name, idx)
        return string

parser = argparse.ArgumentParser(
    prog = 'stmgen',
    description = '''
Universal stm32 C header files generator
'''
)

#parser.add_argument('input',  type=str, help = 'input file name')
#parser.add_argument('output', type=str, help = 'output file name')
parser.add_argument('-v', '--verbose', action = 'store_true', help = 'show debug messages')

try:
    args = parser.parse_args()
    #with open(args.input, "r") as file:
    registers = yaml.safe_load(sys.stdin)
    for reg in registers:
        reg.finalize_pass()

    for reg in registers:
        print('\n')
        print(reg, end='')
        for bits in reg.bits:
            print(bits, end='')
except Exception as ex:
    print(ex)
    print("Stopping now...")



