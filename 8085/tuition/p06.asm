      MVI C, 05H    // [C] <- 05H
      MVI B, 04H    // [B] <- 04H
      XRA A         // RESET ACCUMULATOR
LOOP: ADD B         // [A] <- [A] + [B]
      DCR C         // [C] <- [C] - 1
      JNZ LOOP      // JUMP TO LOOP IF ZERO FLAG = 0
      MOV C, A      // [C] <- [A]
      HLT