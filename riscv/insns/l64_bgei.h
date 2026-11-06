require_extension(EXT_ZL);
reg_t imm = insn.zl64_bi_imm();
if (sreg_t(RS1) >= sreg_t(imm))
  set_pc(pc + insn.zl64_b_imm());
