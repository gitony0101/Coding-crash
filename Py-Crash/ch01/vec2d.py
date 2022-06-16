from math import hypot


class Vector:

    def __init__(self, x=0, y=0):
        self.x = x
        self.y = y

    def __repr__(self):
        return 'Vector(%r,%r)' % (self.x, self.y)

    # def __str__(self): # str 区别？
    # return 'Vector(%r,%r)' % (self.x, self.y)
    def __abs__(self):
        return hypot(self.x, self.y)

    def __bool__(self):
        return bool(abs(self))

    def __add__(self, other):
        x = self.x + other.x
        y = self.y + other.y
        return Vector(x, y)

    def __mul__(self, scalar):  # 左乘
        return Vector(self.x * scalar, self.y * scalar)

    def __rmul__(self, scalarF):  # rmul 右乘
        return Vector(scalarF * self.x, scalarF * self.y)
