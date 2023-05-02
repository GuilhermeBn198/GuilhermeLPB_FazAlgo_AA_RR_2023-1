lista = list(range(75000))
with open("asc75000.csv", "w") as f:
    f.write(" ".join(map(str, lista)))
