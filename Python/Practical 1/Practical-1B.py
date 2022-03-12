#find odd and even number
print("\n#Odd and even number");
num = int(input("Enter a number: "))
if(num%2==0):
    print("%d is an Even Number" %num)
else:
    print("%d is an Odd Number" %num)

#greatest common divisor
print("\n#Greatest common divisor");
num1 = int(input("Enter Number1: "))
num2 = int(input("Enter Number2: "))
for i in range(1,num1+1):
    if(num1%i==0 and num2%i==0):
        gcd = i
print("GCD: %d" %gcd)

#cube roots
print("\n#Cube Roots");
numCubeRoots = int(input("Enter a Number: "))
cubeRoot = numCubeRoots ** (1./3.)
print("The cube root of %d is: %d"%(numCubeRoots, cubeRoot))

#Square roots
print("\n#Sqaure Roots");
numSqRoots = int(input("Enter a Number: "))
SqRoot = numSqRoots ** (1./2.)
print("The cube root of %d is: %d"%(numSqRoots, SqRoot))

#Least common divisor
from pickle import TRUE
print("\n#Least Comman Divisor");
num1 = int(input("Enter a Number 1: "))
num2 = int(input("Enter a Number 2: "))
if(num1>num2):
    greater = num1;
else:
    greater = num2;

while(TRUE):
    if((greater%num1 == 0) and (greater%num2 == 0)):
        lcm = greater
        break
    greater+=1

print("LCM of Num1: %d, Num2: %d is %s"%(num1,num2,lcm));
