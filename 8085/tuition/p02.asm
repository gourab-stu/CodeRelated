MVI B, 01H    // [B] <- 01H
MOV A, B      // [A] <- [B], [A] <- 01H (0000 0001)
CMA           // [A] <- [A]', [A] <- FEH (1111 1110)
INR A         // [A] <- [A] + 1, [A] <- FFH (1111 1111)
MOV C, A      // [C] <- [A], [C] <- FFH
HLT