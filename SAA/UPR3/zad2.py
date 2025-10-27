def power(x, n):
    if n == 0:
        return 1
    elif n < 0:
        return 1 / power(x, -n)
    else:
        return x * power(x, n - 1)
    
# Example usage:
print(power(2, 3))  # Output: 8
print(power(2, -2)) # Output: 0.25    
print(power(5, 0))  # Output: 1
print(power(8, 10))  # Output: 1073741824