f1 = open(r"C:\Users\a2403\OneDrive\Desktop\Coding\Python\Basic\myfile.txt","r+")
f2 = open(r"C:\Users\a2403\OneDrive\Desktop\Coding\Python\Basic\myfile1.txt","w")

s = f1.readline()
l = f1.readlines()
f2.write(s)
f2.write(l[1])
