require_extension(EXT_ZL);
require_zl(xlen == 64);
MMU.store<uint64_t>(RS1 + insn.zl_s_imm(), RS2);
