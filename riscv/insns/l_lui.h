require_extension(EXT_ZL);
require_zl(xlen == 64);
WRITE_RD((reg_t(insn.zl_u_imm()) << 32) | zext32(RD));
