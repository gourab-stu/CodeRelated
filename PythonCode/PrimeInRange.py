lower = int(input("Enter the lower value: "))
upper = int(input("Enter the upper value: "))

for i in range(lower, upper):
    for j in range(2, i):
        if(i % j == 0):
            break
    if (j == i - 1):
        print(i)