#calculator program

def add(a,b):
    print(a+b)

def sub(a,b):
    print(a-b)

def multi(a,b):
    print(a*b)

def div(a,b):
    z=int(input("to get value in float select 1 else 2"))
    if(z==1):
        print(a/b)
    elif(z==2):
        print(a//b)
    else:
        print("invalid")

def mod(a,b):
    print(a%b)


#main
print("BASIC CALCULATOR")
print("#"*7)
c="yes"
while c.lower() =="yes":
    print("MENU \n1.)TO ADD \n2.)TO SUBTRACT \n3.)TO MULTIPY \n4.)TO DIVIDE \n5.)MODULO ")
    d=int(input("enter the option"))
    print("enter the values:")
    a=int(input("enter value for a:"))
    b=int(input("enter value for b:"))
    if(d==1):
        add(a,b)
    elif(d==2):
        sub(a,b)
    elif(d==3):
        multi(a,b)
    elif(d==4):
        div(a,b)
    elif(d==5):
        mod(a,b)
    else:
        print("invalid")
    z=input("do you want to continue")
    if(z=="no"):
        print("BYE")
        break


