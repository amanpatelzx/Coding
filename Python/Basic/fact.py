n = (int)(input("Enter the no -> "))
l = []
for i in range(1, (int)(n**0.5), 1) : 
    if n % i == 0 :
        l.append(i)
        if i*i != n :
            l.append(n//i)

l.sort()
# for ele in l :
#     print(ele)
l.reverse()
for i in range(0,len(l),1):
    print(l[i])