Line No.  Memory Address  Machine Codes  Source
-------------------------------------------------------------
1         F000             21 00 F1       LXI H, F100H
2         F003             7E             MOV A, M
3         F004             23             INX H
4         F005             BE             CMP M
5         F006             D2 0B F0       JNC NEXT
6         F009             23             INX H
7         F00A             77             MOV M, A
8         F00B             7E             NEXT: MOV A, M
9         F00C             23             INX H
10        F00D             77             MOV M, A
11        F00E             76             HLT