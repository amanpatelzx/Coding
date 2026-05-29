f = open(r"Python\Basic\myfile.txt","r")
lines = []
while True:
    line = f.readline()
    if not line:
        break
    else:
        lines.append(line.strip())

print(lines)