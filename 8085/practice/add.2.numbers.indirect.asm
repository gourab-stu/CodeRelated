MVI C, 00H ; [C] <- 00
LXI H, C000H ; [L] <- 00, [H] <- F0
MOV A, M ; [A] <- [[HL]]
INX H ; [L] <- 01, [H] <- F0
ADD M ; [A] <- [A] + [[HL]]
JNC NOCARRY ; jump if no carry to NOCARRY
INR C ; [C] <- [C] + 1
NOCARRY: INX H ; [L] <- 02, [H] <- F0
MOV M, A ; [[HL]] <- [A]
INX H ; [L] <- 03, [H] <- F0
MOV M, C ; [[HL]] <- [C]
HLT