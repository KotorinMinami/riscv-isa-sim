require_extension(EXT_ZL);
// rs2 is in the rd field.
MMU.store<uint16_t>(pc + insn.zl_p_imm(), RD);
