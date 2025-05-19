N = int(input())

while N != 0:
  pessoas = []
  pessoas = input().split(' ')
  tempo_funcionando = 0
  for posicao in pessoas:
    if int(pessoas.index(posicao)) == N-1:
       tempo_funcionando += 10
    else:
      if int(pessoas[pessoas.index(posicao) + 1]) - int(posicao) <= 10:
        tempo_funcionando += int(pessoas[pessoas.index(posicao) + 1]) - int(posicao)
      else:
        tempo_funcionando += 10
  print(tempo_funcionando)
  
  N = int(input())
