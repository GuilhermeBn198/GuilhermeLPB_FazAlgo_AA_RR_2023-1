lista = list(range(500001))
with open('lista_crescente.csv', 'w') as f:
    f.write(' '.join(map(str, lista)))
