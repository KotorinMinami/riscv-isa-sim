require_extension(EXT_ZL);
reg_t result;
bool overflow = __builtin_add_overflow(zext_xlen(RS1), zext_xlen(RS2), &result) || result != zext_xlen(result);
// rd is written whether or not the branch is taken, but not if the jump traps.
if (overflow)
  set_pc(pc + insn.zl_b_imm());
WRITE_REG(insn.zl_ba_rd(), sext_xlen(result));
