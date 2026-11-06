require_extension(EXT_ZL);
// lo is sign-extended; hi = lo + (hi - lo).
sreg_t lo = sext(insn.zl64_brng_lo(), 16);
sreg_t hi = lo + insn.zl64_brng_delta();
bool in_range = lo <= sreg_t(RS1) && sreg_t(RS1) <= hi;
if (!in_range)
  set_pc(pc + insn.zl64_b_imm());
