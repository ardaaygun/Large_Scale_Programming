class AreaCalculator:
    def calculate_area(self, length, width=None):

        if width is None:
            return length * length
        else:

            return length * width



calc = AreaCalculator()
square_area = calc.calculate_area(5)
rectangle_area = calc.calculate_area(5, 10)

print("Area of Square:", square_area)
print("Area of Rectangle:", rectangle_area)
