require_extension(EXT_ZL);
require_zl(xlen == 64);
// rs2 is in the rd field.
MMU.store<uint64_t>(pc + insn.zl_p_imm(), RD);
