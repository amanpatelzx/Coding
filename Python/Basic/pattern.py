n = (int)(input("Enter the no-> "))
for i in range(0,(n+1)//2,1):
    for j in range(0, (n-1)//2 - i,1):
        print("  ", end = "")
    for j in range(0,2*i+1,1):
        print("* ", end = "")
    print("")