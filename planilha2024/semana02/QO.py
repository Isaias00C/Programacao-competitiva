alfabeto = 'abcdefghijklmnopqrstuvwxyz'
alfabeto_permutado = input()
cripto = input()
decode = []
for letra in cripto:
  decode.append(alfabeto[alfabeto_permutado.index(letra)])
respostas = ''
for letra in decode:
  respostas = respostas + letra
print(respostas)
