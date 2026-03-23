n = 11
m = 11
for i in range(0,n) :
    for j in range(0,n) :
        if( i == 0 or j == 0 or i == n-1 or j == m-1 or i==j or n-1-i == j or j == (m-1)/2 or i == (n-1)/2) : print("* ",end="")
        else : print("  ",end ="")
    print("")    