import sys

def check():
    return int(input())

def solve():
    n=check()
    s = list (input())
    start=[]
    for i in s:
        if not start or start[-1]!=i:
            start. append(i)
    final=start.count('1')- 1
    if s[-1]=='0':
        final+= 1
    print(final)


t=1
t=check()
for _ in range(t):
    solve()
