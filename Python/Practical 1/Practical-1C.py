#Write Python program to implement byte array, range, set and different STRING Functions (len, count, lower, sorted etc
#capitalize()
txt = "hello, and welcome to my world."
print("Actual String: ", txt)
x = txt.capitalize()
print("capitalize()")
print (x)
#casefold()
txt = "Hello, And Welcome To My World!"
print("Actual String: ", txt)
x = txt.casefold()
print("\ncasefold function o/p")
print(x)
#Print the word "Terna",
#taking up the space of 20 characters,
#with "Terna" in the middle:
txt = "Terna"
x = txt.center(20)
print("\nCenter function o/p")
print(x)
#Return the number of times
#the value "apple" appears in the string:
txt = "I love apples, apples are my favorite fruit"
x = txt.count("app")
print("\nCount function o/p")
print(x)
#Check if the string ends with a punctuation sign (.):
txt = "Hello, welcome to my world."
x = txt.endswith(".")
print("\nEndswith function o/p")
print(x)
#Join all items in a tuple into a string, using a hash character as separator:
myTuple = ("John", "Peter", "Donald")
x = "#".join(myTuple)
print("Join :",x)
#Return a 20 characters long, left justified version of the word "Terna":
txt = "Terna"
x = txt.ljust(20)
print(x, "is a river.")
#Lower case the string:
txt = "Hello my FRIENDS"
x = txt.lower()
print(x)
#Remove spaces to the left of the string:
txt = " apple "
x = txt.lstrip()
print("of all fruits", x, "is my favorite")
#Remove spaces to the right of the string:
txt = " apple "
x = txt.rstrip()
print("of all fruits", x, "is my favorite")