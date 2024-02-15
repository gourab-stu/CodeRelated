def search(lst, target):
    for index, element in enumerate(lst):
        if element == target:
            return index
    return -1

str = input("Enter elements of the list separated by commas: ")
list = str.split(',')
list = [int(element) for element in list]

value = int(input("Enter value to search: "))

result = search(list, value)

if result != -1:
    print(f"Element {value} found at index {result}.")
else:
    print(f"Element {value} not found in the list.")
