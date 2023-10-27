a = int(input("Enter the first number: "))
b = int(input("Enter the second number: "))

print("1. Summation\n2. Subtraction\n3. Multiplication\n4. Division\n")
choice = int(input("Enter choice: "))

if choice == 1:
    result = a + b
    print(a, " + ", b, " = ", result)
elif choice == 2:
    result = a - b
    print(a, " - ", b, " = ", result)
elif choice == 3:
    result = a * b
    print(a, " * ", b, " = ", result)
elif choice == 4:
    result = a // b
    print(a, " / ", b, " = ", result)
else:
    print("Invalid input")
