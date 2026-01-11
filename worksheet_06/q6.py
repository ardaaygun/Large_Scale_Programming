class SpeedConverter:
    def __init__(self, kmh):

        self.kmh = kmh


    def to_mph(self):
        return self.kmh / 1.61


    @staticmethod
    def kmh(mph):
        return mph * 1.61


car_speed = SpeedConverter(100)
print(f"100 km/h to mph: {car_speed.to_mph():.2f}")  # Expected: approx 62.11
print(f"60 mph to km/h: {SpeedConverter.kmh(60):.2f}")  # Expected: approx 96.60
