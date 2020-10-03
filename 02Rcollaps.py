def collaps(n):
    if n==1:
        return 0
    elif n%2==0:
        return 1+collaps(n/2)
    else:
        return 1+collaps(3*n+1)

    
print(collaps(3))
