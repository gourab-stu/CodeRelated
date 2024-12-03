     LXI H, F100H 
     MOV B, M 
     MVI C, 00H        // FOR +ve 
     MVI D, 00H        // FOR -ve 
NXT: INX H 
     MOV A, M 
     RAL 
     JC NEG 
     INR C 
     JMP POS
NEG: INR D 
POS: DCR B 
     JNZ NXT
     INX H 
     MOV M, C 
     INX H 
     MOV M, D 
     HLT 