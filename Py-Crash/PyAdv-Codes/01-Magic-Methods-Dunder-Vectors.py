class Vector:
    # py dont know what a vector is

    def __init__(self, name, x, y):
        self.name = name  # need more work
        self.x = x
        self.y = y

    def __add__(self, other):

        return Vector(self.name, self.x + other.x, self.y + other.y)

    def __repr__(self):
        return f"Vector:({self.x}, {self.y})"

    def __len__(self):
        return 42

    def __call__(self):
        print("the Vector is called")


v_1 = Vector('v1', 2, 3)
v_2 = Vector('v2', 5, 7)

v_3 = Vector('v3', v_1 + v_2)

print(v_3)
print(len(v_3))
