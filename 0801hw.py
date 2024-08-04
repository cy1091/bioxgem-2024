id=input('請輸入身分證字號：')
letter = id[0].upper() #大寫

code={'A':10,'B':11,'C':12,'D':13,'E':14,'F':15,'G':16,'H':17,'J':18,'K':19,'L':20,'M':21,'N':22,'P':23,'Q':24,'R':25,'S':26,'T':27,'U':28,'V':29,'X':30,'Y':31,'I':34,'O':35,'W':32,'Z':33}
code_value = code.get(letter)
A1=(code_value//10) #只取整數
A2=(code_value%10)

D = [int(i) for i in id[1:]] #D1-D9轉換為數字

Y=A1+A2*9+D[0]*8+D[1]*7+D[2]*6+D[3]*5+D[4]*4+D[5]*3+D[6]*2+D[7]*1

check=10-(Y%10)

if check==D[8] :
    print('身分證字號正確！！')
elif check==10:
    print('身分證字號正確！！')
else:
    print('身分證字號錯誤！！')
