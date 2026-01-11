def calculate_final_price(base_price, discount_percent=0, tax_rate=0.10):
    discounted_price = base_price - (base_price * discount_percent / 100)
    final_price = discounted_price + (discounted_price * tax_rate)
    return final_price

#1
print(f"Price 100: {calculate_final_price(100)}")

#2
print(f"Price 200, 50% off: {calculate_final_price(200, 50)}")

#3
print(f"Full Custom: {calculate_final_price(100, 20, 0.20)}")

