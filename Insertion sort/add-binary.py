# your code goes here
def add_binary(A, B, n):
    carry = 0
    C = [None]*8
    i = 0
    for i in range(0, len(A)):
        C[i] = int((A[i] + B[i] + carry)%2)
        carry = (A[i]+ B[i] + carry)/2
    C[i] = int(carry)
    return C

if __name__ == "__main__":
    n = 8
    A = [0, 1, 0, 1, 0, 0, 1, 1]
    B = [0, 1, 1, 1, 0, 1, 1, 0]
    print(add_binary(A,B,n))
