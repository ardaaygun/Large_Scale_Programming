class Pixel:
    def __init__(self, r, g, b):
        self.__r = r
        self.__g = g
        self.__b = b

    def get_color(self):
        return (self.__r, self.__g, self.__b)


    def set_red(self, new_r):
        if 0 <= new_r <= 255:
            self.__r = new_r
        else:
            print("Error: Invalid Red value.")


p = Pixel(100, 150, 200)

p.set_red(300)
p.set_red(50)

print("Final Pixel Color:", p.get_color())
