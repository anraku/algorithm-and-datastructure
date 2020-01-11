queue = []

def enqueue(obj):
  queue.append(obj)

def dequeue():
  v = queue[0]
  del queue[0]

  return v

n, q = map(int, input().split())
for i in range(n):
  p, t = input().split()
  queue.append({"p": p, "t": int(t)})

sum_t = 0
while len(queue) > 0:
  v = dequeue()
  c = min(v["t"], q)
  sum_t += c
  v["t"] -= c
  if v["t"] > 0:
    enqueue(v)
  else:
    print (v["p"], sum_t)
