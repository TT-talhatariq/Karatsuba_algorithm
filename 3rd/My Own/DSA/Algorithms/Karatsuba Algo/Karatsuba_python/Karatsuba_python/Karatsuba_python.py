import math
def multiply(x, y):
    if (x < 10 and y < 10):
        return x*y

    size = max(len(str(x)), len(str(y)))
    
    n = math.ceil( size // 2)
    power = 10 ** n
    a = math.floor(int(x) // power)
    b = x % power
    c = math.floor(int(y) // power)
    d = y % power

    ac = multiply(a,c)
    bd = multiply(b,d)
    e = multiply(a+b, c+d) - ac - bd
    
    return int(((10**(2*n))*ac + (10**n)*e + bd))

print(multiply(1234, 5678))