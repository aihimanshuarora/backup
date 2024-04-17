# # def fact(n):
# #     if n<2:
# #         return 1
# #     return n*fact(n-1)
# # print(fact(5))


# # def fib(i):
# #     if i == 0 or i == 1:
# #         return i
# #     return fib(i - 1) + fib(i - 2)


# # print(fib(3))


# # isSorted
# def isSorted(arr):
#     if len(arr) < 2:
#         return 1
#     elif arr[0] > arr[1]:
#         return False
#     return isSorted(arr[1:])


# from array import array

# arr = array("i", [1, 2, 23, 4])
# print(isSorted(arr))


# # length of string
# def lenss(s):
#     if not len(s):
#         return 0
#     return 1 + lenss(s[1:])


# print(lenss("himanshu"))


def r(s):
    if s[0]=='x':
        for i in range(0,len(s)):
            s[i]=s[i+1];
    r(s[1:])
s="himanxxhushuxx"
r(s)
print(s)
