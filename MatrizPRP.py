import numpy as np


matrix_a = np.eye(44, dtype=int)


def tester(linha, coluna):
    if coluna < 12 or coluna > 32:
        return 1
    elif coluna-linha == 20 and linha > 2 or linha+coluna == 24 and linha > 1 or (
            11 < linha < 37 and (coluna == 12 or coluna == 32 or linha == 36 or linha == 12 or linha == 13)):
        return 0
    return 1


for i in range(44):
    for j in range(44):
        matrix_a[i, j] = [1, 0][tester(i, j) == 1]
        print(matrix_a[i, j], end=' ')
    print()
print(type(matrix_a))
