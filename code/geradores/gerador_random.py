import random
import csv

lista = [random.randint(0, 500000) for i in range(500000)]

with open('lista_randomica.csv', mode='w') as file:
    writer = csv.writer(file, delimiter=' ')
    writer.writerow(lista)
