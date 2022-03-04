def modularExponentiation(x, e, M):
    if (x == 0):
        return 0
    if (e == 0):
        return 1
    
    y = 0
    # if e is even
    if (e % 2 == 0):
        y = modularExponentiation(x, e/2, M)
        y = (y * y) % M
    
    # if e is odd
    else:
        y = x % M
        y = (y * modularExponentiation(x, e-1, M) % M) % M
    
    return ((y + M) % M)

print(modularExponentiation(7, 644, 645))


def myPow(q, p):
    if( p == 0):
        return 1
    if (p == 1):
        return q
    return q * myPow(q, p - 1)

def modular(x, y, z):
    if(y == 0):
        return 1
    elif (y % 2 == 0):
        return ((myPow(x, y/2) % z) * (myPow(x, y/2) % z)) % z
    else:
        return ((x % z) * (myPow(x, (y - 1)) % z)) % z

print(modular(7, 644, 645))


print(pow(7, 512) % 645)