      MVI B, 64H    // [B] <- 64H
      XRA A         // RESET ACCUMULATOR
LOOP: ADD B         // [A] <- [A] + [B]
      DCR B         // [B] <- [B] - 1
      JNZ LOOP      // JUMP TO LOOP IF ZERO FLAG = 0
      MOV C, A      // [C] <- [A]
      HLT