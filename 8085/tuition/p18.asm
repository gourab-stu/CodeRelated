    LXI H, 3000H 
    MOV C, M 
    MOV B, 00H 
L0: INX H 
    MOV A, M 
    RAR 
    JC L1 
    INR B 
L1: DCR C 
    JNZ L0 
    MOV A, B 
    STA 4000H 
    HLT 