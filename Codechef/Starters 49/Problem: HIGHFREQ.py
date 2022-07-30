from collections import Counter
t= int(input())
for k in range(t):
    n= int(input())
    lista= list(map(int,input().split(" ")))
    lcount= Counter(lista)
    result= list(lcount.values())

    result.sort()
    if result[-1]%2==0:
        result[-1]= result[-1]//2
    else:
        result[-1] = (result[-1]+1)//2
    result.sort()
    print(result[-1])
