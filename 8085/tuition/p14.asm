   MVI A, 23H 
   MVI D, 00H 
   RAR 
   RAR 
   RAR 
   RAR 
   JNC N 
   INR D 
N: HLT 