A = int(input("A: "))
B = int(input("B: "))
if(A>B):
    for it in range(A, B, -1):
        print(it, end = ", ")
elif(A<B):
    for it in range(A, B, 1):
        print(it, end = ", ")
    