require_extension(EXT_ZL);
// lo is zero-extended; hi = lo + (hi - lo).
reg_t lo = insn.zl64_brng_lo();
reg_t hi = lo + insn.zl64_brng_delta();
bool in_range = lo <= RS1 && RS1 <= hi;
if (in_range)
  set_pc(pc + insn.zl64_b_imm());
