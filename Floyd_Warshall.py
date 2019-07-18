import sys


def main():
    v = input("Enter the number of vertices:")
    e = input("Enter the number of edges:")
    e, v = int(e), int(v)
    G = [[sys.maxsize for i in range(v + 1)] for i in range(v + 1)]
    for i in range(v):
        G[i][i] = 0
    for i in range(e):
        a, b, c = input("Enter edge: from to weight:").split()
        a, b, c = int(a), int(b), int(c)
        G[a][b] = c
    dist = G
    for i in range(v):
        for j in range(v):
            for k in range(v):
                dist[i][j] = min((dist[i][k] + dist[k][j]), dist[i][j])

    print("lol")


if __name__ == '__main__':
    main()
