# def a():
#     sum = 0
#     for i in range(0, 10):
#         for j in range(0, 10):
#             # print("*",end=" ")
#             # print(j,end=" ")
#             print(sum, end=" ")
#             sum += 1
#             # print(i,end=" ")
#             # print(10-j,end=" ")
#         print()


# def b():
#     for i in range(0, 10):
#         for j in range(0, i):
#             # print("*",end="")
#             print(i - j, end="")
#         print()


# def c():
#     num = 1
#     for i in range(0, 10):
#         for j in range(0, 10 - i):
#             print(end=" ")
#         for j in range(0, i):
#             # print("*",end="")
#             print(num, end=" ")
#             num += 1
#         print()


# def d():
#     ins = 0
#     for i in range(0, 10):
#         for j in range(0, 10 - i):
#             print(ins, end=" ")
#             ins += 1
#             # print("*",end=" ")
#         print()


# def e():
#     for i in range(0, 10):
#         for j in range(0, i):
#             print(end=" ")
#         for j in range(0, 10 - i):
#             print("*", end="")
#         print()


# def f():
#     for i in range(0, 5):
#         for j in range(0, i):
#             print(str(int("e") - i + j), end="")
#         print()


def g():
    for i in range(0, 20):
        for j in range(0, 20 - i):
            print(end=" ")
        for j in range(0, 2 * i + 1):
            print("*", end="")
        print()
    for j in range(0, 20):
        for i in range(0, j + 1):
            print(end=" ")
        for i in range(0, 2 * (20 - j) - 1):
            print("*", end="")
        print()


g();
# n = 10
# for i in range(0, 10):
#     for j in range(0, n - i):
#         print(end=" ")
#     for j in range(0, i + 1):
#         print(i + j + 1, end="")
#     for j in range(0, 2 * i - 1):
#         if 2 * i - j <= i:
#             break
#         print(2 * i - j, end="")
#     print()
