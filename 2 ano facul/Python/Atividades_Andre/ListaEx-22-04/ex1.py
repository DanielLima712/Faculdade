# Solicite ao usuário dois números e imprima:
# soma, média, diferença absoluta e o número maior.
import os 

num1 = int(input("Digite o primeiro numero: "))
num2 = int(input("Digite o segundo numero: "))
os.system('cls') 
print("Numero 1:", num1)
print("Numero 2:", num2)

#soma
soma = int(num1 + num2)
print("\nSoma:", soma)

#diferenca absoluta
subt = int(num1 - num2)
print("Diferenca absoluta:", subt)

#media
media = float(soma/2)
print("Media:", media)

#numero maior
if(num1 > num2):
    print("O primeiro numero digitado e o maior!")
else:
    print("O segundo numero digitado e o maior!")