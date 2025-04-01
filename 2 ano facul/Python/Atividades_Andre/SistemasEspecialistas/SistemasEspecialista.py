regras = {
    "febre e tosse": "Gripe",
    "febre e dor de cabeça": "Dengue",
    "tosse e falta de ar": "Asma",
    "fadiga e dor muscular": "Virose"
}
def diagnosticar(sintomas):
    sintomas_str = " e ".join(sorted(sintomas))  # Ordena para evitar variações
    return regras.get(sintomas_str, "Diagnóstico não encontrado")

# Exemplo de uso
sintomas_usuario = ["febre", "tosse"]
diagnostico = diagnosticar(sintomas_usuario)
print(f"Diagnóstico: {diagnostico}")