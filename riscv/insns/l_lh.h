require_extension(EXT_ZL);
WRITE_RD(MMU.load<int16_t>(RS1 + insn.zl_i_imm()));
