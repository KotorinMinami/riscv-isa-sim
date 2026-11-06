require_extension(EXT_ZL);
require_zl(xlen == 64);
if (uint32_t(RS1) != uint32_t(RS2))
  set_pc(pc + insn.zl_b_imm());
