require_extension(EXT_ZL);
// On RV32 the offset is truncated to 32 bits.
CHECK_RD();
reg_t tmp = npc;
set_pc(pc + insn.zl64_j_imm());
WRITE_RD(tmp);
