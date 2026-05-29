n = (int)(input("enter the n->"))

def fibo(i):
    if i == 1 or i == 2:
        return 1
    else:
        return fibo(i-1)+fibo(i-2)\

print(0," ",end ="")
for i in range(1,n+1,1):
    print(fibo(i)," " ,end="")