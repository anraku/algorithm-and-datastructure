arr = input().split()

def calc(c):
  if c is "+":
    l = calc(arr.pop())
    r = calc(arr.pop())
    result = l + r
  elif c is "-":
    l = calc(arr.pop())
    r = calc(arr.pop())
    result = r - l
  elif c is "*":
    l = calc(arr.pop())
    r = calc(arr.pop())
    result = l * r
  else:
    return int(c)
  return result

# def calc(c):
#   if c is "+":
#     l = calc(arr.pop())
#     print (c, l)
#     r = calc(arr.pop())
#     print (c, r)
#     result = l + r
#   elif c is "-":
#     l = calc(arr.pop())
#     print (c, l)
#     r = calc(arr.pop())
#     print (c, r)
#     result = r - l
#   elif c is "*":
#     l = calc(arr.pop())
#     print (c, l)
#     r = calc(arr.pop())
#     print (c, r)
#     result = l * r
#   else:
#     print (c, c)
#     return int(c)
#   return result

print(calc(arr.pop()))