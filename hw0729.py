import random

# 初始化隨機數種子
random.seed()

# 初始化數組和選取狀態
arr = list(range(10))
selected = [False] * 10

# 隨機選取4個不同的數字
x = [] #已選取數字的列表
for i in range(4):
    num = random.randint(0, 9) #0-9隨機數
    while selected[num]:
        num = random.randint(0, 9)
    selected[num] = True #被選過的變成true
    x.append(num)

print("".join(map(str, x)))

# 開始遊戲循環
q = 1
while True:
    n = int(input("Please input four digits (0~9): "))
    num = [n // 1000, (n % 1000) // 100, (n % 100) // 10, n % 10]

    A, B = 0, 0
    for i in range(4):
        if num[i] == x[i]:
            A += 1
        elif num[i] in x:
            B += 1

    print(f"{A}A{B}B")

    if A == 4:
        print(f"You got it!! {q} times!!")
        break
    q += 1
