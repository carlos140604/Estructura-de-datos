"""Taller diagnostico estructuras de datos."""


# Ejercicio numero 1 
mat = [[11, 23, 76, 34, 11],
       [14, 30, 92, 30, 101],
       [12, 45, 58, 92, 22],
       [74, 56, 49, 56, 100],
       [99, 5, 28, 47, 99]]

def punto1(mat):
  ans = True
  contador = len(mat)-1
  for i in range(len(mat)):
    if(mat[i][i] != mat[i][contador-i]):
      ans = False
  return ans

print(punto1(mat))


# Ejercicio numero 2 

def esCapicua(lista):
  ans = True
  contador = len(lista)-1
  for i in range(len(lista)):
    if (lista[i] != lista[contador-i]):
      ans = False
  return ans

print(esCapicua([42, 12, 90, 90, 12, 42]))


# Ejercicio numero 3

def diferenciaListas(listaA, listaB):
  arr = []
  for i in range(len(listaA)):
    if listaA[i] not in listaB:
      arr.append(str(listaA[i]))
    else:
      listaB.remove(listaA[i])
  return arr

# PUNTO 3 B =====================
def punto2B():
  numeroIteraciones = int(input())
  for i in range(numeroIteraciones):
    arrA = []
    arrB = []
    # Insersion de datos Arreglo A
    tamArrA = int(input())
    for j in range(tamArrA):
      num = int(input())
      arrA.append(num)
      
    # Insersion de datos Arreglo B
    tamArrB = int(input())
    for x in range(tamArrB):
      num2 = int(input())
      arrB.append(num2)
      
    print("La diferencia es : [" , ','.join(diferenciaListas(arrA, arrB)),"]")
    
punto2B()  

# PUNTO 3 A =====================

  
listaA = [40, 10, 22, 12, 33, 33, 33]
listaB = [41, 22, 31, 15, 13, 12, 33, 19]

print(diferenciaListas(listaB, listaA))


# Ejercicio numero 4

def mostrarPrimos(n):
  
  for i in range(2, n + 1):
    
    contador = 2
    numeroPrimo = True
  
    while numeroPrimo and contador < i:
      if i % contador == 0:
        numeroPrimo = False
      else:
        contador += 1
    if numeroPrimo:
      print('==>', i)

mostrarPrimos(100)

























