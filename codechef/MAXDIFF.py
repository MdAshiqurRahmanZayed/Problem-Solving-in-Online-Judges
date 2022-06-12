for _ in range(int(input())):
    n, k = map(int, input().split())
    arr = list(map(int, input().split()))
    arr.sort()
    if n//2 >= k:
        l = sum(arr[k:]) - sum(arr[:k])
    else:
        l = sum(arr[:k]) - sum(arr[k:])
    print(l)
