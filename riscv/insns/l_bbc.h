require_extension(EXT_ZL);
require_zl(insn.zl_bx_idx() < xlen);
if (((RS1 >> insn.zl_bx_idx()) & 1) == 0)
  set_pc(pc + insn.zl_b_imm());
