#Write Python program to implement byte array, range, set and different STRING Functions (len, count, lower, sorted etc

#capitalize()
print("#Capitalize Function")
txt = "hello, and welcome to my world."
print("Actual String: ", txt)
x = txt.capitalize()
print("After Capitalize() Function: ", x)

#casefold()
print("\n#Casefold Function")
txt = "Hello, And Welcome To My World!"
print("Actual String: ", txt)
x = txt.casefold()
print("After Casefold() Function", x)

#Print the word "Mumbai",
#taking up the space of 20 characters,
#with "Mumbai" in the middle:
print("\n#Center Function Operation")
txt = "Mumbai"
x = txt.center(20)
print("Center Function Operation: ",x)

#Return the number of times
#the value "apple" appears in the string:
print("\n#Count Function Operation")
txt = "I love apples, apples are my favorite fruit"
x = txt.count("app")
print("Count Function Operatoin: count= ",x)

#Check if the string ends with a punctuation sign (.):
print("\n#Endswith Function Operation")
txt = "Hello, welcome to my world."
x = txt.endswith(".")
print("Endswith Function Operation",x)

#Join all items in a tuple into a string, using a hash character as separator:
print("\n#Join Function Operation")
myTuple = ("John", "Peter", "Donald")
x = "#".join(myTuple)
print("Join :",x)

#Return a 20 characters long, left justified version of the word "Nile":
print("\n#Ljust Function Operation")
txt = "Nile"
x = txt.ljust(20)
print(x, "is a river.")

#Lower case the string:
print("\n#Lower Function Operation")
txt = "Hello my FRIENDS"
x = txt.lower()
print("Lowercase :",x)

#Remove spaces to the left of the string:
print("\n#Lstrip Function Operation")
txt = " Mango "
x = txt.lstrip()
print("of all fruits", x, "is my favorite")

#Remove spaces to the right of the string:
print("\n#Rstrip Function Operation")
txt = " Muskmelon "
x = txt.rstrip()
print("of all fruits", x, "is my favorite")