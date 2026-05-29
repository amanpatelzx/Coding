n = (int)(input("Enter the NO->"))
print(0)
print(1)
f = 0
s = 1
for i in range(0,n,1) :
    sum = f+s
    f = s
    s = sum
    print(sum)
