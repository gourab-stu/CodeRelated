num = int(input("Enter a number: "))

if num == 1:
    print(num, " is neither even nor odd")
elif num % 2 == 0:
    print(num, " is an even number")
else:
    print(num, " is an odd number")