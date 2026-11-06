require_extension(EXT_ZL);
reg_t pos = insn.zl64_bf_pos(), len = insn.zl64_bf_len();
require_zl(pos + len <= xlen);
reg_t mask = len == 64 ? ~reg_t(0) : (reg_t(1) << len) - 1;
if (((RS1 >> pos) & mask) == (insn.zl64_bf_imm() & mask))
  set_pc(pc + insn.zl64_b_imm());
