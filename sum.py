#program to add and subtract two numbers
x = int(input("enter a value for x"))
y = int(input("enter value for y"))
x+=y
print(x)
print("\n to subtract two numbers")
a = int(input("enter value for a"))
b = int(input("enter value for b"))
if(a > b):
    a-=b
    print(a)
    break
else:
b-=a
print(b)
