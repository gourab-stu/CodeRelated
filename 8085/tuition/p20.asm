    MVI B, 33H 
    MVI C, 44H 
    MOV A, C 
    CMP B 
    JNC L0 
    MOV D, B 
    JMP L1 
L0: MOV D, A 
L1: HLT 