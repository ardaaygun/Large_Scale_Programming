import random
import math

a = random.randint(1, 20)  # Dik kenar A
b = random.randint(1, 20)  # Dik kenar B


c = math.sqrt(a**2 + b**2)


print(f"Side A: {a}")
print(f"Side B: {b}")
print(f"Hypotenuse (rounded): {round(c, 3)}")
