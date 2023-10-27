hour = int(input("Enter hour: "))
minute = int(input("Enter minute: "))
second = int(input("Enter second: "))

if minute > 60:
    print("Minute cannot be greater than 60")
elif second > 60:
    print("Second cannot be greater than 60")
else:
    result = hour * 60 * 60 + minute * 60 + second
    print("Total ", result, " second")
