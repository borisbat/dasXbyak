def test_jit_levels ( blk:block )
    for opt_level in range(JIT_MAX_POSSIBLE_OPT_LEVEL+1)
        print("--------------------------\n")
        print("JIT_OPTLEVEL = {opt_level}\n")
        print("--------------------------\n")
        JIT_VERBOSE = false
        JIT_DISASM = false
        JIT_MAX_OPT_LEVEL = opt_level
        all`things`jit()
        invoke(blk)
