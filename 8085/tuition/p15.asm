   LXI H, 3000H 
   MOV C, M 
   XRA A 
N: INX H 
   ADD M 
   DCR C 
   JNZ N 
   INX H 
   MOV M, A 
   HLT 