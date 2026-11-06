require_extension(EXT_ZL);
WRITE_RD(MMU.load<int8_t>(pc + insn.zl_p_imm()));
