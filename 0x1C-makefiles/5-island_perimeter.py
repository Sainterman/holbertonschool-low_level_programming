#!/usr/bin/python3

"""
calc perimeter of an island of 1s in a sea of 0s
"""

def island_perimeter(grid):
    """Contar cantidad de 0s alrededor del 1"""
    perrisimo = 0
    for i in range(0, len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                try:
                    izquierda = grid[i][j - 1]
                    if izquierda == 0:
                        perrisimo += 1
                except:
                    perrisimo += 1
                try:
                    derecha = grid[i][j + 1]
                    if derecha == 0:
                        perrisimo += 1
                except:
                    perrisimo += 1
                try:
                    abajo = grid[i + 1][j]
                    if abajo == 0:
                        perrisimo += 1
                except:
                    perrisimo += 1
                try:
                    arriba = grid[i - 1][j]
                    if arriba == 0:
                        perrisimo += 1
                except:
                    perrisimo += 1
    return perrisimo
