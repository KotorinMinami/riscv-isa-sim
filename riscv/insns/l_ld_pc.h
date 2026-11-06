require_extension(EXT_ZL);
require_zl(xlen == 64);
WRITE_RD(MMU.load<int64_t>(pc + insn.zl_p_imm()));
