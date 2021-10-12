# Prajwal Patil, ISE, 7th sem
'''1. Design and develop a program in a language of your choice to solve the triangle problem defined
as follows: Accept three integers which are supposed to be the three sides of a triangle and
determine if the three values represent an equilateral triangle, isosceles triangle, scalene triangle
or they do not form a triangle at all. Assume that the upper limit for the size of any side is 10.
Derive test cases for your program based on **boundary value analysis**, execute the test cases and
discuss the results.'''

# taking the input
a=int(input("Enter the first side of the triangle :"))
b=int(input("Enter the second side of the triangle :"))
c=int(input("Enter the third side of the triangle :"))

# cheking for input out of range
if (a<1 or a>10) and (b<1 or b>10) and (c<1 or c>10):
    print("Sides a,b and c are of out of range")
elif (a<1 or a>10)and(b<1 or b>10):
    print("Sides a and b are out of range")
elif (b<1 or b>10)and(c<1 or c>10):
    print("Sides b and c are out of range")
elif (a<1 or a>10)and(c<1 or c>10):
    print("Sides a and c are out of range")
elif a<1 or a>10:
    print("side a is out of range.")
elif b<1 or b>10:
    print("side b is out of range.")
elif c<1 or c>10:
    print("side c is out of range.")

# checking for type of the triangle
else:
    if (a<b+c)and(b<a+c)and(c<a+b):
        print("Triangle is formed")
        if a==b and b==c and c==a:
            print("It is a Equilateral triangle..")
        elif a==b or b==c or c==a:
            print("It is a Isoceles triangle..")
        else:
            print("It is a Scalene triangle...")
    else:
        print("Not a triangle..")