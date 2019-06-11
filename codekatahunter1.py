# somfonrgiun

from collections import *

number = int(input())
list = [int(i) for i in input().split(' ')]
d = defaultdict(int)
rep = []

for i in range(number):
    d[list[i]] += 1
    if d[list[i]] == 2:
        rep.append(list[i])

rep.sort()
if len(rep) == 0:
    print("unique")
else:
    for i in range(len(rep)):
print(rep[i], end=" ")
