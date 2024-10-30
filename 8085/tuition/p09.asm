   MVI A, 23H    // [A] <- 23H (0010 0011), [Cy] = X
   MVI D, 00H    // [D] <- 00H
   RAL           // [A] <- (0100 011X), [Cy] = 0
   JNC L         // JUMP TO L IF [Cy] = 0
   INR D
L: HLT           // if [D] = 00H, then positive
                 // if [D] = 01H, then negative
