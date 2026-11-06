require_extension(EXT_ZL);
reg_t imm = insn.zl_bi_imm();
if (sreg_t(RS1) >= sreg_t(imm))
  set_pc(pc + insn.zl_bi_off());
