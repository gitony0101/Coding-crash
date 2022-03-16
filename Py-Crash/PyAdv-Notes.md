# Advanced Python Tutorial

1. Magic Methods && Dunder
2. Decorators
3. Generators
4. Argument Parsing
5. Encapsulation
6. Type Hinting
7. Factory Design Pattern
8. Proxy Design Pattern
9. Singleton Design Pattern
10. Composite Design Pattern

## Magic Methods && Dunder'

Dunder: double underscores:\_\_

\_\_dell\_\_: delete the object

```python
class Person:

    def __init__(self, name, age):
        self.name = name
        self.age = age

    def __dell__(self):
        print(f"{self.name} is being deleted")


Person_1 = Person('John', 36)

Person_1.__dell__()
```

\_\_add\_\_:

```python
class Vector:
    # py dont know what a vector is

    def __init__(self, x, y):
        self.x = x
        self.y = y

    def __add__(self, other):
        return Vector(self.x + other.x, self.y + other.y)


v_1 = Vector(2, 3)
v_2 = Vector(5, 7)

v_3 = v_1 + v_2

print(v_3.x, v_3.y)

```

\_\_repr\_\_: “official” string representation of an object.

```python
class Vector:
    # py dont know what a vector is

    def __init__(self, x, y):
        self.x = x
        self.y = y

    def __add__(self, other):
        return Vector(self.x + other.x, self.y + other.y)

    def __repr__(self):
        return f"Vector:({self.x}, {self.y})"


v_1 = Vector(2, 3)
v_2 = Vector(5, 7)

v_3 = v_1 + v_2

print(v_3)
```

\_\_len\_\_:Return the length (the number of items) of an object.

The argument may be a sequence (such as a string, bytes, tuple, list, or range) or a collection (such as a dictionary, set, or frozen set).

```python
class Vector:
    # py dont know what a vector is

    def __init__(self, x, y):
        self.x = x
        self.y = y

    def __add__(self, other):
        return Vector(self.x + other.x, self.y + other.y)

    def __repr__(self):
        return f"Vector:({self.x}, {self.y})"

    def __len__(self):
        return 42


v_1 = Vector(2, 3)
v_2 = Vector(5, 7)

v_3 = v_1 + v_2

print(v_3)
print(len(v_3))
```

Moreover, with the intro of call, I need to improve this vector:

working.....
