# n = int(input())

# for n in range(n):
#      a = int(input())
#      b = int(input())
#      x = int(input())
#      c = int((b-a)/x)
#      print(c)
     
for t in range(int(input())):
     a,b,x=list(map (int, input().split()))
     c = int((b-a)/x)
     print(c)     