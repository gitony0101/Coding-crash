# Dunders: double underscores
class Person:

    def __init__(self, name, age):
        self.name = name
        self.age = age

    def __dell__(self):
        print(f"{self.name} is being deleted")


Person_1 = Person('John', 36)

Person_1.__dell__()
