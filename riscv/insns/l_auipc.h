require_extension(EXT_ZL);
require_zl(xlen == 64);
// Despite its name, L.AUIPC does not read the pc.
WRITE_RD(RD + (reg_t(insn.zl_u_imm()) << 32));
