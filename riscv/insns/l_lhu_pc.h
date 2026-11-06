require_extension(EXT_ZL);
WRITE_RD(MMU.load<uint16_t>(pc + insn.zl_p_imm()));
