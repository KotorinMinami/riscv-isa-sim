require_extension(EXT_ZL);
// ra is written whether or not the branch is taken, but not if the jump traps.
bool taken = RS1 < RS2;
reg_t tmp = npc;
if (taken)
  set_pc(pc + insn.zl_b_imm());
WRITE_REG(X_RA, tmp);
