str1 = input("Enter the postfix expression:")
list1 = str1.split()
stack = list()
print(list1)


# 2 3 1 * + 9 - here the ans is -4

def isOperator(a):
    if a == '+' or a == '-' or a == '/' or a == '*':
        return 1
    else:
        return 0


def evaluate(a, b, c):
    if a == '+':
        return b + c
    elif a == '-':
        return b - c
    elif a == '*':
        return b * c
    else:
        return b / c


for i in range(len(list1)):
    if (isOperator(list1[i])) == 1:
        d = int(stack.pop())
        c = int(stack.pop())
        x = evaluate(list1[i], c, d)
        stack.append(x)
    else:
        stack.append(list1[i])
print(stack.pop())
