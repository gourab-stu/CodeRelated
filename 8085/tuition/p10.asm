    MVI A, 23H    // [A] <- 23H (0010 0011), [Cy] = X
    MVI D, 00H    // [D] <- 00H (0000 0000), [Cy] = X
    RAR           // [A] <- (X001 0111), [Cy] = 1
    JNC L1        // JUMP TO L1 IF [Cy] = 0
    INR D         // [D] <- (0000 0001)
L1: RAR           // [A] <- (1X00 1000), [Cy] = 1
    JNC L2        // JUMP TO L2 IF [Cy] = 0
    INR D         // [D] <- (0000 0010)
L2: RAR           // [A] <- (11X0 0100), [Cy] = 0
    JNC L3        // JUMP TO L3 IF [Cy] = 0
    INR D
L3: RAR           // [A] <- (011X 0010), [Cy] = 0
    JNC L4        // JUMP TO L4 IF [Cy] = 0
    INR D
L4: HLT
