#int----whole number----2,300,4000
#float----number with decimal point------2.3, 3.14, 400.5
#str-------ordered sequence of characters ---- "hello", "2000", "@#%"
#list----ordered sequence of objects------[20, "hello" , 20.46]
#tuple-----ordered immmediate sequence of object---(20, "hello", 200.3)
#set------unordered collection of unique object ----- {"a", "b"}
#dict-------unordered key:value pair--------{ "key" : "value"} ---{ "Rollno" :10}
#bool----logical value indicating True or False
a= 20 #integer datatype
b=3.456 #float datatype
e= 3+5j #complex datatype
c = "Hello " #string datatype
list1 = [10,20,"abc", "@%&"] #list
tup1 = (10,20,'a','@#$') #tuple
set1={10,20,30,40,50} #set
d = {'rollno': 10, 'Name': 'ABC'} #dictionary

# Python provides the type( ) function to know the data type of the variable.
print("Type of ",a,"is: ",type(a))
print("Type of ",b,"is: ",type(b))
print("Type of ",c,"is: ",type(c))
print("Type of ",list1,"is: ",type(list1))
print("Type of ",tup1,"is: ",type(tup1))
print("Type of ",set1,"is: ",type(set1))
print("Type of ",d,"is: ",type(d))
print("Type of ",e,"is: ",type(e))
print("\n")
#--------------print different types of values
print("Integer number is: " , a)
print("Float number is: " ,b)
print ("Addition of int and float number is: ", a+b) #addition of number values
print("String value is: " , c)
print("Complex number is: ", e)
print("Set of values: ", set1)
print("list of values: ", tup1)
print("tuple of values: ", list1)
print("\n")

#---TYPE CASTING------ conversion of data types of values using functions
print ("Int value of: ",b," is: ",int(b)) # float value 3.456 will convert into whole number i.e. 3
print("Float value of: ",a,"is: ",float(a)) # interger value will convert into float
print("String value of: ",a,"is: ",str(a)) # integer value will convert into string
print("String value of: ",b,"is: ",str(b)) # float value will convert into string
print("Complex value of: ",a,"is: ",complex(a)) # integer value will convert into complex
print("Complex value of: ",b,"is: ",complex(b)) # float value will convert into complex
#-print(int(c))--- string cann't convert into integer and float--
print("\n")

# we can't add number and string. both are different values
# In python there are built in functions and operators to perform operations in the string.
# The concatenation operator (+) and repetition operator (*) works with the string
#------------------OPERATIONS --------------------------
d= " World "
print ("Concatenation of ",c," and ",d,"is: ",c + d) #concatenation +
print ("Repeat ",c,"10 times: \n",10 * c)# repetation * --string will display 100 times
print("\n")

# Displaying elements or object by passing index
print(c[0]) # c is a string here c="Hello"
print (list1[3])
print (tup1[2])
print(tup1[-1])
print("\n")

#SLICING: slice operator represent [ ] brackets to retrieve pieces of a string.
print(c[1:4])
print(c[1:])
print(list1[1:3])
print(tup1[1:3])
print("\n")

# Operations on SET
set1={10,10,20,20,30,40,50} #set
print(set1)
# set function----used to create set
s= set("hello")
print(s)
#update()---add elements to a set.
s.update([80,80,90])
print(s)
#remove()---remove particular element
s.remove(80)
print(s)
##FROZENSET ---The elements of frozenset cannot be modified
fs = frozenset(set1)
print(fs)
fs.update(100)

# Opearations on list
list1= [10, "abc", "@#$", 400, 500]
#creating a list using range () function
#range(start, stop, stepsize)
lst= list(range(10, 60, 10))
print(lst)
#finding length of the list/ set using len() function
print("Length of the list ", len(list1))
# append a new element to list
list1.append(9)
print(list1)
#deleting an element from the list
del list1[1] #removed "abc" element from the list
print(list1)
#also you can use remove() function
list1.remove(400)
print(list1)
#reverse the order of the elements of a list
list1.reverse()
print(list1)
#concatation of two list
print(lst+list1)
#repetation of a list
print(list1 * 2)
#checking membership of element in a list
i=10
print(i in list1) #output will in boolean(true or false)
