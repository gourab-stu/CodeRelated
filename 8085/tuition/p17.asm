    LXI H, 30FFH 
    INR L 
    JNC L0 
    INR H 
L0: HLT 

# alternative method (without any conditional instruction)

LXI H, 30FFH 
MOV A, L 
INR A 
ADC H 
HLT 