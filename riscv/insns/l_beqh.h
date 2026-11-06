require_extension(EXT_ZL);
// Search the naturally aligned halfwords of rs1 for the low bits of rs2.
bool found = false;
for (int i = 0; i < xlen; i += 16)
  found |= ((RS1 >> i ^ RS2) & 0xffff) == 0;
if (found)
  set_pc(pc + insn.zl_b_imm());
