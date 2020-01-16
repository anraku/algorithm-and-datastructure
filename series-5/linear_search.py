n = int(input())
S = [int(x) for x in list(map(int, input().split()))]
q = int(input())
T = [int(x) for x in list(map(int, input().split()))]

count = 0
for a in T:
  for b in S:
    if a == b:
      count += 1
      break

print (count)