num = int(input("Enter the number: "))

i = 1
count = 0
while i <= num:
    if num % i == 0:
        count = count + 1
    i = i + 1

if count == 2:
    print(num, " is a prime number")
else:
    print(num, " is not a prime number")
