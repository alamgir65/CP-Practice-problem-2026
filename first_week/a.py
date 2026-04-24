def get_mean(A):
    n = len(A)
    if n == 1:
        return A[0]
    return ((n-1) * get_mean(A) + A[n-1]) / n

A = [1, 2, 3, 4, 5]
print(get_mean(A, len(A)))