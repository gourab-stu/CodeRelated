lower = int(input("Enter the lower value: "))
upper = int(input("Enter the upper value: "))
j = 0
print("Prime numbers between", lower, "and", upper, "are")
for i in range(lower, upper):
    for j in range(2, i):
        if(i % j == 0):
            break
    if (j == i - 1):
        print(i)