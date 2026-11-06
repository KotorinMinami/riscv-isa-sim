require_extension(EXT_ZL);
// Search the naturally aligned bytes of rs1 for the low bits of rs2.
bool found = false;
for (int i = 0; i < xlen; i += 8)
  found |= ((RS1 >> i ^ RS2) & 0xff) == 0;
if (found)
  set_pc(pc + insn.zl_b_imm());
