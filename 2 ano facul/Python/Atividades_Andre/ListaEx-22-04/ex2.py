# Peça uma nota (0–100). Classifique:
# Excelente (≥ 90), Bom (70-89), Regular (50-69), Reprovado (< 50).

nota = float(input("Digite a nota do aluno (de 0 a 100): "))

if(nota < 0):
    print("Valor digitado invalido!")
if(nota > 100):
    print("Valor digitado invalido!")
if(nota >= 90 and nota <= 100):
    print("Excelente!")
if(nota <= 89 and nota >= 70):
    print("Bom!")
if(nota <= 69 and nota >=50):
    print("Regular!")
if(nota <= 49 and nota >= 0):
    print("Reprovado!")
