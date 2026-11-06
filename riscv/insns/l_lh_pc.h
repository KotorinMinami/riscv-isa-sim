require_extension(EXT_ZL);
WRITE_RD(MMU.load<int16_t>(pc + insn.zl_p_imm()));
