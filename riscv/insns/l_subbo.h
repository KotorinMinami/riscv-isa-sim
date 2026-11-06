require_extension(EXT_ZL);
sreg_t result;
bool overflow = __builtin_sub_overflow(sreg_t(RS1), sreg_t(RS2), &result) || result != sext_xlen(result);
// rd is written whether or not the branch is taken, but not if the jump traps.
if (overflow)
  set_pc(pc + insn.zl_b_imm());
WRITE_REG(insn.zl_ba_rd(), sext_xlen(result));
