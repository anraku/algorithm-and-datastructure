arr = input().split()
stack = []

for c in arr: 
  if c is "+":
    a = stack.pop()
    b = stack.pop()
    stack.append(a + b)
  elif c is "-":
    a = stack.pop()
    b = stack.pop()
    stack.append(b - a)
  elif c is "*":
    a = stack.pop()
    b = stack.pop()
    stack.append(a * b)
  else:
    stack.append(int(c)) 

print(stack.pop())