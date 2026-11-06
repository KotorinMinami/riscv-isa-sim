require_extension(EXT_ZL);
require_zl(xlen == 64);
WRITE_RD(sext_xlen(pc + insn.zl64_u_imm()));
