def is_armstrong_number(number):
    num_str = str(number)
    num_digits = len(num_str)
    sum_of_digits = sum(int(digit) ** num_digits for digit in num_str)
    return sum_of_digits == number


def find_armstrong_numbers(start, end):
    armstrong_numbers = [num for num in range(
        start, end + 1) if is_armstrong_number(num)]
    return armstrong_numbers

start_range = int(input("Enter the start of the range: "))
end_range = int(input("Enter the end of the range: "))

result = find_armstrong_numbers(start_range, end_range)

if result:
    print(f"Armstrong numbers between {start_range} and {end_range}: {result}")
else:
    print(f"No Armstrong numbers found in the specified range.")
