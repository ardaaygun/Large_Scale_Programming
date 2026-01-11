
class BaseModel:
    def __init__(self, name, version):
        self.name = name
        self.version = version

    def get_info(self):
        return f"Model: {self.name} (v{self.version})"


class NeuralNetwork(BaseModel):
    def __init__(self, name, version, layer_count):
        super().__init__(name, version)
        self.layer_count = layer_count


model = NeuralNetwork("ResNet", 50, 152)

print("Loaded:", model.get_info())
print("Layers:", model.layer_count)
