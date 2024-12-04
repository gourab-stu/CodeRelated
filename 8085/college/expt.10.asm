Line No.  Memory Address  Machine Codes  Source
-------------------------------------------------------------
1         F000            21 00 F1       LXI H, F100H
2         F003            4E             MOV C, M
3         F004            23             INX H
4         F005            7E             MOV A, M
5         F006            0D             DCR C
6         F007            23             LOOP: INX H
7         F008            BE             CMP M
8         F009            D2 0D F0       JNC NEXT
9         F00C            7E             MOV A, M
10        F00D            0D             NEXT: DCR C
11        F00E            C2 07 F0       JNZ LOOP
12        F011            23             INX H
13        F012            77             MOV M, A
14        F013            76             HLT