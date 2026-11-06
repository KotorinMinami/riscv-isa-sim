require_extension(EXT_ZL);
WRITE_RD(MMU.load<int32_t>(RS1 + insn.zl_i_imm()));
