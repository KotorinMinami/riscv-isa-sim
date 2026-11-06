require_extension(EXT_ZL);
if (RS1 >= RS2)
  set_pc(pc + insn.zl_b_imm());
