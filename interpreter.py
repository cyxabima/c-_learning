ls = input().split()


x = int(ls[0])
y = ls[1]
z = int(ls[2])

if y == "+":
    print(x + z)
elif z == "-":
    print(x - z)
elif y == "*":
    print(x * z)
elif y == "/":
    print(x / z)


