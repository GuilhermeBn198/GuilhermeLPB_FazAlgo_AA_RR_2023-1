lista = list(range(10000))
with open("asc10000.csv", "w") as f:
    f.write(" ".join(map(str, lista)))
