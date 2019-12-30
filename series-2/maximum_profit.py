n = int(input())
arr = []
for i in range(n):
  arr.append(int(input()))

minv = arr[0]
maxv = arr[1] - arr[0]
for i in range(1, len(arr)):
  maxv = max(maxv, arr[i]-minv)
  minv = min(minv, arr[i])

print (maxv)