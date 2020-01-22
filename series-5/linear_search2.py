n = int(input())
S = [int(x) for x in list(map(int, input().split()))]
q = int(input())
T = [int(x) for x in list(map(int, input().split()))]

def search(S, n, key):
  i = 0
  S[n] = key
  while (S[i] != key):
    i += 1
  return i != n

S.append(0)
count = 0
for a in T:
  if (search(S, n, a)):
    count += 1

print (count)