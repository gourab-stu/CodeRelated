num = int(input("Enter the number: "))

# calculating number of digits
s = 0
n = num
while n > 0:
    n = n // 10
    s = s + 1

# checking if armstrong
n = num
sum = 0
while n > 0:
    r = n % 10
    i = 1
    power = 1
    # calulating the power
    while i <= s:
        power = power * r
        i = i + 1
    sum = sum + power
    n = n // 10

if sum == num:
    print(num, " is an armstrong number")
else:
    print(num, " is not an armstrong number")
