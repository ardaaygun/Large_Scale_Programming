# main.py


from converters.temperature import c_to_f
from converters.distance import km_to_miles


celsius = 25
fahrenheit = c_to_f(celsius)
print(f"Temperature ({celsius}C to F): {fahrenheit}")


km = 100
miles = km_to_miles(km)
print(f"Distance ({km}km to Miles): {miles}")
