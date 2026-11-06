require_extension(EXT_ZL);
if (((RS1 >> (RS2 & (xlen - 1))) & 1) == 0)
  set_pc(pc + insn.zl_b_imm());
