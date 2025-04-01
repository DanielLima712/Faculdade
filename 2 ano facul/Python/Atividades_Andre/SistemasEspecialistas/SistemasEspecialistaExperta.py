from experta import *

# Definição do sistema especialista
class Diagnostico(KnowledgeEngine):
    @Rule(Fact(febre=True) & Fact(tosse=True))
    def gripe(self):
        print("Diagnóstico: Gripe")

    @Rule(Fact(febre=True) & Fact(dor_de_cabeca=True))
    def dengue(self):
        print("Diagnóstico: Dengue")

    @Rule(Fact(tosse=True) & Fact(falta_de_ar=True))
    def asma(self):
        print("Diagnóstico: Asma")

    @Rule(Fact(fadiga=True) & Fact(dor_muscular=True))
    def virose(self):
        print("Diagnóstico: Virose")

# Criando o motor de inferência
engine = Diagnostico()
engine.reset()

# Simulando entrada do usuário
engine.declare(Fact(febre=True))
engine.declare(Fact(tosse=True))

# Executando as regras
engine.run()