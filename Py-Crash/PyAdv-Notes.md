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
