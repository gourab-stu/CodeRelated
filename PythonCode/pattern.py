line = int(input("Enter the number of lines: "))

for i in range(line):
    for j in range(i + 1):
        print("*", end="")
    print("")
