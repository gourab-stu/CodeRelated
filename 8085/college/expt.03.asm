      MVI C, 00H 
      LXI H, F100H 
      MOV A, M 
      INX H 
      ADD M 
      JNC LOOP 
      INR C 
LOOP: INX H 
      MOV M, A 
      INX H 
      MOV M, C 
      HLT 