class Node:
    def __init__(self, start=0, end=0):
        self.start = start
        self.end = end


def main():
    n = int(input("Enter the number of intervals:"))
    intervals = [Node() for i in range(n)]
    marked = [0 for i in range(n)]
    for i in range(n):
        a, b = input().split()
        a = int(a)
        b = int(b)
        intervals[i].start = a
        intervals[i].end = b
    intervals.sort(key=lambda x: x.end)
    current = intervals[0]
    marked[0] = 1
    print(current.start, " ", current.end)
    for i in range(1, n):
        if intervals[i].start <= current.end:
            marked[i] = 2
        else:
            current = intervals[i]
            marked[i] = 1
            print(current.start, " ", current.end)


if __name__ == '__main__':
    main()
