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
L4: RAR 
    JC L5 
    INR D 
L5: RAR 
    JC L6 
    INR D 
L6: RAR 
    JC L7 
    INR D 
L7: RAR 
    JC L8 
    INR D 
L8: HLT