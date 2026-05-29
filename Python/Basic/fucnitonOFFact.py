n = 10

def fact(i):
    f = 1
    for j in range(1,i+1,1):
        f *= j
    return f

print(fact(5))