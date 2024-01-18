string = input("Enter a string: ")
word = input("Enter a word: ")
count = string.lower().count(word.lower())
print(f"The word '{word}' occurs {count} times in the string.")
