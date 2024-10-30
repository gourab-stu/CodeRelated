MVI A, 23H    // [A] <- 23H (0010 0011)
STC           // [Cy] = 1
CMC           // [Cy] = 0
RAR           // [A] <- 11H (0001 0001) [Cy] <- 1
STC           // [Cy] = 1
CMC           // [Cy] = 0
RAR           // [A] <- 08H (0000 1000) [Cy] <- 1
STC           // [Cy] = 1
CMC           // [Cy] = 0
RAR           // [A] <- 04H (0000 0100) [Cy] <- 0
STC           // [Cy] = 1
CMC           // [Cy] = 0
RAR           // [A] <- 02H (0000 0010) [Cy] <- 0
MOV B, A      // [B] <- [A], [B] <- 02H
STC           // [Cy] = 1
CMC           // [Cy] = 0
MVI A, 23H    // [A] <- 23H (0010 0011)
RAL           // [A] <- 46H (0100 0110) [Cy] <- 0
STC           // [Cy] = 1
CMC           // [Cy] = 0
RAL           // [A] <- 8CH (1000 1100) [Cy] <- 0
STC           // [Cy] = 1
CMC           // [Cy] = 0
RAL           // [A] <- 18H (0001 1000) [Cy] <- 1
STC           // [Cy] = 1
CMC           // [Cy] = 0
RAL           // [A] <- 30H (0011 0000) [Cy] <- 0
RRC           // [A] <- 18H (0001 1000) [Cy] <- 0
RRC           // [A] <- 0CH (0000 1100) [Cy] <- 0
RRC           // [A] <- 06H (0000 0110) [Cy] <- 0
RRC           // [A] <- 03H (0000 0011) [Cy] <- 0
MOV C, A      // [C] <- [A], [C] <- 03H
HLT