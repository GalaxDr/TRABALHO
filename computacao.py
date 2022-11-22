import numpy as np


matrix_a = np.eye(41, dtype=int)


def tester(linha, coluna):
    if coluna < 4 or coluna > 36 or linha == 33:
        return 1
    elif (coluna - linha == 4 or linha + coluna == 36 or (
            (coluna == 11 or coluna == 19 or coluna == 27) and 34 < linha < 40)):
        return 1
    return 0


for i in range(41):
    for j in range(41):
        matrix_a[i, j] = [1, 0][tester(i, j) == 1]
        print(matrix_a[i, j], end=' ')
    print()
print(type(matrix_a))
