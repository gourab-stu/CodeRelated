   MVI A, 23H    // [A] <- 23H (0010 0011), [Cy] = X
   MVI C, 00H    // [C] <- 00H (0000 0000)
   RAR           // [A] <- (X001 0001), [Cy] = 1
   JC N          // JUMP TO N IF [Cy] = 1
   INR C
N: HLT           // if [C] = 00H, then odd
                 // if [C] = 01H, then even
