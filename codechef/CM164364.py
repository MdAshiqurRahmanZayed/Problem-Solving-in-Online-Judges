for _ in range(int(input())):

    n,x=map(int,input().split())

    l=list(map(int,input().split()))

    fl=len(set(l))

    av=n-x

    print(min(fl,av))
