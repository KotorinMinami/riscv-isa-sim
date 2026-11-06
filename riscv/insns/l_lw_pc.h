require_extension(EXT_ZL);
WRITE_RD(MMU.load<int32_t>(pc + insn.zl_p_imm()));
