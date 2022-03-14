µ# Python For Everyone Chap 1,2,6,7

## 1. Chap 1 Intro

### 1.1. Interactive VS Script

- Interactive

  - You type directly to Python one line at a time and it responds
- Script

  - You enter a sequence of statements (lines) into a file using a text editor and tell Python to execute the statements in the file

### 1.2. Program Steps or Program Flow

- Like a recipe or installation instructions, a program is a sequence of steps to be done in order.
- Some steps are conditional - they may be skipped.
- Sometimes a step or group of steps is to be repeated.
- Sometimes we store a set of steps to be used over and over as needed several places throughout the program (Chapter 4).

### 1.3. The building blocks of programs

There are some low-level conceptual patterns that we use to construct programs.These constructs are not just for Python programs, they are part of every programming language from machine language up to the high-level languages.

- **input**

  Get data from the "outside world". This might be reading data from a file, or even some kind of sensor like a microphone or GPS. In our initial programs, our input will come from the user typing data on the keyboard.
- **output**

  Display the results of the program on a screen or store them in a file or perhaps write them to a device like a speaker to play music or speak text.
- **sequential execution**

  Perform statements one after another in the order they are encountered in the script.
- **conditional execution**

  Check for certain conditions and then execute or skip a sequence of statements.
- **repeated execution**

  Perform some set of statements repeatedly, usually with some variation.
- **reuse**

  Write a set of instructions once and give them a name and then reuse those instructions as needed throughout your program.

### 1.4. General Types of Errors:

- **Syntax errors**

  These are the first errors you will make and the easiest to fix.

  A syntax error means that you have violated the "grammar" rules of Python. Python does its best to point right at the line and character where it noticed it was confused. The only tricky bit of syntax errors is that sometimes the mistake that needs fixing is actually earlier in the program than where Python noticed it was confused. So the line and character that Python indicates in a syntax error may just be a starting point for your investigation.
- **Logic errors**

  A logic error is when your program has good syntax but there is `a mistake in the order of the statements` or perhaps `a mistake in how the statements relate to one another`.

  A good example of a logic error might be, "take a drink from your water bottle, put it in your backpack, walk to the library, and then put the top back on the bottle."
- **Semantic errors**

  A semantic error is when your `description of the steps to take is syntactically perfect and in the right order`, `but there is simply a mistake in the program`.

  The program is perfectly correct but it does not do what you intended for it to do.

  A simple example would be if you were giving a person directions to a restaurant and said, "...when you reach the intersection with the gas station, turn left and go one mile and the restaurant is a red building on your left." Your friend is very late and calls you to tell you that they are on a farm and walking around behind a barn, with no sign of a restaurant. Then you say "did you turn left or right at the gas station?" and they say, "I followed your directions perfectly, I have them written down, it says turn left and go one mile at the gas station." Then you say, "I am very sorry, because while my instructions were syntactically correct, they sadly contained a small but undetected semantic error.".

**In all three types of errors, Python is merely trying its hardest to do exactly what you have asked.**

## 2. Chap 2 Variables, expressions, and statements

### 2.1. Variables

One of the most powerful features of a programming language is the ability to manipulate variables. A variable is a name that refers to a value.

**Naming Rules**

Also, python is sensitive to the upper and lower cases, the variables' name should not start with numbers.

- Name the variables:

  - camel case: myName， FirstName
  - snake case: end_message,X_train,y_test

### 2.2. Reserved Words:

**You can not use reserved words as variable names / identifiers**

$$
\begin{array}{lllll}
\text { False } & \text { class } & \text { return is } & \text { finally } \\
\text { None } & \text { if } & \text { for } & \text { lambda } & \text { continue } \\
\text { True } & \text { def } & \text { from } & \text { while } & \text { nonlocal } \\
\text { and } & \text { del } & \text { global } & \text { not } & \text { with } \\
\text { as } & \text { elif } & \text { try } & \text { or } & \text { yield } \\
\text { assert } & \text { else } & \text { import } & \text { pass } & \\
\text { break } & \text { except } & \text { in } & \text { raise } &
\end{array}
$$

### 2.3. Data types:

Text Type: 	str

Numeric Types: 	int, float, complex

Sequence Types: 	list, tuple, range

Mapping Type: 	dict

Set Types: 	set, frozenset

Boolean Type: 	bool

Binary Types: 	bytes, bytearray, memoryview

```python
a = 5
print(a, "is of type", type(a))

a = 2.0
print(a, "is of type", type(a))

a = 1+2j
print(a, "is complex number?", isinstance(1+2j,complex))
```

### 2.4. String Conversions

- You can also use `int()` and `float()` to convert between strings and integers
  You will get an error if the string does not contain numeric characters

### 2.5. Type mean

- In Python variables, literals, and constants have a "type"
- Python knows the difference between an integer number and a string
- For example “+" means "addition" if something is a number and "concatenate" if something is a string

### 2.6. Numeric expressions


| operator | Operation           | example       |
| -------- | ------------------- | ------------- |
| **       | Power               | 2 **3 = 8     |
| %        | Remainder           | 22 % 8 = 6    |
| //       | Division by integer | 22 // 8 = 2   |
| /        | Division            | 22 / 8 = 2.75 |
| *        | Multiply            | 3 * 3 = 9     |
| +/-      | add/subtract        | 5 - 2 = 3     |

**Order of operation:**

Highest precedence rule to lowest precedence rule:

- Parentheses are always respected
- Exponentiation (raise to a power)
- Multiplication, Division, and Remainder
- Addition and Subtraction
- Left to ight

  parethesis>power>multiplication>addition>left to right

### 2.7. Comparisions

$$
\begin{array}{|l|l|}
\hline \text { Operation } & \text { Meaning } \\
\hline< & \text { strictly less than } \\
\hline<= & \text { less than or equal } \\
\hline> & \text { strictly greater than } \\
\hline>= & \text { greater than or equal } \\
\hline== & \text { equal } \\
\hline != & \text { not equal } \\
\hline \text { is } & \text { object identity } \\
\hline \text { is not } & \text { negated object identity } \\
\hline
\end{array}
$$

### 2.8. `str()` vs `repr()`

`str()` vs `repr()` both are used to get a string representation of object.

```python
s = 'Hello geeeeks'
# str

print(str(s))
print(str(2/11))

# repr

print(repr(s))
print(repr(2/11))
```

**Following are differences:**

- `str()` is used for creating output for end user while `repr()` is mainly used for **debugging and development**.

  - repr’s goal is to be unambiguous
  - str’s goal is to be readable.

  For example, if we suspect a float has a small rounding error, repr will show us while str may not.
- `repr()` compute the “official” string representation of an object (a representation that has all information about the object) and `str()` is used to compute the “informal” string representation of an object (a representation that is useful for printing the object).
- The print statement and `str()` built-in function uses`__str__` to display the string representation of the object while the `repr()` built-in function uses `__repr__` to display the object.

Let's understand this by an example:
```python
import datetime
today = datetime.datetime.now()

print(f'Prints readable format for date-time object: {str(today)}')
print(f'Prints the official format of date-time object:{repr(today)}')
```
`str()` displays today’s date in a way that the user can understand the date and time.

`repr()` prints “official” representation of a date-time object (means using the “official” string representation we can reconstruct the object).


How to make them work for our own defined classes:

A user defined class should also have a `__repr__` if we need detailed information for debugging. And if we think it would be useful to have a string version for users, we create a `__str__` function.

Let's understoand this by an example:
```python
# Python program to demonstrate wtiting of __repr__ and

# __str__ for user defined classes

# A user defined class class to represent Complex Numbers:

class Complex:
  def __init__(self,real,imag):
    self.real = real
    self.imag = imag

# For call to repr(). Prints object's information
def __repr__(self):
    return 'Rational(%s, %s)' % (self.real, self.imag)
        # %s string to extract self.real/imag by %

# For call to str(). Prints readable form
def __str__(self):
    return '%s + %si' % (self.real,self.imag)

# Driver program to test above:

t = Complex(3,4)

# Same as "print t"

print(f'Readable Form: {str(t)}')
print(f'Object\'s information: {repr(t)}')
```

### 2.9. Formatting

$Formatting$ is the process of combining predefined text with data values into a single human-readable message that’s stored as a string.

Python has four different ways of formatting strings that are built into the language and standard library.

The most common way to format a string in Python is by using the `% formatting operator`.

```python
a = 0b10111011
b = 0xc5f

print('Binary is %d, Hex is %d' %(a,b))
```

#### 2.9.1. interpolated format strings `f-strings`

The format string uses format specifiers (like `%d`) as **placeholders** that will be replaced by values from the right side of the formatting expression.

The syntax for format specifiers comes from C’s printf function, which has been inherited by Python (as well as by other programming languages)

Python supports all the usual options you’d expect from printf:

- such as `%s, %x, and %f` format specifiers, as well as control over decimal places, padding, fill, and alignment.

The first problem is that if you change the type or order of data values in the tuple on the right side of a formatting expression, you can get errors due to type conversion incompatibility.

For example, this  simple formatting expression works:**interpolated format strings**`f-strings`

```python
key = 'my_var'
value = 1.234

formatted = f"{key} = {value}"
print(formatted)


# formatted = f" {key!r:< 10} = {value:.2f}"

# print(formatted)
```

The `% operator` in Python has the ability to also do formatting with a dictionary instead of a tuple. The keys from the dictionary are matched with format specifiers with the corresponding name, such as %(key)s. Here, I use this functionality to change the order of values on the right side of the formatting expression with no effect on the output

```python
old_way = "%-10s = %.2f" % (key, value)

new_way = "%(key)-10s = %(value).2f" % {"value": value, "key": key}

print(old_way)

print(new_way)
```
C-style formatting expressions become difficult to read when you need to make small modifications to values before formatting them into a string—and this is an extremely common need.

Here, I list the contents of my kitchen pantry without making inline changes:
```python
pantry = [('avocados', 1.25), ('bananas', 2.5),('cherries', 15),]

for i,(item,count) in enumerate(pantry):
  print('#%d: %-10s = %.2f' % (i,item,count))

# %d:i

# %-10s :item

# %.2f count rounded up to 2 decimal places
```

### 2.10. bytes and str

bytes consists of sequences of 8-bit unsigned values, while str consists of sequences of Unicode code points that represent textual characters from human languages.
```python
a = b"h\x65llo"
print(list(a))
print(a)
```
str instances contains human language strtings Unicode,while python 
does not recognize the Unicodecode.

```python
a = "a\u0300 propos"
print(list(a))
print(a)
```
we need to solve this manually：

str to bytes:`encode()`

bytes to str:`decode()`
```python
a = "a\u0300 propos"
a = a.encode("utf-8")
print(list(a))
print(a)
```

#### 2.10.1. Unicode Sandwich

When you're writing Python programs, it's important to do encoding and decoding of Unicode data at the **furthest boundary of your interfaces**; this approach is often called the **Unicode sandwich**.

The core of your program should use the str type containing Unicode data and should not assume anything about character encodings.

This approach allows you to be very accepting of alternative text encodings (such as Latin-1, Shift JIS, and Big5)while being strict about your output text encoding (ideally, UTF-8) The split between character types leads to two common situations in Python code:

- You want to operate on raw 8-bit seguences that contain Utf-8-encoded strings (or some other encoding)
- You want to operate on Unicode strings that have no specific encoding.

You' ll often need two helper functions to convert between these cases and to ensure that the type of input values matches your codes expectations The first function takes a bytes or str instance and always returns a str:

```python
def to_str(bytes_or_str):
  if isinstance(bytes_or_str,bytes):
    value = bytes_or_str.decode("utf-8")
  else:
      value = bytes_or_str
      return value # Instance of str

a = b"foo"
b = "bar"

print(str(to_str(a)))
print(repr(to_str(a)))

print(str(to_str(b)))
print(repr(to_str(b)))
```

The second function takes a bytes or str instance and always returns a bytes:

```python
def to_bytes(bytes_or_str):
  if isinstance(bytes_or_str,str):
    value = bytes_or_str.encode('utf-8')
  else:
    value = bytes_or_str
    return value # Instance of bytes

a = b"foo"
b = "bar"

print(str(to_str(a)))
print(repr(to_str(a)))

print(str(to_str(b)))
print(repr(to_str(b)))
```

The first issue is that bytes and str seem to work the same way, **but their instances are not compatible with each other**, so you must be deliberate about the types of character sequences that you’re passing around.

**By using the + operator**, you can add bytes to bytes and str to str, respectively:
```python
print(b'one' + b'two')
print('one' + 'two')
```
But you can’t add str instances to bytes instances:(TypeError: can't concat str to bytes)

b'one' + 'two'

## 3. Chap 3-5 func and iterations at 1.2

## 4. Chap 6 Strings

### 4.1. A string is a sequence

A string is a sequence of characters. You can access the characters one at a time with the bracket operator:

- A string is a sequence of characters
- Astring literal uses quotes 'Hello' or "Hello'
- For strings, "+" means "concatenate'
- When a string contains numbers, it is still a string
- We can convert numbers in a stringinto a number using int()
```python
fruit = 'banana'
letter = fruit[1]
print(letter)
```

### 4.2. Strings are immutable

It is tempting to use the operator on the left side of an assignment, with the intention of changing a character in a string.
```python
greeting = 'Hello world'
greeting[0] = 'H'
```

### 4.3. Getting the length of a string using len

len is a built-in function that returns the number of characters in a string:
```python
# zot = 'abc'

# print(zot[6])

# out put ---------------------------------------------------------------------------

# IndexError                                Traceback (most recent call last)

# <ipython-input-4-ee7de94f7817> in <module>

# zot = 'abc'

# ----> 2 print(zot[6])

# IndexError: string index out of range

print(len(fruit)) #banana
```

### 4.4. Traversal through a string with a loop

A lot of computations involve processing a string one character at a time. Often they start at the beginning, select each character in turn, do something to it, and continue until the end. This pattern of processing is called a traversal. One way to write a traversal is with a while loop:
```python
fruit = 'banana'
index = 0

while index < len(fruit):
  letter = fruit[index]
  print(letter) # if just ends here , it returns bbbbbbbbbbbbbbbbbs forever
  index = index + 1
```

```python
fruit = 'banana'
index = 0

while index < len(fruit):
  letter = fruit[index]
  print(index, letter)
  index = index + 1 #interesting
```
```python
fruit = 'banana'
  for letter in fruit:
  print(letter)
```
```python

# Looping and Counting

# This is a simple loop that loops through each letter in astring

# and counts the numberof times the loop encountersthe 'a' character

word = 'banana'
count = 0
for letter in word:
  if letter == 'a':
    count = count + 1
    print(f"there are {count} 'a's in the word")
```
#### 1. Looing deeper into in

- The iteration variable "iterates" through the sequence (ordered set)
- The block (body) of code isexecuted once for each valuein the sequence
- The iteration variable movesthrough all of the values in thesequence

```python
for letter in 'banana':
  print(letter)

# letter: iteration variable

# 'banana':slicing string
```

### 1. Slicing Strings (L-24)

1.We can also look at any
continuous section of a stringusing a `colon operator`

2.The second number is onebeyond the end of the slice-"up to but not including"

3.lf the second number is beyond the end of the string,it stops at the end

```python
s = 'Monty Python'

print(s[0:4])

print(s[6:7])

print(s[6:1000])
```

**Here is the s = 'Monty Python':**

$$
\begin{array}{|l|l|l|l|l|l|l|l|l|l|l|l|}
\hline \mathrm{M} & \mathrm{o} & \mathrm{n} & \mathrm{t} & \mathrm{y} & & \mathrm{P} & \mathrm{y} & \mathrm{t} & \mathrm{h} & \mathrm{o} & \mathrm{n} \\
\hline 0 & 1 & 2 & 3 & 4 & 5 & 6 & 7 & 8 & 9 & 10 & 11
\end{array}

$$

If we leave off the first number orthe last number of the slice, itisassumed to be the beginning orend of the string respectively

```python
s = 'Monty Python'
print(f's[:2]:{s[:2]}')

print(s[8:])

print(s[:])
```
#### 1.1. Avoid Striding and Slicing in a Single Expression

Python has special syntax for the stride of a slice in the form somelist：

**[start:end:stride]**.

This lets you take every nth item when slicing a sequence. For example, the stride makes it easy to group by even and odd indexes in a list:

```python
x = ['red', 'orange', 'yellow', 'green', 'blue', 'purple']

odds = x[::2]
evens = x[1::2]

print(odds)
print(evens)
```

The problem is that the stride syntax often causes unexpected behavior that can introduce bugs.

For example, a common Python trick for reversing a byte string is to slice the string with a stride of -1:

```python
x = b'abcdefghijklmn'
y = x[::-1]
print(y)
```

### 2. Unpacking

```python
shot_list = [1,2]
first,second,*rest = shot_list
print(first,second,rest)
```
```python

# anthoer way:
car_ages = [0, 9, 4, 8, 7, 20, 19, 1, 6, 15]
car_ages_descending = sorted(car_ages,reverse=True)
oldest =car_ages_descending[0]

# second_oldest = car_ages_descending[1]

# others = car_ages_descending[2:]

oldest,second_oldest,*others =car_ages_descending

print(oldest,second_oldest,others)
```

### 1. String Concatenation

When the + operator is applied to strings, it means "`concatenation`"

```python
a = 'Hello'
b = a  + ' There'

c = a + ' ' +"there"
print(c)

print(b)
```

##### 1.1. Using `in` as  a logical Operator

The `in` keyword can also beused to check to see if onestring is `"in"` another string

The in expression is alogical expression thatreturns `True` or `False` andcan be used `in` an `if` statement

```python
fruit = 'banana'

'n' in fruit

'm' in fruit

'nan' in fruit

if 'a' in fruit:
  print('Found it!')
```
### 2. String Comparison

```python
word = 'banana'
if word == 'banana':
  print('Alright,bananas.')

if word < 'banana':
  print('your word,' + word + ',comes before banana.')
elif word > 'banana':
   print('your word,' + word + ',comes after banana.')
  else:
  print('Alright,bananas.')
```

### 3. String Library

Python has a number of string `functions` which are in the
`string library`

These `functions` are already `built into` every string - weinvoke them by appending thefunction to the string variable

These `functions` do not modify the original string, instead they return a new string that hasbeen altered


greet = 'Hello Bob'
zap = greet.lower()
print(f'{zap} is the all lower case of {greet}')

# or in another way:

print('Hi There'.lower())

stuff = 'Hello World'
type(stuff)

dir(stuff)

Documentation for [**`dir`**](https://docs.python.org/3/library/stdtypes.html#string-methods), here we introduce several popular libraries:

### 1. Searching a String

We use the `find()` function to searchfor a substring within another string

`find()` finds the `first` occurrence of the substring

If the substring is not found, `find()` returns `-1`

`Remember that string position starts at zero`

fruit = 'banana'
pos_na = fruit.find('na')
print(pos_na)

pos_z = fruit.find('z')
print(pos_z)

# Yes we tried the upper() and lower(),let's move on

#### 1. `useful!` Search and Replace

The `replace()` functionis like a“search andreplace”operation in aword processor

It replaces `all occurrences` of the `search string` with the `replacement string`

```python
greet = 'Hello Bob'
greet

hi_jane = greet.replace('Bob',"Jane")
print(hi_jane)
```
greet = 'Hello Bob'
greet

hi_jane = greet.replace('Bob',"Jane")
print(hi_jane)

o_to_X = greet.replace('o', 'X')
print(o_to_X)

#### 2. Stripping Whitespace

Sometimes we want to takea string and remove whitespace at the beginning and/or end

`Istrip()` and `rstrip()` removewhitespace at the l`eft or right`

`strip()` removes `both` beginning and ending whitespace

```python
greet = 'Hello Bob'
greet_spaces = '        Hello Bob           '

greet_spaces.lstrip()

greet_spaces.rstrip()

greet_spaces.strip() == greet #yeah
```

```python

# Prefixes

line = 'Please have a nice day'
line.startswith('Please')

line.startswith('P')

line.startswith('p')
```
### 1. Parsing and Extracting Strings

Often, we want to look into a string and find a substring. For example if we were presented a series of lines formatted as follows:

`From stephen.marquard@ uct.ac.za Sat Jan  5 09:14:16 2008`

and we wanted to pull out only the second half of the address (i.e., uct.ac.za) from each line, we can do this by using the find method and string slicing.

First, we will find the position of the at-sign in the string. Then we will find the position of the first space after the at-sign. And then we will use string slicing to extract the portion of the string which we are looking for.

```python

# how to extract the mail host address?

# here is on solution: find the start sign of '@' and the firts whitespace:

data = 'From stephen.marquard@uct.ac.za Sat Jan  5 09:14:16 2008'
atpos = data.find('@')
print(atpos)

# the atops is set as label here which tells us:the host name starts after me.

sppos = data.find(' ', atpos)
print(sppos)
```
we can see the `atops` in barcket which means excute the command `starting from` the label `atops`

Then we find the first whitespace after the atops

```python
data = 'From stephen.marquard@uct.ac.za Sat Jan  5 09:14:16 2008'
atpos = data.find('@')
sppos = data.find(' ', atpos)
host = data[atpos + 1 : sppos]
print(host)
```
### 1. Format operator

The format operator, % allows us to construct strings, replacing parts of the strings with the data stored in variables. When applied to integers, % is the modulus operator. **But when the first operand is a string, % is the format operator.**

The first operand is the format string, which contains one or more format sequences that specify how the second operand is formatted. The result is a string.

For example, the format sequence "%d" means that the second operand should be formatted as an integer (d stands for "decimal"):

```python
chuck = 42
'%s' % chuck
```
The result is the string "42", which is not to be confused with the integer value 42.

A format sequence can appear anywhere in the string, so you can embed a value in a sentence:

```python
' I have spotted %s camels' % chuck

# The following example uses "%d" to format an integer,

# "%g" to format a floating-point number (don't ask why),

# and "%s" to format a string:

'In %a years I have spotted %g %s' % (3,0.1,'camels')

# Jsut #g and #s???

'%d %d %d' % (1, 2)

'%d' % 'dollars'
```

## 1. [Chap 7  Files](https://books.trinket.io/pfe/07-files.html)

### 1.1. File Processing

A text file can be thought of as a sequence of lines.

#### 1.1.1. Why files?

conditional execution, functions, and iterations are created and used  in the main memory:CPU and Memory.Once the power is turned off, anything stored in either the CPU or main memory is erased.

Secondary memory **(or Files)** is not erased when the power is turned off. Or in the case of a USB flash drive, the data we write from our programs can be removed from the system and transported to another system.

### 1.2. Opening Files

Before we can read the contents of the file, we must tell Python which file we are going to work with and what we will be doing with the file
This is done with the `open()` function

`open()`  returns a “file handle”- a variable used to perform operations on the file

Similar to “File -> Open"in a Word Processor

```python
fhand = open('mbox.txt','r')

handle = open(filename, mode)
```
returns a handle use to manipulate the file

filename is a string

mode is optional and should be `'r'` if we are planning to read the file and `'w'` if we are going to write to the file

print(fhand)

### 1.3. The New Line Character

We use a special character called the `"newline"` to indicate when a line ends

We represent it as `\n` in strings
Newline is still one character-not two
```python
stuff = 'Hello\nWorld!'
stuff

print(stuff) # the whitespace after the \n is working.

stuff = 'X\nY'
print(stuff)

len(stuff)
```
### 1.4. File Handle as a Sequence

A `file handle` open for read can be treated as a `sequence` of strings where each line
in the file is a string in the sequence

We can use the `for` statement to iterate through a `sequence`

Remember - a `sequence` is an ordered set

```python
xfile = open('mbox.txt') # you may try this in the future

# for i in xfile:

# print(i)

### 1. Reading Files: Counting Lines in a File

Open a file read-only

Count the lines and print outthe number of lines

fhand = open('mbox.txt')
count = 0
for line in fhand:
count = count + 1
print('Line Count:', count)

So we know how the py read the text file when we apply the for loop : with lines

# We can read the wholefile (newlines and all)into a single string

# Reading the *whole* file

fhand = open('mbox-short.txt')
inp = fhand.read()
print(len(inp))

# inp--------very long

print(inp[:20])
```

Searching Thtough a File
We can put an if statement inour for loop to only print linesthat meet some criteria

### 1. Searching through a file

if we wanted to read a file and only print out lines which started with the prefix "From:", we could use the string method **startswith** to select only those lines with the desired prefix.

fhand = open('mbox-short.txt')
for line in fhand:
if line.startswith('From:'):
print(line)

**Things become interesting,so let's run,forest!**

What are all these blank lines doing here?

Each line from the file has a newline at the end

The print statement adds a newline to each line

We could use line slicing to print all but the last character, but a simpler approach is to use the **rstrip（）** method which strips whitespace from the right side of a string as follows:

fhand = open('mbox-short.txt')
for line in fhand:
line = line.rstrip()
if line.startswith('From:'):
print(line)

Yeah, looks better

**on the other hand, we can skip these lines with continue**

why not think babout the opposite situation?

let's rock!

```python
**Strip out the comments when you want to run the code.**

fhand = open('mbox-short.txt')
for line in fhand:
line = line.rstrip()
if not line.startswith('From:'):
print(line)
```

The output of the program is the same. In English, the uninteresting lines are those which do not start with "From:", which we skip using continue. For the "interesting" lines (i.e., those that start with "From:") we perform the processing on those lines.

We can use the find string method to simulate a text editor search that finds lines where the search string is anywhere in the line. Since find looks for an occurrence of a string within another string and either returns the position of the string or -1 if the string was not found, we can write the following loop to show lines which contain the string "@uct.ac.za" (i.e., they come from the University of Cape Town in South Africa):

```python
# Using in to select lines

fhand = open('mbox-short.txt')
for line in fhand:
line = line.rstrip()
if not '@uct.ac.za' in line:
continue
print(line)

fhand = open('mbox-short.txt')
for line in fhand:
line = line.rstrip()
if line.find('@uct.ac.za') == -1: continue
print(line)
```

### 1. Letting the user choose the file name

We really do not want to have to edit our Python code every time we want to process a different file. It would be more usable to ask the user to enter the file name string each time the program runs so they can use our program on different files without changing the Python code.

This is quite simple to do by reading the file name from the user using input as follows:

```python
fname = input('Enter the file name: ')
fhand = open(fname)
count = 0
for line in fhand:
if line.startswith('Subject:'):
count = count + 1
print('There were', count, 'subject lines in', fname)
```

### 1. Using try, except, and open

So now that we see the flaw in the program, we can elegantly fix it using the try/except structure. We need to assume that the open call might fail and add recovery code when the open fails as follows:

# keep on trying:

```python
fname = input('Enter the file name:')
try:
fhand = open(fname)
except:
print('File can not be opened:',fname)
quit()
count = 0
for line in fhand:
if line.startswith('Subject:'):
count = count + 1
print(f'There were {count} subject lines in {fname}')
```

### 1. Writing Files

If the file already exists, opening it in write mode clears out the old data and starts fresh, so be careful! If the file doesn't exist, a new one is created.

The write method of the file handle object puts data into the file, returning the number of characters written. The default write mode is text for writing (and reading) strings.

#### 1.1. w for Write

To write a file, you have to open it with mode "w" as a second parameter
```python
fout = open('output.txt','w')

# here is the w for write, prviously the r for read files
print(fout)

line1 = "This here's the wattle,\n"
fout.write(line1)

line2 = 'the emblem of our land.\n'
fout.write(line2)
```

#### 1. Save!!

When you are done writing, you have to close the file to make sure that the last bit of data is physically written to the disk so it will not be lost if the power goes off.

fout.close()

We could close the files which we open for read as well, but we can be a little sloppy if we are only opening a few files since Python makes sure that all open files are closed when the program ends. When we are writing files, we want to explicitly close the files so as to leave nothing to chance.
