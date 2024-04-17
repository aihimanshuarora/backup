def one():
    for i in range(0, 4):
        for j in range(0, 4):
            print("*", end="")
        print()


def two():
    for i in range(0, 4):
        for j in range(0, 4):
            if j not in (0, 3) and i not in (0, 3):
                print(end=" ")
            else:
                print("*", end="")
        print()


def three():
    for i in range(0, 4):
        for j in range(0, i):
            print(end=" ")
        for j in range(0, 4):
            print("*", end="")
        print()


def four():
    for i in range(0, 4):
        for j in range(0, 40):
            print("*", end="")
        print()


def five():
    for i in range(0, 4):
        for j in range(0, 40):
            if i not in (0, 3) and j not in (0, 39):
                print(end=" ")
            else:
                print("*", end="")
        print()


def six():
    for i in range(0, 10):
        for j in range(0, i):
            print(end=" ")
        for j in range(0, 20):
            print("*", end="")
        print()


def seven():
    for i in range(0, 10):
        for j in range(0, 10 - i):
            print(end=" ")
        for j in range(0, 10):
            print("*", end="")
        print()


def eight():
    for i in range(0, 4):
        for j in range(0, i + 1):
            print("*", end="")
        print()


def nine():
    for i in range(0, 5):
        for j in range(0, 5 - i):
            print(end=" ")
        for j in range(0, 2 * i + 1):
            print("*", end="")
        print()


def ten():
    for i in range(0, 5):
        for j in range(0, 5 - i):
            print(end=" ")
        for j in range(0, 2 * i + 1):
            if i == 4:
                print("*", end="")
            else:
                if j == 0 or j == 2 * i:
                    print("*", end="")
                else:
                    print(end=" ")
        print()


def eleven():
    for i in range(0, 9):
        for j in range(0, i):
            print(end=" ")
        for j in range(0, 2 * (9 - i) - 1):
            print("*", end="")
        print()


def twelve():
    for i in range(0, 12):
        for j in range(0, i):
            print(end=" ")
        for j in range(0, 2 * (11 - i) + 1):
            if i == 0 or j == 0 or j == 2 * (11 - i):
                print("*", end="")
            else:
                print(end=" ")
        print()


def thirteen():
    for i in range(0, 10):
        if i < 5:
            for j in range(0, i):
                print("*", end="")
        else:
            for j in range(0, 10 - i):
                print("*", end="")
        print()


def fourteen():
    for i in range(0, 10):
        if i < 5:
            for j in range(0, 10 - i):
                print(end=" ")
            for j in range(0, i):
                print("*", end="")
        else:
            for j in range(0, i):
                print(end=" ")
            for j in range(0, 10 - i):
                print("*", end="")
        print()


def fifteen():
    for i in range(0, 10):
        if i < 5:
            for j in range(0, 10 - i):
                print(end=" ")
            for j in range(0, 2 * i + 1):
                print("*", end="")
        else:
            for j in range(0, i+1):
                print(end=" ")
            for j in range(0, 20 - (2 * i) - 1):
                print("*", end="")
        print()


fifteen()
