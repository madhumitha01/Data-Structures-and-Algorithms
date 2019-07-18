#!/bin/python3

import sys

def fibonacciModified(t1, t2, n,store):
    if store[n]!=-1:
        return store[n]
    store[n]=fibonacciModified(t1,t2,n-1,store)*fibonacciModified(t1,t2,n-1,store)+fibonacciModified(t1,t2,n-2,store)
    return store[n]
        
def main():
    t1, t2, n = input().strip().split(' ')
    t1, t2, n = [int(t1), int(t2), int(n)]
    store=[-1 for i in range(n+1)]
    store[1]=t1
    store[2]=t2
    result = fibonacciModified(t1, t2, n, store)
    print(result)

if __name__ == "__main__":
    main()