require_extension(EXT_ZL);
CHECK_RD();
reg_t tmp = npc;
set_pc((RS1 + insn.zl_jalr_imm()) & ~reg_t(1));
WRITE_RD(tmp);

maybe_set_elp(insn.rs1());
