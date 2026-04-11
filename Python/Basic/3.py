# ax^2 + bx + c = 0
#user -> a, b, c;
# x = ?, x = (-2 + sqrt())
#sqrt(-1) = i; sqrt(-4) = 2i; 

a = int(input("Enter a -> "))
b = int(input("Enter b -> "))
c = int(input("Enter c -> "))

d = b**2 - 4*a*c
#if d >= 0
mark = False
if(d < 0) : 
    d = -d
    mark = True

# if mark true, -> d negative tha;
#else mark = false -> d positive tha

first = (-b)/(2*a)
second = d**0.5/(2*a); 

if(mark == True) : 
    print("x1 = ", first ,"+",second,"i")
    print("x2 = ", first ,"-",second,"i")
else : 
    print("x1 = ", first+second)
    print("x2 = ", first-second)

