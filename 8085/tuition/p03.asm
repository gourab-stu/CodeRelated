MVI A, 96H    // [A] <- 94H
MVI B, 0AH    // [B] <- 0AH
MOV C, A      // [C] <- [A], [C] <- 94H (1001 0110)
MOV A, B      // [A] <- [B], [A] <- 0AH (0000 1010)
CMA           // [A] <- [A]', [A] <- F5H (1111 0101)
INR A         // [A] <- [A] + 1, [A] <- F6H (1111 0110)
ADD C         // [A] <- [A] + [C], [A] <- F6H + 94H, [A] <- 8AH
MOV D, A      // [D] <- [A], [D] <- 8AH
HLT