    MVI A, 23H 
    MVI D, 00H 
    RAR 
    JNC L1 
    INR D 
L1: RAR 
    JNC L2 
    INR D 
L2: RAR 
    JNC L3 
    INR D 
L3: RAR 
    JNC L4 
    INR D 
L4: RAR 
    JNC L5 
    INR D 
L5: RAR 
    JNC L6 
    INR D 
L6: RAR 
    JNC L7 
    INR D 
L7: RAR 
    JNC L8 
    INR D 
L8: HLT