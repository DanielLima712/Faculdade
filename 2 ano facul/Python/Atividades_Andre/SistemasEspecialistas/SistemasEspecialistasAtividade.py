def recomendar_alimentos(dieta):
    alimentos = {
        "vegetariana": [
            "Vegetais frescos (alface, couve, espinafre)",
            "Frutas (maçã, banana, laranja)",
            "Graos integrais (arroz integral, quinoa)",
            "Leguminosas (feijão, lentilha, grão-de-bico)"
        ],
        "baixo carboidrato": [
            "Carnes magras (frango, peixe, carne bovina)",
            "Ovos",
            "Vegetais nao ricos em carboidratos (couve-flor, abobrinha, pepino)",
            "Frutas com baixo teor de carboidrato (abacate, morango, framboesa)"
        ],
        "proteica": [
            "Frango grelhado",
            "Peixes (salmao, atum)",
            "Carne magra",
            "Ovos",
            "Tofu",
            "Laticinios com baixo teor de gordura (queijo cottage, iogurte grego)"
        ]
    }

    dieta = dieta.lower()
    
    if dieta in alimentos:
        return alimentos[dieta]
    else:
        return ["Dieta não reconhecida. Tente: vegetariana, baixo carboidrato, ou proteica."]

# Função principal
def main():
    dieta_usuario = "proteica"  # Defina a dieta aqui diretamente
    print(f"Dieta escolhida: {dieta_usuario.capitalize()}")
    
    recomendacoes = recomendar_alimentos(dieta_usuario)
    
    print("\nAlimentos recomendados para a sua dieta:")
    for alimento in recomendacoes:
        print(f"- {alimento}")

if __name__ == "__main__":
    main()