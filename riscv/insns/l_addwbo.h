require_extension(EXT_ZL);
require_zl(xlen == 64);
int32_t result;
bool overflow = __builtin_add_overflow(int32_t(RS1), int32_t(RS2), &result);
// rd is written whether or not the branch is taken, but not if the jump traps.
if (overflow)
  set_pc(pc + insn.zl_b_imm());
WRITE_REG(insn.zl_ba_rd(), sext_xlen(result));
