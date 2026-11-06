require_extension(EXT_ZL);
CHECK_RD();
reg_t tmp = npc;
set_pc(pc + insn.zl_j_imm());
WRITE_RD(tmp);
