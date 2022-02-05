#find odd and even number
num = int(input("Enter a number: "))
if(num%2==0):
    print("%d is an Even Number" %num)
else:
    print("%d is an Odd Number" %num)

#greatest common divisor
num1 = int(input("Enter Number1: "))
num2 = int(input("Enter Number2: "))
for i in range(1,num1+1):
    if(num1%i==0 and num2%i==0):
        gcd = i
print("GCD: %d" %gcd)
#cube roots
numCubeRoots = int(input("Enter a Number: "))
cubeRoot = numCubeRoots ** (1./3.)
print("The cube root of %d is: %d"%numCubeRoots %cubeRoot)
#Square roots
#Least common divisor
#quadratic roots