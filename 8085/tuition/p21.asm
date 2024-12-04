    MVI B, 33H 
    MVI C, 44H 
    MOV A, C 
    CMP B 
    JZ L0 
    MVI D, 00H 
    JMP L1 
L0: MVI D, 01H 
L1: HLT 