   MVI B, 33H 
   MOV A, B 
   ANI 0FH 
   MOV C, A 
   MOV A, B 
   ANI F0H 
   RRC 
   RRC 
   RRC 
   RRC 
   MVI D, 00H 
   CMP C 
   JNZ L 
   INR D 
L: HLT 