# Py4e Functions/ Control/ Iterations Chap 3-5

## 1. Chap 3 Conditional execution


### 1.1. Boolean expressions
    
    A boolean expression is an expression that is either true or false. The following examples use the operator ==, which compares two operands and produces True if they are equal and False otherwise:


```python
5 == 5 or 5 == 6
```




    True




```python
5 == 5 and 5 == 6
```




    False



### 1.2. Logical operators

There are three logical operators: and, or, and not. The semantics (meaning) of these operators is similar to their meaning in English. For example,


```python
x = 42
x > 0 and x < 10
```




    False



### 1.3. Conditional execution

- In order to write useful programs, we almost always need the ability to check conditions and change the behavior of the program accordingly.

<img src="https://cdn.mathpix.com/snip/images/MKq_-B9Ux7_MjK0TzW2eizJfFsAbJ8QTvgoOY2nf5TU.original.fullsize.png" />


```python
num = input('Show me your x :')
x = float(num)
if x > 0 :
    print('x is positive')
```

    Show me your x : 9


    x is positive


### 1.4. Alternative execution

A second form of the if statement is alternative execution, in which there are two 

possibilities and the condition determines which one gets executed.

yes, there are some loopholes in the first conditional execution.so let's improve it:


```python
num = input('Show me your x :')
x = float(num) # yeah, we need to make clear of the value
if x > 0 :
    print('x is positive')
else:
    print('x is NOT positive')
```

    Show me your x :s



    -----------------------------------------------------------------------

    ValueError                            Traceback (most recent call last)

    <ipython-input-1-08eb78ed4d0e> in <module>
          1 num = input('Show me your x :')
    ----> 2 x = float(num) # yeah, we need to make clear of the value
          3 if x > 0 :
          4     print('x is positive')
          5 else:


    ValueError: could not convert string to float: 's'



```python
# another try:
if x%2 == 0 :
    print('x is even')
else :
    print('x is odd')
```

<img src="https://cdn.mathpix.com/snip/images/TYEywpmnHnwRj8bOqoHeHLPlJ3KqW9u1kNiq7z2xoSQ.original.fullsize.png" />

### 1.5. Chained conditionals

Sometimes there are more than two possibilities and we need more than two branches. One way to express a computation like that is a chained conditional:


```python
x = float(input('Enter the x-'))
y = float(input('Enter the y-'))

if x < y:
    print('x is less than y')
elif x > y:
    print('x is greater than y')
else:
    print('x and y are equal')
# elif is an abbreviation of "else if." Again, exactly one branch will be executed.
```

    Enter the x-2
    Enter the y-2
    x and y are equal


<img src="https://cdn.mathpix.com/snip/images/_MOB1x2sM0kHkEFqxV-iS6FAndUUs1l3zhuZjg0xg6E.original.fullsize.png" />



### 1.6. Nested conditionals

One conditional can also be nested within another. We could have written the three-branch example like this:

<img src="https://cdn.mathpix.com/snip/images/58aDmDBP1uVsqtvgijTVrb7nLuNWBsdcW1KeRStEBaI.original.fullsize.png" />


```python
x = float(input('Enter the x:'))
y = float(input('Enter the y:'))

if x == y:
    print('x and y are equal')
else:   # here is the tricky part where different with precious cases.
    if x < y :
        print('x is less than y')
    else:
        print('x is greater than y')
# look at the indents for the elses.
```

    Enter the x: -10
    Enter the y: 9


    x is less than y


### 1.7. The Try/Except Structure

- You surround a dangerous section of code with try and except. 

- If the code in the try works - the `except is skipped`

- If the code in the try fails - it `jumps` to the except section.


        Try/Except:a fort of the code, if the code does not work, the whole code would not explode, and the code stopped at the wrong point.In this way, elif looks better, which may have less errors of conditions.

		Try:just try……
			Experiment, do check the codes can do , if not , the codes will not blow up, instead just run the commands you code below the except part

#### 1.7.1. Temperature converter (Fahrenheit to Celsius)

There is a conditional execution structure built into Python to handle these types of expected and unexpected errors called "try / except". The idea of try and except is that you know that some sequence of instruction(s) may have a problem and you want to add some statements to be executed if an error occurs. These extra statements (the except block) are ignored if there is no error.

You can think of the try and except feature in Python as an "insurance policy" on a sequence of statements.

**We can write our temperature converter as follows:**


```python
inp = input('Enter Fahrenheit Temprature:')
try:
    fahr = float(inp)
    cel = (fahr - 32.0) * 5.0 / 9.0
    print(cel)
except:
    print('Error,please enter a number.')
```

    Enter Fahrenheit Temprature: -9


    -22.77777777777778


## 2. Chap 4 Functions

### 2.1. Python Functions

There are two kinds of functions in Python：

 - Built-in functions that are provided as part of Python - **print(),input(), type(), float(), int()**...
 
 - Functions that **we define** ourselves and then use

We treat the built-in function names as "new" reserved words

    (i.e., we avoid them as variable names)



### 2.2. Built-in functions


```python
max('Hello world'),min('Hello world'),len('Hello world')
```




    ('w', ' ', 11)



### 2.3. Type conversion functions


```python
int('32'),int(3.99999999),int(-2.3),float(32),float(3.1415926)
```




    (32, 3, -2, 32.0, 3.1415926)



### 2.4. Random Numbers


```python
import random

for i in range (5):
    x = random.random()
    print(x)
```

    0.3398190019806945
    0.8235052807451866
    0.702920762698044
    0.6202459645279884
    0.8841809143798673


### 2.5. Math functions


```python
import math
radians = 0.7
x = math.sin(radians)
x
```




    0.644217687237691



### 2.6. **def** : Building our Own Functions

- We create a new function using the **def** keyword followed by optional parameters in parentheses

- We indent the body of the function

- This defines the function but does not execute the body of thefunction




```python
def print_lyrics():
    print("I'm a lumberjack, and I'm okay.")
    print('I sleep all night and I work all day.')
```


```python
print_lyrics()
```

    I'm a lumberjack, and I'm okay.
    I sleep all night and I work all day.


Once you have defined a function, you can use it inside another function. For example, to repeat the previous refrain, we could write a function called repeat_lyrics:


```python
def repeat_lyrics():
    print_lyrics()
    print_lyrics()
```


```python
repeat_lyrics()
```


    ---------------------------------------------------------------------------

    NameError                                 Traceback (most recent call last)

    <ipython-input-71-20fd9c9b5f86> in <module>
    ----> 1 repeat_lyrics()
    

    NameError: name 'repeat_lyrics' is not defined


### 2.7. Parameters and arguments

Some of the built-in functions we have seen require arguments. For example, when you call math.sin() you pass a number as an argument. Some functions take more than one argument: math.pow takes two, the base and the exponent.Inside the function, the arguments are assigned to variables called parameters. 

**Arguments**

- An argument is a value we pass into the function as its input when we call the function

- We use arguments so we can direct the function to do different kinds of work when we call it at different times

- We put the arguments in parentheses after the name of the function


```python
def print_twice(Tony):
    print(Tony)
    print(Tony)
```


```python
print_twice()
```


    -----------------------------------------------------------------------

    TypeError                             Traceback (most recent call last)

    <ipython-input-6-f7e8ac230cdf> in <module>
    ----> 1 print_twice()
    

    TypeError: print_twice() missing 1 required positional argument: 'Tony'



```python
print_twice(Tony)
```


    -----------------------------------------------------------------------

    NameError                             Traceback (most recent call last)

    <ipython-input-7-f81973166066> in <module>
    ----> 1 print_twice(Tony)
    

    NameError: name 'Tony' is not defined


**Parameters**

A parameter is a variable which we use in the function definition. It is a "handle" that allows the code in the function to access the arguments for a particular function invocation.


```python
print_twice('Zoe')
```

    Zoe
    Zoe



```python
# yes, we need to know how it make mistakes.
```


```python
print_twice('Wendy' * 4)
```

    WendyWendyWendyWendy
    WendyWendyWendyWendy


### 2.8. Return Values

Often a function will take its arguments, do some computation, and return a value to be used as the value of the function call in the calling expression. The return keyword is used for this.


```python
def greet():
    return "Hello"

print(greet(),'Tony')
print(greet(),'Zoe')
```

    Hello Tony
    Hello Zoe


#### 2.8.1. def and return value

- A"fruitful" function is one that produces a **result** (or **return value**)

- The **return** statement ends the function execution and **"sends back"** the result of the function


```python
def greet(language):
    if language == 'Es':
        return 'Hola'
    elif language == 'Fr':
        return 'Bonjour'
    else:
        return 'Hello'
```


```python
lang = ['其他','Es','Fr']

nam = ['Tony','Zoe','Wendy']

tag = [1,2,3]

for i,j,k in zip(tag,lang,nam):
    print(i,greet(j),k)
    
#Bonus: zip()
```

    1 Hello Tony
    2 Hola Zoe
    3 Bonjour Wendy


### 2.9. yield statement

`yield` is a keyword that is used like `return`, except **the function will return a generator**.

One thing:

**When to use yield instead of return ？**

The yield statement suspends function’s execution and sends a value back to the caller, but **retains enough state to enable function to resume** where it is left off. 

When resumed, the function **continues execution** immediately after the last yield run. 

This allows its code to **produce a series of values over time**, rather than computing them at once and sending them back like a list.


```python
# A Simple Python program to demonstrate working
# of yield
  
# A generator function that yields 1 for the first time,
# 2 second time and 3 third time
def simpgenerfunc():
    yield 1
    yield 2
    yield 3
    
# Driver code to check above generator function
for i in simpgenerfunc():
    print(i)
```

    1
    2
    3


Return sends a specified value back to its caller whereas **Yield can produce a sequence of values**.

We **should use yield when we want to iterate over a sequence**, but don’t want to store the entire sequence in memory.

**Yield are used in Python generators.** 

A generator function is defined like a normal function, but whenever it needs to generate a value, it does so with the yield keyword rather than return. 

If the body of a def contains yield, the function automatically becomes a generator function.


```python
# A Python program to generate squares from 1
# to 100 using yield and therefore generator
  
# An infinite generator function that prints
# next square number. It starts with 1

def next_sqr():
    i = 1;
    #An infinite loop to generate squares
    while True:
        yield i * i 
        i = i + 1 # Next execution resumes 
                  # from this point (or i += 1)
            
# Driver code to test above generator 
# function
for num in next_sqr():
    if num > 100:
        break # nice end!
    print(num)
```

    1
    4
    9
    16
    25
    36
    49
    64
    81
    100



```python
def create_generator():
    mylist = range(3) #print(list(range(3)))
    for i in mylist:
         yield i * i
            
mygenerator = create_generator() # create the generator
print(mygenerator)
```

    <generator object create_generator at 0x165b67cf0>



```python
for i in mygenerator:
    print(i)
```

    0
    1
    4


To master `yield`, you must understand:

**When you call the function, the code you have written in the function body does not run.**

The function only returns the generator object, this is a bit tricky.

#### 2.9.1. yield from

The basic idea is that if you have a function, it’s normal to call other functions from within it. 


That’s a standard technique in programming, one which allows us to write shorter, more specific functions, as well as to take advantage of abstraction.


But what if you have a generator that wants to return data from another generator, or any other iterable? 

You could do something like this:


```python
def wrapper(data):
    for one_item in data:
        yield one_item

g = wrapper('abCdeFg')
list(g)
```




    ['a', 'b', 'C', 'd', 'e', 'F', 'g']



In other words, we turn to “g”, our generator. 

And with each iteration, we ask it for its next element. 

What does the generator do? It invokes a “for” loop on “data”.

So with each iteration, we’re asking “g”, and “g” is asking “data”. 

We can **shorten this code with “yield from”**:


```python
def wrapper(data):
    yield from data
    
f = wrapper('abCdeFg')
list(f)
```




    ['a', 'b', 'C', 'd', 'e', 'F', 'g']




```python

```


```python

```

### 2.10. Void (non-fruitful) Functions

- When a function does not return a value. we call it a "void"function

- Functions that return values are fruitful" functions

- Void functions are "not fruitful"

### 2.11. Why functions?


- Creating a new function gives you an opportunity to name a group of statements, which makes your program easier to read, understand, and debug.

- Functions can make a program smaller by eliminating repetitive code. Later, if you make a change, you only have to make it in one place.

- Dividing a long program into functions allows you to debug the parts one at a time and then assemble them into a working whole.

- Well-designed functions are often useful for many programs. Once you write and debug one, you can reuse it.


#### 2.11.1. To function or not to function

- Organize your code into "paragraphs"- capture a complete thought and "name it'

- Don't repeat yourself- make it work once and then reuse it

- If something gets too long or complex, break it up into logical chunks and put those chunks in functions

- Make a library of common stuff that you do over and over:perhaps share this with your friends.

## 3. Chap 5 Loops and Iteration

### 3.1. Repeated steps with `while` statement

Loops (repeated steps) have iteration variables that change each time through a loop.  

Often these iteration variables go through a sequence of numbers.


```python
n = 5
while n > 0:
    print(n)
    n = n - 1
print('Blastoff!')
print(n)
```

    5
    4
    3
    2
    1
    Blastoff!
    0



```python
# Infinite loop: just try
# n = 5
# while n > 0:
#     print('lather')
# print('Dry off')
```


      File "<ipython-input-9-0cd2a1b76599>", line 1
        Infinite loop: just try
                 ^
    SyntaxError: invalid syntax



#### 3.1.1. Flow of execution for a while statement

- Evaluate the condition, yielding `True or False`.

- If the condition is false, exit the `while` statement and `continue execution` at the next statement.

- If the condition is true, `execute the body` and then `go back to step 1`.


This type of flow is called a loop because the third step loops back around to the top. We call each time we execute the body of the loop an iteration. For the above loop, we would say, "It had five iterations", which means that the body of the loop was executed five times.


The body of the loop should `change the value` of one or more variables so that `eventually` the `condition becomes false and the loop terminates`.

We call the variable that changes each time the loop executes and controls when the loop finishes the **iteration variable**. 

If there is **no iteration variable**, the loop will repeat forever, resulting in an **infinite loop.**

### 3.2. Breaking Out of a Loop(using break)

- The break statement ends the current loop and jumps to the statement immediately following the loop

- It is like a loop test that can happen anywhere in the body of the loop


```python
while True:
    line = input('>>>> ')
    if line == 'done':
        break
    print(line)
print('Done!!')
#     here: when it prints "done??"just when break
```

    >>>> 
    
    >>>> done
    Done!!


### 3.3. Finishing an Iteration with **continue**(using continue)

The continue statement ends the current iteration and jumps to the top of the loop and starts the next iteration


```python
while True:
    line = input('>>>> ')
    if line[0] =='#':
        continue
    if line == 'done':
        break
    print(line)
print('Done!')
```

    >>>> 



    -----------------------------------------------------------------------

    IndexError                            Traceback (most recent call last)

    <ipython-input-10-1e0c058812ab> in <module>
          1 while True:
          2     line = input('>>>> ')
    ----> 3     if line[0] =='#':
          4         continue
          5     if line == 'done':


    IndexError: string index out of range


71
###### Indefinite Loops

- While loops are called indefinite loops" because they keep going until a logical condition becomes False

- The loops we have seen so far are pretty easy to examine to seeif they will terminate or if they will be "infinite loops"

- Sometimes it is a little harder to be sure if a loop will terminate



### 3.4. Definite Loops

- Quite often we have a list of items of the lines in a file effectively a finite set of things

- We can write a loop to run the loop once for each ofthe items ina set using the Python for construct

- These loops are called “definite loops" because they execute anexact number of times

- We say that "definite loops iterate through the members of a set"


```python
# a simple definite loop:
for i in [5,4,3,2,1]:
    print(i)
print('Finished.')
# look at the indent which means after the loop of 5 to 1, it prints"Finished"
```

    5
    4
    3
    2
    1
    Finished.


### 3.5. Looking at the "in"

- The iteration variable"iterates" through thesequence (ordered set)

- The block (body) of code isexecuted once for eachvalue in the sequence

- The iteration variable movesthrough all of the values inthe sequence


```python
for i in [5,4,3,2,1]:
    print(i)
#i: iterantion variable
#[5,4,3,2,1] : 5-element sequence
```

    5
    4
    3
    2
    1


### 3.6. Loop ldioms:

- What We Do in Loops:Idioms and loop idioms are patterns that have to do with how we construct loops

- Note: Even though these examples are simple,the patterns apply to all kinds of loops

- The trick is "knowing" somethingabout the whole loop when youare stuck writing code that onlysees one entry at a time

**Loop Structure:**

- Set some variables toinitial values
- for thing in data:
    - Look for something ordo something to each entry separately,updating a variable

- Look at the variables



### 3.7. for i in range(len(variables))

`len()` the number of elements in the variable.

thus for i in range(len(vars)) means we loop the iteration for the times got by the number of elements in the variable.


```python
snacks = [("bacon", 350), ("donut", 240), ("muffin", 190)]

for i in range(0):
    item = snacks[i]
    print(item)
```


```python
#wow, nothing.
```


```python
for i in range(1):
    item = snacks[i]
    print(item)
```

    ('bacon', 350)



```python
for i in range(2):
    item = snacks[i]
    print(item)
```

    ('bacon', 350)
    ('donut', 240)



```python
for i in range(3):
    item = snacks[i]
    print(item)
```

    ('bacon', 350)
    ('donut', 240)
    ('muffin', 190)



```python
for i in range(4):
    item = snacks[i]
    print(item)
```

    ('bacon', 350)
    ('donut', 240)
    ('muffin', 190)



    ---------------------------------------------------------------------------

    IndexError                                Traceback (most recent call last)

    <ipython-input-67-4f69bd79c038> in <module>
          1 for i in range(4):
    ----> 2     item = snacks[i]
          3     print(item)


    IndexError: list index out of range



```python
for i in range(len(snacks)):
    item = snacks[i]
    print(item)
```

    ('bacon', 350)
    ('donut', 240)
    ('muffin', 190)


### 3.8. loop in application


```python
# couting a loop
zork = 0 
print('Before',zork)

for i in [9,41,12,3,74,7,22,12]:
    zork = zork + 1
    print(zork,i)
print('After',zork)
```

    Before 0
    1 9
    2 41
    3 12
    4 3
    5 74
    6 7
    7 22
    8 12
    After 8


To count how many times we execute a loop, we introduce a counter variable that starts at O and we add one to it each time through the loop.

In the same way, we can do the sum.While the zork has different meaning.


```python
# sum each time through the loop.
zork = 0
print('Before',zork)

for i in [9,41,12,3,74,7,22,12]:
    zork = zork + i
    print(zork,i)
print('After',zork)

# To add up a value we encounter in a loop, 
# we introduce a sum vaniable thatstarts at O ,
# and we add the value to the sum each time through the loop.
```

    Before 0
    9 9
    50 41
    62 12
    65 3
    139 74
    146 7
    168 22
    180 12
    After 180



```python
# also, we can define the name as usual and find the average 
print("_____Find the Average in a loop____")
count = 0
sum = 0
print('Before',count,sum)
for value in [9,41,12,3,74,7,22,12]:
	count = count + 1
	sum = sum + value
	print(count,sum,value)
print('After',count,sum,sum/count)
```

    _____Find the Average in a loop____
    Before 0 0
    1 9 9
    2 50 41
    3 62 12
    4 65 3
    5 139 74
    6 146 7
    7 168 22
    8 180 12
    After 8 180 22.5



```python
# find the number greater than 20
print("1.find the number greater than 20")
print('Before')
for value in [9,41,12,3,74,7,22,12]:
	if value > 20:
		print("Large number", value)
print('After')
```

    1.find the number greater than 20
    Before
    Large number 41
    Large number 74
    Large number 22
    After



```python
#Search Using a Boolean Variable:
print("2.Search Using a Boolean Variable")

found = False # look at the initial boolean value
print('Before',found)
for value in [9,41,12,3,74,7,22,12]:
	if value == 3:
		found = True
	print(found, value)
print('After',found)
```

    2.Search Using a Boolean Variable
    Before False
    False 9
    False 41
    False 12
    True 3
    True 74
    True 7
    True 22
    True 12
    After True


#### 3.8.1. The **“is”** and **“is not"** Operators

- Python has an `is` operator that can be used in logical expressions

- Implies **"is the same as"** 

- Similar to, but stronger than **" == "**

- **is not** also is a logicaloperator



```python
#sol 1
Min_so_far = None # initialize the loop with the None
print("Before")
for value in [9,41,12,3,74,7,22,12]:
	if Min_so_far is None:
		Min_so_far = value
	elif value < Min_so_far:
		Min_so_far = value
	print('After',Min_so_far)
```

    Before
    After 9
    After 9
    After 9
    After 3
    After 3
    After 3
    After 3
    After 3


#### 3.8.2. initialize the loop with the None


```python
#sol 2
smallest = None # initialize the loop with the None

print('before')

for value in [9,41,12,3,74,7,22,12]:
    if smallest is None:
        smallest = value
    elif value < smallest:
        smallest = value
    print(smallest,value)
    
print('After',smallest)
```

    before
    9 9
    9 41
    9 12
    3 3
    3 74
    3 7
    3 22
    3 12
    After 3


#### 3.8.3. sorting algorithm


```python
def buble_sort(a):
    for _ in range(len(a)):
        for i in range(1,len(a)):
            if a[i] < a[i-1]:
                temp = a[i]
                a[i] = a[i-1]
                a[i-1] = temp
```


```python
names = ['pretzels', 'carrots', 'arugula', 'bacon']
buble_sort(names)
print(names)
print(str(names))
print(repr(names))
```

    ['arugula', 'bacon', 'carrots', 'pretzels']
    ['arugula', 'bacon', 'carrots', 'pretzels']
    ['arugula', 'bacon', 'carrots', 'pretzels']



```python
mutants = ["charles xavier", "bobby drake", "kurt wagner", "max eisenhardt"]
buble_sort(mutants)
print(str(mutants))
print(repr(mutants))
```

    ['bobby drake', 'charles xavier', 'kurt wagner', 'max eisenhardt']
    ['bobby drake', 'charles xavier', 'kurt wagner', 'max eisenhardt']


The way this swap works is that the right side of the assignment (a[i] , a[i-1]) is evaluated first, and its values are put into **a new temporary, unnamed tuple** (such as ('carrots' , 'pretzels') on the first iteration of the loops). 

Then, the unpacking pattern from the left side of the assignment (a[i-1] , a[i]) is used to receive that tuple value and assign it to the variable names a[i-1] and a[i], respectively. 

This replaces 'pretzels' with 'carrots' at index 0 and 'carrots' with 'pretzels' at index 1. Finally, the temporary unnamed tuple silently goes away.

### 3.9. **enumerate（）**.iterators for large files

`enumerate()` returns an enumerate object that produces a sequence of tuples.

Each of the tuples is an **index-value pair**:

index as the key,element as the value,it can note be printed itself unless convert to `list()`


```python
#Create a list of strings:mutants
mutants = ["charles xavier", "bobby drake", "kurt wagner", "max eisenhardt"]

mutant_list = list(mutants)
print(mutant_list)
```

    ['charles xavier', 'bobby drake', 'kurt wagner', 'max eisenhardt']



```python
mutant_list = list(enumerate(mutants))
print(mutant_list)
```

    [(0, 'charles xavier'), (1, 'bobby drake'), (2, 'kurt wagner'), (3, 'max eisenhardt')]



```python
# unpack and print the tuple pairs
for index1,value1 in enumerate(mutants):
    print(index1,value1)
```

    0 charles xavier
    1 bobby drake
    2 kurt wagner
    3 max eisenhardt



```python
# change start index:
for index2,value2 in enumerate(mutants,start=1):
    print(index2,value2)
```

    1 charles xavier
    2 bobby drake
    3 kurt wagner
    4 max eisenhardt


It is preferrable to use `enumerate()` than `range()` when we need to loop  the value:


```python
snacks = [("bacon", 350), ("donut", 240), ("muffin", 190)]

for i in range(len(snacks)):
    item = snacks[i]
    name = item[0]
    calories = item[1]
    print(f'#{i+1} : {name} has {calories} calories.')
```

    #1 : bacon has 350 calories.
    #2 : donut has 240 calories.
    #3 : muffin has 190 calories.


Not cool, here comes the `enumerate()`


```python
for rank, (name, calories) in enumerate(snacks, 1):# start=1
    print(f"#{rank}: {name} has {calories} calories")
```

    #1: bacon has 350 calories
    #2: donut has 240 calories
    #3: muffin has 190 calories


### 3.10. Zip() function

zip wraps two or more iterators with a lazy generator.

The zip generator yields tuples containing the next value from each iterator.

These tuples can be unpacked directly within a for statement. 

The resulting code is much cleaner than the code for indexing into multiple lists:


```python
list =[["key1", "value1"], ["key2", "value2"], ["key3", "value3"]]
print(dict(list))
```

    {'key1': 'value1', 'key2': 'value2', 'key3': 'value3'}


### 3.11. itertools with zip()

The `itertools` built-in module contains a large number of functions that are useful for organizing and interacting with iterators.



```python
import itertools

names = ["Cecilia", "Lise", "Marie"]
counts = [len(n) for n in names]

longest_name = None
max_count = 0

for i in range(len(names)):
    count = counts[i]
    if count > max_count:
        longest_name = names[i]
        max_count = count
        
print(longest_name)
```

    Cecilia



```python
# with zip() function:
for name,count in zip(names,counts):
    if count > max_count:
        longest_name = name
        max_count = count
        
print(longest_name)

names.append("Rosalind")

for name,counts in itertools.zip_longest(names, counts):
    print(f"{name} : {count}")
```

    Cecilia
    Cecilia : 5
    Lise : 5
    Marie : 5
    Rosalind : 5


### 3.12. itertools merge\repeat\duplicate

Whenever you find yourself dealing with tricky iteration code, it’s worth looking at the itertools documentation again to see if there’s anything in there for you to use (see help(itertools)).

The following sections describe the most important functions that you should know in three primary categories.

Linking Iterators Together The itertools built-in module includes a number of functions for linking iterators together.




```python
import itertools

# chain Use chain to combine multiple iterators into a single sequential iterator:
it = itertools.chain([1,2,3],[4,5,6])
print(list(it))
```

    [1, 2, 3, 4, 5, 6]



```python
# output a single value
it = itertools.repeat("hello",3)
print(list(it))
```

    ['hello', 'hello', 'hello']



```python
# repeat an iterator’s items forever
it = itertools.cycle([1,2])
result = [next(it) for _ in range(10)]
print(result)
```

    [1, 2, 1, 2, 1, 2, 1, 2, 1, 2]



```python
# split a single iterator into the number of parallel iterators
it1,it2,it3 = itertools.tee(["first","second"],3)
print(list(it1))
print(list(it2))
print(list(it3))
```

    ['first', 'second']
    ['first', 'second']
    ['first', 'second']


### 3.13. itertools:Producing Combinations of Items from Iterators

The itertools built-in module includes a number of functions for  producing combinations of items from iterators.

#### 3.13.1. accumulate 

accumulate folds an item from the iterator into a running value by applying a function that takes two parameters. It outputs the current accumulated result for each input value:


```python
values = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

sum_reduce = itertools.accumulate(values)
print("Sum:  ",list(sum_reduce))
```

    Sum:   [1, 3, 6, 10, 15, 21, 28, 36, 45, 55]



```python
def sum_modulo_20(first, second):
    output = first + second
    return output % 20

modulo_reduce = itertools.accumulate(values,sum_modulo_20)
print('Modulo: ',list(modulo_reduce))
```

    Modulo:  [1, 3, 6, 10, 15, 1, 8, 16, 5, 15]


This is essentially the same as the reduce function from the functools built-in module, but with outputs yielded one step at a time. By default it sums the inputs if no binary function is specified.

#### 3.13.2. Cartesian product

product returns the Cartesian product of items from one or more iterators, which is a nice alternative to using deeply nested list comprehensions:

"product 从一个或多个迭代器返回项目的笛卡尔积，这是使用深度嵌套列表推导式的一个很好的替代方法"


```python
import itertools as it
for x,y,z in it.product(['a','b','c'],['d','e','f'],['m','n']):
    print(x,y,z)
```

    a d m
    a d n
    a e m
    a e n
    a f m
    a f n
    b d m
    b d n
    b e m
    b e n
    b f m
    b f n
    c d m
    c d n
    c e m
    c e n
    c f m
    c f n



```python
# this is not a good example for the Cartesian product
single = it.product([1,2],repeat=2)#modify the repetition 
print('Single: ',list(single))
```

    Single:  [(1, 1), (1, 2), (2, 1), (2, 2)]



```python
multiple = it.product([1,2],['a','b'])
print('Multiple: ', list(multiple))
```

    Multiple:  [(1, 'a'), (1, 'b'), (2, 'a'), (2, 'b')]


#### 3.13.3. permutations 

permutations returns the unique ordered permutations of length N with items from an iterator:


```python
its = it.permutations([1,2,3,4],2)
print(list(its))# just C42 combination = 12 kinds of sets
```

    [(1, 2), (1, 3), (1, 4), (2, 1), (2, 3), (2, 4), (3, 1), (3, 2), (3, 4), (4, 1), (4, 2), (4, 3)]



```python
own_money = it.permutations(['谢霆锋','王菲','张柏芝'],2)
print(list(own_money))
```

    [('谢霆锋', '王菲'), ('谢霆锋', '张柏芝'), ('王菲', '谢霆锋'), ('王菲', '张柏芝'), ('张柏芝', '谢霆锋'), ('张柏芝', '王菲')]


#### 3.13.4. combinations 

combinations returns the unordered combinations of length N with unrepeated items from an iterator:


```python
it_c = it.combinations([1,2,3,4],2)
print(list(it_c))
```

    [(1, 2), (1, 3), (1, 4), (2, 3), (2, 4), (3, 4)]


#### 3.13.5. Combinations_with_replacement

Yes,with replacement


```python
it_r = it.combinations_with_replacement([1,2,3,4],2)
print(list(it_r))
```

    [(1, 1), (1, 2), (1, 3), (1, 4), (2, 2), (2, 3), (2, 4), (3, 3), (3, 4), (4, 4)]




### 3.14. Built in iteration functions

#### 3.14.1. **map()** function

Return an iterator that applies function to every item of iterable, yielding the results. map() function returns a map object(which is an iterator) of the results after applying the given function to each item of a given iterable (list, tuple etc.)


Syntax :

`map(func, iterable1, iterable2)`

Parameters :

    fun : It is a function to which map passes each element of given iterable.
       
                 The function can be bulit-in or created.
        
    iter : It is a iterable which is to be mapped.
    
Returns :

    Returns a list of the results after applying the given function  
    to each item of a given iterable (list, tuple etc.) 



```python
# Python program to demonstrate working
# of map.
# Return double of n

def addition(n):
    return n + n
# We double all numbers using map()

numbers = (1,2,3,4)
result = map(addition,numbers)

print(list(result))
```

    [2, 4, 6, 8]



```python
# or with lambda:
numbers = (1,2,3,4)

result = map(lambda x : x + x,numbers)
print(list(result))
```

    [2, 4, 6, 8]



```python
# similarily:
num_1 = [1,2,3]
num_2 = [4,5,6]

result = map(lambda x,y: x + y,num_1,num_2)

print(list(result))
```

    [5, 7, 9]



```python
# map() can listify the list of strings individually

ts = ['sat', 'bat', 'cat', 'mat']

ts_split = list(map(list,ts))

print(ts_split)
```

    [['s', 'a', 't'], ['b', 'a', 't'], ['c', 'a', 't'], ['m', 'a', 't']]



```python
# 1 parameter needed in the func

l = map(lambda x: x * x,[1,2,3])
print(list(l))
```

    [1, 4, 9]



```python
# 2 parameters needed in the func

def f1(x,y):
    return (x,y)

l1 = [0,1,2,3,4,5,6]
l2 = ["Sun","M","T","W","T","F","S"]
l3 = map(f1,l1,l2)
print(list(l3))
```

    [(0, 'Sun'), (1, 'M'), (2, 'T'), (3, 'W'), (4, 'T'), (5, 'F'), (6, 'S')]


#### 3.14.2. `filter`

`filter(func/None, iterable)`

Construct an iterator from those elements of iterable for which function returns `true`. 

iterable may be either a sequence, a container which supports iteration, or an iterator.

If function is None, the identity function is assumed, that is, all elements of iterable that are false are removed.


```python
# Determine odd numbers

l1 = filter(lambda x: x%2,[1,2,3,4])
print(list(l1))
```

    [1, 3]



```python
# detemine strings
l2 = filter(None,"she")
print(list(l2))
```

    ['s', 'h', 'e']



```python
# filter the integer which has the integer square root within 100:

import math

def is_sqr(x):
    return math.sqrt(x) % 1 == 0

newlist = filter(is_sqr,range(1,101))

print(list(newlist))
```

    [1, 4, 9, 16, 25, 36, 49, 64, 81, 100]


#### 3.14.3. Sorted


`sorted(iterable, *, key=None, reverse=False)`

Return a new sorted list from the items in iterable.


Has two optional arguments which must be specified as keyword arguments.

key specifies a function of one argument that is used to extract a comparison key from each element in iterable (for example, key=str.lower). The default value is None (compare the elements directly).

reverse is a boolean value. If set to True, then the list elements are sorted as if each comparison were reversed.


```python
# absolute value sort
print(sorted([36, 5, -12, 9, -21], key=abs))
```

    [5, 9, -12, -21, 36]



```python
# string sort:
print(sorted(["bob", "about", "Zoo", "Credit"],key=str.lower))
```

    ['about', 'bob', 'Credit', 'Zoo']



```python
# sort dictionary by value

L = [("Bob", 75), ("Adam", 92), ("Bart", 66), ("Lisa", 88)]
d = dict(L)
# d.items()

print(sorted(d.items(),key = lambda x:x[1]))
```

    [('Bart', 66), ('Bob', 75), ('Lisa', 88), ('Adam', 92)]


#### 3.14.4. Reduce

`reduce(function, iterable[, initializer])`

Apply function of two arguments cumulatively to the items of iterable, from left to right, so as to reduce the iterable to a single value. 

For example, reduce(lambda x, y: x+y, [1, 2, 3, 4, 5]) calculates ((((1+2)+3)+4)+5). The left argument, x, is the accumulated value and the right argument, y, is the update value from the iterable. 

If the optional initializer is present, it is placed before the items of the iterable in the calculation, and serves as a default when the iterable is empty. If initializer is not given and iterable contains only one item, the first item is returned.


```python
# reduce(f, [x1, x2, x3, x4]) = f(f(f(x1, x2), x3), x4)

from functools import reduce

l1 = reduce(lambda x,y : x+y, [1,2,3,4],5)
print(l1)
```

    15



```python
l2 = reduce(lambda x,y : x+y, ["aa", "bb", "cc"], "dd")
print(l2)
```

    ddaabbcc

