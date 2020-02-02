import math

p_max = 100000 * 10000 # 荷物の最大数 * 荷物の最大重量
n, k = map(int, input().split())
w = [int(input()) for i in range(n)]

def check(p): # pはトラックの最大積載量
  i = 0 # 積んだ荷物の総量
  for j in range(k): # k個のトラックに可能な限り荷物を載せていく
    s = 0 # トラックに載っている荷物の総重量
    while (s + w[i] <= p): # トラックの積載量を超えるまでループ
      s += w[i]
      i += 1
      if i == n:
        return n # n個全ての荷物を積めた
  return i # n個全ての荷物を積めなかったので積めたiこの分だけ返す

if __name__ == "__main__":
  # ２分探索で最適な最大積載量を求める
  right = p_max
  left = 0
  mid = 0
  while (right - left > 1): # 目的の最大積載量が見つかるまでループ
    mid = math.floor((right + left) / 2)
    v = check(mid)
    if v >= n: # n個全て積めた場合
      right = mid
    else: # n個全て積めなかった
      left = mid
  
  print (right)


