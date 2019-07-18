class Vertex:
    def __init__(self):
        self.stime = None
        self.etime = None
        self.colour = "U"
        self.pred = None
        self.next = None


class Node:
    def __init__(self, k):
        self.val = k
        self.next = None


class edge:
    def __init__(self, v1, v2):
        self.e1 = v1
        self.e2 = v2


L = []
TE = []
BE = []
FE = []
CE = []
E = []


def main():
    n = int(input("Enter number of vertices:"))
    for i in range(n):
        L.append(Vertex())
    # M=[[0 for i in range(0,n)]for j in range(0,n)]
    e = int(input("Enter number of edges:"))
    print("Enter the edges:")
    for i in range(0, e):
        v1, v2 = input().split()
        v1, v2 = int(v1), int(v2)

        N1 = Node(v1)
        E.append(edge(v1, v2))
        tmp = L[v1].next
        tmp2 = L[v1]

        while tmp != None:
            if (not tmp.next) or tmp.next.val > N1.val:
                N1.next = tmp2.next
                tmp2.next = N1
                break
            tmp2 = tmp2.next
            tmp = tmp.next

    for i in range(len(L)):
        tmp = L[i].next
        while tmp != None:
            print(tmp.val)
            tmp = tmp.next

        # N2=Node(v2)
        """if L[v1].next==None:
            L[v1].next=N2
        else:
            tmp=L[v1].next
            N2.next=tmp
            L[v1].next=N2"""

        """if L[v2].next==None:
            L[v2].next=N1
        else:
            tmp=L[v2].next
            N1.next=tmp
            L[v2].next=N1"""
    s = int(input("Enter the source vertex:"))
    DFS(s)
    for i in range(n):
        print("Vertex:", i, "Time:[", L[i].stime, ",", L[i].etime, "]")
    print("Tree edges:")
    for i in range(len(TE)):
        print(TE[i].e1, " ", TE[i].e2)


time = 0


def DFS(u):
    global time
    time = time + 1
    # print(time)
    L[u].stime = time
    L[u].colour = "V"
    tmp = L[u].next
    while tmp != None:
        if L[tmp.val].colour == "U":
            TE.append(edge(u, tmp.val))
            DFS(tmp.val)
            L[tmp.val].pred = u
        elif L[tmp.val].colour == "E":
            CE.append(edge(u, tmp.value))

        tmp = tmp.next
    L[u].colour = "E"
    time = time + 1
    # print(time)
    L[u].etime = time


if __name__ == '__main__':
    main()
