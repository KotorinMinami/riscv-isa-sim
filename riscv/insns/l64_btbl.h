require_extension(EXT_ZL);
reg_t es = insn.zl64_btbl_es();
require_zl(es != 3);
// Jump through a table of signed 1 << es byte pc-relative offsets (in halfwords)
// if rs1 - bias is in [0, bound); else fall through.
reg_t i = zext_xlen(RS1 - insn.zl64_btbl_bias());
if (i < insn.zl64_btbl_bound()) {
  reg_t entry = pc + insn.zl64_b_imm() + (i << es);
  sreg_t e = es == 0 ? MMU.load<int8_t>(entry) :
             es == 1 ? MMU.load<int16_t>(entry) :
                       MMU.load<int32_t>(entry);
  set_pc(pc + (reg_t(e) << 1));
  set_elp_expected();
}
