from nltk.chat.util import Chat, reflections
# Definição de padrões de resposta

pares = [
(r"oi|olá|e aí", ["Olá!", "Oi, tudo bem?", "E aí!"]),
(r"qual é o seu nome\?", ["Eu sou um chatbot criado com NLTK."]),
(r"como você está\?", ["Estou bem, e você?", "Estou apenas um código, mas estou bem!"]),
(r"adeus|tchau", ["Até mais!", "Tchau, volte sempre!"]),
]
