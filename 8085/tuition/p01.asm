MVI B, 0AH    // [B] <- 0AH
MVI C, 14H    // [C] <- 14H
MOV A, B      // [A] <- [B], [A] <- 0AH
ADD C         // [A] <- [A] + [C], [A] <- 0AH + 14H, [A] <- 1EH
MOV D, A      // [D] <- [A], [D] <- 1EH
HLT