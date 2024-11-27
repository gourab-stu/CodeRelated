    LXI H, 3000H 
    MOV C, M 
    XRA A 
    MOV B, 00H 
L1: INX H 
    ADD M 
    JNC L2 
    INR B 
L2: DCR C 
    JNZ L1 
    INX H 
    MOV M, B 
    INX H 
    MOV M, A 
    HLT 