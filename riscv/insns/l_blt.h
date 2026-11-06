require_extension(EXT_ZL);
if (sreg_t(RS1) < sreg_t(RS2))
  set_pc(pc + insn.zl_b_imm());
