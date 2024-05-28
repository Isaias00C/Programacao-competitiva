matriz = [[1]]
numRows = int(input())

if numRows >= 2:
  matriz = [[1],[1,1]]
else:
  print(matriz)
  exit()

for i in range (2,numRows):
  linha = [1]
  for j in range (1,len(matriz[i-1])):
    linha.append(matriz[i-1][j-1] + matriz[i-1][j])
  linha.append(1)
  matriz.append(linha)
print(matriz)
