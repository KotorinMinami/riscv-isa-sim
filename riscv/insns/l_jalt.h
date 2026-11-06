require_extension(EXT_ZL);
// Call through a table of XLEN-bit pointers at pc; the offset and rs1 count
// table entries. The entry is read like a data load.
CHECK_RD();
reg_t entry = pc + (insn.zl_jt_imm() + RS1) * (xlen / 8);
reg_t target = xlen == 32 ? MMU.load<uint32_t>(entry) : MMU.load<uint64_t>(entry);
reg_t tmp = npc;
set_pc(target & ~reg_t(1));
WRITE_RD(tmp);

set_elp_expected();
