n = int(input())
dic = {}
for i in range(n):
  command, key = input().split()
  if command == "insert":
    dic[key] = True
  elif command == "find":
    if dic.get(key, False):
      print("yes")
    else:
      print("no")
