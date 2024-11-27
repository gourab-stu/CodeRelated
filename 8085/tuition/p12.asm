    MVI A, 23H 
    MVI D, 00H 
    RAR 
    JC L1 
    INR D 
L1: RAR 
    JC L2 
    INR D 
L2: RAR 
    JC L3 
    INR D 
L3: RAR 
    JC L4 
    INR D 
L4: HLT 