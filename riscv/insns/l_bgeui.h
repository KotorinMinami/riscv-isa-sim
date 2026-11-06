require_extension(EXT_ZL);
reg_t imm = insn.zl_bi_imm();
if (RS1 >= imm)
  set_pc(pc + insn.zl_bi_off());
