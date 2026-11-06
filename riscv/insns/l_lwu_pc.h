require_extension(EXT_ZL);
require_zl(xlen == 64);
WRITE_RD(MMU.load<uint32_t>(pc + insn.zl_p_imm()));
