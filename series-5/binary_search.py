import math

n = int(input())
S = list(map(int, input().split()))
q = int(input())
T = list(map(int, input().split()))

count = 0

for v in T:
  top = 0
  tail = len(S)
  while top < tail:
    i = math.floor((top + tail)/2)
    if v == S[i]:
      count += 1
      break
    elif v > S[i]:
      top = i + 1
    else :
      tail = i

print (count)