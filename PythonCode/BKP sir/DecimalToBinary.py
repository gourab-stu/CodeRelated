dec = int(input("Enter the decimal number: "))

temp = dec
bin = 0
i = 1
while temp > 0:
    r = temp % 2
    bin = bin + i * r
    temp = temp // 2
    i = i * 10

print("The binary equivalent is ", bin)