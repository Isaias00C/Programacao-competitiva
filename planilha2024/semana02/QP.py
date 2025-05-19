lista = []
lista = input().split(' ')
M = int(lista[0])
N = int(lista[1])
A = []
A = input().split(' ')
B = []
B = input().split(' ')
sumB = []
for i in B:
  for j in range(B.index(i) + 1):
    sumB.append(int(i) + int(B[j]))
  if (i in A) or (int(i) in sumB):
    pass
  else:
    print(i)
    exit()
print('sim')
