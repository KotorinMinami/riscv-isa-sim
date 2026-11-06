require_extension(EXT_ZL);
require_zl(xlen == 64);
WRITE_RD(MMU.load<int64_t>(RS1 + insn.zl_i_imm()));
