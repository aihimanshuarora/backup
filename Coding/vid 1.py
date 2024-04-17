print("hello world")
a = 4
b = 3
print(a + b)
p = 100
r = 10
t = 10
print((p * r * t) / 100)
cp = 1300
sp = 200
print(sp - cp)
print(((sp - cp) / cp) * 100)
num = 241
if num % 2 == 0:
    print("Even")
else:
    print("odd")

if sp > cp:
    print(sp, "is greater")

else:
    print(cp, "is greater")
if sp - cp < 100 and sp - cp > 0:
    print(0.08 * (sp - cp))
elif sp - cp > 1000:
    print(0.20 * (sp - cp))
else:
    print("No Tax")
i = 10
sum = 0
while i:
    i = i - 1
    sum = sum + i
    print(i + 1)
print(sum)
print()
for i in range(0, 11):
    ok = 1
    for j in range(2, i):
        if i % j == 0:
            ok = 0
    if ok:
        print(i)
fib = 10
a = 0
b = 1
sum = a + b
for i in range(0, 8):
    sum = a + b
    a = b
    b = sum
    print(sum)
