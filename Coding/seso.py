# def ls(arr):
#     for i in range(0, len(arr)):
#         if arr[i] == 47:
#             print(i)
#             return
#     print("bhag")


# def bs(arr, s, e):
#     while s <= e:
#         mid = s + e
#         mid = int(mid / 2)
#         if arr[mid] == 48:
#             print(mid)
#             return
#         elif arr[mid] > 48:
#             e = mid - 1
#         else:
#             s = mid + 1
#     print("Bhag")


# def bis(arr):
#     for i in range(0, len(arr) - 1):
#         for j in range(0, len(arr) - i - 1):
#             if arr[j] > arr[j + 1]:
#                 temp = arr[j]
#                 arr[j] = arr[j + 1]
#                 arr[j + 1] = temp


# def ss(arr):
#     for i in range(0, len(arr) - 1):
#         min = arr[i]
#         mini = i
#         for j in range(i, len(arr)):
#             if min > arr[j]:
#                 min = arr[j]
#                 mini = j
#         temp = arr[i]
#         arr[i] = arr[mini]
#         arr[mini] = temp


def iss(arr):
    for i in range(1, len(arr)):
        t = arr[i]
        j = i-1
        while j>=0:
            if arr[j] > arr[j + 1]:
                temp = arr[j]
                arr[j] = arr[j + 1]
                arr[j + 1] = temp
            else:
                break
            j=j-1
        arr[j + 1] = t
    return


from array import array

arr = array("i", [13, 2, 3, 4])
iss(arr)

for i in range(0, len(arr)):
    print(arr[i])
