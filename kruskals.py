class Node:
    def __init__(self):
        self.parent = None
        self.rank = 0
        self.name = None


class DS:
    def __init__(self):
        self.top = Node()
        self.top.parent = self.top
        self.top.rank = 0
        self.top.name = "rep"
        self.array = []

    def makeset(self, name):
        x = Node()
        x.parent = x
        x.rank = 0
        x.name = name
        self.array.append(x)
        return x

    def findset(self, x: Node):
        if x.parent is x:
            return x
        return self.findset(x.parent)

    def union(self, x: Node, y: Node):
        rx = self.findset(x)
        ry = self.findset(y)
        if rx.rank > ry.rank:
            ry.parent = rx
        elif ry.rank > rx.rank:
            rx.parent = ry
        else:
            rx.parent = ry
            ry.rank = ry.rank + 1

    def printsets(self, x: Node):
        temp = self.findset(x)
        for i in self.array:
            if self.findset(i) is temp:
                print(i.name + " ", end=" ")
        print()


class Edge:
    def __init__(self, fro: int = -1, to: int = -1, weight: int = -1):
        self.fro = fro
        self.to = to
        self.weight = weight


def main():
    v = int(input("Enter the number of vertices"))
    e = int(input("Enter the number of edges"))
    arrayOfEdges = [Edge() for i in range(e)]
    print("Enter edges in form-from:to:weight")
    for i in range(e):
        f, t, w = map(int, input().split())
        arrayOfEdges[i] = Edge(f, t, w)
    arrayOfEdges.sort(key=lambda c: c.weight)
    x = DS()
    for i in range(v):
        x.makeset(i)
    for edge in arrayOfEdges:
        u = edge.fro
        v = edge.to
        foru = None
        forv = None
        for i in range(len(x.array)):
            if x.array[i].name == u:
                foru = x.array[i]
            if x.array[i].name == v:
                forv = x.array[i]
        p1 = x.findset(foru)
        p2 = x.findset(forv)
        if p1 != p2:
            x.union(p1, p2)
            print("Edge from ", u, "to", v)


if __name__ == '__main__':
    main()
