# Level-3.1 OOP adv programming  Py4e Chap 14

## Intro and Compare: Object Oriented Programing vs Procedure Oriented Programming

#### Procedure oriented programming 

**Procedure oriented programming is a set of functions.** In this program language is used. To perform any particular task, set of function are compulsory. For example , a program may involve collecting data from user, performing some kind of calculation on that data and printing the data on screen when is requested. Calculating, reading or printing can be written in a program with the help of different functions on different tasks.

POP method also emphases the `functions or the subroutines`.:

<img src=https://aaimagestore.s3.amazonaws.com/july2017/0014350.002.png>

### Object Oriented Programming

- A program is made up of many cooperating `objects`

- Instead of being the "whole program" - each object is a little "island" within the program and cooperatively working with other objects.

- A program is made up of one or more objects working together - objects make use of each other's capabilities

- reusability, scalability and efficiency.


Object-oriented programming (OOP) organizes software design around data, or objects, rather than functions and logic. An object can be defined as a data field that has unique attributes and behavior.OOP focuses on the objects that developers want to manipulate rather than the logic required to manipulate them. This approach to programming is well-suited for programs that are large, complex and actively updated or maintained.The organization of an object-oriented program also makes the method beneficial to collaborative development, where projects are divided into groups.




    


```python

```

### Class Objects

**An Object is an instance of a Class.**

The core-design of OOP is extracting the class, then create the instance with the temppltae:class().

- **class-def variable is static**: stored in Memory the object sill can be called after the class being deleted

- **class-def attr is static**: the parameters in the class will not change when the object's parameters are changed.

- the function define the method,so the attr's name should not be the same as the function, or it will cover the whole function.


A class is like a blueprint while an instance is a copy of the class with actual values. It’s not an idea anymore, it’s an actual dog, like a dog of breed pug who’s seven years old.

You can have many dogs to create many different instances, but without the class as a guide, you would be lost, not knowing what information is required.
An object consists of : 

- State: It is represented by the attributes of an object. It also reflects the properties of an object.

- Behavior: It is represented by the methods of an object. It also reflects the response of an object to other objects.

- Identity: It gives a unique name to an object and enables one object to interact with other objects.
    
<img src=https://media.geeksforgeeks.org/wp-content/uploads/Blank-Diagram-Page-1-5.png>

#### Declaring Objects (Also called instantiating a class)

When an object of a class is created, the class is said to be instantiated. 

All the instances share the attributes and the behavior of the class. But the values of those attributes, i.e. the state are unique for each object. A single class may have any number of instances.

Example:
<img src=https://media.geeksforgeeks.org/wp-content/uploads/Blank-Diagram-Page-1-3.png>

Declaring an object:


```python
# Python3 program to
# demonstrate instantiating
# a class

class Dog:
    
    # A simple class
    # attribute
    attr1 = "mammal"
    attr2 = "dog"
    
     # A sample method 
    def fun(self):
        print("It's a", self.attr1)
        print("It's a", self.attr2)

        
# Driver Code
#Object instantiation
Rodger = Dog()
```


```python
print(Rodger.attr1)
```

    mammal



```python
print(Rodger.attr2)
```

    dog



```python
Rodger.fun()
```

    It's a mammal
    It's a dog


In the above example, an object is created which is basically `a dog named Rodger`. T

his class only has `two class attributes` that tell us that Rodger is a `dog and a mammal`.

### Definitions

- Class - a template - Dog

- Method or Message - A defined capability o fa class- bark()

- Field or attribute- A bit of data in a class - length Object or Instance - A particular instance of a class Lassie

#### Terminology: **Class**

Defines the `abstract characteristics` of a thing (object), including the thing's characteristics (`its attributes, fields or properties`) and the `thing's behaviors` (the things it can do, or methods, operations or features). One might say that a class is a blueprint or factory that describes `the nature of something`. 

For example, the class Dog would consist of traits shared by all dogs, such as breed and fur color(characteristics), and the ability to bark and sit (behaviors).


A pattern (exemplar) of a class:

    The class of Dog defines all possible dogs by listing the characteristics and behaviors they can have; the object Lassie is one particular dog, with particular versions of the characteristics. A Dog has fur; Lassie has brown-and-white fur.
    

**Some points on Python class:**

- Classes are created by keyword class.

- Attributes are the variables that belong to a class.

- Attributes are always public and can be accessed using the dot (.) operator. 

        Eg.: Myclass.Myattribute
        
      Class Definition Syntax:

    class ClassName:

        # Statement-1
        .
        .
        .
        # Statement-N


```python
# definition:
class Car:
    def move(self):
        print('A car is running')
```


```python
# create an object:
BMW = Car()
```


```python
## add attibute:
BMW.color = 'Black'
{BMW.color}
```




    {'Black'}




```python
# call method:
BMW.move()
```

    A car is running


#### Terminology: **Instance**

One can have an instance of a class or a particular object.The instance is the actual object created at runtime.In programmer jargon, `the Lassie object is an instance of the Dog class`. The set of values of the attributes of a particular object is called its state. The object consists of state and the
behavior that's defined in the object's class.

Object and Instance are often used interchangeably

#### Terminology:**Method**

An object's abilities. In language, methods are verbs. 

Lassie, being a Dog, has the `ability to bark`. So `bark()`is one of Lassie's `methods`.

She may have other methods as well, for example sit() or eat() or walk() or save_timmy(). Within the program, using a method usually affects only one particular object; all Dogs can bark, but you need only one particular dog to do the barking Method and Message are often used interchangeably.

#### The `(self)`

Class methods must have an extra first parameter in the method definition. We **do not give a value for this parameter** when we call the method, Python provides it.If we have a method that takes no arguments, then we still have to have one argument.

**This is similar to this pointer in C++ and this reference in Java.**

When we call a method of this object as `myobject.method(arg1, arg2)`, this is automatically converted by Python into MyClass.method(myobject, arg1, arg2) – **this is all the special self is about.**
 


```python
class Car:
    def move(self):
        print(f'A {self.color} car is running,it\'s {self.name}.')
        
# create instance:
BMW = Car()
AUDI = Car()

# create attr:
BMW.color = 'Black'
BMW.name = "BMW"
AUDI.color = 'White'
AUDI.name = 'AUDI'

#call method:
AUDI.move()
BMW.move()
```

    A White car is running,it's AUDI.
    A Black car is running,it's BMW.



```python

```

#### Constructor

- The primary purpose of the constructor is to set up some instance variables to have the proper initial values when the object is created

        The constructor and destructor are optional. The constructor is typically used to set up variables.The destructor is seldom used.
        
- In object oriented programming, a constructor in a class is a special block of statements called when an object is created

- Constructors can have additional parameters.These can be used to set up instance variables for the particular instance of the class (i.e., for the particular
object).

["Our First python project"-PartyAnimal](https://books.trinket.io/pfe/14-objects.html)


```python
class PartyAnimal:
    x = 0
    
    def __init__(self):
        print('I am constructed')
        
    def party(self):
        self.x = self.x + 1
        print('So far',self.x)
    
    def __del__(self):
        print('I am destructed',self.x)
        
        
an = PartyAnimal()
an.party()
an.party()
an.party()
an.party()
an.party()
an.party()
an.party()
# an.party()
# an.party()

an = 42
print('an contains',an)
```

    I am constructed
    So far 1
    So far 2
    So far 3
    So far 4
    So far 5
    So far 6
    So far 7
    I am destructed 7
    an contains 42


#### Many Instances

- We can create lots of objects - the class is the template for the object

- We can store each distinct object in its own variable

- We call this having multiple instances of the same class

- Each instance has its own copy of the instance variables


```python
# Classes as types:

class PartyAnimal:
    x = 0
    
    def party(self):
        self.x = self.x + 1
        print("So far",self.x)
        
an = PartyAnimal()
```


```python
print("Type",type(an))
```

    Type <class '__main__.PartyAnimal'>



```python
print("dir",dir(an))
```

    dir ['__class__', '__delattr__', '__dict__', '__dir__', '__doc__', '__eq__', '__format__', '__ge__', '__getattribute__', '__gt__', '__hash__', '__init__', '__init_subclass__', '__le__', '__lt__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', 'party', 'x']



```python
print("Type",type(an.x)) 
```

    Type <class 'int'>



```python
print("Type",type(an.party))
```

    Type <class 'method'>



```python
class PartyAnimal:
    x = 0
    name = ""
    def __init__(self,z):
        self.name = z
        print(self.name,'constructed')
        
    def party(self):
        self.x = self.x + 1
        print(self.name,'party count',self.x)
    
    def __del__(self):
        print('I am destructed',self.x)
        
        
s = PartyAnimal("Sally")
s.party()
# s.party()

j = PartyAnimal("Jim")
j.party()
j.party()
s.party()

# an = 42
# print('an contains',an)
```

    Sally constructed
    I am destructed 2
    Sally party count 1
    Jim constructed
    I am destructed 2
    Jim party count 1
    Jim party count 2
    Sally party count 2





```python
class PartyAnimal:
    x = 0
    name = ""
    def __init__(self,nam):
        self.name = nam
        print(self.name,'constructed')
        
    def party(self):
        self.x = self.x + 1
        print(self.name,'party count',self.x)

        
        
#here we begin the new generation:

class FootballFan(PartyAnimal):
    points = 0
    def touchdown(self):
        self.points = self.points + 7
        self.party()
        print(self.name,"points",self.points)
```

**FootballFan is a class which extends PartyAnimal. It has all the capabilities of PartyAnimal and more:**


```python
s = PartyAnimal("Sally")
s.party()
```

    Sally constructed
    I am destructed 2
    Sally party count 1



```python
j = FootballFan("Jim")
j.party()
j.touchdown()
```

    Jim constructed
    I am destructed 2
    Jim party count 1
    Jim party count 2
    Jim points 7



```python
#read the error report carefully
k = PartyAnimal("Kim")
k.party()
k.touchdown()
```

    Kim constructed
    Kim party count 1



    ---------------------------------------------------------------------------

    AttributeError                            Traceback (most recent call last)

    <ipython-input-19-5da118385a27> in <module>
          2 k = PartyAnimal("Kim")
          3 k.party()
    ----> 4 k.touchdown()
    

    AttributeError: 'PartyAnimal' object has no attribute 'touchdown'



```python
class DiehardFan(FootballFan):
    year = 0
    def membership(self):
        self.year = self.year + 10086
        self.party()
        print(self.name,"years",self.year)

l = DiehardFan("Luka")
l.FootballFan()
l.year()
```

    Luka constructed



    ---------------------------------------------------------------------------

    AttributeError                            Traceback (most recent call last)

    <ipython-input-24-9313f3ab12ea> in <module>
          7 
          8 l = DiehardFan("Luka")
    ----> 9 l.FootballFan()
         10 l.year()


    AttributeError: 'DiehardFan' object has no attribute 'FootballFan'



```python
# ????
```


```python

```

### Built-in Method

#### `__init__()` method

The `__init__` method is similar to constructors in C++ and Java. 

Constructors are used to initializing the object’s state. 

Like methods, a constructor also contains a collection of statements(i.e. instructions) that are executed at the time of Object creation.

It runs as soon as an object of a class is instantiated. The method is useful to do any initialization you want to do with your object.

**A Sample class with `__init__` mmethod :**


```python
class Person:
    
    #init method or constructor
    def __init__(self,name):
        self.name = name
        
    # Sample method
    def say_hi(self):
        print("Hi, I'm",self.name)
p = Person('Zoe')
p.say_hi()
```

    Hi, I'm Zoe



```python
# here is the BMW:

class car:
    # def the default attribution
    def __init__(self):
        self.wheelNum = 4
        self.color = 'White'
        self.series = '530'
        self.cylinderNum = 4
        
# creat object:
BMW = car()
print(f'Car color: {BMW.color}')
print(f'Number of wheels: {BMW.wheelNum}')
print(f'Car Series: {BMW.series}')
print(f'Numer of cylinders: {BMW.cylinderNum}')
```

    Car color: White
    Number of wheels: 4
    Car Series: 530
    Numer of cylinders: 4


#### `__str__()`method

This method returns the string representation of the object. This method is called when print() or str() function is invoked on an object.

`__str__(self)` is used to define `print()`,there is no parameter in the `bracket()`,`print()`will print the `__str__(self)` retun value.

This method must return the String object. If we don’t implement __str__() function for a class, then built-in object implementation is used that actually calls __repr__() function.


```python
# `__str__(self)` sample

class Car:
    def __init__(self,newWheelNum,newColor):
        self.wheelnum = newWheelNum
        self.color = newColor
        
    def __str__(self):
        msg = f"The Car color is {self.color},there is {self.wheelnum} wheels."
        # also  {self.wheelnum:d} wheels.
        return msg
    
AUDI = Car(4,'Brown')
print(AUDI)
```

    The Car color is Brown,there is 4 wheels.



```python



```

#### `__repr__()` method

`__repr__()` function returns the object representation in string format. 

This method is called when `__repr__()` function is invoked on the object. 

If possible, the string returned should be a valid Python expression that can be used to reconstruct the object again.

You should always use `__str()__` and `__repr__()` functions, which will call the underlying `__str()__` and `__repr__()` functions.**It’s not a good idea to use these functions directly.**


##### What’s the difference between `__str()__` and `__repr__()`?

The `__str()__` function is supposed to return a human-readable format, which is good for logging or to display some information about the object. 

Whereas, the `__repr()__` function is supposed to return an “official” string representation of the object, which can be used to construct the object again. Let’s look at some examples:


```python
import datetime
now = datetime.datetime.now()
```


```python
now.__str__()
```




    '2021-06-28 13:00:36.167220'




```python
now.__repr__()
```




    'datetime.datetime(2021, 6, 28, 13, 0, 36, 167220)'



It’s clear from the output that __str__() is more human friendly whereas __repr__() is more information rich and machine friendly and can be used to reconstruct the object. 

In fact, we can use **repr() function with eval() to construct the object**.


```python
now1 = eval(repr(now))
now1 # which equals to now
```




    datetime.datetime(2021, 6, 28, 13, 0, 36, 167220)



Both of these functions are used in debugging

Let’s see what happens if we don’t define these functions for a custom object.


```python
# without str or repr def

class Person:
    def __init__(self,person_name,person_age):
        self.name = person_name
        self.age = person_age
        
        
p_0 = Person('Gigs',34)
print(p_0.__str__())
print(p_0.__repr__())
```

    <__main__.Person object at 0x1141df310>
    <__main__.Person object at 0x1141df310>


As you can see that the default implementation is useless. Let’s go ahead and implement both of these methods.


```python
# with the str or repr def

class Person:
    def __init__(self,person_name,person_age):
        self.name = person_name
        self.age = person_age
        
    def __str__(self):
        return f"Person name is {self.name}, the age is {self.age}"
    
    def __repr__(self):
        return f"Person(name = {self.name},age={self.age})"
    
p_1 = Person('Scholes',34)

print(p_1.__str__())
print(p_1.__repr__())
```

    Person name is Scholes, the age is 34
    Person(name = Scholes,age=34)


##### `__str__ and __repr__` Summary

Both __str__ and __repr__ functions return string representation of the object. The __str__ string representation is supposed to be human-friendly and mostly used for logging purposes, whereas __repr__ representation is supposed to contain information about object so that it can be constructed again. You should **never use these functions directly and always use str() and repr() functions.**

#### `__del__() method`

when use the del func,the `__del*__` is used.

del attribution:

- del object.atrr

- `__delattr__`(object, 'attr')




```python
class Animal(object):
    
    def __init__(self,name):
        self.name = name
        
    def __del__(self):
        print(f"{self.__name} is killed...")
        
dog1 = Animal("Pitbull")
dog2 = dog1

del dog1
print("deleted 1st instance")
```

    deleted 1st instance



```python
dog1()
```


    ---------------------------------------------------------------------------

    NameError                                 Traceback (most recent call last)

    <ipython-input-59-c0badd3210e3> in <module>
    ----> 1 dog1()
    

    NameError: name 'dog1' is not defined



```python
del dog2
print("deleted 2nd instance")
```

    Exception ignored in: <function Animal.__del__ at 0x112f47430>
    Traceback (most recent call last):
      File "<ipython-input-58-b6312a6f1c7e>", line 7, in __del__
    AttributeError: 'Animal' object has no attribute '_Animal__name'


    deleted 2nd instance


#### __get*__

- `__getattr__(self, item)`

     
        getattr() function is used to access the attribute value of an object and also give an option of executing the default value in case of unavailability of the key. This has greater application to check for available keys in web development and many other phases of day-to-day programming.

__getattribute__(self, item)


```python

```


```python

```

#### dataclass


Assuming that we need to extract the people from two lists of visitors:
    
    


```python
# people visited phuket

users_visited_phuket = [
    {"first_name": "Sirena", "last_name": "Gross", "phone_number": "650-568-0388", "date_visited": "2018-03-14"},
    {"first_name": "James", "last_name": "Ashcraft", "phone_number": "412-334-4380", "date_visited": "2014-09-16"},
    #... ...
]

# people visited New Zealand

users_visited_nz = [
    {"first_name": "Justin", "last_name": "Malcom", "phone_number": "267-282-1964", "date_visited": "2011-03-13"},
    {"first_name": "Albert", "last_name": "Potter", "phone_number": "702-249-3714", "date_visited": "2013-09-11"},
    # ... ...
]
```


```python
# By the properties of dictionaries:

def find_potential_customers():
    nz_records_idx = {
        (rec['first_name'], rec['last_name'], rec['phone_number'])
        for rec in users_visited_nz
    }

    for rec in users_visited_phuket:
        key = (rec['first_name'], rec['last_name'], rec['phone_number'])
        if key not in nz_records_idx:
            yield rec

```


```python

class VisitRecord:
    """旅游记录
    """
    def __init__(self, first_name, last_name, phone_number, date_visited):
        self.first_name = first_name
        self.last_name = last_name
        self.phone_number = phone_number
        self.date_visited = date_visited
        
    # 定义 hash 使对象可hash
    def __hash__(self):
        return hash(
            (self.first_name, self.last_name, self.phone_number)
        )
        
    # 定义 eq 使对象可 做差
    def __eq__(self, other):
        # 当两条访问记录的名字与电话号相等时，判定二者相等。
        if isinstance(other, VisitRecord) and hash(other) == hash(self):
            return True
        return False


# 做差集
def find_potential_customers():
    return set(VisitRecord(**r) for r in users_visited_phuket) - \
        set(VisitRecord(**r) for r in users_visited_nz)


```


```python
@dataclass(unsafe_hash=True)
class VisitRecordDC:
    first_name: str
    last_name: str
    phone_number: str
    # 跳过“访问时间”字段，不作为任何对比条件
    date_visited: str = field(hash=False, compare=False)


def find_potential_customers():
    return set(VisitRecordDC(**r) for r in users_visited_phuket) - \
        set(VisitRecordDC(**r) for r in users_visited_nz)

```


    ---------------------------------------------------------------------------

    NameError                                 Traceback (most recent call last)

    <ipython-input-4-36b42fcf2699> in <module>
    ----> 1 @dataclass(unsafe_hash=True)
          2 class VisitRecordDC:
          3     first_name: str
          4     last_name: str
          5     phone_number: str


    NameError: name 'dataclass' is not defined



```python

```

### Class proterty

#### Selifize

- `__xx__` : selfize the methods or properties which can not be imported.Sometime it can be stored as `__className__x` and called.

- `__xx__`:magic methods or properties,can not be called either from outside or by class call outside.


```python
class Msg:
    # selfize method:
    def __send_msg(self):
        print('Sending')
    # publice method, used to determin whether call private method.
    def send_msg(self,money):
        if money > 10:
            self.__send_msg()
        else:
            print('Need to charge')
            
msg = Msg()
msg.send_msg(8)

msg.send_msg(100)
```

    Need to charge
    Sending


#### Ojbect property

- Class property:the method outside the class method,callable.

- Object property:the method inside the class,which must be called by objects.The object property will cover the same-named class property,when called, the object property will be preferral.


    




```python
class People(object):
    address = 'Cao county,He ze city,Shandong' # class property
    __height__ = 180 # selfized class property
    
    def __init__(self):
        self.name = 'xiaowang' # object property
        self.age = 20 #object property
        
print(People.address)
```

    Cao county,He ze city,Shandong



```python
print(People.__height__)
```

    180



```python
print(People.__height)
```


    ---------------------------------------------------------------------------

    AttributeError                            Traceback (most recent call last)

    <ipython-input-4-d63c369200a6> in <module>
    ----> 1 print(People.__height)
    

    AttributeError: type object 'People' has no attribute '__height'



```python
print(People.mro)
```

    <built-in method mro of type object at 0x7fda35f146c0>



```python
People.mro
```




    <function People.mro()>



#### Attribute or Property?

It's a good question bro,let's move on.

I define a class Circle with radius:


```python
# class Circle(object):
#     def __init__(self,radius):
#         self.radius = radius
        
#     @property
#     def diameter(self):
#         return self.radius * 2
#     @diameter.setter
#     def diameter(self,new_diameter):
#         self.radius = new_diameter / 2
```


```python
# # now we compare the def:

# class Circle(object):
#     def __init__(self,radius,diameter):
#         sel.radius = radius
#         self.diameter = diameter
```

##### you need to rethink here @@@@@@


```python
class Circle(object):
    def __init__(self,radius,diameter):
        self.radius = radius
        self.diameter = diameter
        
my_circle = Circle(2,4)

print('Radius is {}'.format(my_circle.radius))
print('Diameter is {}'.format(my_circle.diameter))
        
```

    Radius is 2
    Diameter is 4



```python
# Change the radius into 6:
my_circle.radius = 6
print('Radius is {}'.format(my_circle.radius))
print('Diameter is {}'.format(my_circle.diameter))
```

    Radius is 6
    Diameter is 4


So here is the problem.

Initially, we define the radius is 2,thus the diameter is 4,that what we can understand as human.However, when coding,we may need to change the radius, say the radius is 6,**why the diameter is still 4??**.

Because the code is not aware the fact d = 2r.

So I would like the diameter to change itself when I modify the radius,or on the contrary.**Now we need the @property**

Here the @property comes:



```python
class Circle(object):
    def __init__(self,radius):
        self.radius = radius
        
    @property
    def diameter(self):
        return self.radius * 2
    @diameter.setter
    def diameter(self,new_diameter):
        self.radius = new_diameter / 2
```


```python
my_circle = Circle(2)
print('Radius is {}'.format(my_circle.radius))
print('Diameter is {}'.format(my_circle.diameter))
```

    Radius is 2
    Diameter is 4



```python
# Change the radius into 6:
my_circle.radius = 6
print('Radius is {}'.format(my_circle.radius))
print('Diameter is {}'.format(my_circle.diameter))
```

    Radius is 6
    Diameter is 12



```python
# Change the diameter into 6:
my_circle.diameter = 6
print('Radius is {}'.format(my_circle.radius))
print('Diameter is {}'.format(my_circle.diameter))
```

    Radius is 3.0
    Diameter is 6.0


[notes](https://www.zhihu.com/question/40015172/answer/284427895): Property looks like the attribute with the function.

### Object

- An Object is a bit of self-contained Code and Data

- A key aspect of the Object approach is to break the problem into smaller understandable parts (divide and conquer)

- Objects have boundaries that allow us to ignore un-needed detail

 - We have been using objects all along: String Objects,
    Integer Objects, Dictionary Objects, List Objects.....

#### Using Objects

Python provides us with many built-in objects. 


```python
stuff = list()
stuff.append('python')
stuff.append('chuck')
stuff
```




    ['python', 'chuck']




```python
stuff.sort()
stuff
```




    ['chuck', 'python']




```python
print(stuff[0])
```

    chuck



```python
print(stuff.__getitem__(0))
```

    chuck



```python
print(list.__getitem__(stuff,0))
```

    chuck


The first line is constructing an object of type list, the second and third lines are calling the append() method, the fourth line is calling the sort() method, and the fifth line is retrieving the item at position 0.

The sixth line is calling the __getitem__() method in the stuff list with a parameter of zero.

print (stuff.__getitem__(0))

The seventh line is an even more verbose way of retrieving the 0th item in the list.

print (list.__getitem__(stuff,0))

In this code, we care calling the __getitem__ method in the list class and passing in the list (stuff) and the item we want retrieved from the list as parameters.

### Class example


```python
class PartyAnimal:
    x = 0
    
    def party(self):
        self.x = self.x + 1
        print("So far",self.x)
        
an = PartyAnimal
```


```python
class PartyAnimal:
    x = 0
    name = ''
    def __init__(self,nam):
        self.name = nam
        print(self.name,'constructed')
        
    def party(self):
        self.x = self.x + 1
        print(self.name,'party count',self.x)
```

#### Playing with dir() and type()

**A Nerdy Wasy to Find Capabilities**

- The dir() command lists capabilities

- Ignore the ones with underscores-these are used by Python itself

- The rest are real operations that the object can perform

- It is like type()-it tells us something *about* a variable

### Object Lifeycle

- Objects are created, used and discarded

- We have special blocks of code (methods) that get called
    - At the moment of creation (constructor)
    - At the moment of destruction (destructor)

- Constructors are used a lot

- Destructors are seldom used

### Definitions summary:

- Class - a template

- Attribute - A variable within a class

- Method - A function within a class

- Object - A particular instance of a class

- Constructor - Code that runs when an object is created

- Inheritance - The ability to extend a class to make a new class


**Summary**

- Object Oriented programming is a very structured approach to code reuse

- We can group data and functionality together and create many independent instances of a class

## Three specific features in  Object Oriented Programming:





面向对象编程有三大重要特征：封装、继承和多态。
封装

封装是指将数据与具体操作的实现代码放在某个对象内部，使这些代码的实现细节不被外界发现，外界只能通过接口使用该对象，而不能通过任何形式修改对象内部实现，正是由于封装机制，程序在使用某一对象时不需要关心该对象的数据结构细节及实现操作的方法。使用封装能隐藏对象实现细节，使代码更易维护，同时因为不能直接调用、修改对象内部的私有信息，在一定程度上保证了系统安全性。类通过将函数和变量封装在内部，实现了比函数更高一级的封装。

### [Encapsulation](https://www.geeksforgeeks.org/encapsulation-in-python/)


```python

```


```python

```


```python

```


```python

```


```python

```


```python

```


```python

```

### [Inheritance](http://www.ibiblio.org/g2swap/byteofpython/read/inheritance.html)

- When we make a new class - we can `reuse` an `existing class` and `inherit all the capabilities of an existing class` and then `add our own little bit to make our new class`

- Another `form` of store and reuse

- `Write once - reuse many times`

- The new class `(child)` has all the capabilities of the old class (parent)- `and then some more`

    -”长江后浪推前浪“-the younger generation excels the older generation.



**Inheritance is the capability of one class to derive or inherit the properties from another class.** 

The benefits of inheritance are: 

- 1 It represents real-world relationships well.
    
- 2 It provides **reusability** of a code. We don’t have to write the same code again and again. Also, it allows us to add more features to a class without modifying it.
    
- 3 It is transitive in nature, which means that if class B inherits from another class A, then all the subclasses of B would automatically inherit from class A.

Below is a simple example of inheritance in Python: 

**Notice the "Person" in the bracket,that's the core expression of the inheritance**


```python
# A Python program to demonstrate inheritance 
   
# Base or Super class. Note object in bracket.
# (Generally, object is made ancestor of all classes)
# In Python 3.x "class Person" is 
# equivalent to "class Person(object)"
class Person(object):
    # Constructor
    def __init__(self,name):
        self.name = name
    # To get name
    def getName(self):
        return self.name
    # To check if this person is an employee
    def isEmployee(self):
        return False

    
# Inherited or Subclass (Note the "Person" in bracket)
class Employee(Person):
    #here we return True:
    def isEmployee(self):
        return True

    
# Driver code
emp = Person("Geek1") #An Object of person
print(emp.getName(),emp.isEmployee())

emp = Employee("Geek2") #An Object of Employee
print(emp.getName(),emp.isEmployee())
```

    Geek1 False
    Geek2 True


#### Subclassing (Calling constructor of parent class) 

A child class needs to identify which class is its parent class. This can be done by mentioning the parent class name in the definition of the child class. 
**Eg: class subclass_name (superclass_name): **


```python
# Python code to demonstrate how parent constructors
# are called and how the child class created: notice the Person in the bracket

# Parent class
class Person(object):
    # __init__ is known as the constructor
    def __init__(self,name,idnumber):
        self.name = name
        self.idnumber = idnumber
    def display(self):
        print(self.name)
        print(self.idnumber)
        
# Child class
class Employee(Person):
    def __init__(self,name,idnumber,salary,post):
        self.salary = salary
        self.post = post
        
        # Invoking the  __init__ of the Parent class
        Person.__init__(self,name,idnumber)
        
# Creation of an object variable or an instance:
a = Employee("Evan",886012,200000,"Intern")

# Calling a function of the class Person using its instance
a.display()
        
  
```

    Evan
    886012


`‘a’` is the instance created for the `class Person`.

It invokes the `__init__()` of the referred class. 
You can see ‘object’ written in the declaration of the `class Person`. 

In Python, every class inherits from a built-in basic class called ‘object’. The constructor i.e. the `‘__init__’` function of a class is **invoked** when we create an object variable or an instance of the class.

The variables defined within `__init__()` are called as the **instance variables** or **objects**. Hence, ‘name’ and ‘idnumber’ are the objects of the class Person.Similarly, ‘salary’ and ‘post’ are the objects of the class Employee. Since the class Employee inherits from class Person, ‘name’ and ‘idnumber’ are also the objects of class Employee.

If you forget to invoke the `__init__()` of the parent class then its instance variables would not be available to the child class. The following code produces an **ERROR** for the same reason. 
 


```python
# Python program to demonstrate ERROR if we
# forget to invoke __init__() of the parent.

class A:
      def __init__(self, n = 'Rahul'):
              self.name = n
class B(A):
      def __init__(self, roll):
              self.roll = roll
  
object = B(23)
print (object.name)
```


    ---------------------------------------------------------------------------

    AttributeError                            Traceback (most recent call last)

    <ipython-input-2-f5d5e29ab6ef> in <module>
         10 
         11 object = B(23)
    ---> 12 print (object.name)
    

    AttributeError: 'B' object has no attribute 'name'


#### Different forms of Inheritance:


- Single Inheritance 

- Multiple Inheritance 

- Multilevel inheritance

- Hierarchical inheritance

- Hybrid inheritance


##### 1. **Single inheritance**

When a child class inherits from only one parent class, it is called single inheritance. **We saw an example above.**
here is our another eg.:


```python
class Cat(object):
    def __init__(self, name, color="white"):
        self.name = name
        self.color = color
    def run(self):
        print(f"{self.name} is running")

class Bosi(Cat):
    def setNewName(self, newName):
        self.name = newName
    def eat(self):
        print(f"{self.name} is eating")
        
bs = Bosi("Indian")
print(f"Name: {bs.name}")
print(f"Color : {bs.color}")
bs.eat()
bs.setNewName('Persian')
bs.run()
```

    Name: Indian
    Color : white
    Indian is eating
    Persian is running




##### 2. **Multiple inheritance**

When a child class inherits from multiple parent classes, it is called multiple inheritance. Unlike Java and like C++, Python supports multiple inheritance. We specify all parent classes as a comma-separated list in the bracket. 


```python
# Python example to show the working of multiple 
# inheritance

class Base1(object):
    def __init__(self):
        self.str1 = "Geek1"
        print("Base1")
  

class Base2(object):
    def __init__(self):
        self.str2 = "Geek2"        
        print("Base2")
  

class Derived(Base1,Base2):# Notice the Base1 and Base2 in the bracket
    def __init__(self):
        
        #Calling constructors of Base1
        # and Base2 classes
        Base1.__init__(self)
        Base2.__init__(self)
        print("Derived")
          
    def printStrs(self):
        print(self.str1, self.str2)
        
obob = Derived()
ob.printStrs()
```


    ---------------------------------------------------------------------------

    TypeError                                 Traceback (most recent call last)

    <ipython-input-10-1643908923d2> in <module>
          2 # inheritance
          3 
    ----> 4 class Base1(object):
          5     def __init__(self):
          6         self.str1 = "Geek1"


    TypeError: __init__() takes 2 positional arguments but 4 were given


##### 3. **Multilevel inheritance**

When we have a **child and grandchild relationship**.


```python
# A Python program to demonstrate inheritance 
  
# Base or Super class. Note object in bracket.
# (Generally, object is made ancestor of all classes)
# In Python 3.x "class Person" is 
# equivalent to "class Person(object)"

class Base(object):
    
    #Constructor
    def __init__(self,name):
        self.name = name
        
    #To get name
    def getName(self):
        return self.name
    
#Inherited or Sub class (Again, Note Person in bracket)

class Child(Base):
    
    #Constructor
    def __init__(self,name,age):
        Base.__init__(self,name)
        self.age = age
        
    # To get age
    def getAge(self):
        return self.age
    
#Inherited or Sub class(Note Person in Bracket)
class GrandChild(Child):
    
    #Constructor
    def __init__(self,name,age,address):
        Child.__init__(self,name,age)
        self.address = address
        
    # To get address:
    def getAddress(self):
        return self.address
    
#Driver Code
g = GrandChild("Geek1",23,"Nodia")
print(g.getName(),g.getAge(),g.getAddress())


```


    ---------------------------------------------------------------------------

    TypeError                                 Traceback (most recent call last)

    <ipython-input-11-096faf7484a3> in <module>
          6 # equivalent to "class Person(object)"
          7 
    ----> 8 class Base(object):
          9 
         10     #Constructor


    TypeError: __init__() takes 2 positional arguments but 4 were given


**Notes:**

There 3 classes in this eg: Base,Child and GrandChild，which invoke the `__init__()` for getting Names(getName),Ages(getAge) and address(getAddress) respectively.

##### 4. **Hierarchical inheritance**

**More than one derived classes** are created **from a single base**.


##### 5. **Hybrid inheritance**

This form combines more than one form of inheritance. 

Basically, it is a blend of **more than one type of inheritance**.


**Private members of parent class**

We don’t always want the instance variables of the parent class to be inherited by the child class i.e. we can make some of the instance variables of the parent class private, which won’t be available to the child class. 

We can make an instance variable by adding double underscores before its name. For example:


```python
# Python program to demonstrate private members
# of the parent class

class C(object):
    def __init__(self):
        self.c = 21
        
        # d is a private instance variable:
        self.__d = 42
        
class D(C): #Inheriting
    def __init__(self):
        self.e = 84
        C.__init__(self)

object1 = D()

# produce an error as d is private instance variable:
print(object1.d)
```


    ---------------------------------------------------------------------------

    AttributeError                            Traceback (most recent call last)

    <ipython-input-1-9d5a02ca4f18> in <module>
         17 
         18 # produce an error as d is private instance variable:
    ---> 19 print(object1.d)
         20 


    AttributeError: 'D' object has no attribute 'd'


Since ‘d’ is made private by those underscores, it is not available to the child class ‘D’ and hence the error.

### Method Overriding

Method overriding is an ability of **any object-oriented programming language** that **allows a subclass or child class to provide a specific implementation of a method** that is **already provided by one of its super-classes or parent classes**.

When a method in a **subclass has the same name, same parameters or signature and same return type(or sub-type) as a method in its super-class**, then the **method in the subclass is said to override the method in the super-class**.

<img src=https://media.geeksforgeeks.org/wp-content/uploads/20200114114917/overriding-in-python.png>

The version of a method that is executed will be **determined by the object that is used to invoke it**.

If an object of a parent class is used to invoke the method, then the version in the parent class will be executed, but if an object of the subclass is used to invoke the method, then the version in the child class will be executed. In other words, **it is the type of the object being referred to (not the type of the reference variable) that determines which version of an overridden method will be executed**.

Example:


```python
# Python program to demonstrate 
# method overriding

# Defining parent class

class Parent():
    
    # Constructor
    
    def __init__(self):
        self.value = "Inside Parent"
        
    # Parent's show method:
    def show(self):
        print(self.value)
        
# Defining the Child class
class Child(Parent):
    
    # Constructor
    def __init__(self):
        self.value = "Inside Child"
        
    # Child's show method
    def show(self):
        print(self.value)
        
# Driver's code:
obj1 = Parent()
obj2 = Child()

obj1.show()
obj2.show()
```

    Inside Parent
    Inside Child


[Method overriding with multiple and multilevel inheritance](https://www.geeksforgeeks.org/method-overriding-in-python/)

### [Polymophism](https://www.geeksforgeeks.org/polymorphism-in-python/)

What is **Polymorphism**

The word **polymorphism** means **having many forms**. 

In programming, polymorphism means **same function name (but different signatures) being uses for different types**.

**Example of inbuilt polymorphic functions :**


```python
# Python program to demonstrate in-built poly-
# morphic functions
  
# len() being used for a string

print(len("Geeks"))

#len being used for a list
print(len([10,20,30]))
```

    5
    3


**Examples of used defined polymorphic functions :**


```python
def add(x,y,z = 0):
    return x + y + z

# Driver code
print(add(2,3))
print(add(2,3,4))
```

    5
    9


#### Polymorphism with class methods:

Below code shows how python can use two different class types, in the same way.

We create a for loop that iterates through **a tuple of objects**. 

Then call the methods without being concerned about which class type each object is.

We assume that these methods actually exist in each class.


```python
class India():
    def capital(self):
        print("New Delhi is the capital of India.")
    def language(self):
        print("Hindi is the most widely spoken language of India.")
        
    def type(self):
        print("India is a developing country.")
        
class USA():
    def capital(self):
        print("DC is the capital of the USA")
    def language(self):
        print("English is the official language of USA.")
        
    def type(self):
        print("USA is a developed country.")
        
        
obj_ind = India()
obj_usa = USA()

for country in (obj_ind,obj_usa):
    country.capital()
    country.language()
    country.type()
```

    New Delhi is the capital of India.
    Hindi is the most widely spoken language of India.
    India is a developing country.
    DC is the capital of the USA
    English is the official language of USA.
    USA is a developed country.


#### Polymorphism with Inheritance:

In Python, Polymorphism lets us define methods in the child class that have the same name as the methods in the parent class. 

In inheritance, the child class inherits the methods from the parent class. However, it is possible to modify a method in a child class that it has inherited from the parent class. This is **particularly useful in cases where the method inherited from the parent class doesn’t quite fit the child class.**

In such cases, we re-implement the method in the child class. This process of re-implementing a method in the child class is known as Method Overriding.


```python
class Bird:
  def intro(self):
    print("There are many types of birds.")
      
  def flight(self):
    print("Most of the birds can fly but some cannot.")
    
class sparrow(Bird):
  def flight(self):
    print("Sparrows can fly.")
      
class ostrich(Bird):
  def flight(self):
    print("Ostriches cannot fly.")
      
obj_bird = Bird()
obj_spr = sparrow()
obj_ost = ostrich()
  
obj_bird.intro()
obj_bird.flight()
  
obj_spr.intro()
obj_spr.flight()
  
obj_ost.intro()
obj_ost.flight()
```

    There are many types of birds.
    Most of the birds can fly but some cannot.
    There are many types of birds.
    Sparrows can fly.
    There are many types of birds.
    Ostriches cannot fly.



```python

```


```python

```

https://realpython.com/python-super/


```python

```


```python

```
