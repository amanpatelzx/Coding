print("Enter the a ->", end = " ")
a = int(input())
print("Enter the op ->", end = " ")
op = input()
print("Enter the b ->", end = " ")
b = int(input())
if(op == '+') : 
    print(a+b)
elif(op == '-') : 
    print(a-b)
elif(op == '*') : 
    print(a*b)
elif(op == '/') : 
    if(b == 0) : print("Not_Defined")
    else : print(a/b)
else : print("Invalid Operator")