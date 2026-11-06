require_extension(EXT_ZL);
require_zl(xlen == 64);
if (int32_t(RS1) >= int32_t(RS2))
  set_pc(pc + insn.zl_b_imm());
