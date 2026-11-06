require_extension(EXT_ZL);
MMU.store<uint32_t>(RS1 + insn.zl_s_imm(), RS2);
