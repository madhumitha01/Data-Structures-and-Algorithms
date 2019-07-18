# Implement the dynamic programming based algorithm to compute the edit distance of two strings.
#  Read in two strings and print the edit distance between them. Also print the optimal alignment
# that produces this distance.
a = []


def findEditDistance(s1, s2, l1, l2):
    global a
    if a[l1][l2] != 0:
        return a[l1][l2]
    if l1 == 0:
        a[l1][l2] = l2
        return l2
    if l2 == 0:
        a[l1][l2] = l1
        return l1
    if s1[l1 - 1] == s2[l2 - 1]:
        return findEditDistance(s1, s2, l1 - 1, l2 - 1)

    c1 = 1 + findEditDistance(s1, s2, l1, l2 - 1)  # insert
    c2 = 1 + findEditDistance(s1, s2, l1 - 1, l2)  # remove
    c3 = 1 + findEditDistance(s1, s2, l1 - 1, l2 - 1)  # replace
    a[l1][l2] = min(c1, c2, c3)
    return min(c1, c2, c3)


def main():
    s1 = input("Enter string 1")
    s2 = input("Enter string 2")
    l1 = len(s1)
    l2 = len(s2)
    global a
    a = [[0 for j in range(max(l1, l2)+1)] for i in range(max(l1, l2)+1)]
    findEditDistance(s1, s2, l1, l2)


if __name__ == '__main__':
    main()
