Line No.  Memory Address  Machine Codes  Source
-------------------------------------------------------------
1         F000            21 00 F1       LXI H, F100H
2         F003            7E             MOV A, M
3         F004            2F             CMA
4         F005            23             INX H
5         F006            77             MOV M, A
6         F007            3C             INR A
7         F008            23             INX H
8         F009            77             MOV M, A
9         F00A            76             HLT