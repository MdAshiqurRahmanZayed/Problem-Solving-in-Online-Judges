# cook your dish here
t=int(input())
for _ in range(t):
    a,b,c,d,e,f=map(int,input().split())
    l=[a,b]
    if (c in l) and (d in l):
        print("1")
    elif (e in l) and (f in l):
        print("2")
    else:
        print("0")