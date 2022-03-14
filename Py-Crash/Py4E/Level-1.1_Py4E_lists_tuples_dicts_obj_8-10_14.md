# 1. Py4e Lists/Tuples/Dictionaries/Objects Chap 8,9,10,14

## 1.1. Chap 8 Lists

### 1.1.1. Intro to Programming

**Algorithms**

      A set of rules or steps used to solve a problem

**Data Structures**

       A particular way of organizing data in a computer


### 1.1.2. A List is a kind of Collection

A **collection** allows us to put many values in a single **variable**

A **collection** is nice because we can carry all **many values** around in one convenient package.


**A list is a sequence**

- Like a string, a list is a sequence of values. In a string, the values are characters; in a list, they can be any type. The values in list are called elements or sometimes items.

- There are several ways to create a new list; the simplest is to enclose the elements in square brackets ([ and ])




**What is not a `collection`**

- Most of our variables have one value in them

- When we put a new value in the variable, the old value is overwritten


```python
friends = ['Joseph','Glenn','Sally']

carryon = ['socks','shirt','perfume']
```

### 1.1.3. List Constants

- *List* constants are surrounded by square brackets and the elements in the list are separated by commas

- A *list* element can be `any Python object` - even **another list**

- A list can be **empty**


```python
print([1,24,76])
```

    [1, 24, 76]



```python
print(['red','yellow','blue'])
```

    ['red', 'yellow', 'blue']



```python
print([])
```

    []



# 2. we had used lists:

# 3. we had used lists:
for i in [5,4,3,2,1]:
    print(i)
print('Blastoff!')
```

    5
    4
    3
    2
    1
    Blastoff!


Also, lists and definite loops are best pals:


```python
friends = ['Joseph','Glenn','Sally']
for friend in friends:
    print('Happy New Year:', friend)
print('Done!')
```

    Happy New Year: Joseph
    Happy New Year: Glenn
    Happy New Year: Sally
    Done!



```python
z = ['Joseph','Glenn','Sally']
for x in z:
    print('Happy new year:',x)
print("Done!")
```

    Happy new year: Joseph
    Happy new year: Glenn
    Happy new year: Sally
    Done!



```python
friends
```




    ['Joseph', 'Glenn', 'Sally']




```python
print(friends[1])
```

    Glenn


### 3.1. Lists are Mutable


**Strings** are “immutable” - we **can not** change the contents of a string 

we must make a new string to make any change


Lists are **mutable** - we can change an element of a list using the index operator


```python
fruit = 'Banana'
fruit[0] ='b' # error
```


    ---------------------------------------------------------------------------

    TypeError                                 Traceback (most recent call last)

    /var/folders/1q/m8l_wvxd5dl8kccgv4xrsxtr0000gn/T/ipykernel_34559/248460405.py in <module>
          1 fruit = 'Banana'
    ----> 2 fruit[0] ='b' # error
    

    TypeError: 'str' object does not support item assignment



```python
x = fruit.lower()
print(x)
```


```python
lotto = [2,14,26,41,63]
```


```python
print(lotto)
```

    [2, 14, 26, 41, 63]



```python
lotto[2] = 28
```


```python
lotto
```




    [2, 14, 28, 41, 63]




# 2. # The length of the list:

# 3. # The length of the list:

# 4. The len() function takes a list as aparameter 

# 5. and returns the numberof elements in the list

# 6. Actually len() tells us the number of elements of any set or sequence

# 7. (such as a string...)

len(lotto)
```




    5



**List indices work the same way as string indices:**

- Any integer expression can be used as an index.

- If you try to read or write an element that does not exist, you get an Index Error.

- If an index has a negative value, it counts backward from the end of the list.


### 7.1. Using the range function

The range function returns a list of numbers that range
from zero to one less than the parameter

We can construct an index loop using for and an integer iterator


```python
print(range(4))
```

    range(0, 4)



```python
friends = ['Joseph','Glenn','Sally']
print(len(friends))
```

    3



```python
print(range(len(friends)))
```

    range(0, 3)


### 7.2. we will us this to construct loops


# 2. Let's loop:

# 3. Let's loop:
friends = ['Joseph','Glenn','Sally']

for friend in friends:
    print('Happy New Year:', friend)
```

    Happy New Year: Joseph
    Happy New Year: Glenn
    Happy New Year: Sally



```python
for i in range(len(friends)):
    friend = friends[i]
    print('Happy New Year:',friend)
```

    Happy New Year: Joseph
    Happy New Year: Glenn
    Happy New Year: Sally


### 3.1. Concatenating lists using *+*


```python
a = [1,2,3]
b = [4,5,6]
c = a + b
```


```python
print(c)
```

    [1, 2, 3, 4, 5, 6]



```python
print(a)
```

    [1, 2, 3]


### 3.2. Concatenating lists with merge


```python
from heapq import merge

list01 = [1,2,3]
list02 = [4,5,6]
list03 = [7,8,9]

list04 = list(merge(list01,list02,list03))

print(f'This is the list04:{list04}')
```

    This is the list04:[1, 2, 3, 4, 5, 6, 7, 8, 9]



# 2. bounus：

# 3. bounus：

list01 = [1,2,3]
list02 = [4,5,6]
list03 = [7,8,9]
list01 + list02 + list03
```




    [1, 2, 3, 4, 5, 6, 7, 8, 9]



### 3.1. Slicing Lists:




```python
t = [9,41,12,3,74,15]
```


```python
t[1:3]
```




    [41, 12]




```python
t[:4]
```




    [9, 41, 12, 3]




```python
t[3:]
```




    [3, 74, 15]




```python
t[:]
```




    [9, 41, 12, 3, 74, 15]



Note: Just like in strings, the second
number is `up to but not including`

### 3.2. List Methods

Documentation for [**`Lists`**](https://docs.python.org/3/tutorial/datastructures.html)

#### 3.2.1. Building a list:

Classic method:
    
We can create an **empty** list and then add elements using the **append** method

The **list** `stays in order` and new elements are added at the end of the list


```python
stuff = list()
```


```python
stuff.append('book')
stuff.append(99)
print(stuff)
```

    ['book', 99]



```python
stuff.append('cookie')
print(stuff)
```

    ['book', 99, 'cookie']



```python
99 in stuff #just check in the straight way and got TF return
```




    True




```python
20 not in stuff
```




    True



### 1.1.2. Deleting elements

There are several ways to delete elements from a list. 


# 2. pop()

# 3. pop()
t = ['a','b','c']
x = t.pop(0)
print(t)
```

    ['b', 'c']



# 4. deln

# 5. del
t = ['a','b','c']
del t[1]
print(t)
```

    ['a', 'c']



# 6. or in this way:

# 7. or in this way:
t = ['a', 'b', 'c', 'd', 'e', 'f']
del t[0:3]
print(t)
```

    ['d', 'e', 'f']



# 8. If you know the element you want to remove (but not the index), you can use remove:

# 9. If you know the element you want to remove (but not the index), you can use remove:
t = ['a', 'b', 'c']
t. remove('b')
print(t)
```

    ['a', 'c']


### 9.1. Lists are in Order:

A list can hold many items and keeps those
items in the order until we do something to change the order

A list can be sorted(i.e., change its order)

The sort method (unlike in strings) means **sort yourself**


```python
friends
```




    ['Joseph', 'Glenn', 'Sally']




```python
friends.sort()
```


```python
print(friends) #nailed it
```

    ['Glenn', 'Joseph', 'Sally']



```python
print(friends[1])
```


    ---------------------------------------------------------------------------

    NameError                                 Traceback (most recent call last)

    <ipython-input-156-a3aa31e7eb76> in <module>
    ----> 1 print(friends[1])
    

    NameError: name 'friends' is not defined


#### 9.1.1. keyword sorting:

sort() is sensitive with case.


```python
places = ["home", "work", "New York", "Paris"]
places.sort()
print("Case sensitive: ",places)
```

    Case sensitive:  ['New York', 'Paris', 'home', 'work']



```python
places.sort(key=lambda x:x.lower())
print("Case sentitive: ",places)
```

    Case sentitive:  ['home', 'New York', 'Paris', 'work']


### 1.1.2. Built-in Funcitions adn Lists:

There are a number of functions built into Python that take lists as
parameters.

Remember the loops we built? 
These are much simpler.


```python
nums = [3,41,12,9,74,15]
print(len(nums))
```

    6



```python
max(nums)
```




    74




```python
min(nums)
```




    3




```python
sum(nums)
```




    154




```python
print(f'The mean of the sums is {round(sum(nums)/len(nums),2)}')
```

    The mean of the sums is 25.67


### 1.1.3. Lists and Strings : Best partner

**Split** breaks a string into parts and produces alist of strings. 

We think of these as words.  

We can **access** a particular word or **loop** through all the words.


```python
abc = 'With three words'
stuff = abc.split()
print(stuff)
```

    ['With', 'three', 'words']



```python
print(f'this is abc:{abc},and this is stuff:{stuff}')
```

    this is abc:With three words,and this is stuff:['With', 'three', 'words']



```python
print(f'the length of abc is {len(abc)},and the length of stuff is {len(stuff)}')
```

    the length of abc is 16,and the length of stuff is 3



```python
print(stuff[0])
```

    With



```python
print(abc[0])
```

    W



```python
for x in stuff:
    print(x)
```

    With
    three
    words



```python
for x in abc:
    print(x)
```

    W
    i
    t
    h
     
    t
    h
    r
    e
    e
     
    w
    o
    r
    d
    s



# 2. but why?

# 3. but why?
for x in stuff,abc:
    print(x)
```


    ----------------------------------------------------------

    NameError                Traceback (most recent call last)

    <ipython-input-33-a84018fb0c26> in <module>
          1 #  but why?
    ----> 2 for x in stuff,abc:
          3     print(x)


    NameError: name 'abc' is not defined


### 3.1. Aliasing


```python

```


```python

```


```python

```

##### 3.1.1. Show me the                   money!!!!!
yeah,a lot of whitespaces


```python
line = 'Show me the              money !!!'
etc = line.split()
print(etc)
```

    ['Show', 'me', 'the', 'money', '!!!']



```python
line = 'first;second;third;fourth;fifth;sixth;seventh'
```


```python
print(len(line))
```

    45



```python
thing = line.split()
print(len(thing))
```

    1


keep on splitting with the semicolon ';'


```python
thing = line.split(';')
print(thing)
```

    ['first', 'second', 'third', 'fourth', 'fifth', 'sixth', 'seventh']



```python
print(len(thing))
```

    7


so smart

When you do not specify a delimiter, multiple spaces are treated like one delimiter.

You can specify what delimiter character to use in the splitting.

**The split function is critical in the data cleaning as my concern,it's an useful tool**

 ### Parsing the email address:the host address of email


```python
fhand = open('mbox-short.txt')

for line in fhand:
    line = line.rstrip()
    if not line.startswith('From'):continue
    words = line.split()
    print(words[1])
```

    stephen.marquard@uct.ac.za
    stephen.marquard@uct.ac.za
    louis@media.berkeley.edu
    louis@media.berkeley.edu
    zqian@umich.edu
    zqian@umich.edu
    rjlowe@iupui.edu
    rjlowe@iupui.edu
    zqian@umich.edu
    zqian@umich.edu
    rjlowe@iupui.edu
    rjlowe@iupui.edu
    cwen@iupui.edu
    cwen@iupui.edu
    cwen@iupui.edu
    cwen@iupui.edu
    gsilver@umich.edu
    gsilver@umich.edu
    gsilver@umich.edu
    gsilver@umich.edu
    zqian@umich.edu
    zqian@umich.edu
    gsilver@umich.edu
    gsilver@umich.edu
    wagnermr@iupui.edu
    wagnermr@iupui.edu
    zqian@umich.edu
    zqian@umich.edu
    antranig@caret.cam.ac.uk
    antranig@caret.cam.ac.uk
    gopal.ramasammycook@gmail.com
    gopal.ramasammycook@gmail.com
    david.horwitz@uct.ac.za
    david.horwitz@uct.ac.za
    david.horwitz@uct.ac.za
    david.horwitz@uct.ac.za
    david.horwitz@uct.ac.za
    david.horwitz@uct.ac.za
    david.horwitz@uct.ac.za
    david.horwitz@uct.ac.za
    stephen.marquard@uct.ac.za
    stephen.marquard@uct.ac.za
    louis@media.berkeley.edu
    louis@media.berkeley.edu
    louis@media.berkeley.edu
    louis@media.berkeley.edu
    ray@media.berkeley.edu
    ray@media.berkeley.edu
    cwen@iupui.edu
    cwen@iupui.edu
    cwen@iupui.edu
    cwen@iupui.edu
    cwen@iupui.edu
    cwen@iupui.edu



# 2. # words[2]

# 3. # words[2]

# 4. ---------------------------------------------------------------------------

# 5. IndexError                                Traceback (most recent call last)

# 6. <ipython-input-39-fd9607d1fd9d> in <module>

# 7. ----> 1 words[2]

# 8. IndexError: list index out of range
```


```python
type(words)
```




    list




# 9. So here the split works bad, we need to fix sth

# 10. So here the split works bad, we need to fix sth
```

 ### The Double Split Pattern

Sometimes we split a line one way, and then grab one of the
 pieces of the line and split that piece again


```python
fhand = open('mbox-short.txt')
for line in fhand:
    line = line.rstrip()
    if not line.startswith('From'):continue
    words = line.split()
    email=words[1]
    pieces = email.split('@')
```


```python
print(pieces) #it looks not like what showed on videos
```

    ['cwen', 'iupui.edu']


### 10.1. EX  33.036-Strings, Files, Lists and the Gua(Av46649799, P33).mp4


```python
han = open('mbox-short.txt')
for line in han:
    line = line.rstrip()
    print('Line:',line)
    wds = line.split()
    print('Words',wds)
```

    Line: From stephen.marquard@uct.ac.za Sat Jan  5 09:14:16 2008
    Words ['From', 'stephen.marquard@uct.ac.za', 'Sat', 'Jan', '5', '09:14:16', '2008']
    Line: Return-Path: <postmaster@collab.sakaiproject.org>
    Words ['Return-Path:', '<postmaster@collab.sakaiproject.org>']
    Line: Received: from murder (mail.umich.edu [141.211.14.90])
    Words ['Received:', 'from', 'murder', '(mail.umich.edu', '[141.211.14.90])']
    Line: 	 by frankenstein.mail.umich.edu (Cyrus v2.3.8) with LMTPA;
    Words ['by', 'frankenstein.mail.umich.edu', '(Cyrus', 'v2.3.8)', 'with', 'LMTPA;']
    Line: 	 Sat, 05 Jan 2008 09:14:16 -0500
    Words ['Sat,', '05', 'Jan', '2008', '09:14:16', '-0500']
    Line: X-Sieve: CMU Sieve 2.3
    Words ['X-Sieve:', 'CMU', 'Sieve', '2.3']
    Line: Received: from murder ([unix socket])
    Words ['Received:', 'from', 'murder', '([unix', 'socket])']
    Line: 	 by mail.umich.edu (Cyrus v2.2.12) with LMTPA;
    Words ['by', 'mail.umich.edu', '(Cyrus', 'v2.2.12)', 'with', 'LMTPA;']
    Line: 	 Sat, 05 Jan 2008 09:14:16 -0500
    Words ['Sat,', '05', 'Jan', '2008', '09:14:16', '-0500']
    Line: Received: from holes.mr.itd.umich.edu (holes.mr.itd.umich.edu [141.211.14.79])
    Words ['Received:', 'from', 'holes.mr.itd.umich.edu', '(holes.mr.itd.umich.edu', '[141.211.14.79])']
    Line: 	by flawless.mail.umich.edu () with ESMTP id m05EEFR1013674;
    Words ['by', 'flawless.mail.umich.edu', '()', 'with', 'ESMTP', 'id', 'm05EEFR1013674;']
    Line: 	Sat, 5 Jan 2008 09:14:15 -0500
    Words ['Sat,', '5', 'Jan', '2008', '09:14:15', '-0500']
    Line: Received: FROM paploo.uhi.ac.uk (app1.prod.collab.uhi.ac.uk [194.35.219.184])
    Words ['Received:', 'FROM', 'paploo.uhi.ac.uk', '(app1.prod.collab.uhi.ac.uk', '[194.35.219.184])']
    Line: 	BY holes.mr.itd.umich.edu ID 477F90B0.2DB2F.12494 ;
    Words ['BY', 'holes.mr.itd.umich.edu', 'ID', '477F90B0.2DB2F.12494', ';']
    Line: 	 5 Jan 2008 09:14:10 -0500
    Words ['5', 'Jan', '2008', '09:14:10', '-0500']
    Line: Received: from paploo.uhi.ac.uk (localhost [127.0.0.1])
    Words ['Received:', 'from', 'paploo.uhi.ac.uk', '(localhost', '[127.0.0.1])']
    Line: 	by paploo.uhi.ac.uk (Postfix) with ESMTP id 5F919BC2F2;
    Words ['by', 'paploo.uhi.ac.uk', '(Postfix)', 'with', 'ESMTP', 'id', '5F919BC2F2;']
    Line: 	Sat,  5 Jan 2008 14:10:05 +0000 (GMT)
    Words ['Sat,', '5', 'Jan', '2008', '14:10:05', '+0000', '(GMT)']
    Line: Message-ID: <200801051412.m05ECIaH010327@nakamura.uits.iupui.edu>
    Words ['Message-ID:', '<200801051412.m05ECIaH010327@nakamura.uits.iupui.edu>']
    Line: Mime-Version: 1.0
    Words ['Mime-Version:', '1.0']
    Line: Content-Transfer-Encoding: 7bit
    Words ['Content-Transfer-Encoding:', '7bit']
    Line: Received: from prod.collab.uhi.ac.uk ([194.35.219.182])
    Words ['Received:', 'from', 'prod.collab.uhi.ac.uk', '([194.35.219.182])']
    Line:           by paploo.uhi.ac.uk (JAMES SMTP Server 2.1.3) with SMTP ID 899
    Words ['by', 'paploo.uhi.ac.uk', '(JAMES', 'SMTP', 'Server', '2.1.3)', 'with', 'SMTP', 'ID', '899']
    Line:           for <source@collab.sakaiproject.org>;
    Words ['for', '<source@collab.sakaiproject.org>;']
    Line:           Sat, 5 Jan 2008 14:09:50 +0000 (GMT)
    Words ['Sat,', '5', 'Jan', '2008', '14:09:50', '+0000', '(GMT)']
    Line: Received: from nakamura.uits.iupui.edu (nakamura.uits.iupui.edu [134.68.220.122])
    Words ['Received:', 'from', 'nakamura.uits.iupui.edu', '(nakamura.uits.iupui.edu', '[134.68.220.122])']
    Line: 	by shmi.uhi.ac.uk (Postfix) with ESMTP id A215243002
    Words ['by', 'shmi.uhi.ac.uk', '(Postfix)', 'with', 'ESMTP', 'id', 'A215243002']
    Line: 	for <source@collab.sakaiproject.org>; Sat,  5 Jan 2008 14:13:33 +0000 (GMT)
    Words ['for', '<source@collab.sakaiproject.org>;', 'Sat,', '5', 'Jan', '2008', '14:13:33', '+0000', '(GMT)']
    Line: Received: from nakamura.uits.iupui.edu (localhost [127.0.0.1])
    Words ['Received:', 'from', 'nakamura.uits.iupui.edu', '(localhost', '[127.0.0.1])']
    Line: 	by nakamura.uits.iupui.edu (8.12.11.20060308/8.12.11) with ESMTP id m05ECJVp010329
    Words ['by', 'nakamura.uits.iupui.edu', '(8.12.11.20060308/8.12.11)', 'with', 'ESMTP', 'id', 'm05ECJVp010329']
    Line: 	for <source@collab.sakaiproject.org>; Sat, 5 Jan 2008 09:12:19 -0500
    Words ['for', '<source@collab.sakaiproject.org>;', 'Sat,', '5', 'Jan', '2008', '09:12:19', '-0500']
    Line: Received: (from apache@localhost)
    Words ['Received:', '(from', 'apache@localhost)']
    Line: 	by nakamura.uits.iupui.edu (8.12.11.20060308/8.12.11/Submit) id m05ECIaH010327
    Words ['by', 'nakamura.uits.iupui.edu', '(8.12.11.20060308/8.12.11/Submit)', 'id', 'm05ECIaH010327']
    Line: 	for source@collab.sakaiproject.org; Sat, 5 Jan 2008 09:12:18 -0500
    Words ['for', 'source@collab.sakaiproject.org;', 'Sat,', '5', 'Jan', '2008', '09:12:18', '-0500']
    Line: Date: Sat, 5 Jan 2008 09:12:18 -0500
    Words ['Date:', 'Sat,', '5', 'Jan', '2008', '09:12:18', '-0500']
    Line: X-Authentication-Warning: nakamura.uits.iupui.edu: apache set sender to stephen.marquard@uct.ac.za using -f
    Words ['X-Authentication-Warning:', 'nakamura.uits.iupui.edu:', 'apache', 'set', 'sender', 'to', 'stephen.marquard@uct.ac.za', 'using', '-f']
    Line: To: source@collab.sakaiproject.org
    Words ['To:', 'source@collab.sakaiproject.org']
    Line: From: stephen.marquard@uct.ac.za
    Words ['From:', 'stephen.marquard@uct.ac.za']
    Line: Subject: [sakai] svn commit: r39772 - content/branches/sakai_2-5-x/content-impl/impl/src/java/org/sakaiproject/content/impl
    Words ['Subject:', '[sakai]', 'svn', 'commit:', 'r39772', '-', 'content/branches/sakai_2-5-x/content-impl/impl/src/java/org/sakaiproject/content/impl']
    Line: X-Content-Type-Outer-Envelope: text/plain; charset=UTF-8
    Words ['X-Content-Type-Outer-Envelope:', 'text/plain;', 'charset=UTF-8']
    Line: X-Content-Type-Message-Body: text/plain; charset=UTF-8
    Words ['X-Content-Type-Message-Body:', 'text/plain;', 'charset=UTF-8']
    Line: Content-Type: text/plain; charset=UTF-8
    Words ['Content-Type:', 'text/plain;', 'charset=UTF-8']
    Line: X-DSPAM-Result: Innocent
    Words ['X-DSPAM-Result:', 'Innocent']
    Line: X-DSPAM-Processed: Sat Jan  5 09:14:16 2008
    Words ['X-DSPAM-Processed:', 'Sat', 'Jan', '5', '09:14:16', '2008']
    Line: X-DSPAM-Confidence: 0.8475
    Words ['X-DSPAM-Confidence:', '0.8475']
    Line: X-DSPAM-Probability: 0.0000
    Words ['X-DSPAM-Probability:', '0.0000']
    Line: 
    Words []
    Line: Details: http://source.sakaiproject.org/viewsvn/?view=rev&rev=39772
    Words ['Details:', 'http://source.sakaiproject.org/viewsvn/?view=rev&rev=39772']
    Line: 
    Words []
    Line: Author: stephen.marquard@uct.ac.za
    Words ['Author:', 'stephen.marquard@uct.ac.za']
    Line: Date: 2008-01-05 09:12:07 -0500 (Sat, 05 Jan 2008)
    Words ['Date:', '2008-01-05', '09:12:07', '-0500', '(Sat,', '05', 'Jan', '2008)']
    Line: New Revision: 39772
    Words ['New', 'Revision:', '39772']
    Line: 
    Words []
    Line: Modified:
    Words ['Modified:']
    Line: content/branches/sakai_2-5-x/content-impl/impl/src/java/org/sakaiproject/content/impl/ContentServiceSqlOracle.java
    Words ['content/branches/sakai_2-5-x/content-impl/impl/src/java/org/sakaiproject/content/impl/ContentServiceSqlOracle.java']
    Line: content/branches/sakai_2-5-x/content-impl/impl/src/java/org/sakaiproject/content/impl/DbContentService.java
    Words ['content/branches/sakai_2-5-x/content-impl/impl/src/java/org/sakaiproject/content/impl/DbContentService.java']
    Line: Log:
    Words ['Log:']
    Line: SAK-12501 merge to 2-5-x: r39622, r39624:5, r39632:3 (resolve conflict from differing linebreaks for r39622)
    Words ['SAK-12501', 'merge', 'to', '2-5-x:', 'r39622,', 'r39624:5,', 'r39632:3', '(resolve', 'conflict', 'from', 'differing', 'linebreaks', 'for', 'r39622)']
    Line: 
    Words []
    Line: ----------------------
    Words ['----------------------']
    Line: This automatic notification message was sent by Sakai Collab (https://collab.sakaiproject.org/portal) from the Source site.
    Words ['This', 'automatic', 'notification', 'message', 'was', 'sent', 'by', 'Sakai', 'Collab', '(https://collab.sakaiproject.org/portal)', 'from', 'the', 'Source', 'site.']
    Line: You can modify how you receive notifications at My Workspace > Preferences.
    Words ['You', 'can', 'modify', 'how', 'you', 'receive', 'notifications', 'at', 'My', 'Workspace', '>', 'Preferences.']
    Line: 
    Words []
    Line: 
    Words []
    Line: 
    Words []
    Line: From louis@media.berkeley.edu Fri Jan  4 18:10:48 2008
    Words ['From', 'louis@media.berkeley.edu', 'Fri', 'Jan', '4', '18:10:48', '2008']
    Line: Return-Path: <postmaster@collab.sakaiproject.org>
    Words ['Return-Path:', '<postmaster@collab.sakaiproject.org>']
    Line: Received: from murder (mail.umich.edu [141.211.14.97])
    Words ['Received:', 'from', 'murder', '(mail.umich.edu', '[141.211.14.97])']
    Line: 	 by frankenstein.mail.umich.edu (Cyrus v2.3.8) with LMTPA;
    Words ['by', 'frankenstein.mail.umich.edu', '(Cyrus', 'v2.3.8)', 'with', 'LMTPA;']
    Line: 	 Fri, 04 Jan 2008 18:10:48 -0500
    Words ['Fri,', '04', 'Jan', '2008', '18:10:48', '-0500']
    Line: X-Sieve: CMU Sieve 2.3
    Words ['X-Sieve:', 'CMU', 'Sieve', '2.3']
    Line: Received: from murder ([unix socket])
    Words ['Received:', 'from', 'murder', '([unix', 'socket])']
    Line: 	 by mail.umich.edu (Cyrus v2.2.12) with LMTPA;
    Words ['by', 'mail.umich.edu', '(Cyrus', 'v2.2.12)', 'with', 'LMTPA;']
    Line: 	 Fri, 04 Jan 2008 18:10:48 -0500
    Words ['Fri,', '04', 'Jan', '2008', '18:10:48', '-0500']
    Line: Received: from icestorm.mr.itd.umich.edu (icestorm.mr.itd.umich.edu [141.211.93.149])
    Words ['Received:', 'from', 'icestorm.mr.itd.umich.edu', '(icestorm.mr.itd.umich.edu', '[141.211.93.149])']
    Line: 	by sleepers.mail.umich.edu () with ESMTP id m04NAbGa029441;
    Words ['by', 'sleepers.mail.umich.edu', '()', 'with', 'ESMTP', 'id', 'm04NAbGa029441;']
    Line: 	Fri, 4 Jan 2008 18:10:37 -0500
    Words ['Fri,', '4', 'Jan', '2008', '18:10:37', '-0500']
    Line: Received: FROM paploo.uhi.ac.uk (app1.prod.collab.uhi.ac.uk [194.35.219.184])
    Words ['Received:', 'FROM', 'paploo.uhi.ac.uk', '(app1.prod.collab.uhi.ac.uk', '[194.35.219.184])']
    Line: 	BY icestorm.mr.itd.umich.edu ID 477EBCE3.161BB.4320 ;
    Words ['BY', 'icestorm.mr.itd.umich.edu', 'ID', '477EBCE3.161BB.4320', ';']
    Line: 	 4 Jan 2008 18:10:31 -0500
    Words ['4', 'Jan', '2008', '18:10:31', '-0500']
    Line: Received: from paploo.uhi.ac.uk (localhost [127.0.0.1])
    Words ['Received:', 'from', 'paploo.uhi.ac.uk', '(localhost', '[127.0.0.1])']
    Line: 	by paploo.uhi.ac.uk (Postfix) with ESMTP id 07969BB706;
    Words ['by', 'paploo.uhi.ac.uk', '(Postfix)', 'with', 'ESMTP', 'id', '07969BB706;']
    Line: 	Fri,  4 Jan 2008 23:10:33 +0000 (GMT)
    Words ['Fri,', '4', 'Jan', '2008', '23:10:33', '+0000', '(GMT)']
    Line: Message-ID: <200801042308.m04N8v6O008125@nakamura.uits.iupui.edu>
    Words ['Message-ID:', '<200801042308.m04N8v6O008125@nakamura.uits.iupui.edu>']
    Line: Mime-Version: 1.0
    Words ['Mime-Version:', '1.0']
    Line: Content-Transfer-Encoding: 7bit
    Words ['Content-Transfer-Encoding:', '7bit']
    Line: Received: from prod.collab.uhi.ac.uk ([194.35.219.182])
    Words ['Received:', 'from', 'prod.collab.uhi.ac.uk', '([194.35.219.182])']
    Line:           by paploo.uhi.ac.uk (JAMES SMTP Server 2.1.3) with SMTP ID 710
    Words ['by', 'paploo.uhi.ac.uk', '(JAMES', 'SMTP', 'Server', '2.1.3)', 'with', 'SMTP', 'ID', '710']
    Line:           for <source@collab.sakaiproject.org>;
    Words ['for', '<source@collab.sakaiproject.org>;']
    Line:           Fri, 4 Jan 2008 23:10:10 +0000 (GMT)
    Words ['Fri,', '4', 'Jan', '2008', '23:10:10', '+0000', '(GMT)']
    Line: Received: from nakamura.uits.iupui.edu (nakamura.uits.iupui.edu [134.68.220.122])
    Words ['Received:', 'from', 'nakamura.uits.iupui.edu', '(nakamura.uits.iupui.edu', '[134.68.220.122])']
    Line: 	by shmi.uhi.ac.uk (Postfix) with ESMTP id 4BA2F42F57
    Words ['by', 'shmi.uhi.ac.uk', '(Postfix)', 'with', 'ESMTP', 'id', '4BA2F42F57']
    Line: 	for <source@collab.sakaiproject.org>; Fri,  4 Jan 2008 23:10:10 +0000 (GMT)
    Words ['for', '<source@collab.sakaiproject.org>;', 'Fri,', '4', 'Jan', '2008', '23:10:10', '+0000', '(GMT)']
    Line: Received: from nakamura.uits.iupui.edu (localhost [127.0.0.1])
    Words ['Received:', 'from', 'nakamura.uits.iupui.edu', '(localhost', '[127.0.0.1])']
    Line: 	by nakamura.uits.iupui.edu (8.12.11.20060308/8.12.11) with ESMTP id m04N8vHG008127
    Words ['by', 'nakamura.uits.iupui.edu', '(8.12.11.20060308/8.12.11)', 'with', 'ESMTP', 'id', 'm04N8vHG008127']
    Line: 	for <source@collab.sakaiproject.org>; Fri, 4 Jan 2008 18:08:57 -0500
    Words ['for', '<source@collab.sakaiproject.org>;', 'Fri,', '4', 'Jan', '2008', '18:08:57', '-0500']
    Line: Received: (from apache@localhost)
    Words ['Received:', '(from', 'apache@localhost)']
    Line: 	by nakamura.uits.iupui.edu (8.12.11.20060308/8.12.11/Submit) id m04N8v6O008125
    Words ['by', 'nakamura.uits.iupui.edu', '(8.12.11.20060308/8.12.11/Submit)', 'id', 'm04N8v6O008125']
    Line: 	for source@collab.sakaiproject.org; Fri, 4 Jan 2008 18:08:57 -0500
    Words ['for', 'source@collab.sakaiproject.org;', 'Fri,', '4', 'Jan', '2008', '18:08:57', '-0500']
    Line: Date: Fri, 4 Jan 2008 18:08:57 -0500
    Words ['Date:', 'Fri,', '4', 'Jan', '2008', '18:08:57', '-0500']
    Line: X-Authentication-Warning: nakamura.uits.iupui.edu: apache set sender to louis@media.berkeley.edu using -f
    Words ['X-Authentication-Warning:', 'nakamura.uits.iupui.edu:', 'apache', 'set', 'sender', 'to', 'louis@media.berkeley.edu', 'using', '-f']
    Line: To: source@collab.sakaiproject.org
    Words ['To:', 'source@collab.sakaiproject.org']
    Line: From: louis@media.berkeley.edu
    Words ['From:', 'louis@media.berkeley.edu']
    Line: Subject: [sakai] svn commit: r39771 - in bspace/site-manage/sakai_2-4-x/site-manage-tool/tool/src: bundle java/org/sakaiproject/site/tool
    Words ['Subject:', '[sakai]', 'svn', 'commit:', 'r39771', '-', 'in', 'bspace/site-manage/sakai_2-4-x/site-manage-tool/tool/src:', 'bundle', 'java/org/sakaiproject/site/tool']
    Line: X-Content-Type-Outer-Envelope: text/plain; charset=UTF-8
    Words ['X-Content-Type-Outer-Envelope:', 'text/plain;', 'charset=UTF-8']
    Line: X-Content-Type-Message-Body: text/plain; charset=UTF-8
    Words ['X-Content-Type-Message-Body:', 'text/plain;', 'charset=UTF-8']
    Line: Content-Type: text/plain; charset=UTF-8
    Words ['Content-Type:', 'text/plain;', 'charset=UTF-8']
    Line: X-DSPAM-Result: Innocent
    Words ['X-DSPAM-Result:', 'Innocent']
    Line: X-DSPAM-Processed: Fri Jan  4 18:10:48 2008
    Words ['X-DSPAM-Processed:', 'Fri', 'Jan', '4', '18:10:48', '2008']
    Line: X-DSPAM-Confidence: 0.6178
    Words ['X-DSPAM-Confidence:', '0.6178']
    Line: X-DSPAM-Probability: 0.0000
    Words ['X-DSPAM-Probability:', '0.0000']
    Line: 
    Words []
    Line: Details: http://source.sakaiproject.org/viewsvn/?view=rev&rev=39771
    Words ['Details:', 'http://source.sakaiproject.org/viewsvn/?view=rev&rev=39771']
    Line: 
    Words []
    Line: Author: louis@media.berkeley.edu
    Words ['Author:', 'louis@media.berkeley.edu']
    Line: Date: 2008-01-04 18:08:50 -0500 (Fri, 04 Jan 2008)
    Words ['Date:', '2008-01-04', '18:08:50', '-0500', '(Fri,', '04', 'Jan', '2008)']
    Line: New Revision: 39771
    Words ['New', 'Revision:', '39771']
    Line: 
    Words []
    Line: Modified:
    Words ['Modified:']
    Line: bspace/site-manage/sakai_2-4-x/site-manage-tool/tool/src/bundle/sitesetupgeneric.properties
    Words ['bspace/site-manage/sakai_2-4-x/site-manage-tool/tool/src/bundle/sitesetupgeneric.properties']
    Line: bspace/site-manage/sakai_2-4-x/site-manage-tool/tool/src/java/org/sakaiproject/site/tool/SiteAction.java
    Words ['bspace/site-manage/sakai_2-4-x/site-manage-tool/tool/src/java/org/sakaiproject/site/tool/SiteAction.java']
    Line: Log:
    Words ['Log:']
    Line: BSP-1415 New (Guest) user Notification
    Words ['BSP-1415', 'New', '(Guest)', 'user', 'Notification']
    Line: 
    Words []
    Line: ----------------------
    Words ['----------------------']
    Line: This automatic notification message was sent by Sakai Collab (https://collab.sakaiproject.org/portal) from the Source site.
    Words ['This', 'automatic', 'notification', 'message', 'was', 'sent', 'by', 'Sakai', 'Collab', '(https://collab.sakaiproject.org/portal)', 'from', 'the', 'Source', 'site.']
    Line: You can modify how you receive notifications at My Workspace > Preferences.
    Words ['You', 'can', 'modify', 'how', 'you', 'receive', 'notifications', 'at', 'My', 'Workspace', '>', 'Preferences.']
    Line: 
    Words []
    Line: 
    Words []
    Line: 
    Words []
    Line: From zqian@umich.edu Fri Jan  4 16:10:39 2008
    Words ['From', 'zqian@umich.edu', 'Fri', 'Jan', '4', '16:10:39', '2008']
    Line: Return-Path: <postmaster@collab.sakaiproject.org>
    Words ['Return-Path:', '<postmaster@collab.sakaiproject.org>']
    Line: Received: from murder (mail.umich.edu [141.211.14.25])
    Words ['Received:', 'from', 'murder', '(mail.umich.edu', '[141.211.14.25])']
    Line: 	 by frankenstein.mail.umich.edu (Cyrus v2.3.8) with LMTPA;
    Words ['by', 'frankenstein.mail.umich.edu', '(Cyrus', 'v2.3.8)', 'with', 'LMTPA;']
    Line: 	 Fri, 04 Jan 2008 16:10:39 -0500
    Words ['Fri,', '04', 'Jan', '2008', '16:10:39', '-0500']
    Line: X-Sieve: CMU Sieve 2.3
    Words ['X-Sieve:', 'CMU', 'Sieve', '2.3']
    Line: Received: from murder ([unix socket])
    Words ['Received:', 'from', 'murder', '([unix', 'socket])']
    Line: 	 by mail.umich.edu (Cyrus v2.2.12) with LMTPA;
    Words ['by', 'mail.umich.edu', '(Cyrus', 'v2.2.12)', 'with', 'LMTPA;']
    Line: 	 Fri, 04 Jan 2008 16:10:39 -0500
    Words ['Fri,', '04', 'Jan', '2008', '16:10:39', '-0500']
    Line: Received: from ghostbusters.mr.itd.umich.edu (ghostbusters.mr.itd.umich.edu [141.211.93.144])
    Words ['Received:', 'from', 'ghostbusters.mr.itd.umich.edu', '(ghostbusters.mr.itd.umich.edu', '[141.211.93.144])']
    Line: 	by panther.mail.umich.edu () with ESMTP id m04LAcZw014275;
    Words ['by', 'panther.mail.umich.edu', '()', 'with', 'ESMTP', 'id', 'm04LAcZw014275;']
    Line: 	Fri, 4 Jan 2008 16:10:38 -0500
    Words ['Fri,', '4', 'Jan', '2008', '16:10:38', '-0500']
    Line: Received: FROM paploo.uhi.ac.uk (app1.prod.collab.uhi.ac.uk [194.35.219.184])
    Words ['Received:', 'FROM', 'paploo.uhi.ac.uk', '(app1.prod.collab.uhi.ac.uk', '[194.35.219.184])']
    Line: 	BY ghostbusters.mr.itd.umich.edu ID 477EA0C6.A0214.25480 ;
    Words ['BY', 'ghostbusters.mr.itd.umich.edu', 'ID', '477EA0C6.A0214.25480', ';']
    Line: 	 4 Jan 2008 16:10:33 -0500
    Words ['4', 'Jan', '2008', '16:10:33', '-0500']
    Line: Received: from paploo.uhi.ac.uk (localhost [127.0.0.1])
    Words ['Received:', 'from', 'paploo.uhi.ac.uk', '(localhost', '[127.0.0.1])']
    Line: 	by paploo.uhi.ac.uk (Postfix) with ESMTP id C48CDBB490;
    Words ['by', 'paploo.uhi.ac.uk', '(Postfix)', 'with', 'ESMTP', 'id', 'C48CDBB490;']
    Line: 	Fri,  4 Jan 2008 21:10:31 +0000 (GMT)
    Words ['Fri,', '4', 'Jan', '2008', '21:10:31', '+0000', '(GMT)']
    Line: Message-ID: <200801042109.m04L92hb007923@nakamura.uits.iupui.edu>
    Words ['Message-ID:', '<200801042109.m04L92hb007923@nakamura.uits.iupui.edu>']
    Line: Mime-Version: 1.0
    Words ['Mime-Version:', '1.0']
    Line: Content-Transfer-Encoding: 7bit
    Words ['Content-Transfer-Encoding:', '7bit']
    Line: Received: from prod.collab.uhi.ac.uk ([194.35.219.182])
    Words ['Received:', 'from', 'prod.collab.uhi.ac.uk', '([194.35.219.182])']
    Line:           by paploo.uhi.ac.uk (JAMES SMTP Server 2.1.3) with SMTP ID 906
    Words ['by', 'paploo.uhi.ac.uk', '(JAMES', 'SMTP', 'Server', '2.1.3)', 'with', 'SMTP', 'ID', '906']
    Line:           for <source@collab.sakaiproject.org>;
    Words ['for', '<source@collab.sakaiproject.org>;']
    Line:           Fri, 4 Jan 2008 21:10:18 +0000 (GMT)
    Words ['Fri,', '4', 'Jan', '2008', '21:10:18', '+0000', '(GMT)']
    Line: Received: from nakamura.uits.iupui.edu (nakamura.uits.iupui.edu [134.68.220.122])
    Words ['Received:', 'from', 'nakamura.uits.iupui.edu', '(nakamura.uits.iupui.edu', '[134.68.220.122])']
    Line: 	by shmi.uhi.ac.uk (Postfix) with ESMTP id 7D13042F71
    Words ['by', 'shmi.uhi.ac.uk', '(Postfix)', 'with', 'ESMTP', 'id', '7D13042F71']
    Line: 	for <source@collab.sakaiproject.org>; Fri,  4 Jan 2008 21:10:14 +0000 (GMT)
    Words ['for', '<source@collab.sakaiproject.org>;', 'Fri,', '4', 'Jan', '2008', '21:10:14', '+0000', '(GMT)']
    Line: Received: from nakamura.uits.iupui.edu (localhost [127.0.0.1])
    Words ['Received:', 'from', 'nakamura.uits.iupui.edu', '(localhost', '[127.0.0.1])']
    Line: 	by nakamura.uits.iupui.edu (8.12.11.20060308/8.12.11) with ESMTP id m04L927E007925
    Words ['by', 'nakamura.uits.iupui.edu', '(8.12.11.20060308/8.12.11)', 'with', 'ESMTP', 'id', 'm04L927E007925']
    Line: 	for <source@collab.sakaiproject.org>; Fri, 4 Jan 2008 16:09:02 -0500
    Words ['for', '<source@collab.sakaiproject.org>;', 'Fri,', '4', 'Jan', '2008', '16:09:02', '-0500']
    Line: Received: (from apache@localhost)
    Words ['Received:', '(from', 'apache@localhost)']
    Line: 	by nakamura.uits.iupui.edu (8.12.11.20060308/8.12.11/Submit) id m04L92hb007923
    Words ['by', 'nakamura.uits.iupui.edu', '(8.12.11.20060308/8.12.11/Submit)', 'id', 'm04L92hb007923']
    Line: 	for source@collab.sakaiproject.org; Fri, 4 Jan 2008 16:09:02 -0500
    Words ['for', 'source@collab.sakaiproject.org;', 'Fri,', '4', 'Jan', '2008', '16:09:02', '-0500']
    Line: Date: Fri, 4 Jan 2008 16:09:02 -0500
    Words ['Date:', 'Fri,', '4', 'Jan', '2008', '16:09:02', '-0500']
    Line: X-Authentication-Warning: nakamura.uits.iupui.edu: apache set sender to zqian@umich.edu using -f
    Words ['X-Authentication-Warning:', 'nakamura.uits.iupui.edu:', 'apache', 'set', 'sender', 'to', 'zqian@umich.edu', 'using', '-f']
    Line: To: source@collab.sakaiproject.org
    Words ['To:', 'source@collab.sakaiproject.org']
    Line: From: zqian@umich.edu
    Words ['From:', 'zqian@umich.edu']
    Line: Subject: [sakai] svn commit: r39770 - site-manage/branches/sakai_2-5-x/site-manage-tool/tool/src/webapp/vm/sitesetup
    Words ['Subject:', '[sakai]', 'svn', 'commit:', 'r39770', '-', 'site-manage/branches/sakai_2-5-x/site-manage-tool/tool/src/webapp/vm/sitesetup']
    Line: X-Content-Type-Outer-Envelope: text/plain; charset=UTF-8
    Words ['X-Content-Type-Outer-Envelope:', 'text/plain;', 'charset=UTF-8']
    Line: X-Content-Type-Message-Body: text/plain; charset=UTF-8
    Words ['X-Content-Type-Message-Body:', 'text/plain;', 'charset=UTF-8']
    Line: Content-Type: text/plain; charset=UTF-8
    Words ['Content-Type:', 'text/plain;', 'charset=UTF-8']
    Line: X-DSPAM-Result: Innocent
    Words ['X-DSPAM-Result:', 'Innocent']
    Line: X-DSPAM-Processed: Fri Jan  4 16:10:39 2008
    Words ['X-DSPAM-Processed:', 'Fri', 'Jan', '4', '16:10:39', '2008']
    Line: X-DSPAM-Confidence: 0.6961
    Words ['X-DSPAM-Confidence:', '0.6961']
    Line: X-DSPAM-Probability: 0.0000
    Words ['X-DSPAM-Probability:', '0.0000']
    Line: 
    Words []
    Line: Details: http://source.sakaiproject.org/viewsvn/?view=rev&rev=39770
    Words ['Details:', 'http://source.sakaiproject.org/viewsvn/?view=rev&rev=39770']
    Line: 
    Words []
    Line: Author: zqian@umich.edu
    Words ['Author:', 'zqian@umich.edu']
    Line: Date: 2008-01-04 16:09:01 -0500 (Fri, 04 Jan 2008)
    Words ['Date:', '2008-01-04', '16:09:01', '-0500', '(Fri,', '04', 'Jan', '2008)']
    Line: New Revision: 39770
    Words ['New', 'Revision:', '39770']
    Line: 
    Words []
    Line: Modified:
    Words ['Modified:']
    Line: site-manage/branches/sakai_2-5-x/site-manage-tool/tool/src/webapp/vm/sitesetup/chef_site-siteInfo-list.vm
    Words ['site-manage/branches/sakai_2-5-x/site-manage-tool/tool/src/webapp/vm/sitesetup/chef_site-siteInfo-list.vm']
    Line: Log:
    Words ['Log:']
    Line: merge fix to SAK-9996 into 2-5-x branch: svn merge -r 39687:39688 https://source.sakaiproject.org/svn/site-manage/trunk/
    Words ['merge', 'fix', 'to', 'SAK-9996', 'into', '2-5-x', 'branch:', 'svn', 'merge', '-r', '39687:39688', 'https://source.sakaiproject.org/svn/site-manage/trunk/']
    Line: 
    Words []
    Line: ----------------------
    Words ['----------------------']
    Line: This automatic notification message was sent by Sakai Collab (https://collab.sakaiproject.org/portal) from the Source site.
    Words ['This', 'automatic', 'notification', 'message', 'was', 'sent', 'by', 'Sakai', 'Collab', '(https://collab.sakaiproject.org/portal)', 'from', 'the', 'Source', 'site.']
    Line: You can modify how you receive notifications at My Workspace > Preferences.
    Words ['You', 'can', 'modify', 'how', 'you', 'receive', 'notifications', 'at', 'My', 'Workspace', '>', 'Preferences.']
    Line: 
    Words []
    Line: 
    Words []
    Line: 
    Words []
    Line: From rjlowe@iupui.edu Fri Jan  4 15:46:24 2008
    Words ['From', 'rjlowe@iupui.edu', 'Fri', 'Jan', '4', '15:46:24', '2008']
    Line: Return-Path: <postmaster@collab.sakaiproject.org>
    Words ['Return-Path:', '<postmaster@collab.sakaiproject.org>']
    Line: Received: from murder (mail.umich.edu [141.211.14.25])
    Words ['Received:', 'from', 'murder', '(mail.umich.edu', '[141.211.14.25])']
    Line: 	 by frankenstein.mail.umich.edu (Cyrus v2.3.8) with LMTPA;
    Words ['by', 'frankenstein.mail.umich.edu', '(Cyrus', 'v2.3.8)', 'with', 'LMTPA;']
    Line: 	 Fri, 04 Jan 2008 15:46:24 -0500
    Words ['Fri,', '04', 'Jan', '2008', '15:46:24', '-0500']
    Line: X-Sieve: CMU Sieve 2.3
    Words ['X-Sieve:', 'CMU', 'Sieve', '2.3']
    Line: Received: from murder ([unix socket])
    Words ['Received:', 'from', 'murder', '([unix', 'socket])']
    Line: 	 by mail.umich.edu (Cyrus v2.2.12) with LMTPA;
    Words ['by', 'mail.umich.edu', '(Cyrus', 'v2.2.12)', 'with', 'LMTPA;']
    Line: 	 Fri, 04 Jan 2008 15:46:24 -0500
    Words ['Fri,', '04', 'Jan', '2008', '15:46:24', '-0500']
    Line: Received: from dreamcatcher.mr.itd.umich.edu (dreamcatcher.mr.itd.umich.edu [141.211.14.43])
    Words ['Received:', 'from', 'dreamcatcher.mr.itd.umich.edu', '(dreamcatcher.mr.itd.umich.edu', '[141.211.14.43])']
    Line: 	by panther.mail.umich.edu () with ESMTP id m04KkNbx032077;
    Words ['by', 'panther.mail.umich.edu', '()', 'with', 'ESMTP', 'id', 'm04KkNbx032077;']
    Line: 	Fri, 4 Jan 2008 15:46:23 -0500
    Words ['Fri,', '4', 'Jan', '2008', '15:46:23', '-0500']
    Line: Received: FROM paploo.uhi.ac.uk (app1.prod.collab.uhi.ac.uk [194.35.219.184])
    Words ['Received:', 'FROM', 'paploo.uhi.ac.uk', '(app1.prod.collab.uhi.ac.uk', '[194.35.219.184])']
    Line: 	BY dreamcatcher.mr.itd.umich.edu ID 477E9B13.2F3BC.22965 ;
    Words ['BY', 'dreamcatcher.mr.itd.umich.edu', 'ID', '477E9B13.2F3BC.22965', ';']
    Line: 	 4 Jan 2008 15:46:13 -0500
    Words ['4', 'Jan', '2008', '15:46:13', '-0500']
    Line: Received: from paploo.uhi.ac.uk (localhost [127.0.0.1])
    Words ['Received:', 'from', 'paploo.uhi.ac.uk', '(localhost', '[127.0.0.1])']
    Line: 	by paploo.uhi.ac.uk (Postfix) with ESMTP id 4AE03BB552;
    Words ['by', 'paploo.uhi.ac.uk', '(Postfix)', 'with', 'ESMTP', 'id', '4AE03BB552;']
    Line: 	Fri,  4 Jan 2008 20:46:13 +0000 (GMT)
    Words ['Fri,', '4', 'Jan', '2008', '20:46:13', '+0000', '(GMT)']
    Line: Message-ID: <200801042044.m04Kiem3007881@nakamura.uits.iupui.edu>
    Words ['Message-ID:', '<200801042044.m04Kiem3007881@nakamura.uits.iupui.edu>']
    Line: Mime-Version: 1.0
    Words ['Mime-Version:', '1.0']
    Line: Content-Transfer-Encoding: 7bit
    Words ['Content-Transfer-Encoding:', '7bit']
    Line: Received: from prod.collab.uhi.ac.uk ([194.35.219.182])
    Words ['Received:', 'from', 'prod.collab.uhi.ac.uk', '([194.35.219.182])']
    Line:           by paploo.uhi.ac.uk (JAMES SMTP Server 2.1.3) with SMTP ID 38
    Words ['by', 'paploo.uhi.ac.uk', '(JAMES', 'SMTP', 'Server', '2.1.3)', 'with', 'SMTP', 'ID', '38']
    Line:           for <source@collab.sakaiproject.org>;
    Words ['for', '<source@collab.sakaiproject.org>;']
    Line:           Fri, 4 Jan 2008 20:45:56 +0000 (GMT)
    Words ['Fri,', '4', 'Jan', '2008', '20:45:56', '+0000', '(GMT)']
    Line: Received: from nakamura.uits.iupui.edu (nakamura.uits.iupui.edu [134.68.220.122])
    Words ['Received:', 'from', 'nakamura.uits.iupui.edu', '(nakamura.uits.iupui.edu', '[134.68.220.122])']
    Line: 	by shmi.uhi.ac.uk (Postfix) with ESMTP id A55D242F57
    Words ['by', 'shmi.uhi.ac.uk', '(Postfix)', 'with', 'ESMTP', 'id', 'A55D242F57']
    Line: 	for <source@collab.sakaiproject.org>; Fri,  4 Jan 2008 20:45:52 +0000 (GMT)
    Words ['for', '<source@collab.sakaiproject.org>;', 'Fri,', '4', 'Jan', '2008', '20:45:52', '+0000', '(GMT)']
    Line: Received: from nakamura.uits.iupui.edu (localhost [127.0.0.1])
    Words ['Received:', 'from', 'nakamura.uits.iupui.edu', '(localhost', '[127.0.0.1])']
    Line: 	by nakamura.uits.iupui.edu (8.12.11.20060308/8.12.11) with ESMTP id m04KieqE007883
    Words ['by', 'nakamura.uits.iupui.edu', '(8.12.11.20060308/8.12.11)', 'with', 'ESMTP', 'id', 'm04KieqE007883']
    Line: 	for <source@collab.sakaiproject.org>; Fri, 4 Jan 2008 15:44:40 -0500
    Words ['for', '<source@collab.sakaiproject.org>;', 'Fri,', '4', 'Jan', '2008', '15:44:40', '-0500']
    Line: Received: (from apache@localhost)
    Words ['Received:', '(from', 'apache@localhost)']
    Line: 	by nakamura.uits.iupui.edu (8.12.11.20060308/8.12.11/Submit) id m04Kiem3007881
    Words ['by', 'nakamura.uits.iupui.edu', '(8.12.11.20060308/8.12.11/Submit)', 'id', 'm04Kiem3007881']
    Line: 	for source@collab.sakaiproject.org; Fri, 4 Jan 2008 15:44:40 -0500
    Words ['for', 'source@collab.sakaiproject.org;', 'Fri,', '4', 'Jan', '2008', '15:44:40', '-0500']
    Line: Date: Fri, 4 Jan 2008 15:44:40 -0500
    Words ['Date:', 'Fri,', '4', 'Jan', '2008', '15:44:40', '-0500']
    Line: X-Authentication-Warning: nakamura.uits.iupui.edu: apache set sender to rjlowe@iupui.edu using -f
    Words ['X-Authentication-Warning:', 'nakamura.uits.iupui.edu:', 'apache', 'set', 'sender', 'to', 'rjlowe@iupui.edu', 'using', '-f']
    Line: To: source@collab.sakaiproject.org
    Words ['To:', 'source@collab.sakaiproject.org']
    Line: From: rjlowe@iupui.edu
    Words ['From:', 'rjlowe@iupui.edu']
    Line: Subject: [sakai] svn commit: r39769 - in gradebook/trunk/app/ui/src: java/org/sakaiproject/tool/gradebook/ui/helpers/beans java/org/sakaiproject/tool/gradebook/ui/helpers/producers webapp/WEB-INF webapp/WEB-INF/bundle
    Words ['Subject:', '[sakai]', 'svn', 'commit:', 'r39769', '-', 'in', 'gradebook/trunk/app/ui/src:', 'java/org/sakaiproject/tool/gradebook/ui/helpers/beans', 'java/org/sakaiproject/tool/gradebook/ui/helpers/producers', 'webapp/WEB-INF', 'webapp/WEB-INF/bundle']
    Line: X-Content-Type-Outer-Envelope: text/plain; charset=UTF-8
    Words ['X-Content-Type-Outer-Envelope:', 'text/plain;', 'charset=UTF-8']
    Line: X-Content-Type-Message-Body: text/plain; charset=UTF-8
    Words ['X-Content-Type-Message-Body:', 'text/plain;', 'charset=UTF-8']
    Line: Content-Type: text/plain; charset=UTF-8
    Words ['Content-Type:', 'text/plain;', 'charset=UTF-8']
    Line: X-DSPAM-Result: Innocent
    Words ['X-DSPAM-Result:', 'Innocent']
    Line: X-DSPAM-Processed: Fri Jan  4 15:46:24 2008
    Words ['X-DSPAM-Processed:', 'Fri', 'Jan', '4', '15:46:24', '2008']
    Line: X-DSPAM-Confidence: 0.7565
    Words ['X-DSPAM-Confidence:', '0.7565']
    Line: X-DSPAM-Probability: 0.0000
    Words ['X-DSPAM-Probability:', '0.0000']
    Line: 
    Words []
    Line: Details: http://source.sakaiproject.org/viewsvn/?view=rev&rev=39769
    Words ['Details:', 'http://source.sakaiproject.org/viewsvn/?view=rev&rev=39769']
    Line: 
    Words []
    Line: Author: rjlowe@iupui.edu
    Words ['Author:', 'rjlowe@iupui.edu']
    Line: Date: 2008-01-04 15:44:39 -0500 (Fri, 04 Jan 2008)
    Words ['Date:', '2008-01-04', '15:44:39', '-0500', '(Fri,', '04', 'Jan', '2008)']
    Line: New Revision: 39769
    Words ['New', 'Revision:', '39769']
    Line: 
    Words []
    Line: Modified:
    Words ['Modified:']
    Line: gradebook/trunk/app/ui/src/java/org/sakaiproject/tool/gradebook/ui/helpers/beans/AssignmentGradeRecordBean.java
    Words ['gradebook/trunk/app/ui/src/java/org/sakaiproject/tool/gradebook/ui/helpers/beans/AssignmentGradeRecordBean.java']
    Line: gradebook/trunk/app/ui/src/java/org/sakaiproject/tool/gradebook/ui/helpers/producers/GradeGradebookItemProducer.java
    Words ['gradebook/trunk/app/ui/src/java/org/sakaiproject/tool/gradebook/ui/helpers/producers/GradeGradebookItemProducer.java']
    Line: gradebook/trunk/app/ui/src/webapp/WEB-INF/applicationContext.xml
    Words ['gradebook/trunk/app/ui/src/webapp/WEB-INF/applicationContext.xml']
    Line: gradebook/trunk/app/ui/src/webapp/WEB-INF/bundle/messages.properties
    Words ['gradebook/trunk/app/ui/src/webapp/WEB-INF/bundle/messages.properties']
    Line: gradebook/trunk/app/ui/src/webapp/WEB-INF/requestContext.xml
    Words ['gradebook/trunk/app/ui/src/webapp/WEB-INF/requestContext.xml']
    Line: Log:
    Words ['Log:']
    Line: SAK-12180 - Fixed errors with grading helper
    Words ['SAK-12180', '-', 'Fixed', 'errors', 'with', 'grading', 'helper']
    Line: 
    Words []
    Line: ----------------------
    Words ['----------------------']
    Line: This automatic notification message was sent by Sakai Collab (https://collab.sakaiproject.org/portal) from the Source site.
    Words ['This', 'automatic', 'notification', 'message', 'was', 'sent', 'by', 'Sakai', 'Collab', '(https://collab.sakaiproject.org/portal)', 'from', 'the', 'Source', 'site.']
    Line: You can modify how you receive notifications at My Workspace > Preferences.
    Words ['You', 'can', 'modify', 'how', 'you', 'receive', 'notifications', 'at', 'My', 'Workspace', '>', 'Preferences.']
    Line: 
    Words []
    Line: 
    Words []
    Line: 
    Words []
    Line: From zqian@umich.edu Fri Jan  4 15:03:18 2008
    Words ['From', 'zqian@umich.edu', 'Fri', 'Jan', '4', '15:03:18', '2008']
    Line: Return-Path: <postmaster@collab.sakaiproject.org>
    Words ['Return-Path:', '<postmaster@collab.sakaiproject.org>']
    Line: Received: from murder (mail.umich.edu [141.211.14.46])
    Words ['Received:', 'from', 'murder', '(mail.umich.edu', '[141.211.14.46])']
    Line: 	 by frankenstein.mail.umich.edu (Cyrus v2.3.8) with LMTPA;
    Words ['by', 'frankenstein.mail.umich.edu', '(Cyrus', 'v2.3.8)', 'with', 'LMTPA;']
    Line: 	 Fri, 04 Jan 2008 15:03:18 -0500
    Words ['Fri,', '04', 'Jan', '2008', '15:03:18', '-0500']
    Line: X-Sieve: CMU Sieve 2.3
    Words ['X-Sieve:', 'CMU', 'Sieve', '2.3']
    Line: Received: from murder ([unix socket])
    Words ['Received:', 'from', 'murder', '([unix', 'socket])']
    Line: 	 by mail.umich.edu (Cyrus v2.2.12) with LMTPA;
    Words ['by', 'mail.umich.edu', '(Cyrus', 'v2.2.12)', 'with', 'LMTPA;']
    Line: 	 Fri, 04 Jan 2008 15:03:18 -0500
    Words ['Fri,', '04', 'Jan', '2008', '15:03:18', '-0500']
    Line: Received: from firestarter.mr.itd.umich.edu (firestarter.mr.itd.umich.edu [141.211.14.83])
    Words ['Received:', 'from', 'firestarter.mr.itd.umich.edu', '(firestarter.mr.itd.umich.edu', '[141.211.14.83])']
    Line: 	by fan.mail.umich.edu () with ESMTP id m04K3HGF006563;
    Words ['by', 'fan.mail.umich.edu', '()', 'with', 'ESMTP', 'id', 'm04K3HGF006563;']
    Line: 	Fri, 4 Jan 2008 15:03:17 -0500
    Words ['Fri,', '4', 'Jan', '2008', '15:03:17', '-0500']
    Line: Received: FROM paploo.uhi.ac.uk (app1.prod.collab.uhi.ac.uk [194.35.219.184])
    Words ['Received:', 'FROM', 'paploo.uhi.ac.uk', '(app1.prod.collab.uhi.ac.uk', '[194.35.219.184])']
    Line: 	BY firestarter.mr.itd.umich.edu ID 477E9100.8F7F4.1590 ;
    Words ['BY', 'firestarter.mr.itd.umich.edu', 'ID', '477E9100.8F7F4.1590', ';']
    Line: 	 4 Jan 2008 15:03:15 -0500
    Words ['4', 'Jan', '2008', '15:03:15', '-0500']
    Line: Received: from paploo.uhi.ac.uk (localhost [127.0.0.1])
    Words ['Received:', 'from', 'paploo.uhi.ac.uk', '(localhost', '[127.0.0.1])']
    Line: 	by paploo.uhi.ac.uk (Postfix) with ESMTP id 57770BB477;
    Words ['by', 'paploo.uhi.ac.uk', '(Postfix)', 'with', 'ESMTP', 'id', '57770BB477;']
    Line: 	Fri,  4 Jan 2008 20:03:09 +0000 (GMT)
    Words ['Fri,', '4', 'Jan', '2008', '20:03:09', '+0000', '(GMT)']
    Line: Message-ID: <200801042001.m04K1cO0007738@nakamura.uits.iupui.edu>
    Words ['Message-ID:', '<200801042001.m04K1cO0007738@nakamura.uits.iupui.edu>']
    Line: Mime-Version: 1.0
    Words ['Mime-Version:', '1.0']
    Line: Content-Transfer-Encoding: 7bit
    Words ['Content-Transfer-Encoding:', '7bit']
    Line: Received: from prod.collab.uhi.ac.uk ([194.35.219.182])
    Words ['Received:', 'from', 'prod.collab.uhi.ac.uk', '([194.35.219.182])']
    Line:           by paploo.uhi.ac.uk (JAMES SMTP Server 2.1.3) with SMTP ID 622
    Words ['by', 'paploo.uhi.ac.uk', '(JAMES', 'SMTP', 'Server', '2.1.3)', 'with', 'SMTP', 'ID', '622']
    Line:           for <source@collab.sakaiproject.org>;
    Words ['for', '<source@collab.sakaiproject.org>;']
    Line:           Fri, 4 Jan 2008 20:02:46 +0000 (GMT)
    Words ['Fri,', '4', 'Jan', '2008', '20:02:46', '+0000', '(GMT)']
    Line: Received: from nakamura.uits.iupui.edu (nakamura.uits.iupui.edu [134.68.220.122])
    Words ['Received:', 'from', 'nakamura.uits.iupui.edu', '(nakamura.uits.iupui.edu', '[134.68.220.122])']
    Line: 	by shmi.uhi.ac.uk (Postfix) with ESMTP id AB4D042F4D
    Words ['by', 'shmi.uhi.ac.uk', '(Postfix)', 'with', 'ESMTP', 'id', 'AB4D042F4D']
    Line: 	for <source@collab.sakaiproject.org>; Fri,  4 Jan 2008 20:02:50 +0000 (GMT)
    Words ['for', '<source@collab.sakaiproject.org>;', 'Fri,', '4', 'Jan', '2008', '20:02:50', '+0000', '(GMT)']
    Line: Received: from nakamura.uits.iupui.edu (localhost [127.0.0.1])
    Words ['Received:', 'from', 'nakamura.uits.iupui.edu', '(localhost', '[127.0.0.1])']
    Line: 	by nakamura.uits.iupui.edu (8.12.11.20060308/8.12.11) with ESMTP id m04K1cXv007740
    Words ['by', 'nakamura.uits.iupui.edu', '(8.12.11.20060308/8.12.11)', 'with', 'ESMTP', 'id', 'm04K1cXv007740']
    Line: 	for <source@collab.sakaiproject.org>; Fri, 4 Jan 2008 15:01:38 -0500
    Words ['for', '<source@collab.sakaiproject.org>;', 'Fri,', '4', 'Jan', '2008', '15:01:38', '-0500']
    Line: Received: (from apache@localhost)
    Words ['Received:', '(from', 'apache@localhost)']
    Line: 	by nakamura.uits.iupui.edu (8.12.11.20060308/8.12.11/Submit) id m04K1cO0007738
    Words ['by', 'nakamura.uits.iupui.edu', '(8.12.11.20060308/8.12.11/Submit)', 'id', 'm04K1cO0007738']
    Line: 	for source@collab.sakaiproject.org; Fri, 4 Jan 2008 15:01:38 -0500
    Words ['for', 'source@collab.sakaiproject.org;', 'Fri,', '4', 'Jan', '2008', '15:01:38', '-0500']
    Line: Date: Fri, 4 Jan 2008 15:01:38 -0500
    Words ['Date:', 'Fri,', '4', 'Jan', '2008', '15:01:38', '-0500']
    Line: X-Authentication-Warning: nakamura.uits.iupui.edu: apache set sender to zqian@umich.edu using -f
    Words ['X-Authentication-Warning:', 'nakamura.uits.iupui.edu:', 'apache', 'set', 'sender', 'to', 'zqian@umich.edu', 'using', '-f']
    Line: To: source@collab.sakaiproject.org
    Words ['To:', 'source@collab.sakaiproject.org']
    Line: From: zqian@umich.edu
    Words ['From:', 'zqian@umich.edu']
    Line: Subject: [sakai] svn commit: r39766 - site-manage/branches/sakai_2-4-x/site-manage-tool/tool/src/java/org/sakaiproject/site/tool
    Words ['Subject:', '[sakai]', 'svn', 'commit:', 'r39766', '-', 'site-manage/branches/sakai_2-4-x/site-manage-tool/tool/src/java/org/sakaiproject/site/tool']
    Line: X-Content-Type-Outer-Envelope: text/plain; charset=UTF-8
    Words ['X-Content-Type-Outer-Envelope:', 'text/plain;', 'charset=UTF-8']
    Line: X-Content-Type-Message-Body: text/plain; charset=UTF-8
    Words ['X-Content-Type-Message-Body:', 'text/plain;', 'charset=UTF-8']
    Line: Content-Type: text/plain; charset=UTF-8
    Words ['Content-Type:', 'text/plain;', 'charset=UTF-8']
    Line: X-DSPAM-Result: Innocent
    Words ['X-DSPAM-Result:', 'Innocent']
    Line: X-DSPAM-Processed: Fri Jan  4 15:03:18 2008
    Words ['X-DSPAM-Processed:', 'Fri', 'Jan', '4', '15:03:18', '2008']
    Line: X-DSPAM-Confidence: 0.7626
    Words ['X-DSPAM-Confidence:', '0.7626']
    Line: X-DSPAM-Probability: 0.0000
    Words ['X-DSPAM-Probability:', '0.0000']
    Line: 
    Words []
    Line: Details: http://source.sakaiproject.org/viewsvn/?view=rev&rev=39766
    Words ['Details:', 'http://source.sakaiproject.org/viewsvn/?view=rev&rev=39766']
    Line: 
    Words []
    Line: Author: zqian@umich.edu
    Words ['Author:', 'zqian@umich.edu']
    Line: Date: 2008-01-04 15:01:37 -0500 (Fri, 04 Jan 2008)
    Words ['Date:', '2008-01-04', '15:01:37', '-0500', '(Fri,', '04', 'Jan', '2008)']
    Line: New Revision: 39766
    Words ['New', 'Revision:', '39766']
    Line: 
    Words []
    Line: Modified:
    Words ['Modified:']
    Line: site-manage/branches/sakai_2-4-x/site-manage-tool/tool/src/java/org/sakaiproject/site/tool/SiteAction.java
    Words ['site-manage/branches/sakai_2-4-x/site-manage-tool/tool/src/java/org/sakaiproject/site/tool/SiteAction.java']
    Line: Log:
    Words ['Log:']
    Line: merge fix to SAK-10788 into site-manage 2.4.x branch:
    Words ['merge', 'fix', 'to', 'SAK-10788', 'into', 'site-manage', '2.4.x', 'branch:']
    Line: 
    Words []
    Line: Sakai Source Repository  	#38024  	Wed Nov 07 14:54:46 MST 2007  	zqian@umich.edu  	 Fix to SAK-10788: If a provided id in a couse site is fake or doesn't provide any user information, Site Info appears to be like project site with empty participant list
    Words ['Sakai', 'Source', 'Repository', '#38024', 'Wed', 'Nov', '07', '14:54:46', 'MST', '2007', 'zqian@umich.edu', 'Fix', 'to', 'SAK-10788:', 'If', 'a', 'provided', 'id', 'in', 'a', 'couse', 'site', 'is', 'fake', 'or', "doesn't", 'provide', 'any', 'user', 'information,', 'Site', 'Info', 'appears', 'to', 'be', 'like', 'project', 'site', 'with', 'empty', 'participant', 'list']
    Line: 
    Words []
    Line: Watch for enrollments object being null and concatenate provider ids when there are more than one.
    Words ['Watch', 'for', 'enrollments', 'object', 'being', 'null', 'and', 'concatenate', 'provider', 'ids', 'when', 'there', 'are', 'more', 'than', 'one.']
    Line: Files Changed
    Words ['Files', 'Changed']
    Line: MODIFY /site-manage/trunk/site-manage-tool/tool/src/java/org/sakaiproject/site/tool/SiteAction.java
    Words ['MODIFY', '/site-manage/trunk/site-manage-tool/tool/src/java/org/sakaiproject/site/tool/SiteAction.java']
    Line: 
    Words []
    Line: 
    Words []
    Line: 
    Words []
    Line: 
    Words []
    Line: ----------------------
    Words ['----------------------']
    Line: This automatic notification message was sent by Sakai Collab (https://collab.sakaiproject.org/portal) from the Source site.
    Words ['This', 'automatic', 'notification', 'message', 'was', 'sent', 'by', 'Sakai', 'Collab', '(https://collab.sakaiproject.org/portal)', 'from', 'the', 'Source', 'site.']
    Line: You can modify how you receive notifications at My Workspace > Preferences.
    Words ['You', 'can', 'modify', 'how', 'you', 'receive', 'notifications', 'at', 'My', 'Workspace', '>', 'Preferences.']
    Line: 
    Words []
    Line: 
    Words []
    Line: 
    Words []
    Line: From rjlowe@iupui.edu Fri Jan  4 14:50:18 2008
    Words ['From', 'rjlowe@iupui.edu', 'Fri', 'Jan', '4', '14:50:18', '2008']
    Line: Return-Path: <postmaster@collab.sakaiproject.org>
    Words ['Return-Path:', '<postmaster@collab.sakaiproject.org>']
    Line: Received: from murder (mail.umich.edu [141.211.14.93])
    Words ['Received:', 'from', 'murder', '(mail.umich.edu', '[141.211.14.93])']
    Line: 	 by frankenstein.mail.umich.edu (Cyrus v2.3.8) with LMTPA;
    Words ['by', 'frankenstein.mail.umich.edu', '(Cyrus', 'v2.3.8)', 'with', 'LMTPA;']
    Line: 	 Fri, 04 Jan 2008 14:50:18 -0500
    Words ['Fri,', '04', 'Jan', '2008', '14:50:18', '-0500']
    Line: X-Sieve: CMU Sieve 2.3
    Words ['X-Sieve:', 'CMU', 'Sieve', '2.3']
    Line: Received: from murder ([unix socket])
    Words ['Received:', 'from', 'murder', '([unix', 'socket])']
    Line: 	 by mail.umich.edu (Cyrus v2.2.12) with LMTPA;
    Words ['by', 'mail.umich.edu', '(Cyrus', 'v2.2.12)', 'with', 'LMTPA;']
    Line: 	 Fri, 04 Jan 2008 14:50:18 -0500
    Words ['Fri,', '04', 'Jan', '2008', '14:50:18', '-0500']
    Line: Received: from eyewitness.mr.itd.umich.edu (eyewitness.mr.itd.umich.edu [141.211.93.142])
    Words ['Received:', 'from', 'eyewitness.mr.itd.umich.edu', '(eyewitness.mr.itd.umich.edu', '[141.211.93.142])']
    Line: 	by mission.mail.umich.edu () with ESMTP id m04JoHJi019755;
    Words ['by', 'mission.mail.umich.edu', '()', 'with', 'ESMTP', 'id', 'm04JoHJi019755;']
    Line: 	Fri, 4 Jan 2008 14:50:17 -0500
    Words ['Fri,', '4', 'Jan', '2008', '14:50:17', '-0500']
    Line: Received: FROM paploo.uhi.ac.uk (app1.prod.collab.uhi.ac.uk [194.35.219.184])
    Words ['Received:', 'FROM', 'paploo.uhi.ac.uk', '(app1.prod.collab.uhi.ac.uk', '[194.35.219.184])']
    Line: 	BY eyewitness.mr.itd.umich.edu ID 477E8DF2.67B91.5278 ;
    Words ['BY', 'eyewitness.mr.itd.umich.edu', 'ID', '477E8DF2.67B91.5278', ';']
    Line: 	 4 Jan 2008 14:50:13 -0500
    Words ['4', 'Jan', '2008', '14:50:13', '-0500']
    Line: Received: from paploo.uhi.ac.uk (localhost [127.0.0.1])
    Words ['Received:', 'from', 'paploo.uhi.ac.uk', '(localhost', '[127.0.0.1])']
    Line: 	by paploo.uhi.ac.uk (Postfix) with ESMTP id 2D1B9BB492;
    Words ['by', 'paploo.uhi.ac.uk', '(Postfix)', 'with', 'ESMTP', 'id', '2D1B9BB492;']
    Line: 	Fri,  4 Jan 2008 19:47:10 +0000 (GMT)
    Words ['Fri,', '4', 'Jan', '2008', '19:47:10', '+0000', '(GMT)']
    Line: Message-ID: <200801041948.m04JmdwO007705@nakamura.uits.iupui.edu>
    Words ['Message-ID:', '<200801041948.m04JmdwO007705@nakamura.uits.iupui.edu>']
    Line: Mime-Version: 1.0
    Words ['Mime-Version:', '1.0']
    Line: Content-Transfer-Encoding: 7bit
    Words ['Content-Transfer-Encoding:', '7bit']
    Line: Received: from prod.collab.uhi.ac.uk ([194.35.219.182])
    Words ['Received:', 'from', 'prod.collab.uhi.ac.uk', '([194.35.219.182])']
    Line:           by paploo.uhi.ac.uk (JAMES SMTP Server 2.1.3) with SMTP ID 960
    Words ['by', 'paploo.uhi.ac.uk', '(JAMES', 'SMTP', 'Server', '2.1.3)', 'with', 'SMTP', 'ID', '960']
    Line:           for <source@collab.sakaiproject.org>;
    Words ['for', '<source@collab.sakaiproject.org>;']
    Line:           Fri, 4 Jan 2008 19:46:50 +0000 (GMT)
    Words ['Fri,', '4', 'Jan', '2008', '19:46:50', '+0000', '(GMT)']
    Line: Received: from nakamura.uits.iupui.edu (nakamura.uits.iupui.edu [134.68.220.122])
    Words ['Received:', 'from', 'nakamura.uits.iupui.edu', '(nakamura.uits.iupui.edu', '[134.68.220.122])']
    Line: 	by shmi.uhi.ac.uk (Postfix) with ESMTP id B3E6742F4A
    Words ['by', 'shmi.uhi.ac.uk', '(Postfix)', 'with', 'ESMTP', 'id', 'B3E6742F4A']
    Line: 	for <source@collab.sakaiproject.org>; Fri,  4 Jan 2008 19:49:51 +0000 (GMT)
    Words ['for', '<source@collab.sakaiproject.org>;', 'Fri,', '4', 'Jan', '2008', '19:49:51', '+0000', '(GMT)']
    Line: Received: from nakamura.uits.iupui.edu (localhost [127.0.0.1])
    Words ['Received:', 'from', 'nakamura.uits.iupui.edu', '(localhost', '[127.0.0.1])']
    Line: 	by nakamura.uits.iupui.edu (8.12.11.20060308/8.12.11) with ESMTP id m04JmeV9007707
    Words ['by', 'nakamura.uits.iupui.edu', '(8.12.11.20060308/8.12.11)', 'with', 'ESMTP', 'id', 'm04JmeV9007707']
    Line: 	for <source@collab.sakaiproject.org>; Fri, 4 Jan 2008 14:48:40 -0500
    Words ['for', '<source@collab.sakaiproject.org>;', 'Fri,', '4', 'Jan', '2008', '14:48:40', '-0500']
    Line: Received: (from apache@localhost)
    Words ['Received:', '(from', 'apache@localhost)']
    Line: 	by nakamura.uits.iupui.edu (8.12.11.20060308/8.12.11/Submit) id m04JmdwO007705
    Words ['by', 'nakamura.uits.iupui.edu', '(8.12.11.20060308/8.12.11/Submit)', 'id', 'm04JmdwO007705']
    Line: 	for source@collab.sakaiproject.org; Fri, 4 Jan 2008 14:48:39 -0500
    Words ['for', 'source@collab.sakaiproject.org;', 'Fri,', '4', 'Jan', '2008', '14:48:39', '-0500']
    Line: Date: Fri, 4 Jan 2008 14:48:39 -0500
    Words ['Date:', 'Fri,', '4', 'Jan', '2008', '14:48:39', '-0500']
    Line: X-Authentication-Warning: nakamura.uits.iupui.edu: apache set sender to rjlowe@iupui.edu using -f
    Words ['X-Authentication-Warning:', 'nakamura.uits.iupui.edu:', 'apache', 'set', 'sender', 'to', 'rjlowe@iupui.edu', 'using', '-f']
    Line: To: source@collab.sakaiproject.org
    Words ['To:', 'source@collab.sakaiproject.org']
    Line: From: rjlowe@iupui.edu
    Words ['From:', 'rjlowe@iupui.edu']
    Line: Subject: [sakai] svn commit: r39765 - in gradebook/trunk/app: business/src/java/org/sakaiproject/tool/gradebook/business business/src/java/org/sakaiproject/tool/gradebook/business/impl ui ui/src/java/org/sakaiproject/tool/gradebook/ui/helpers/beans ui/src/java/org/sakaiproject/tool/gradebook/ui/helpers/entity ui/src/java/org/sakaiproject/tool/gradebook/ui/helpers/params ui/src/java/org/sakaiproject/tool/gradebook/ui/helpers/producers ui/src/webapp/WEB-INF ui/src/webapp/WEB-INF/bundle ui/src/webapp/content/templates
    Words ['Subject:', '[sakai]', 'svn', 'commit:', 'r39765', '-', 'in', 'gradebook/trunk/app:', 'business/src/java/org/sakaiproject/tool/gradebook/business', 'business/src/java/org/sakaiproject/tool/gradebook/business/impl', 'ui', 'ui/src/java/org/sakaiproject/tool/gradebook/ui/helpers/beans', 'ui/src/java/org/sakaiproject/tool/gradebook/ui/helpers/entity', 'ui/src/java/org/sakaiproject/tool/gradebook/ui/helpers/params', 'ui/src/java/org/sakaiproject/tool/gradebook/ui/helpers/producers', 'ui/src/webapp/WEB-INF', 'ui/src/webapp/WEB-INF/bundle', 'ui/src/webapp/content/templates']
    Line: X-Content-Type-Outer-Envelope: text/plain; charset=UTF-8
    Words ['X-Content-Type-Outer-Envelope:', 'text/plain;', 'charset=UTF-8']
    Line: X-Content-Type-Message-Body: text/plain; charset=UTF-8
    Words ['X-Content-Type-Message-Body:', 'text/plain;', 'charset=UTF-8']
    Line: Content-Type: text/plain; charset=UTF-8
    Words ['Content-Type:', 'text/plain;', 'charset=UTF-8']
    Line: X-DSPAM-Result: Innocent
    Words ['X-DSPAM-Result:', 'Innocent']
    Line: X-DSPAM-Processed: Fri Jan  4 14:50:18 2008
    Words ['X-DSPAM-Processed:', 'Fri', 'Jan', '4', '14:50:18', '2008']
    Line: X-DSPAM-Confidence: 0.7556
    Words ['X-DSPAM-Confidence:', '0.7556']
    Line: X-DSPAM-Probability: 0.0000
    Words ['X-DSPAM-Probability:', '0.0000']
    Line: 
    Words []
    Line: Details: http://source.sakaiproject.org/viewsvn/?view=rev&rev=39765
    Words ['Details:', 'http://source.sakaiproject.org/viewsvn/?view=rev&rev=39765']
    Line: 
    Words []
    Line: Author: rjlowe@iupui.edu
    Words ['Author:', 'rjlowe@iupui.edu']
    Line: Date: 2008-01-04 14:48:37 -0500 (Fri, 04 Jan 2008)
    Words ['Date:', '2008-01-04', '14:48:37', '-0500', '(Fri,', '04', 'Jan', '2008)']
    Line: New Revision: 39765
    Words ['New', 'Revision:', '39765']
    Line: 
    Words []
    Line: Added:
    Words ['Added:']
    Line: gradebook/trunk/app/ui/src/java/org/sakaiproject/tool/gradebook/ui/helpers/beans/AssignmentGradeRecordBean.java
    Words ['gradebook/trunk/app/ui/src/java/org/sakaiproject/tool/gradebook/ui/helpers/beans/AssignmentGradeRecordBean.java']
    Line: gradebook/trunk/app/ui/src/java/org/sakaiproject/tool/gradebook/ui/helpers/beans/AssignmentGradeRecordCreator.java
    Words ['gradebook/trunk/app/ui/src/java/org/sakaiproject/tool/gradebook/ui/helpers/beans/AssignmentGradeRecordCreator.java']
    Line: gradebook/trunk/app/ui/src/java/org/sakaiproject/tool/gradebook/ui/helpers/entity/GradebookEntryGradeEntityProvider.java
    Words ['gradebook/trunk/app/ui/src/java/org/sakaiproject/tool/gradebook/ui/helpers/entity/GradebookEntryGradeEntityProvider.java']
    Line: gradebook/trunk/app/ui/src/java/org/sakaiproject/tool/gradebook/ui/helpers/params/GradeGradebookItemViewParams.java
    Words ['gradebook/trunk/app/ui/src/java/org/sakaiproject/tool/gradebook/ui/helpers/params/GradeGradebookItemViewParams.java']
    Line: gradebook/trunk/app/ui/src/java/org/sakaiproject/tool/gradebook/ui/helpers/producers/GradeGradebookItemProducer.java
    Words ['gradebook/trunk/app/ui/src/java/org/sakaiproject/tool/gradebook/ui/helpers/producers/GradeGradebookItemProducer.java']
    Line: gradebook/trunk/app/ui/src/webapp/content/templates/grade-gradebook-item.html
    Words ['gradebook/trunk/app/ui/src/webapp/content/templates/grade-gradebook-item.html']
    Line: Modified:
    Words ['Modified:']
    Line: gradebook/trunk/app/business/src/java/org/sakaiproject/tool/gradebook/business/GradebookManager.java
    Words ['gradebook/trunk/app/business/src/java/org/sakaiproject/tool/gradebook/business/GradebookManager.java']
    Line: gradebook/trunk/app/business/src/java/org/sakaiproject/tool/gradebook/business/impl/GradebookManagerHibernateImpl.java
    Words ['gradebook/trunk/app/business/src/java/org/sakaiproject/tool/gradebook/business/impl/GradebookManagerHibernateImpl.java']
    Line: gradebook/trunk/app/ui/pom.xml
    Words ['gradebook/trunk/app/ui/pom.xml']
    Line: gradebook/trunk/app/ui/src/java/org/sakaiproject/tool/gradebook/ui/helpers/beans/GradebookItemBean.java
    Words ['gradebook/trunk/app/ui/src/java/org/sakaiproject/tool/gradebook/ui/helpers/beans/GradebookItemBean.java']
    Line: gradebook/trunk/app/ui/src/java/org/sakaiproject/tool/gradebook/ui/helpers/entity/GradebookEntryEntityProvider.java
    Words ['gradebook/trunk/app/ui/src/java/org/sakaiproject/tool/gradebook/ui/helpers/entity/GradebookEntryEntityProvider.java']
    Line: gradebook/trunk/app/ui/src/java/org/sakaiproject/tool/gradebook/ui/helpers/producers/AddGradebookItemProducer.java
    Words ['gradebook/trunk/app/ui/src/java/org/sakaiproject/tool/gradebook/ui/helpers/producers/AddGradebookItemProducer.java']
    Line: gradebook/trunk/app/ui/src/webapp/WEB-INF/applicationContext.xml
    Words ['gradebook/trunk/app/ui/src/webapp/WEB-INF/applicationContext.xml']
    Line: gradebook/trunk/app/ui/src/webapp/WEB-INF/bundle/messages.properties
    Words ['gradebook/trunk/app/ui/src/webapp/WEB-INF/bundle/messages.properties']
    Line: gradebook/trunk/app/ui/src/webapp/WEB-INF/requestContext.xml
    Words ['gradebook/trunk/app/ui/src/webapp/WEB-INF/requestContext.xml']
    Line: Log:
    Words ['Log:']
    Line: SAK-12180 - New helper tool to grade an assignment
    Words ['SAK-12180', '-', 'New', 'helper', 'tool', 'to', 'grade', 'an', 'assignment']
    Line: 
    Words []
    Line: ----------------------
    Words ['----------------------']
    Line: This automatic notification message was sent by Sakai Collab (https://collab.sakaiproject.org/portal) from the Source site.
    Words ['This', 'automatic', 'notification', 'message', 'was', 'sent', 'by', 'Sakai', 'Collab', '(https://collab.sakaiproject.org/portal)', 'from', 'the', 'Source', 'site.']
    Line: You can modify how you receive notifications at My Workspace > Preferences.
    Words ['You', 'can', 'modify', 'how', 'you', 'receive', 'notifications', 'at', 'My', 'Workspace', '>', 'Preferences.']
    Line: 
    Words []
    Line: 
    Words []
    Line: 
    Words []
    Line: From cwen@iupui.edu Fri Jan  4 11:37:30 2008
    Words ['From', 'cwen@iupui.edu', 'Fri', 'Jan', '4', '11:37:30', '2008']
    Line: Return-Path: <postmaster@collab.sakaiproject.org>
    Words ['Return-Path:', '<postmaster@collab.sakaiproject.org>']
    Line: Received: from murder (mail.umich.edu [141.211.14.46])
    Words ['Received:', 'from', 'murder', '(mail.umich.edu', '[141.211.14.46])']
    Line: 	 by frankenstein.mail.umich.edu (Cyrus v2.3.8) with LMTPA;
    Words ['by', 'frankenstein.mail.umich.edu', '(Cyrus', 'v2.3.8)', 'with', 'LMTPA;']
    Line: 	 Fri, 04 Jan 2008 11:37:30 -0500
    Words ['Fri,', '04', 'Jan', '2008', '11:37:30', '-0500']
    Line: X-Sieve: CMU Sieve 2.3
    Words ['X-Sieve:', 'CMU', 'Sieve', '2.3']
    Line: Received: from murder ([unix socket])
    Words ['Received:', 'from', 'murder', '([unix', 'socket])']
    Line: 	 by mail.umich.edu (Cyrus v2.2.12) with LMTPA;
    Words ['by', 'mail.umich.edu', '(Cyrus', 'v2.2.12)', 'with', 'LMTPA;']
    Line: 	 Fri, 04 Jan 2008 11:37:30 -0500
    Words ['Fri,', '04', 'Jan', '2008', '11:37:30', '-0500']
    Line: Received: from tadpole.mr.itd.umich.edu (tadpole.mr.itd.umich.edu [141.211.14.72])
    Words ['Received:', 'from', 'tadpole.mr.itd.umich.edu', '(tadpole.mr.itd.umich.edu', '[141.211.14.72])']
    Line: 	by fan.mail.umich.edu () with ESMTP id m04GbT9x022078;
    Words ['by', 'fan.mail.umich.edu', '()', 'with', 'ESMTP', 'id', 'm04GbT9x022078;']
    Line: 	Fri, 4 Jan 2008 11:37:29 -0500
    Words ['Fri,', '4', 'Jan', '2008', '11:37:29', '-0500']
    Line: Received: FROM paploo.uhi.ac.uk (app1.prod.collab.uhi.ac.uk [194.35.219.184])
    Words ['Received:', 'FROM', 'paploo.uhi.ac.uk', '(app1.prod.collab.uhi.ac.uk', '[194.35.219.184])']
    Line: 	BY tadpole.mr.itd.umich.edu ID 477E60B2.82756.9904 ;
    Words ['BY', 'tadpole.mr.itd.umich.edu', 'ID', '477E60B2.82756.9904', ';']
    Line: 	 4 Jan 2008 11:37:09 -0500
    Words ['4', 'Jan', '2008', '11:37:09', '-0500']
    Line: Received: from paploo.uhi.ac.uk (localhost [127.0.0.1])
    Words ['Received:', 'from', 'paploo.uhi.ac.uk', '(localhost', '[127.0.0.1])']
    Line: 	by paploo.uhi.ac.uk (Postfix) with ESMTP id 8D13DBB001;
    Words ['by', 'paploo.uhi.ac.uk', '(Postfix)', 'with', 'ESMTP', 'id', '8D13DBB001;']
    Line: 	Fri,  4 Jan 2008 16:37:07 +0000 (GMT)
    Words ['Fri,', '4', 'Jan', '2008', '16:37:07', '+0000', '(GMT)']
    Line: Message-ID: <200801041635.m04GZQGZ007313@nakamura.uits.iupui.edu>
    Words ['Message-ID:', '<200801041635.m04GZQGZ007313@nakamura.uits.iupui.edu>']
    Line: Mime-Version: 1.0
    Words ['Mime-Version:', '1.0']
    Line: Content-Transfer-Encoding: 7bit
    Words ['Content-Transfer-Encoding:', '7bit']
    Line: Received: from prod.collab.uhi.ac.uk ([194.35.219.182])
    Words ['Received:', 'from', 'prod.collab.uhi.ac.uk', '([194.35.219.182])']
    Line:           by paploo.uhi.ac.uk (JAMES SMTP Server 2.1.3) with SMTP ID 120
    Words ['by', 'paploo.uhi.ac.uk', '(JAMES', 'SMTP', 'Server', '2.1.3)', 'with', 'SMTP', 'ID', '120']
    Line:           for <source@collab.sakaiproject.org>;
    Words ['for', '<source@collab.sakaiproject.org>;']
    Line:           Fri, 4 Jan 2008 16:36:40 +0000 (GMT)
    Words ['Fri,', '4', 'Jan', '2008', '16:36:40', '+0000', '(GMT)']
    Line: Received: from nakamura.uits.iupui.edu (nakamura.uits.iupui.edu [134.68.220.122])
    Words ['Received:', 'from', 'nakamura.uits.iupui.edu', '(nakamura.uits.iupui.edu', '[134.68.220.122])']
    Line: 	by shmi.uhi.ac.uk (Postfix) with ESMTP id D430B42E42
    Words ['by', 'shmi.uhi.ac.uk', '(Postfix)', 'with', 'ESMTP', 'id', 'D430B42E42']
    Line: 	for <source@collab.sakaiproject.org>; Fri,  4 Jan 2008 16:36:37 +0000 (GMT)
    Words ['for', '<source@collab.sakaiproject.org>;', 'Fri,', '4', 'Jan', '2008', '16:36:37', '+0000', '(GMT)']
    Line: Received: from nakamura.uits.iupui.edu (localhost [127.0.0.1])
    Words ['Received:', 'from', 'nakamura.uits.iupui.edu', '(localhost', '[127.0.0.1])']
    Line: 	by nakamura.uits.iupui.edu (8.12.11.20060308/8.12.11) with ESMTP id m04GZQ7W007315
    Words ['by', 'nakamura.uits.iupui.edu', '(8.12.11.20060308/8.12.11)', 'with', 'ESMTP', 'id', 'm04GZQ7W007315']
    Line: 	for <source@collab.sakaiproject.org>; Fri, 4 Jan 2008 11:35:26 -0500
    Words ['for', '<source@collab.sakaiproject.org>;', 'Fri,', '4', 'Jan', '2008', '11:35:26', '-0500']
    Line: Received: (from apache@localhost)
    Words ['Received:', '(from', 'apache@localhost)']
    Line: 	by nakamura.uits.iupui.edu (8.12.11.20060308/8.12.11/Submit) id m04GZQGZ007313
    Words ['by', 'nakamura.uits.iupui.edu', '(8.12.11.20060308/8.12.11/Submit)', 'id', 'm04GZQGZ007313']
    Line: 	for source@collab.sakaiproject.org; Fri, 4 Jan 2008 11:35:26 -0500
    Words ['for', 'source@collab.sakaiproject.org;', 'Fri,', '4', 'Jan', '2008', '11:35:26', '-0500']
    Line: Date: Fri, 4 Jan 2008 11:35:26 -0500
    Words ['Date:', 'Fri,', '4', 'Jan', '2008', '11:35:26', '-0500']
    Line: X-Authentication-Warning: nakamura.uits.iupui.edu: apache set sender to cwen@iupui.edu using -f
    Words ['X-Authentication-Warning:', 'nakamura.uits.iupui.edu:', 'apache', 'set', 'sender', 'to', 'cwen@iupui.edu', 'using', '-f']
    Line: To: source@collab.sakaiproject.org
    Words ['To:', 'source@collab.sakaiproject.org']
    Line: From: cwen@iupui.edu
    Words ['From:', 'cwen@iupui.edu']
    Line: Subject: [sakai] svn commit: r39764 - in msgcntr/trunk/messageforums-app/src/java/org/sakaiproject/tool/messageforums: . ui
    Words ['Subject:', '[sakai]', 'svn', 'commit:', 'r39764', '-', 'in', 'msgcntr/trunk/messageforums-app/src/java/org/sakaiproject/tool/messageforums:', '.', 'ui']
    Line: X-Content-Type-Outer-Envelope: text/plain; charset=UTF-8
    Words ['X-Content-Type-Outer-Envelope:', 'text/plain;', 'charset=UTF-8']
    Line: X-Content-Type-Message-Body: text/plain; charset=UTF-8
    Words ['X-Content-Type-Message-Body:', 'text/plain;', 'charset=UTF-8']
    Line: Content-Type: text/plain; charset=UTF-8
    Words ['Content-Type:', 'text/plain;', 'charset=UTF-8']
    Line: X-DSPAM-Result: Innocent
    Words ['X-DSPAM-Result:', 'Innocent']
    Line: X-DSPAM-Processed: Fri Jan  4 11:37:30 2008
    Words ['X-DSPAM-Processed:', 'Fri', 'Jan', '4', '11:37:30', '2008']
    Line: X-DSPAM-Confidence: 0.7002
    Words ['X-DSPAM-Confidence:', '0.7002']
    Line: X-DSPAM-Probability: 0.0000
    Words ['X-DSPAM-Probability:', '0.0000']
    Line: 
    Words []
    Line: Details: http://source.sakaiproject.org/viewsvn/?view=rev&rev=39764
    Words ['Details:', 'http://source.sakaiproject.org/viewsvn/?view=rev&rev=39764']
    Line: 
    Words []
    Line: Author: cwen@iupui.edu
    Words ['Author:', 'cwen@iupui.edu']
    Line: Date: 2008-01-04 11:35:25 -0500 (Fri, 04 Jan 2008)
    Words ['Date:', '2008-01-04', '11:35:25', '-0500', '(Fri,', '04', 'Jan', '2008)']
    Line: New Revision: 39764
    Words ['New', 'Revision:', '39764']
    Line: 
    Words []
    Line: Modified:
    Words ['Modified:']
    Line: msgcntr/trunk/messageforums-app/src/java/org/sakaiproject/tool/messageforums/PrivateMessagesTool.java
    Words ['msgcntr/trunk/messageforums-app/src/java/org/sakaiproject/tool/messageforums/PrivateMessagesTool.java']
    Line: msgcntr/trunk/messageforums-app/src/java/org/sakaiproject/tool/messageforums/ui/PrivateMessageDecoratedBean.java
    Words ['msgcntr/trunk/messageforums-app/src/java/org/sakaiproject/tool/messageforums/ui/PrivateMessageDecoratedBean.java']
    Line: Log:
    Words ['Log:']
    Line: unmerge Xingtang's checkin for SAK-12488.
    Words ['unmerge', "Xingtang's", 'checkin', 'for', 'SAK-12488.']
    Line: 
    Words []
    Line: svn merge -r39558:39557 https://source.sakaiproject.org/svn/msgcntr/trunk
    Words ['svn', 'merge', '-r39558:39557', 'https://source.sakaiproject.org/svn/msgcntr/trunk']
    Line: U    messageforums-app/src/java/org/sakaiproject/tool/messageforums/PrivateMessagesTool.java
    Words ['U', 'messageforums-app/src/java/org/sakaiproject/tool/messageforums/PrivateMessagesTool.java']
    Line: U    messageforums-app/src/java/org/sakaiproject/tool/messageforums/ui/PrivateMessageDecoratedBean.java
    Words ['U', 'messageforums-app/src/java/org/sakaiproject/tool/messageforums/ui/PrivateMessageDecoratedBean.java']
    Line: 
    Words []
    Line: svn log -r 39558
    Words ['svn', 'log', '-r', '39558']
    Line: ------------------------------------------------------------------------
    Words ['------------------------------------------------------------------------']
    Line: r39558 | hu2@iupui.edu | 2007-12-20 15:25:38 -0500 (Thu, 20 Dec 2007) | 3 lines
    Words ['r39558', '|', 'hu2@iupui.edu', '|', '2007-12-20', '15:25:38', '-0500', '(Thu,', '20', 'Dec', '2007)', '|', '3', 'lines']
    Line: 
    Words []
    Line: SAK-12488
    Words ['SAK-12488']
    Line: when send a message to yourself. click reply to all, cc row should be null.
    Words ['when', 'send', 'a', 'message', 'to', 'yourself.', 'click', 'reply', 'to', 'all,', 'cc', 'row', 'should', 'be', 'null.']
    Line: http://jira.sakaiproject.org/jira/browse/SAK-12488
    Words ['http://jira.sakaiproject.org/jira/browse/SAK-12488']
    Line: ------------------------------------------------------------------------
    Words ['------------------------------------------------------------------------']
    Line: 
    Words []
    Line: 
    Words []
    Line: ----------------------
    Words ['----------------------']
    Line: This automatic notification message was sent by Sakai Collab (https://collab.sakaiproject.org/portal) from the Source site.
    Words ['This', 'automatic', 'notification', 'message', 'was', 'sent', 'by', 'Sakai', 'Collab', '(https://collab.sakaiproject.org/portal)', 'from', 'the', 'Source', 'site.']
    Line: You can modify how you receive notifications at My Workspace > Preferences.
    Words ['You', 'can', 'modify', 'how', 'you', 'receive', 'notifications', 'at', 'My', 'Workspace', '>', 'Preferences.']
    Line: 
    Words []
    Line: 
    Words []
    Line: 
    Words []
    Line: From cwen@iupui.edu Fri Jan  4 11:35:08 2008
    Words ['From', 'cwen@iupui.edu', 'Fri', 'Jan', '4', '11:35:08', '2008']
    Line: Return-Path: <postmaster@collab.sakaiproject.org>
    Words ['Return-Path:', '<postmaster@collab.sakaiproject.org>']
    Line: Received: from murder (mail.umich.edu [141.211.14.46])
    Words ['Received:', 'from', 'murder', '(mail.umich.edu', '[141.211.14.46])']
    Line: 	 by frankenstein.mail.umich.edu (Cyrus v2.3.8) with LMTPA;
    Words ['by', 'frankenstein.mail.umich.edu', '(Cyrus', 'v2.3.8)', 'with', 'LMTPA;']
    Line: 	 Fri, 04 Jan 2008 11:35:08 -0500
    Words ['Fri,', '04', 'Jan', '2008', '11:35:08', '-0500']
    Line: X-Sieve: CMU Sieve 2.3
    Words ['X-Sieve:', 'CMU', 'Sieve', '2.3']
    Line: Received: from murder ([unix socket])
    Words ['Received:', 'from', 'murder', '([unix', 'socket])']
    Line: 	 by mail.umich.edu (Cyrus v2.2.12) with LMTPA;
    Words ['by', 'mail.umich.edu', '(Cyrus', 'v2.2.12)', 'with', 'LMTPA;']
    Line: 	 Fri, 04 Jan 2008 11:35:08 -0500
    Words ['Fri,', '04', 'Jan', '2008', '11:35:08', '-0500']
    Line: Received: from it.mr.itd.umich.edu (it.mr.itd.umich.edu [141.211.93.151])
    Words ['Received:', 'from', 'it.mr.itd.umich.edu', '(it.mr.itd.umich.edu', '[141.211.93.151])']
    Line: 	by fan.mail.umich.edu () with ESMTP id m04GZ6lt020480;
    Words ['by', 'fan.mail.umich.edu', '()', 'with', 'ESMTP', 'id', 'm04GZ6lt020480;']
    Line: 	Fri, 4 Jan 2008 11:35:06 -0500
    Words ['Fri,', '4', 'Jan', '2008', '11:35:06', '-0500']
    Line: Received: FROM paploo.uhi.ac.uk (app1.prod.collab.uhi.ac.uk [194.35.219.184])
    Words ['Received:', 'FROM', 'paploo.uhi.ac.uk', '(app1.prod.collab.uhi.ac.uk', '[194.35.219.184])']
    Line: 	BY it.mr.itd.umich.edu ID 477E6033.6469D.21870 ;
    Words ['BY', 'it.mr.itd.umich.edu', 'ID', '477E6033.6469D.21870', ';']
    Line: 	 4 Jan 2008 11:35:02 -0500
    Words ['4', 'Jan', '2008', '11:35:02', '-0500']
    Line: Received: from paploo.uhi.ac.uk (localhost [127.0.0.1])
    Words ['Received:', 'from', 'paploo.uhi.ac.uk', '(localhost', '[127.0.0.1])']
    Line: 	by paploo.uhi.ac.uk (Postfix) with ESMTP id E40FABAE5B;
    Words ['by', 'paploo.uhi.ac.uk', '(Postfix)', 'with', 'ESMTP', 'id', 'E40FABAE5B;']
    Line: 	Fri,  4 Jan 2008 16:34:38 +0000 (GMT)
    Words ['Fri,', '4', 'Jan', '2008', '16:34:38', '+0000', '(GMT)']
    Line: Message-ID: <200801041633.m04GX6eG007292@nakamura.uits.iupui.edu>
    Words ['Message-ID:', '<200801041633.m04GX6eG007292@nakamura.uits.iupui.edu>']
    Line: Mime-Version: 1.0
    Words ['Mime-Version:', '1.0']
    Line: Content-Transfer-Encoding: 7bit
    Words ['Content-Transfer-Encoding:', '7bit']
    Line: Received: from prod.collab.uhi.ac.uk ([194.35.219.182])
    Words ['Received:', 'from', 'prod.collab.uhi.ac.uk', '([194.35.219.182])']
    Line:           by paploo.uhi.ac.uk (JAMES SMTP Server 2.1.3) with SMTP ID 697
    Words ['by', 'paploo.uhi.ac.uk', '(JAMES', 'SMTP', 'Server', '2.1.3)', 'with', 'SMTP', 'ID', '697']
    Line:           for <source@collab.sakaiproject.org>;
    Words ['for', '<source@collab.sakaiproject.org>;']
    Line:           Fri, 4 Jan 2008 16:34:01 +0000 (GMT)
    Words ['Fri,', '4', 'Jan', '2008', '16:34:01', '+0000', '(GMT)']
    Line: Received: from nakamura.uits.iupui.edu (nakamura.uits.iupui.edu [134.68.220.122])
    Words ['Received:', 'from', 'nakamura.uits.iupui.edu', '(nakamura.uits.iupui.edu', '[134.68.220.122])']
    Line: 	by shmi.uhi.ac.uk (Postfix) with ESMTP id 1CD0C42E42
    Words ['by', 'shmi.uhi.ac.uk', '(Postfix)', 'with', 'ESMTP', 'id', '1CD0C42E42']
    Line: 	for <source@collab.sakaiproject.org>; Fri,  4 Jan 2008 16:34:17 +0000 (GMT)
    Words ['for', '<source@collab.sakaiproject.org>;', 'Fri,', '4', 'Jan', '2008', '16:34:17', '+0000', '(GMT)']
    Line: Received: from nakamura.uits.iupui.edu (localhost [127.0.0.1])
    Words ['Received:', 'from', 'nakamura.uits.iupui.edu', '(localhost', '[127.0.0.1])']
    Line: 	by nakamura.uits.iupui.edu (8.12.11.20060308/8.12.11) with ESMTP id m04GX6Y3007294
    Words ['by', 'nakamura.uits.iupui.edu', '(8.12.11.20060308/8.12.11)', 'with', 'ESMTP', 'id', 'm04GX6Y3007294']
    Line: 	for <source@collab.sakaiproject.org>; Fri, 4 Jan 2008 11:33:06 -0500
    Words ['for', '<source@collab.sakaiproject.org>;', 'Fri,', '4', 'Jan', '2008', '11:33:06', '-0500']
    Line: Received: (from apache@localhost)
    Words ['Received:', '(from', 'apache@localhost)']
    Line: 	by nakamura.uits.iupui.edu (8.12.11.20060308/8.12.11/Submit) id m04GX6eG007292
    Words ['by', 'nakamura.uits.iupui.edu', '(8.12.11.20060308/8.12.11/Submit)', 'id', 'm04GX6eG007292']
    Line: 	for source@collab.sakaiproject.org; Fri, 4 Jan 2008 11:33:06 -0500
    Words ['for', 'source@collab.sakaiproject.org;', 'Fri,', '4', 'Jan', '2008', '11:33:06', '-0500']
    Line: Date: Fri, 4 Jan 2008 11:33:06 -0500
    Words ['Date:', 'Fri,', '4', 'Jan', '2008', '11:33:06', '-0500']
    Line: X-Authentication-Warning: nakamura.uits.iupui.edu: apache set sender to cwen@iupui.edu using -f
    Words ['X-Authentication-Warning:', 'nakamura.uits.iupui.edu:', 'apache', 'set', 'sender', 'to', 'cwen@iupui.edu', 'using', '-f']
    Line: To: source@collab.sakaiproject.org
    Words ['To:', 'source@collab.sakaiproject.org']
    Line: From: cwen@iupui.edu
    Words ['From:', 'cwen@iupui.edu']
    Line: Subject: [sakai] svn commit: r39763 - in msgcntr/trunk: messageforums-api/src/bundle/org/sakaiproject/api/app/messagecenter/bundle messageforums-app/src/java/org/sakaiproject/tool/messageforums
    Words ['Subject:', '[sakai]', 'svn', 'commit:', 'r39763', '-', 'in', 'msgcntr/trunk:', 'messageforums-api/src/bundle/org/sakaiproject/api/app/messagecenter/bundle', 'messageforums-app/src/java/org/sakaiproject/tool/messageforums']
    Line: X-Content-Type-Outer-Envelope: text/plain; charset=UTF-8
    Words ['X-Content-Type-Outer-Envelope:', 'text/plain;', 'charset=UTF-8']
    Line: X-Content-Type-Message-Body: text/plain; charset=UTF-8
    Words ['X-Content-Type-Message-Body:', 'text/plain;', 'charset=UTF-8']
    Line: Content-Type: text/plain; charset=UTF-8
    Words ['Content-Type:', 'text/plain;', 'charset=UTF-8']
    Line: X-DSPAM-Result: Innocent
    Words ['X-DSPAM-Result:', 'Innocent']
    Line: X-DSPAM-Processed: Fri Jan  4 11:35:08 2008
    Words ['X-DSPAM-Processed:', 'Fri', 'Jan', '4', '11:35:08', '2008']
    Line: X-DSPAM-Confidence: 0.7615
    Words ['X-DSPAM-Confidence:', '0.7615']
    Line: X-DSPAM-Probability: 0.0000
    Words ['X-DSPAM-Probability:', '0.0000']
    Line: 
    Words []
    Line: Details: http://source.sakaiproject.org/viewsvn/?view=rev&rev=39763
    Words ['Details:', 'http://source.sakaiproject.org/viewsvn/?view=rev&rev=39763']
    Line: 
    Words []
    Line: Author: cwen@iupui.edu
    Words ['Author:', 'cwen@iupui.edu']
    Line: Date: 2008-01-04 11:33:05 -0500 (Fri, 04 Jan 2008)
    Words ['Date:', '2008-01-04', '11:33:05', '-0500', '(Fri,', '04', 'Jan', '2008)']
    Line: New Revision: 39763
    Words ['New', 'Revision:', '39763']
    Line: 
    Words []
    Line: Modified:
    Words ['Modified:']
    Line: msgcntr/trunk/messageforums-api/src/bundle/org/sakaiproject/api/app/messagecenter/bundle/Messages.properties
    Words ['msgcntr/trunk/messageforums-api/src/bundle/org/sakaiproject/api/app/messagecenter/bundle/Messages.properties']
    Line: msgcntr/trunk/messageforums-app/src/java/org/sakaiproject/tool/messageforums/PrivateMessagesTool.java
    Words ['msgcntr/trunk/messageforums-app/src/java/org/sakaiproject/tool/messageforums/PrivateMessagesTool.java']
    Line: Log:
    Words ['Log:']
    Line: unmerge Xingtang's check in for SAK-12484.
    Words ['unmerge', "Xingtang's", 'check', 'in', 'for', 'SAK-12484.']
    Line: 
    Words []
    Line: svn merge -r39571:39570 https://source.sakaiproject.org/svn/msgcntr/trunk
    Words ['svn', 'merge', '-r39571:39570', 'https://source.sakaiproject.org/svn/msgcntr/trunk']
    Line: U    messageforums-api/src/bundle/org/sakaiproject/api/app/messagecenter/bundle/Messages.properties
    Words ['U', 'messageforums-api/src/bundle/org/sakaiproject/api/app/messagecenter/bundle/Messages.properties']
    Line: U    messageforums-app/src/java/org/sakaiproject/tool/messageforums/PrivateMessagesTool.java
    Words ['U', 'messageforums-app/src/java/org/sakaiproject/tool/messageforums/PrivateMessagesTool.java']
    Line: 
    Words []
    Line: svn log -r 39571
    Words ['svn', 'log', '-r', '39571']
    Line: ------------------------------------------------------------------------
    Words ['------------------------------------------------------------------------']
    Line: r39571 | hu2@iupui.edu | 2007-12-20 21:26:28 -0500 (Thu, 20 Dec 2007) | 3 lines
    Words ['r39571', '|', 'hu2@iupui.edu', '|', '2007-12-20', '21:26:28', '-0500', '(Thu,', '20', 'Dec', '2007)', '|', '3', 'lines']
    Line: 
    Words []
    Line: SAK-12484
    Words ['SAK-12484']
    Line: reply all cc list should not include the current user name.
    Words ['reply', 'all', 'cc', 'list', 'should', 'not', 'include', 'the', 'current', 'user', 'name.']
    Line: http://jira.sakaiproject.org/jira/browse/SAK-12484
    Words ['http://jira.sakaiproject.org/jira/browse/SAK-12484']
    Line: ------------------------------------------------------------------------
    Words ['------------------------------------------------------------------------']
    Line: 
    Words []
    Line: 
    Words []
    Line: ----------------------
    Words ['----------------------']
    Line: This automatic notification message was sent by Sakai Collab (https://collab.sakaiproject.org/portal) from the Source site.
    Words ['This', 'automatic', 'notification', 'message', 'was', 'sent', 'by', 'Sakai', 'Collab', '(https://collab.sakaiproject.org/portal)', 'from', 'the', 'Source', 'site.']
    Line: You can modify how you receive notifications at My Workspace > Preferences.
    Words ['You', 'can', 'modify', 'how', 'you', 'receive', 'notifications', 'at', 'My', 'Workspace', '>', 'Preferences.']
    Line: 
    Words []
    Line: 
    Words []
    Line: 
    Words []
    Line: From gsilver@umich.edu Fri Jan  4 11:12:37 2008
    Words ['From', 'gsilver@umich.edu', 'Fri', 'Jan', '4', '11:12:37', '2008']
    Line: Return-Path: <postmaster@collab.sakaiproject.org>
    Words ['Return-Path:', '<postmaster@collab.sakaiproject.org>']
    Line: Received: from murder (mail.umich.edu [141.211.14.25])
    Words ['Received:', 'from', 'murder', '(mail.umich.edu', '[141.211.14.25])']
    Line: 	 by frankenstein.mail.umich.edu (Cyrus v2.3.8) with LMTPA;
    Words ['by', 'frankenstein.mail.umich.edu', '(Cyrus', 'v2.3.8)', 'with', 'LMTPA;']
    Line: 	 Fri, 04 Jan 2008 11:12:37 -0500
    Words ['Fri,', '04', 'Jan', '2008', '11:12:37', '-0500']
    Line: X-Sieve: CMU Sieve 2.3
    Words ['X-Sieve:', 'CMU', 'Sieve', '2.3']
    Line: Received: from murder ([unix socket])
    Words ['Received:', 'from', 'murder', '([unix', 'socket])']
    Line: 	 by mail.umich.edu (Cyrus v2.2.12) with LMTPA;
    Words ['by', 'mail.umich.edu', '(Cyrus', 'v2.2.12)', 'with', 'LMTPA;']
    Line: 	 Fri, 04 Jan 2008 11:12:37 -0500
    Words ['Fri,', '04', 'Jan', '2008', '11:12:37', '-0500']
    Line: Received: from holes.mr.itd.umich.edu (holes.mr.itd.umich.edu [141.211.14.79])
    Words ['Received:', 'from', 'holes.mr.itd.umich.edu', '(holes.mr.itd.umich.edu', '[141.211.14.79])']
    Line: 	by panther.mail.umich.edu () with ESMTP id m04GCaHB030887;
    Words ['by', 'panther.mail.umich.edu', '()', 'with', 'ESMTP', 'id', 'm04GCaHB030887;']
    Line: 	Fri, 4 Jan 2008 11:12:36 -0500
    Words ['Fri,', '4', 'Jan', '2008', '11:12:36', '-0500']
    Line: Received: FROM paploo.uhi.ac.uk (app1.prod.collab.uhi.ac.uk [194.35.219.184])
    Words ['Received:', 'FROM', 'paploo.uhi.ac.uk', '(app1.prod.collab.uhi.ac.uk', '[194.35.219.184])']
    Line: 	BY holes.mr.itd.umich.edu ID 477E5AEB.E670B.28397 ;
    Words ['BY', 'holes.mr.itd.umich.edu', 'ID', '477E5AEB.E670B.28397', ';']
    Line: 	 4 Jan 2008 11:12:30 -0500
    Words ['4', 'Jan', '2008', '11:12:30', '-0500']
    Line: Received: from paploo.uhi.ac.uk (localhost [127.0.0.1])
    Words ['Received:', 'from', 'paploo.uhi.ac.uk', '(localhost', '[127.0.0.1])']
    Line: 	by paploo.uhi.ac.uk (Postfix) with ESMTP id 99715BAE7D;
    Words ['by', 'paploo.uhi.ac.uk', '(Postfix)', 'with', 'ESMTP', 'id', '99715BAE7D;']
    Line: 	Fri,  4 Jan 2008 16:12:27 +0000 (GMT)
    Words ['Fri,', '4', 'Jan', '2008', '16:12:27', '+0000', '(GMT)']
    Line: Message-ID: <200801041611.m04GB1Lb007221@nakamura.uits.iupui.edu>
    Words ['Message-ID:', '<200801041611.m04GB1Lb007221@nakamura.uits.iupui.edu>']
    Line: Mime-Version: 1.0
    Words ['Mime-Version:', '1.0']
    Line: Content-Transfer-Encoding: 7bit
    Words ['Content-Transfer-Encoding:', '7bit']
    Line: Received: from prod.collab.uhi.ac.uk ([194.35.219.182])
    Words ['Received:', 'from', 'prod.collab.uhi.ac.uk', '([194.35.219.182])']
    Line:           by paploo.uhi.ac.uk (JAMES SMTP Server 2.1.3) with SMTP ID 272
    Words ['by', 'paploo.uhi.ac.uk', '(JAMES', 'SMTP', 'Server', '2.1.3)', 'with', 'SMTP', 'ID', '272']
    Line:           for <source@collab.sakaiproject.org>;
    Words ['for', '<source@collab.sakaiproject.org>;']
    Line:           Fri, 4 Jan 2008 16:12:14 +0000 (GMT)
    Words ['Fri,', '4', 'Jan', '2008', '16:12:14', '+0000', '(GMT)']
    Line: Received: from nakamura.uits.iupui.edu (nakamura.uits.iupui.edu [134.68.220.122])
    Words ['Received:', 'from', 'nakamura.uits.iupui.edu', '(nakamura.uits.iupui.edu', '[134.68.220.122])']
    Line: 	by shmi.uhi.ac.uk (Postfix) with ESMTP id 0A6ED42DFC
    Words ['by', 'shmi.uhi.ac.uk', '(Postfix)', 'with', 'ESMTP', 'id', '0A6ED42DFC']
    Line: 	for <source@collab.sakaiproject.org>; Fri,  4 Jan 2008 16:12:12 +0000 (GMT)
    Words ['for', '<source@collab.sakaiproject.org>;', 'Fri,', '4', 'Jan', '2008', '16:12:12', '+0000', '(GMT)']
    Line: Received: from nakamura.uits.iupui.edu (localhost [127.0.0.1])
    Words ['Received:', 'from', 'nakamura.uits.iupui.edu', '(localhost', '[127.0.0.1])']
    Line: 	by nakamura.uits.iupui.edu (8.12.11.20060308/8.12.11) with ESMTP id m04GB1Wt007223
    Words ['by', 'nakamura.uits.iupui.edu', '(8.12.11.20060308/8.12.11)', 'with', 'ESMTP', 'id', 'm04GB1Wt007223']
    Line: 	for <source@collab.sakaiproject.org>; Fri, 4 Jan 2008 11:11:01 -0500
    Words ['for', '<source@collab.sakaiproject.org>;', 'Fri,', '4', 'Jan', '2008', '11:11:01', '-0500']
    Line: Received: (from apache@localhost)
    Words ['Received:', '(from', 'apache@localhost)']
    Line: 	by nakamura.uits.iupui.edu (8.12.11.20060308/8.12.11/Submit) id m04GB1Lb007221
    Words ['by', 'nakamura.uits.iupui.edu', '(8.12.11.20060308/8.12.11/Submit)', 'id', 'm04GB1Lb007221']
    Line: 	for source@collab.sakaiproject.org; Fri, 4 Jan 2008 11:11:01 -0500
    Words ['for', 'source@collab.sakaiproject.org;', 'Fri,', '4', 'Jan', '2008', '11:11:01', '-0500']
    Line: Date: Fri, 4 Jan 2008 11:11:01 -0500
    Words ['Date:', 'Fri,', '4', 'Jan', '2008', '11:11:01', '-0500']
    Line: X-Authentication-Warning: nakamura.uits.iupui.edu: apache set sender to gsilver@umich.edu using -f
    Words ['X-Authentication-Warning:', 'nakamura.uits.iupui.edu:', 'apache', 'set', 'sender', 'to', 'gsilver@umich.edu', 'using', '-f']
    Line: To: source@collab.sakaiproject.org
    Words ['To:', 'source@collab.sakaiproject.org']
    Line: From: gsilver@umich.edu
    Words ['From:', 'gsilver@umich.edu']
    Line: Subject: [sakai] svn commit: r39762 - web/trunk/web-tool/tool/src/bundle
    Words ['Subject:', '[sakai]', 'svn', 'commit:', 'r39762', '-', 'web/trunk/web-tool/tool/src/bundle']
    Line: X-Content-Type-Outer-Envelope: text/plain; charset=UTF-8
    Words ['X-Content-Type-Outer-Envelope:', 'text/plain;', 'charset=UTF-8']
    Line: X-Content-Type-Message-Body: text/plain; charset=UTF-8
    Words ['X-Content-Type-Message-Body:', 'text/plain;', 'charset=UTF-8']
    Line: Content-Type: text/plain; charset=UTF-8
    Words ['Content-Type:', 'text/plain;', 'charset=UTF-8']
    Line: X-DSPAM-Result: Innocent
    Words ['X-DSPAM-Result:', 'Innocent']
    Line: X-DSPAM-Processed: Fri Jan  4 11:12:37 2008
    Words ['X-DSPAM-Processed:', 'Fri', 'Jan', '4', '11:12:37', '2008']
    Line: X-DSPAM-Confidence: 0.7601
    Words ['X-DSPAM-Confidence:', '0.7601']
    Line: X-DSPAM-Probability: 0.0000
    Words ['X-DSPAM-Probability:', '0.0000']
    Line: 
    Words []
    Line: Details: http://source.sakaiproject.org/viewsvn/?view=rev&rev=39762
    Words ['Details:', 'http://source.sakaiproject.org/viewsvn/?view=rev&rev=39762']
    Line: 
    Words []
    Line: Author: gsilver@umich.edu
    Words ['Author:', 'gsilver@umich.edu']
    Line: Date: 2008-01-04 11:11:00 -0500 (Fri, 04 Jan 2008)
    Words ['Date:', '2008-01-04', '11:11:00', '-0500', '(Fri,', '04', 'Jan', '2008)']
    Line: New Revision: 39762
    Words ['New', 'Revision:', '39762']
    Line: 
    Words []
    Line: Modified:
    Words ['Modified:']
    Line: web/trunk/web-tool/tool/src/bundle/iframe.properties
    Words ['web/trunk/web-tool/tool/src/bundle/iframe.properties']
    Line: Log:
    Words ['Log:']
    Line: SAK-12596
    Words ['SAK-12596']
    Line: http://bugs.sakaiproject.org/jira/browse/SAK-12596
    Words ['http://bugs.sakaiproject.org/jira/browse/SAK-12596']
    Line: - left moot (unused) entries commented for now
    Words ['-', 'left', 'moot', '(unused)', 'entries', 'commented', 'for', 'now']
    Line: 
    Words []
    Line: ----------------------
    Words ['----------------------']
    Line: This automatic notification message was sent by Sakai Collab (https://collab.sakaiproject.org/portal) from the Source site.
    Words ['This', 'automatic', 'notification', 'message', 'was', 'sent', 'by', 'Sakai', 'Collab', '(https://collab.sakaiproject.org/portal)', 'from', 'the', 'Source', 'site.']
    Line: You can modify how you receive notifications at My Workspace > Preferences.
    Words ['You', 'can', 'modify', 'how', 'you', 'receive', 'notifications', 'at', 'My', 'Workspace', '>', 'Preferences.']
    Line: 
    Words []
    Line: 
    Words []
    Line: 
    Words []
    Line: From gsilver@umich.edu Fri Jan  4 11:11:52 2008
    Words ['From', 'gsilver@umich.edu', 'Fri', 'Jan', '4', '11:11:52', '2008']
    Line: Return-Path: <postmaster@collab.sakaiproject.org>
    Words ['Return-Path:', '<postmaster@collab.sakaiproject.org>']
    Line: Received: from murder (mail.umich.edu [141.211.14.36])
    Words ['Received:', 'from', 'murder', '(mail.umich.edu', '[141.211.14.36])']
    Line: 	 by frankenstein.mail.umich.edu (Cyrus v2.3.8) with LMTPA;
    Words ['by', 'frankenstein.mail.umich.edu', '(Cyrus', 'v2.3.8)', 'with', 'LMTPA;']
    Line: 	 Fri, 04 Jan 2008 11:11:52 -0500
    Words ['Fri,', '04', 'Jan', '2008', '11:11:52', '-0500']
    Line: X-Sieve: CMU Sieve 2.3
    Words ['X-Sieve:', 'CMU', 'Sieve', '2.3']
    Line: Received: from murder ([unix socket])
    Words ['Received:', 'from', 'murder', '([unix', 'socket])']
    Line: 	 by mail.umich.edu (Cyrus v2.2.12) with LMTPA;
    Words ['by', 'mail.umich.edu', '(Cyrus', 'v2.2.12)', 'with', 'LMTPA;']
    Line: 	 Fri, 04 Jan 2008 11:11:52 -0500
    Words ['Fri,', '04', 'Jan', '2008', '11:11:52', '-0500']
    Line: Received: from creepshow.mr.itd.umich.edu (creepshow.mr.itd.umich.edu [141.211.14.84])
    Words ['Received:', 'from', 'creepshow.mr.itd.umich.edu', '(creepshow.mr.itd.umich.edu', '[141.211.14.84])']
    Line: 	by godsend.mail.umich.edu () with ESMTP id m04GBqqv025330;
    Words ['by', 'godsend.mail.umich.edu', '()', 'with', 'ESMTP', 'id', 'm04GBqqv025330;']
    Line: 	Fri, 4 Jan 2008 11:11:52 -0500
    Words ['Fri,', '4', 'Jan', '2008', '11:11:52', '-0500']
    Line: Received: FROM paploo.uhi.ac.uk (app1.prod.collab.uhi.ac.uk [194.35.219.184])
    Words ['Received:', 'FROM', 'paploo.uhi.ac.uk', '(app1.prod.collab.uhi.ac.uk', '[194.35.219.184])']
    Line: 	BY creepshow.mr.itd.umich.edu ID 477E5AB3.5CC32.30840 ;
    Words ['BY', 'creepshow.mr.itd.umich.edu', 'ID', '477E5AB3.5CC32.30840', ';']
    Line: 	 4 Jan 2008 11:11:34 -0500
    Words ['4', 'Jan', '2008', '11:11:34', '-0500']
    Line: Received: from paploo.uhi.ac.uk (localhost [127.0.0.1])
    Words ['Received:', 'from', 'paploo.uhi.ac.uk', '(localhost', '[127.0.0.1])']
    Line: 	by paploo.uhi.ac.uk (Postfix) with ESMTP id 62AA4BAE46;
    Words ['by', 'paploo.uhi.ac.uk', '(Postfix)', 'with', 'ESMTP', 'id', '62AA4BAE46;']
    Line: 	Fri,  4 Jan 2008 16:11:31 +0000 (GMT)
    Words ['Fri,', '4', 'Jan', '2008', '16:11:31', '+0000', '(GMT)']
    Line: Message-ID: <200801041610.m04GA5KP007209@nakamura.uits.iupui.edu>
    Words ['Message-ID:', '<200801041610.m04GA5KP007209@nakamura.uits.iupui.edu>']
    Line: Mime-Version: 1.0
    Words ['Mime-Version:', '1.0']
    Line: Content-Transfer-Encoding: 7bit
    Words ['Content-Transfer-Encoding:', '7bit']
    Line: Received: from prod.collab.uhi.ac.uk ([194.35.219.182])
    Words ['Received:', 'from', 'prod.collab.uhi.ac.uk', '([194.35.219.182])']
    Line:           by paploo.uhi.ac.uk (JAMES SMTP Server 2.1.3) with SMTP ID 1006
    Words ['by', 'paploo.uhi.ac.uk', '(JAMES', 'SMTP', 'Server', '2.1.3)', 'with', 'SMTP', 'ID', '1006']
    Line:           for <source@collab.sakaiproject.org>;
    Words ['for', '<source@collab.sakaiproject.org>;']
    Line:           Fri, 4 Jan 2008 16:11:18 +0000 (GMT)
    Words ['Fri,', '4', 'Jan', '2008', '16:11:18', '+0000', '(GMT)']
    Line: Received: from nakamura.uits.iupui.edu (nakamura.uits.iupui.edu [134.68.220.122])
    Words ['Received:', 'from', 'nakamura.uits.iupui.edu', '(nakamura.uits.iupui.edu', '[134.68.220.122])']
    Line: 	by shmi.uhi.ac.uk (Postfix) with ESMTP id C596A3DFA2
    Words ['by', 'shmi.uhi.ac.uk', '(Postfix)', 'with', 'ESMTP', 'id', 'C596A3DFA2']
    Line: 	for <source@collab.sakaiproject.org>; Fri,  4 Jan 2008 16:11:16 +0000 (GMT)
    Words ['for', '<source@collab.sakaiproject.org>;', 'Fri,', '4', 'Jan', '2008', '16:11:16', '+0000', '(GMT)']
    Line: Received: from nakamura.uits.iupui.edu (localhost [127.0.0.1])
    Words ['Received:', 'from', 'nakamura.uits.iupui.edu', '(localhost', '[127.0.0.1])']
    Line: 	by nakamura.uits.iupui.edu (8.12.11.20060308/8.12.11) with ESMTP id m04GA5LR007211
    Words ['by', 'nakamura.uits.iupui.edu', '(8.12.11.20060308/8.12.11)', 'with', 'ESMTP', 'id', 'm04GA5LR007211']
    Line: 	for <source@collab.sakaiproject.org>; Fri, 4 Jan 2008 11:10:05 -0500
    Words ['for', '<source@collab.sakaiproject.org>;', 'Fri,', '4', 'Jan', '2008', '11:10:05', '-0500']
    Line: Received: (from apache@localhost)
    Words ['Received:', '(from', 'apache@localhost)']
    Line: 	by nakamura.uits.iupui.edu (8.12.11.20060308/8.12.11/Submit) id m04GA5KP007209
    Words ['by', 'nakamura.uits.iupui.edu', '(8.12.11.20060308/8.12.11/Submit)', 'id', 'm04GA5KP007209']
    Line: 	for source@collab.sakaiproject.org; Fri, 4 Jan 2008 11:10:05 -0500
    Words ['for', 'source@collab.sakaiproject.org;', 'Fri,', '4', 'Jan', '2008', '11:10:05', '-0500']
    Line: Date: Fri, 4 Jan 2008 11:10:05 -0500
    Words ['Date:', 'Fri,', '4', 'Jan', '2008', '11:10:05', '-0500']
    Line: X-Authentication-Warning: nakamura.uits.iupui.edu: apache set sender to gsilver@umich.edu using -f
    Words ['X-Authentication-Warning:', 'nakamura.uits.iupui.edu:', 'apache', 'set', 'sender', 'to', 'gsilver@umich.edu', 'using', '-f']
    Line: To: source@collab.sakaiproject.org
    Words ['To:', 'source@collab.sakaiproject.org']
    Line: From: gsilver@umich.edu
    Words ['From:', 'gsilver@umich.edu']
    Line: Subject: [sakai] svn commit: r39761 - site/trunk/site-tool/tool/src/bundle
    Words ['Subject:', '[sakai]', 'svn', 'commit:', 'r39761', '-', 'site/trunk/site-tool/tool/src/bundle']
    Line: X-Content-Type-Outer-Envelope: text/plain; charset=UTF-8
    Words ['X-Content-Type-Outer-Envelope:', 'text/plain;', 'charset=UTF-8']
    Line: X-Content-Type-Message-Body: text/plain; charset=UTF-8
    Words ['X-Content-Type-Message-Body:', 'text/plain;', 'charset=UTF-8']
    Line: Content-Type: text/plain; charset=UTF-8
    Words ['Content-Type:', 'text/plain;', 'charset=UTF-8']
    Line: X-DSPAM-Result: Innocent
    Words ['X-DSPAM-Result:', 'Innocent']
    Line: X-DSPAM-Processed: Fri Jan  4 11:11:52 2008
    Words ['X-DSPAM-Processed:', 'Fri', 'Jan', '4', '11:11:52', '2008']
    Line: X-DSPAM-Confidence: 0.7605
    Words ['X-DSPAM-Confidence:', '0.7605']
    Line: X-DSPAM-Probability: 0.0000
    Words ['X-DSPAM-Probability:', '0.0000']
    Line: 
    Words []
    Line: Details: http://source.sakaiproject.org/viewsvn/?view=rev&rev=39761
    Words ['Details:', 'http://source.sakaiproject.org/viewsvn/?view=rev&rev=39761']
    Line: 
    Words []
    Line: Author: gsilver@umich.edu
    Words ['Author:', 'gsilver@umich.edu']
    Line: Date: 2008-01-04 11:10:04 -0500 (Fri, 04 Jan 2008)
    Words ['Date:', '2008-01-04', '11:10:04', '-0500', '(Fri,', '04', 'Jan', '2008)']
    Line: New Revision: 39761
    Words ['New', 'Revision:', '39761']
    Line: 
    Words []
    Line: Modified:
    Words ['Modified:']
    Line: site/trunk/site-tool/tool/src/bundle/admin.properties
    Words ['site/trunk/site-tool/tool/src/bundle/admin.properties']
    Line: Log:
    Words ['Log:']
    Line: SAK-12595
    Words ['SAK-12595']
    Line: http://bugs.sakaiproject.org/jira/browse/SAK-12595
    Words ['http://bugs.sakaiproject.org/jira/browse/SAK-12595']
    Line: - left moot (unused) entries commented for now
    Words ['-', 'left', 'moot', '(unused)', 'entries', 'commented', 'for', 'now']
    Line: 
    Words []
    Line: ----------------------
    Words ['----------------------']
    Line: This automatic notification message was sent by Sakai Collab (https://collab.sakaiproject.org/portal) from the Source site.
    Words ['This', 'automatic', 'notification', 'message', 'was', 'sent', 'by', 'Sakai', 'Collab', '(https://collab.sakaiproject.org/portal)', 'from', 'the', 'Source', 'site.']
    Line: You can modify how you receive notifications at My Workspace > Preferences.
    Words ['You', 'can', 'modify', 'how', 'you', 'receive', 'notifications', 'at', 'My', 'Workspace', '>', 'Preferences.']
    Line: 
    Words []
    Line: 
    Words []
    Line: 
    Words []
    Line: From zqian@umich.edu Fri Jan  4 11:11:03 2008
    Words ['From', 'zqian@umich.edu', 'Fri', 'Jan', '4', '11:11:03', '2008']
    Line: Return-Path: <postmaster@collab.sakaiproject.org>
    Words ['Return-Path:', '<postmaster@collab.sakaiproject.org>']
    Line: Received: from murder (mail.umich.edu [141.211.14.97])
    Words ['Received:', 'from', 'murder', '(mail.umich.edu', '[141.211.14.97])']
    Line: 	 by frankenstein.mail.umich.edu (Cyrus v2.3.8) with LMTPA;
    Words ['by', 'frankenstein.mail.umich.edu', '(Cyrus', 'v2.3.8)', 'with', 'LMTPA;']
    Line: 	 Fri, 04 Jan 2008 11:11:03 -0500
    Words ['Fri,', '04', 'Jan', '2008', '11:11:03', '-0500']
    Line: X-Sieve: CMU Sieve 2.3
    Words ['X-Sieve:', 'CMU', 'Sieve', '2.3']
    Line: Received: from murder ([unix socket])
    Words ['Received:', 'from', 'murder', '([unix', 'socket])']
    Line: 	 by mail.umich.edu (Cyrus v2.2.12) with LMTPA;
    Words ['by', 'mail.umich.edu', '(Cyrus', 'v2.2.12)', 'with', 'LMTPA;']
    Line: 	 Fri, 04 Jan 2008 11:11:03 -0500
    Words ['Fri,', '04', 'Jan', '2008', '11:11:03', '-0500']
    Line: Received: from carrie.mr.itd.umich.edu (carrie.mr.itd.umich.edu [141.211.93.152])
    Words ['Received:', 'from', 'carrie.mr.itd.umich.edu', '(carrie.mr.itd.umich.edu', '[141.211.93.152])']
    Line: 	by sleepers.mail.umich.edu () with ESMTP id m04GB3Vg011502;
    Words ['by', 'sleepers.mail.umich.edu', '()', 'with', 'ESMTP', 'id', 'm04GB3Vg011502;']
    Line: 	Fri, 4 Jan 2008 11:11:03 -0500
    Words ['Fri,', '4', 'Jan', '2008', '11:11:03', '-0500']
    Line: Received: FROM paploo.uhi.ac.uk (app1.prod.collab.uhi.ac.uk [194.35.219.184])
    Words ['Received:', 'FROM', 'paploo.uhi.ac.uk', '(app1.prod.collab.uhi.ac.uk', '[194.35.219.184])']
    Line: 	BY carrie.mr.itd.umich.edu ID 477E5A8D.B378F.24200 ;
    Words ['BY', 'carrie.mr.itd.umich.edu', 'ID', '477E5A8D.B378F.24200', ';']
    Line: 	 4 Jan 2008 11:10:56 -0500
    Words ['4', 'Jan', '2008', '11:10:56', '-0500']
    Line: Received: from paploo.uhi.ac.uk (localhost [127.0.0.1])
    Words ['Received:', 'from', 'paploo.uhi.ac.uk', '(localhost', '[127.0.0.1])']
    Line: 	by paploo.uhi.ac.uk (Postfix) with ESMTP id C7251BAD44;
    Words ['by', 'paploo.uhi.ac.uk', '(Postfix)', 'with', 'ESMTP', 'id', 'C7251BAD44;']
    Line: 	Fri,  4 Jan 2008 16:10:53 +0000 (GMT)
    Words ['Fri,', '4', 'Jan', '2008', '16:10:53', '+0000', '(GMT)']
    Line: Message-ID: <200801041609.m04G9EuX007197@nakamura.uits.iupui.edu>
    Words ['Message-ID:', '<200801041609.m04G9EuX007197@nakamura.uits.iupui.edu>']
    Line: Mime-Version: 1.0
    Words ['Mime-Version:', '1.0']
    Line: Content-Transfer-Encoding: 7bit
    Words ['Content-Transfer-Encoding:', '7bit']
    Line: Received: from prod.collab.uhi.ac.uk ([194.35.219.182])
    Words ['Received:', 'from', 'prod.collab.uhi.ac.uk', '([194.35.219.182])']
    Line:           by paploo.uhi.ac.uk (JAMES SMTP Server 2.1.3) with SMTP ID 483
    Words ['by', 'paploo.uhi.ac.uk', '(JAMES', 'SMTP', 'Server', '2.1.3)', 'with', 'SMTP', 'ID', '483']
    Line:           for <source@collab.sakaiproject.org>;
    Words ['for', '<source@collab.sakaiproject.org>;']
    Line:           Fri, 4 Jan 2008 16:10:27 +0000 (GMT)
    Words ['Fri,', '4', 'Jan', '2008', '16:10:27', '+0000', '(GMT)']
    Line: Received: from nakamura.uits.iupui.edu (nakamura.uits.iupui.edu [134.68.220.122])
    Words ['Received:', 'from', 'nakamura.uits.iupui.edu', '(nakamura.uits.iupui.edu', '[134.68.220.122])']
    Line: 	by shmi.uhi.ac.uk (Postfix) with ESMTP id 2E7043DFA2
    Words ['by', 'shmi.uhi.ac.uk', '(Postfix)', 'with', 'ESMTP', 'id', '2E7043DFA2']
    Line: 	for <source@collab.sakaiproject.org>; Fri,  4 Jan 2008 16:10:26 +0000 (GMT)
    Words ['for', '<source@collab.sakaiproject.org>;', 'Fri,', '4', 'Jan', '2008', '16:10:26', '+0000', '(GMT)']
    Line: Received: from nakamura.uits.iupui.edu (localhost [127.0.0.1])
    Words ['Received:', 'from', 'nakamura.uits.iupui.edu', '(localhost', '[127.0.0.1])']
    Line: 	by nakamura.uits.iupui.edu (8.12.11.20060308/8.12.11) with ESMTP id m04G9Eqg007199
    Words ['by', 'nakamura.uits.iupui.edu', '(8.12.11.20060308/8.12.11)', 'with', 'ESMTP', 'id', 'm04G9Eqg007199']
    Line: 	for <source@collab.sakaiproject.org>; Fri, 4 Jan 2008 11:09:15 -0500
    Words ['for', '<source@collab.sakaiproject.org>;', 'Fri,', '4', 'Jan', '2008', '11:09:15', '-0500']
    Line: Received: (from apache@localhost)
    Words ['Received:', '(from', 'apache@localhost)']
    Line: 	by nakamura.uits.iupui.edu (8.12.11.20060308/8.12.11/Submit) id m04G9EuX007197
    Words ['by', 'nakamura.uits.iupui.edu', '(8.12.11.20060308/8.12.11/Submit)', 'id', 'm04G9EuX007197']
    Line: 	for source@collab.sakaiproject.org; Fri, 4 Jan 2008 11:09:14 -0500
    Words ['for', 'source@collab.sakaiproject.org;', 'Fri,', '4', 'Jan', '2008', '11:09:14', '-0500']
    Line: Date: Fri, 4 Jan 2008 11:09:14 -0500
    Words ['Date:', 'Fri,', '4', 'Jan', '2008', '11:09:14', '-0500']
    Line: X-Authentication-Warning: nakamura.uits.iupui.edu: apache set sender to zqian@umich.edu using -f
    Words ['X-Authentication-Warning:', 'nakamura.uits.iupui.edu:', 'apache', 'set', 'sender', 'to', 'zqian@umich.edu', 'using', '-f']
    Line: To: source@collab.sakaiproject.org
    Words ['To:', 'source@collab.sakaiproject.org']
    Line: From: zqian@umich.edu
    Words ['From:', 'zqian@umich.edu']
    Line: Subject: [sakai] svn commit: r39760 - in site-manage/trunk/site-manage-tool/tool/src: java/org/sakaiproject/site/tool webapp/vm/sitesetup
    Words ['Subject:', '[sakai]', 'svn', 'commit:', 'r39760', '-', 'in', 'site-manage/trunk/site-manage-tool/tool/src:', 'java/org/sakaiproject/site/tool', 'webapp/vm/sitesetup']
    Line: X-Content-Type-Outer-Envelope: text/plain; charset=UTF-8
    Words ['X-Content-Type-Outer-Envelope:', 'text/plain;', 'charset=UTF-8']
    Line: X-Content-Type-Message-Body: text/plain; charset=UTF-8
    Words ['X-Content-Type-Message-Body:', 'text/plain;', 'charset=UTF-8']
    Line: Content-Type: text/plain; charset=UTF-8
    Words ['Content-Type:', 'text/plain;', 'charset=UTF-8']
    Line: X-DSPAM-Result: Innocent
    Words ['X-DSPAM-Result:', 'Innocent']
    Line: X-DSPAM-Processed: Fri Jan  4 11:11:03 2008
    Words ['X-DSPAM-Processed:', 'Fri', 'Jan', '4', '11:11:03', '2008']
    Line: X-DSPAM-Confidence: 0.6959
    Words ['X-DSPAM-Confidence:', '0.6959']
    Line: X-DSPAM-Probability: 0.0000
    Words ['X-DSPAM-Probability:', '0.0000']
    Line: 
    Words []
    Line: Details: http://source.sakaiproject.org/viewsvn/?view=rev&rev=39760
    Words ['Details:', 'http://source.sakaiproject.org/viewsvn/?view=rev&rev=39760']
    Line: 
    Words []
    Line: Author: zqian@umich.edu
    Words ['Author:', 'zqian@umich.edu']
    Line: Date: 2008-01-04 11:09:12 -0500 (Fri, 04 Jan 2008)
    Words ['Date:', '2008-01-04', '11:09:12', '-0500', '(Fri,', '04', 'Jan', '2008)']
    Line: New Revision: 39760
    Words ['New', 'Revision:', '39760']
    Line: 
    Words []
    Line: Modified:
    Words ['Modified:']
    Line: site-manage/trunk/site-manage-tool/tool/src/java/org/sakaiproject/site/tool/SiteAction.java
    Words ['site-manage/trunk/site-manage-tool/tool/src/java/org/sakaiproject/site/tool/SiteAction.java']
    Line: site-manage/trunk/site-manage-tool/tool/src/webapp/vm/sitesetup/chef_site-siteInfo-list.vm
    Words ['site-manage/trunk/site-manage-tool/tool/src/webapp/vm/sitesetup/chef_site-siteInfo-list.vm']
    Line: Log:
    Words ['Log:']
    Line: fix to SAK-10911: Refactor use of site.upd, site.upd.site.mbrship and site.upd.grp.mbrship permissions
    Words ['fix', 'to', 'SAK-10911:', 'Refactor', 'use', 'of', 'site.upd,', 'site.upd.site.mbrship', 'and', 'site.upd.grp.mbrship', 'permissions']
    Line: 
    Words []
    Line: ----------------------
    Words ['----------------------']
    Line: This automatic notification message was sent by Sakai Collab (https://collab.sakaiproject.org/portal) from the Source site.
    Words ['This', 'automatic', 'notification', 'message', 'was', 'sent', 'by', 'Sakai', 'Collab', '(https://collab.sakaiproject.org/portal)', 'from', 'the', 'Source', 'site.']
    Line: You can modify how you receive notifications at My Workspace > Preferences.
    Words ['You', 'can', 'modify', 'how', 'you', 'receive', 'notifications', 'at', 'My', 'Workspace', '>', 'Preferences.']
    Line: 
    Words []
    Line: 
    Words []
    Line: 
    Words []
    Line: From gsilver@umich.edu Fri Jan  4 11:10:22 2008
    Words ['From', 'gsilver@umich.edu', 'Fri', 'Jan', '4', '11:10:22', '2008']
    Line: Return-Path: <postmaster@collab.sakaiproject.org>
    Words ['Return-Path:', '<postmaster@collab.sakaiproject.org>']
    Line: Received: from murder (mail.umich.edu [141.211.14.39])
    Words ['Received:', 'from', 'murder', '(mail.umich.edu', '[141.211.14.39])']
    Line: 	 by frankenstein.mail.umich.edu (Cyrus v2.3.8) with LMTPA;
    Words ['by', 'frankenstein.mail.umich.edu', '(Cyrus', 'v2.3.8)', 'with', 'LMTPA;']
    Line: 	 Fri, 04 Jan 2008 11:10:22 -0500
    Words ['Fri,', '04', 'Jan', '2008', '11:10:22', '-0500']
    Line: X-Sieve: CMU Sieve 2.3
    Words ['X-Sieve:', 'CMU', 'Sieve', '2.3']
    Line: Received: from murder ([unix socket])
    Words ['Received:', 'from', 'murder', '([unix', 'socket])']
    Line: 	 by mail.umich.edu (Cyrus v2.2.12) with LMTPA;
    Words ['by', 'mail.umich.edu', '(Cyrus', 'v2.2.12)', 'with', 'LMTPA;']
    Line: 	 Fri, 04 Jan 2008 11:10:22 -0500
    Words ['Fri,', '04', 'Jan', '2008', '11:10:22', '-0500']
    Line: Received: from holes.mr.itd.umich.edu (holes.mr.itd.umich.edu [141.211.14.79])
    Words ['Received:', 'from', 'holes.mr.itd.umich.edu', '(holes.mr.itd.umich.edu', '[141.211.14.79])']
    Line: 	by faithful.mail.umich.edu () with ESMTP id m04GAL9k010604;
    Words ['by', 'faithful.mail.umich.edu', '()', 'with', 'ESMTP', 'id', 'm04GAL9k010604;']
    Line: 	Fri, 4 Jan 2008 11:10:21 -0500
    Words ['Fri,', '4', 'Jan', '2008', '11:10:21', '-0500']
    Line: Received: FROM paploo.uhi.ac.uk (app1.prod.collab.uhi.ac.uk [194.35.219.184])
    Words ['Received:', 'FROM', 'paploo.uhi.ac.uk', '(app1.prod.collab.uhi.ac.uk', '[194.35.219.184])']
    Line: 	BY holes.mr.itd.umich.edu ID 477E5A67.34350.23015 ;
    Words ['BY', 'holes.mr.itd.umich.edu', 'ID', '477E5A67.34350.23015', ';']
    Line: 	 4 Jan 2008 11:10:18 -0500
    Words ['4', 'Jan', '2008', '11:10:18', '-0500']
    Line: Received: from paploo.uhi.ac.uk (localhost [127.0.0.1])
    Words ['Received:', 'from', 'paploo.uhi.ac.uk', '(localhost', '[127.0.0.1])']
    Line: 	by paploo.uhi.ac.uk (Postfix) with ESMTP id 98D04BAD43;
    Words ['by', 'paploo.uhi.ac.uk', '(Postfix)', 'with', 'ESMTP', 'id', '98D04BAD43;']
    Line: 	Fri,  4 Jan 2008 16:10:11 +0000 (GMT)
    Words ['Fri,', '4', 'Jan', '2008', '16:10:11', '+0000', '(GMT)']
    Line: Message-ID: <200801041608.m04G8d7w007184@nakamura.uits.iupui.edu>
    Words ['Message-ID:', '<200801041608.m04G8d7w007184@nakamura.uits.iupui.edu>']
    Line: Mime-Version: 1.0
    Words ['Mime-Version:', '1.0']
    Line: Content-Transfer-Encoding: 7bit
    Words ['Content-Transfer-Encoding:', '7bit']
    Line: Received: from prod.collab.uhi.ac.uk ([194.35.219.182])
    Words ['Received:', 'from', 'prod.collab.uhi.ac.uk', '([194.35.219.182])']
    Line:           by paploo.uhi.ac.uk (JAMES SMTP Server 2.1.3) with SMTP ID 966
    Words ['by', 'paploo.uhi.ac.uk', '(JAMES', 'SMTP', 'Server', '2.1.3)', 'with', 'SMTP', 'ID', '966']
    Line:           for <source@collab.sakaiproject.org>;
    Words ['for', '<source@collab.sakaiproject.org>;']
    Line:           Fri, 4 Jan 2008 16:09:51 +0000 (GMT)
    Words ['Fri,', '4', 'Jan', '2008', '16:09:51', '+0000', '(GMT)']
    Line: Received: from nakamura.uits.iupui.edu (nakamura.uits.iupui.edu [134.68.220.122])
    Words ['Received:', 'from', 'nakamura.uits.iupui.edu', '(nakamura.uits.iupui.edu', '[134.68.220.122])']
    Line: 	by shmi.uhi.ac.uk (Postfix) with ESMTP id 9F89542DD0
    Words ['by', 'shmi.uhi.ac.uk', '(Postfix)', 'with', 'ESMTP', 'id', '9F89542DD0']
    Line: 	for <source@collab.sakaiproject.org>; Fri,  4 Jan 2008 16:09:50 +0000 (GMT)
    Words ['for', '<source@collab.sakaiproject.org>;', 'Fri,', '4', 'Jan', '2008', '16:09:50', '+0000', '(GMT)']
    Line: Received: from nakamura.uits.iupui.edu (localhost [127.0.0.1])
    Words ['Received:', 'from', 'nakamura.uits.iupui.edu', '(localhost', '[127.0.0.1])']
    Line: 	by nakamura.uits.iupui.edu (8.12.11.20060308/8.12.11) with ESMTP id m04G8dXN007186
    Words ['by', 'nakamura.uits.iupui.edu', '(8.12.11.20060308/8.12.11)', 'with', 'ESMTP', 'id', 'm04G8dXN007186']
    Line: 	for <source@collab.sakaiproject.org>; Fri, 4 Jan 2008 11:08:39 -0500
    Words ['for', '<source@collab.sakaiproject.org>;', 'Fri,', '4', 'Jan', '2008', '11:08:39', '-0500']
    Line: Received: (from apache@localhost)
    Words ['Received:', '(from', 'apache@localhost)']
    Line: 	by nakamura.uits.iupui.edu (8.12.11.20060308/8.12.11/Submit) id m04G8d7w007184
    Words ['by', 'nakamura.uits.iupui.edu', '(8.12.11.20060308/8.12.11/Submit)', 'id', 'm04G8d7w007184']
    Line: 	for source@collab.sakaiproject.org; Fri, 4 Jan 2008 11:08:39 -0500
    Words ['for', 'source@collab.sakaiproject.org;', 'Fri,', '4', 'Jan', '2008', '11:08:39', '-0500']
    Line: Date: Fri, 4 Jan 2008 11:08:39 -0500
    Words ['Date:', 'Fri,', '4', 'Jan', '2008', '11:08:39', '-0500']
    Line: X-Authentication-Warning: nakamura.uits.iupui.edu: apache set sender to gsilver@umich.edu using -f
    Words ['X-Authentication-Warning:', 'nakamura.uits.iupui.edu:', 'apache', 'set', 'sender', 'to', 'gsilver@umich.edu', 'using', '-f']
    Line: To: source@collab.sakaiproject.org
    Words ['To:', 'source@collab.sakaiproject.org']
    Line: From: gsilver@umich.edu
    Words ['From:', 'gsilver@umich.edu']
    Line: Subject: [sakai] svn commit: r39759 - mailarchive/trunk/mailarchive-tool/tool/src/bundle
    Words ['Subject:', '[sakai]', 'svn', 'commit:', 'r39759', '-', 'mailarchive/trunk/mailarchive-tool/tool/src/bundle']
    Line: X-Content-Type-Outer-Envelope: text/plain; charset=UTF-8
    Words ['X-Content-Type-Outer-Envelope:', 'text/plain;', 'charset=UTF-8']
    Line: X-Content-Type-Message-Body: text/plain; charset=UTF-8
    Words ['X-Content-Type-Message-Body:', 'text/plain;', 'charset=UTF-8']
    Line: Content-Type: text/plain; charset=UTF-8
    Words ['Content-Type:', 'text/plain;', 'charset=UTF-8']
    Line: X-DSPAM-Result: Innocent
    Words ['X-DSPAM-Result:', 'Innocent']
    Line: X-DSPAM-Processed: Fri Jan  4 11:10:22 2008
    Words ['X-DSPAM-Processed:', 'Fri', 'Jan', '4', '11:10:22', '2008']
    Line: X-DSPAM-Confidence: 0.7606
    Words ['X-DSPAM-Confidence:', '0.7606']
    Line: X-DSPAM-Probability: 0.0000
    Words ['X-DSPAM-Probability:', '0.0000']
    Line: 
    Words []
    Line: Details: http://source.sakaiproject.org/viewsvn/?view=rev&rev=39759
    Words ['Details:', 'http://source.sakaiproject.org/viewsvn/?view=rev&rev=39759']
    Line: 
    Words []
    Line: Author: gsilver@umich.edu
    Words ['Author:', 'gsilver@umich.edu']
    Line: Date: 2008-01-04 11:08:38 -0500 (Fri, 04 Jan 2008)
    Words ['Date:', '2008-01-04', '11:08:38', '-0500', '(Fri,', '04', 'Jan', '2008)']
    Line: New Revision: 39759
    Words ['New', 'Revision:', '39759']
    Line: 
    Words []
    Line: Modified:
    Words ['Modified:']
    Line: mailarchive/trunk/mailarchive-tool/tool/src/bundle/email.properties
    Words ['mailarchive/trunk/mailarchive-tool/tool/src/bundle/email.properties']
    Line: Log:
    Words ['Log:']
    Line: SAK-12592
    Words ['SAK-12592']
    Line: http://bugs.sakaiproject.org/jira/browse/SAK-12592
    Words ['http://bugs.sakaiproject.org/jira/browse/SAK-12592']
    Line: - left moot (unused) entries commented for now
    Words ['-', 'left', 'moot', '(unused)', 'entries', 'commented', 'for', 'now']
    Line: 
    Words []
    Line: ----------------------
    Words ['----------------------']
    Line: This automatic notification message was sent by Sakai Collab (https://collab.sakaiproject.org/portal) from the Source site.
    Words ['This', 'automatic', 'notification', 'message', 'was', 'sent', 'by', 'Sakai', 'Collab', '(https://collab.sakaiproject.org/portal)', 'from', 'the', 'Source', 'site.']
    Line: You can modify how you receive notifications at My Workspace > Preferences.
    Words ['You', 'can', 'modify', 'how', 'you', 'receive', 'notifications', 'at', 'My', 'Workspace', '>', 'Preferences.']
    Line: 
    Words []
    Line: 
    Words []
    Line: 
    Words []
    Line: From wagnermr@iupui.edu Fri Jan  4 10:38:42 2008
    Words ['From', 'wagnermr@iupui.edu', 'Fri', 'Jan', '4', '10:38:42', '2008']
    Line: Return-Path: <postmaster@collab.sakaiproject.org>
    Words ['Return-Path:', '<postmaster@collab.sakaiproject.org>']
    Line: Received: from murder (mail.umich.edu [141.211.14.90])
    Words ['Received:', 'from', 'murder', '(mail.umich.edu', '[141.211.14.90])']
    Line: 	 by frankenstein.mail.umich.edu (Cyrus v2.3.8) with LMTPA;
    Words ['by', 'frankenstein.mail.umich.edu', '(Cyrus', 'v2.3.8)', 'with', 'LMTPA;']
    Line: 	 Fri, 04 Jan 2008 10:38:42 -0500
    Words ['Fri,', '04', 'Jan', '2008', '10:38:42', '-0500']
    Line: X-Sieve: CMU Sieve 2.3
    Words ['X-Sieve:', 'CMU', 'Sieve', '2.3']
    Line: Received: from murder ([unix socket])
    Words ['Received:', 'from', 'murder', '([unix', 'socket])']
    Line: 	 by mail.umich.edu (Cyrus v2.2.12) with LMTPA;
    Words ['by', 'mail.umich.edu', '(Cyrus', 'v2.2.12)', 'with', 'LMTPA;']
    Line: 	 Fri, 04 Jan 2008 10:38:42 -0500
    Words ['Fri,', '04', 'Jan', '2008', '10:38:42', '-0500']
    Line: Received: from shining.mr.itd.umich.edu (shining.mr.itd.umich.edu [141.211.93.153])
    Words ['Received:', 'from', 'shining.mr.itd.umich.edu', '(shining.mr.itd.umich.edu', '[141.211.93.153])']
    Line: 	by flawless.mail.umich.edu () with ESMTP id m04Fcfjm012313;
    Words ['by', 'flawless.mail.umich.edu', '()', 'with', 'ESMTP', 'id', 'm04Fcfjm012313;']
    Line: 	Fri, 4 Jan 2008 10:38:41 -0500
    Words ['Fri,', '4', 'Jan', '2008', '10:38:41', '-0500']
    Line: Received: FROM paploo.uhi.ac.uk (app1.prod.collab.uhi.ac.uk [194.35.219.184])
    Words ['Received:', 'FROM', 'paploo.uhi.ac.uk', '(app1.prod.collab.uhi.ac.uk', '[194.35.219.184])']
    Line: 	BY shining.mr.itd.umich.edu ID 477E52FA.E6C6E.24093 ;
    Words ['BY', 'shining.mr.itd.umich.edu', 'ID', '477E52FA.E6C6E.24093', ';']
    Line: 	 4 Jan 2008 10:38:37 -0500
    Words ['4', 'Jan', '2008', '10:38:37', '-0500']
    Line: Received: from paploo.uhi.ac.uk (localhost [127.0.0.1])
    Words ['Received:', 'from', 'paploo.uhi.ac.uk', '(localhost', '[127.0.0.1])']
    Line: 	by paploo.uhi.ac.uk (Postfix) with ESMTP id 6A39594CD2;
    Words ['by', 'paploo.uhi.ac.uk', '(Postfix)', 'with', 'ESMTP', 'id', '6A39594CD2;']
    Line: 	Fri,  4 Jan 2008 15:37:36 +0000 (GMT)
    Words ['Fri,', '4', 'Jan', '2008', '15:37:36', '+0000', '(GMT)']
    Line: Message-ID: <200801041537.m04Fb6Ci007092@nakamura.uits.iupui.edu>
    Words ['Message-ID:', '<200801041537.m04Fb6Ci007092@nakamura.uits.iupui.edu>']
    Line: Mime-Version: 1.0
    Words ['Mime-Version:', '1.0']
    Line: Content-Transfer-Encoding: 7bit
    Words ['Content-Transfer-Encoding:', '7bit']
    Line: Received: from prod.collab.uhi.ac.uk ([194.35.219.182])
    Words ['Received:', 'from', 'prod.collab.uhi.ac.uk', '([194.35.219.182])']
    Line:           by paploo.uhi.ac.uk (JAMES SMTP Server 2.1.3) with SMTP ID 690
    Words ['by', 'paploo.uhi.ac.uk', '(JAMES', 'SMTP', 'Server', '2.1.3)', 'with', 'SMTP', 'ID', '690']
    Line:           for <source@collab.sakaiproject.org>;
    Words ['for', '<source@collab.sakaiproject.org>;']
    Line:           Fri, 4 Jan 2008 15:37:21 +0000 (GMT)
    Words ['Fri,', '4', 'Jan', '2008', '15:37:21', '+0000', '(GMT)']
    Line: Received: from nakamura.uits.iupui.edu (nakamura.uits.iupui.edu [134.68.220.122])
    Words ['Received:', 'from', 'nakamura.uits.iupui.edu', '(nakamura.uits.iupui.edu', '[134.68.220.122])']
    Line: 	by shmi.uhi.ac.uk (Postfix) with ESMTP id CEFA037ACE
    Words ['by', 'shmi.uhi.ac.uk', '(Postfix)', 'with', 'ESMTP', 'id', 'CEFA037ACE']
    Line: 	for <source@collab.sakaiproject.org>; Fri,  4 Jan 2008 15:38:17 +0000 (GMT)
    Words ['for', '<source@collab.sakaiproject.org>;', 'Fri,', '4', 'Jan', '2008', '15:38:17', '+0000', '(GMT)']
    Line: Received: from nakamura.uits.iupui.edu (localhost [127.0.0.1])
    Words ['Received:', 'from', 'nakamura.uits.iupui.edu', '(localhost', '[127.0.0.1])']
    Line: 	by nakamura.uits.iupui.edu (8.12.11.20060308/8.12.11) with ESMTP id m04Fb6nh007094
    Words ['by', 'nakamura.uits.iupui.edu', '(8.12.11.20060308/8.12.11)', 'with', 'ESMTP', 'id', 'm04Fb6nh007094']
    Line: 	for <source@collab.sakaiproject.org>; Fri, 4 Jan 2008 10:37:06 -0500
    Words ['for', '<source@collab.sakaiproject.org>;', 'Fri,', '4', 'Jan', '2008', '10:37:06', '-0500']
    Line: Received: (from apache@localhost)
    Words ['Received:', '(from', 'apache@localhost)']
    Line: 	by nakamura.uits.iupui.edu (8.12.11.20060308/8.12.11/Submit) id m04Fb6Ci007092
    Words ['by', 'nakamura.uits.iupui.edu', '(8.12.11.20060308/8.12.11/Submit)', 'id', 'm04Fb6Ci007092']
    Line: 	for source@collab.sakaiproject.org; Fri, 4 Jan 2008 10:37:06 -0500
    Words ['for', 'source@collab.sakaiproject.org;', 'Fri,', '4', 'Jan', '2008', '10:37:06', '-0500']
    Line: Date: Fri, 4 Jan 2008 10:37:06 -0500
    Words ['Date:', 'Fri,', '4', 'Jan', '2008', '10:37:06', '-0500']
    Line: X-Authentication-Warning: nakamura.uits.iupui.edu: apache set sender to wagnermr@iupui.edu using -f
    Words ['X-Authentication-Warning:', 'nakamura.uits.iupui.edu:', 'apache', 'set', 'sender', 'to', 'wagnermr@iupui.edu', 'using', '-f']
    Line: To: source@collab.sakaiproject.org
    Words ['To:', 'source@collab.sakaiproject.org']
    Line: From: wagnermr@iupui.edu
    Words ['From:', 'wagnermr@iupui.edu']
    Line: Subject: [sakai] svn commit: r39758 - in gradebook/trunk: app/business/src/java/org/sakaiproject/tool/gradebook/business/impl service/api/src/java/org/sakaiproject/service/gradebook/shared service/impl/src/java/org/sakaiproject/component/gradebook
    Words ['Subject:', '[sakai]', 'svn', 'commit:', 'r39758', '-', 'in', 'gradebook/trunk:', 'app/business/src/java/org/sakaiproject/tool/gradebook/business/impl', 'service/api/src/java/org/sakaiproject/service/gradebook/shared', 'service/impl/src/java/org/sakaiproject/component/gradebook']
    Line: X-Content-Type-Outer-Envelope: text/plain; charset=UTF-8
    Words ['X-Content-Type-Outer-Envelope:', 'text/plain;', 'charset=UTF-8']
    Line: X-Content-Type-Message-Body: text/plain; charset=UTF-8
    Words ['X-Content-Type-Message-Body:', 'text/plain;', 'charset=UTF-8']
    Line: Content-Type: text/plain; charset=UTF-8
    Words ['Content-Type:', 'text/plain;', 'charset=UTF-8']
    Line: X-DSPAM-Result: Innocent
    Words ['X-DSPAM-Result:', 'Innocent']
    Line: X-DSPAM-Processed: Fri Jan  4 10:38:42 2008
    Words ['X-DSPAM-Processed:', 'Fri', 'Jan', '4', '10:38:42', '2008']
    Line: X-DSPAM-Confidence: 0.7559
    Words ['X-DSPAM-Confidence:', '0.7559']
    Line: X-DSPAM-Probability: 0.0000
    Words ['X-DSPAM-Probability:', '0.0000']
    Line: 
    Words []
    Line: Details: http://source.sakaiproject.org/viewsvn/?view=rev&rev=39758
    Words ['Details:', 'http://source.sakaiproject.org/viewsvn/?view=rev&rev=39758']
    Line: 
    Words []
    Line: Author: wagnermr@iupui.edu
    Words ['Author:', 'wagnermr@iupui.edu']
    Line: Date: 2008-01-04 10:37:04 -0500 (Fri, 04 Jan 2008)
    Words ['Date:', '2008-01-04', '10:37:04', '-0500', '(Fri,', '04', 'Jan', '2008)']
    Line: New Revision: 39758
    Words ['New', 'Revision:', '39758']
    Line: 
    Words []
    Line: Modified:
    Words ['Modified:']
    Line: gradebook/trunk/app/business/src/java/org/sakaiproject/tool/gradebook/business/impl/GradebookManagerHibernateImpl.java
    Words ['gradebook/trunk/app/business/src/java/org/sakaiproject/tool/gradebook/business/impl/GradebookManagerHibernateImpl.java']
    Line: gradebook/trunk/service/api/src/java/org/sakaiproject/service/gradebook/shared/GradebookService.java
    Words ['gradebook/trunk/service/api/src/java/org/sakaiproject/service/gradebook/shared/GradebookService.java']
    Line: gradebook/trunk/service/impl/src/java/org/sakaiproject/component/gradebook/GradebookServiceHibernateImpl.java
    Words ['gradebook/trunk/service/impl/src/java/org/sakaiproject/component/gradebook/GradebookServiceHibernateImpl.java']
    Line: Log:
    Words ['Log:']
    Line: SAK-12175
    Words ['SAK-12175']
    Line: http://bugs.sakaiproject.org/jira/browse/SAK-12175
    Words ['http://bugs.sakaiproject.org/jira/browse/SAK-12175']
    Line: Create methods required for gb integration with the Assignment2 tool
    Words ['Create', 'methods', 'required', 'for', 'gb', 'integration', 'with', 'the', 'Assignment2', 'tool']
    Line: getGradeDefinitionForStudentForItem
    Words ['getGradeDefinitionForStudentForItem']
    Line: 
    Words []
    Line: ----------------------
    Words ['----------------------']
    Line: This automatic notification message was sent by Sakai Collab (https://collab.sakaiproject.org/portal) from the Source site.
    Words ['This', 'automatic', 'notification', 'message', 'was', 'sent', 'by', 'Sakai', 'Collab', '(https://collab.sakaiproject.org/portal)', 'from', 'the', 'Source', 'site.']
    Line: You can modify how you receive notifications at My Workspace > Preferences.
    Words ['You', 'can', 'modify', 'how', 'you', 'receive', 'notifications', 'at', 'My', 'Workspace', '>', 'Preferences.']
    Line: 
    Words []
    Line: 
    Words []
    Line: 
    Words []
    Line: From zqian@umich.edu Fri Jan  4 10:17:43 2008
    Words ['From', 'zqian@umich.edu', 'Fri', 'Jan', '4', '10:17:43', '2008']
    Line: Return-Path: <postmaster@collab.sakaiproject.org>
    Words ['Return-Path:', '<postmaster@collab.sakaiproject.org>']
    Line: Received: from murder (mail.umich.edu [141.211.14.97])
    Words ['Received:', 'from', 'murder', '(mail.umich.edu', '[141.211.14.97])']
    Line: 	 by frankenstein.mail.umich.edu (Cyrus v2.3.8) with LMTPA;
    Words ['by', 'frankenstein.mail.umich.edu', '(Cyrus', 'v2.3.8)', 'with', 'LMTPA;']
    Line: 	 Fri, 04 Jan 2008 10:17:43 -0500
    Words ['Fri,', '04', 'Jan', '2008', '10:17:43', '-0500']
    Line: X-Sieve: CMU Sieve 2.3
    Words ['X-Sieve:', 'CMU', 'Sieve', '2.3']
    Line: Received: from murder ([unix socket])
    Words ['Received:', 'from', 'murder', '([unix', 'socket])']
    Line: 	 by mail.umich.edu (Cyrus v2.2.12) with LMTPA;
    Words ['by', 'mail.umich.edu', '(Cyrus', 'v2.2.12)', 'with', 'LMTPA;']
    Line: 	 Fri, 04 Jan 2008 10:17:42 -0500
    Words ['Fri,', '04', 'Jan', '2008', '10:17:42', '-0500']
    Line: Received: from creepshow.mr.itd.umich.edu (creepshow.mr.itd.umich.edu [141.211.14.84])
    Words ['Received:', 'from', 'creepshow.mr.itd.umich.edu', '(creepshow.mr.itd.umich.edu', '[141.211.14.84])']
    Line: 	by sleepers.mail.umich.edu () with ESMTP id m04FHgfs011536;
    Words ['by', 'sleepers.mail.umich.edu', '()', 'with', 'ESMTP', 'id', 'm04FHgfs011536;']
    Line: 	Fri, 4 Jan 2008 10:17:42 -0500
    Words ['Fri,', '4', 'Jan', '2008', '10:17:42', '-0500']
    Line: Received: FROM paploo.uhi.ac.uk (app1.prod.collab.uhi.ac.uk [194.35.219.184])
    Words ['Received:', 'FROM', 'paploo.uhi.ac.uk', '(app1.prod.collab.uhi.ac.uk', '[194.35.219.184])']
    Line: 	BY creepshow.mr.itd.umich.edu ID 477E4E0F.CCA4B.926 ;
    Words ['BY', 'creepshow.mr.itd.umich.edu', 'ID', '477E4E0F.CCA4B.926', ';']
    Line: 	 4 Jan 2008 10:17:38 -0500
    Words ['4', 'Jan', '2008', '10:17:38', '-0500']
    Line: Received: from paploo.uhi.ac.uk (localhost [127.0.0.1])
    Words ['Received:', 'from', 'paploo.uhi.ac.uk', '(localhost', '[127.0.0.1])']
    Line: 	by paploo.uhi.ac.uk (Postfix) with ESMTP id BD02DBAC64;
    Words ['by', 'paploo.uhi.ac.uk', '(Postfix)', 'with', 'ESMTP', 'id', 'BD02DBAC64;']
    Line: 	Fri,  4 Jan 2008 15:17:34 +0000 (GMT)
    Words ['Fri,', '4', 'Jan', '2008', '15:17:34', '+0000', '(GMT)']
    Line: Message-ID: <200801041515.m04FFv42007050@nakamura.uits.iupui.edu>
    Words ['Message-ID:', '<200801041515.m04FFv42007050@nakamura.uits.iupui.edu>']
    Line: Mime-Version: 1.0
    Words ['Mime-Version:', '1.0']
    Line: Content-Transfer-Encoding: 7bit
    Words ['Content-Transfer-Encoding:', '7bit']
    Line: Received: from prod.collab.uhi.ac.uk ([194.35.219.182])
    Words ['Received:', 'from', 'prod.collab.uhi.ac.uk', '([194.35.219.182])']
    Line:           by paploo.uhi.ac.uk (JAMES SMTP Server 2.1.3) with SMTP ID 25
    Words ['by', 'paploo.uhi.ac.uk', '(JAMES', 'SMTP', 'Server', '2.1.3)', 'with', 'SMTP', 'ID', '25']
    Line:           for <source@collab.sakaiproject.org>;
    Words ['for', '<source@collab.sakaiproject.org>;']
    Line:           Fri, 4 Jan 2008 15:17:11 +0000 (GMT)
    Words ['Fri,', '4', 'Jan', '2008', '15:17:11', '+0000', '(GMT)']
    Line: Received: from nakamura.uits.iupui.edu (nakamura.uits.iupui.edu [134.68.220.122])
    Words ['Received:', 'from', 'nakamura.uits.iupui.edu', '(nakamura.uits.iupui.edu', '[134.68.220.122])']
    Line: 	by shmi.uhi.ac.uk (Postfix) with ESMTP id 5B396236B9
    Words ['by', 'shmi.uhi.ac.uk', '(Postfix)', 'with', 'ESMTP', 'id', '5B396236B9']
    Line: 	for <source@collab.sakaiproject.org>; Fri,  4 Jan 2008 15:17:08 +0000 (GMT)
    Words ['for', '<source@collab.sakaiproject.org>;', 'Fri,', '4', 'Jan', '2008', '15:17:08', '+0000', '(GMT)']
    Line: Received: from nakamura.uits.iupui.edu (localhost [127.0.0.1])
    Words ['Received:', 'from', 'nakamura.uits.iupui.edu', '(localhost', '[127.0.0.1])']
    Line: 	by nakamura.uits.iupui.edu (8.12.11.20060308/8.12.11) with ESMTP id m04FFv85007052
    Words ['by', 'nakamura.uits.iupui.edu', '(8.12.11.20060308/8.12.11)', 'with', 'ESMTP', 'id', 'm04FFv85007052']
    Line: 	for <source@collab.sakaiproject.org>; Fri, 4 Jan 2008 10:15:57 -0500
    Words ['for', '<source@collab.sakaiproject.org>;', 'Fri,', '4', 'Jan', '2008', '10:15:57', '-0500']
    Line: Received: (from apache@localhost)
    Words ['Received:', '(from', 'apache@localhost)']
    Line: 	by nakamura.uits.iupui.edu (8.12.11.20060308/8.12.11/Submit) id m04FFv42007050
    Words ['by', 'nakamura.uits.iupui.edu', '(8.12.11.20060308/8.12.11/Submit)', 'id', 'm04FFv42007050']
    Line: 	for source@collab.sakaiproject.org; Fri, 4 Jan 2008 10:15:57 -0500
    Words ['for', 'source@collab.sakaiproject.org;', 'Fri,', '4', 'Jan', '2008', '10:15:57', '-0500']
    Line: Date: Fri, 4 Jan 2008 10:15:57 -0500
    Words ['Date:', 'Fri,', '4', 'Jan', '2008', '10:15:57', '-0500']
    Line: X-Authentication-Warning: nakamura.uits.iupui.edu: apache set sender to zqian@umich.edu using -f
    Words ['X-Authentication-Warning:', 'nakamura.uits.iupui.edu:', 'apache', 'set', 'sender', 'to', 'zqian@umich.edu', 'using', '-f']
    Line: To: source@collab.sakaiproject.org
    Words ['To:', 'source@collab.sakaiproject.org']
    Line: From: zqian@umich.edu
    Words ['From:', 'zqian@umich.edu']
    Line: Subject: [sakai] svn commit: r39757 - in assignment/trunk: assignment-impl/impl/src/java/org/sakaiproject/assignment/impl assignment-tool/tool/src/webapp/vm/assignment
    Words ['Subject:', '[sakai]', 'svn', 'commit:', 'r39757', '-', 'in', 'assignment/trunk:', 'assignment-impl/impl/src/java/org/sakaiproject/assignment/impl', 'assignment-tool/tool/src/webapp/vm/assignment']
    Line: X-Content-Type-Outer-Envelope: text/plain; charset=UTF-8
    Words ['X-Content-Type-Outer-Envelope:', 'text/plain;', 'charset=UTF-8']
    Line: X-Content-Type-Message-Body: text/plain; charset=UTF-8
    Words ['X-Content-Type-Message-Body:', 'text/plain;', 'charset=UTF-8']
    Line: Content-Type: text/plain; charset=UTF-8
    Words ['Content-Type:', 'text/plain;', 'charset=UTF-8']
    Line: X-DSPAM-Result: Innocent
    Words ['X-DSPAM-Result:', 'Innocent']
    Line: X-DSPAM-Processed: Fri Jan  4 10:17:42 2008
    Words ['X-DSPAM-Processed:', 'Fri', 'Jan', '4', '10:17:42', '2008']
    Line: X-DSPAM-Confidence: 0.7605
    Words ['X-DSPAM-Confidence:', '0.7605']
    Line: X-DSPAM-Probability: 0.0000
    Words ['X-DSPAM-Probability:', '0.0000']
    Line: 
    Words []
    Line: Details: http://source.sakaiproject.org/viewsvn/?view=rev&rev=39757
    Words ['Details:', 'http://source.sakaiproject.org/viewsvn/?view=rev&rev=39757']
    Line: 
    Words []
    Line: Author: zqian@umich.edu
    Words ['Author:', 'zqian@umich.edu']
    Line: Date: 2008-01-04 10:15:54 -0500 (Fri, 04 Jan 2008)
    Words ['Date:', '2008-01-04', '10:15:54', '-0500', '(Fri,', '04', 'Jan', '2008)']
    Line: New Revision: 39757
    Words ['New', 'Revision:', '39757']
    Line: 
    Words []
    Line: Modified:
    Words ['Modified:']
    Line: assignment/trunk/assignment-impl/impl/src/java/org/sakaiproject/assignment/impl/BaseAssignmentService.java
    Words ['assignment/trunk/assignment-impl/impl/src/java/org/sakaiproject/assignment/impl/BaseAssignmentService.java']
    Line: assignment/trunk/assignment-tool/tool/src/webapp/vm/assignment/chef_assignments_instructor_list_submissions.vm
    Words ['assignment/trunk/assignment-tool/tool/src/webapp/vm/assignment/chef_assignments_instructor_list_submissions.vm']
    Line: Log:
    Words ['Log:']
    Line: fix to SAK-12604:Don't show groups/sections filter if the site doesn't have any
    Words ['fix', 'to', "SAK-12604:Don't", 'show', 'groups/sections', 'filter', 'if', 'the', 'site', "doesn't", 'have', 'any']
    Line: 
    Words []
    Line: ----------------------
    Words ['----------------------']
    Line: This automatic notification message was sent by Sakai Collab (https://collab.sakaiproject.org/portal) from the Source site.
    Words ['This', 'automatic', 'notification', 'message', 'was', 'sent', 'by', 'Sakai', 'Collab', '(https://collab.sakaiproject.org/portal)', 'from', 'the', 'Source', 'site.']
    Line: You can modify how you receive notifications at My Workspace > Preferences.
    Words ['You', 'can', 'modify', 'how', 'you', 'receive', 'notifications', 'at', 'My', 'Workspace', '>', 'Preferences.']
    Line: 
    Words []
    Line: 
    Words []
    Line: 
    Words []
    Line: From antranig@caret.cam.ac.uk Fri Jan  4 10:04:14 2008
    Words ['From', 'antranig@caret.cam.ac.uk', 'Fri', 'Jan', '4', '10:04:14', '2008']
    Line: Return-Path: <postmaster@collab.sakaiproject.org>
    Words ['Return-Path:', '<postmaster@collab.sakaiproject.org>']
    Line: Received: from murder (mail.umich.edu [141.211.14.25])
    Words ['Received:', 'from', 'murder', '(mail.umich.edu', '[141.211.14.25])']
    Line: 	 by frankenstein.mail.umich.edu (Cyrus v2.3.8) with LMTPA;
    Words ['by', 'frankenstein.mail.umich.edu', '(Cyrus', 'v2.3.8)', 'with', 'LMTPA;']
    Line: 	 Fri, 04 Jan 2008 10:04:14 -0500
    Words ['Fri,', '04', 'Jan', '2008', '10:04:14', '-0500']
    Line: X-Sieve: CMU Sieve 2.3
    Words ['X-Sieve:', 'CMU', 'Sieve', '2.3']
    Line: Received: from murder ([unix socket])
    Words ['Received:', 'from', 'murder', '([unix', 'socket])']
    Line: 	 by mail.umich.edu (Cyrus v2.2.12) with LMTPA;
    Words ['by', 'mail.umich.edu', '(Cyrus', 'v2.2.12)', 'with', 'LMTPA;']
    Line: 	 Fri, 04 Jan 2008 10:04:14 -0500
    Words ['Fri,', '04', 'Jan', '2008', '10:04:14', '-0500']
    Line: Received: from holes.mr.itd.umich.edu (holes.mr.itd.umich.edu [141.211.14.79])
    Words ['Received:', 'from', 'holes.mr.itd.umich.edu', '(holes.mr.itd.umich.edu', '[141.211.14.79])']
    Line: 	by panther.mail.umich.edu () with ESMTP id m04F4Dci015108;
    Words ['by', 'panther.mail.umich.edu', '()', 'with', 'ESMTP', 'id', 'm04F4Dci015108;']
    Line: 	Fri, 4 Jan 2008 10:04:13 -0500
    Words ['Fri,', '4', 'Jan', '2008', '10:04:13', '-0500']
    Line: Received: FROM paploo.uhi.ac.uk (app1.prod.collab.uhi.ac.uk [194.35.219.184])
    Words ['Received:', 'FROM', 'paploo.uhi.ac.uk', '(app1.prod.collab.uhi.ac.uk', '[194.35.219.184])']
    Line: 	BY holes.mr.itd.umich.edu ID 477E4AE3.D7AF.31669 ;
    Words ['BY', 'holes.mr.itd.umich.edu', 'ID', '477E4AE3.D7AF.31669', ';']
    Line: 	 4 Jan 2008 10:04:05 -0500
    Words ['4', 'Jan', '2008', '10:04:05', '-0500']
    Line: Received: from paploo.uhi.ac.uk (localhost [127.0.0.1])
    Words ['Received:', 'from', 'paploo.uhi.ac.uk', '(localhost', '[127.0.0.1])']
    Line: 	by paploo.uhi.ac.uk (Postfix) with ESMTP id 933E3BAC17;
    Words ['by', 'paploo.uhi.ac.uk', '(Postfix)', 'with', 'ESMTP', 'id', '933E3BAC17;']
    Line: 	Fri,  4 Jan 2008 15:04:00 +0000 (GMT)
    Words ['Fri,', '4', 'Jan', '2008', '15:04:00', '+0000', '(GMT)']
    Line: Message-ID: <200801041502.m04F21Jo007031@nakamura.uits.iupui.edu>
    Words ['Message-ID:', '<200801041502.m04F21Jo007031@nakamura.uits.iupui.edu>']
    Line: Mime-Version: 1.0
    Words ['Mime-Version:', '1.0']
    Line: Content-Transfer-Encoding: 7bit
    Words ['Content-Transfer-Encoding:', '7bit']
    Line: Received: from prod.collab.uhi.ac.uk ([194.35.219.182])
    Words ['Received:', 'from', 'prod.collab.uhi.ac.uk', '([194.35.219.182])']
    Line:           by paploo.uhi.ac.uk (JAMES SMTP Server 2.1.3) with SMTP ID 32
    Words ['by', 'paploo.uhi.ac.uk', '(JAMES', 'SMTP', 'Server', '2.1.3)', 'with', 'SMTP', 'ID', '32']
    Line:           for <source@collab.sakaiproject.org>;
    Words ['for', '<source@collab.sakaiproject.org>;']
    Line:           Fri, 4 Jan 2008 15:03:15 +0000 (GMT)
    Words ['Fri,', '4', 'Jan', '2008', '15:03:15', '+0000', '(GMT)']
    Line: Received: from nakamura.uits.iupui.edu (nakamura.uits.iupui.edu [134.68.220.122])
    Words ['Received:', 'from', 'nakamura.uits.iupui.edu', '(nakamura.uits.iupui.edu', '[134.68.220.122])']
    Line: 	by shmi.uhi.ac.uk (Postfix) with ESMTP id AC2F6236B9
    Words ['by', 'shmi.uhi.ac.uk', '(Postfix)', 'with', 'ESMTP', 'id', 'AC2F6236B9']
    Line: 	for <source@collab.sakaiproject.org>; Fri,  4 Jan 2008 15:03:12 +0000 (GMT)
    Words ['for', '<source@collab.sakaiproject.org>;', 'Fri,', '4', 'Jan', '2008', '15:03:12', '+0000', '(GMT)']
    Line: Received: from nakamura.uits.iupui.edu (localhost [127.0.0.1])
    Words ['Received:', 'from', 'nakamura.uits.iupui.edu', '(localhost', '[127.0.0.1])']
    Line: 	by nakamura.uits.iupui.edu (8.12.11.20060308/8.12.11) with ESMTP id m04F21hn007033
    Words ['by', 'nakamura.uits.iupui.edu', '(8.12.11.20060308/8.12.11)', 'with', 'ESMTP', 'id', 'm04F21hn007033']
    Line: 	for <source@collab.sakaiproject.org>; Fri, 4 Jan 2008 10:02:01 -0500
    Words ['for', '<source@collab.sakaiproject.org>;', 'Fri,', '4', 'Jan', '2008', '10:02:01', '-0500']
    Line: Received: (from apache@localhost)
    Words ['Received:', '(from', 'apache@localhost)']
    Line: 	by nakamura.uits.iupui.edu (8.12.11.20060308/8.12.11/Submit) id m04F21Jo007031
    Words ['by', 'nakamura.uits.iupui.edu', '(8.12.11.20060308/8.12.11/Submit)', 'id', 'm04F21Jo007031']
    Line: 	for source@collab.sakaiproject.org; Fri, 4 Jan 2008 10:02:01 -0500
    Words ['for', 'source@collab.sakaiproject.org;', 'Fri,', '4', 'Jan', '2008', '10:02:01', '-0500']
    Line: Date: Fri, 4 Jan 2008 10:02:01 -0500
    Words ['Date:', 'Fri,', '4', 'Jan', '2008', '10:02:01', '-0500']
    Line: X-Authentication-Warning: nakamura.uits.iupui.edu: apache set sender to antranig@caret.cam.ac.uk using -f
    Words ['X-Authentication-Warning:', 'nakamura.uits.iupui.edu:', 'apache', 'set', 'sender', 'to', 'antranig@caret.cam.ac.uk', 'using', '-f']
    Line: To: source@collab.sakaiproject.org
    Words ['To:', 'source@collab.sakaiproject.org']
    Line: From: antranig@caret.cam.ac.uk
    Words ['From:', 'antranig@caret.cam.ac.uk']
    Line: Subject: [sakai] svn commit: r39756 - in component/branches/SAK-12166/component-api/component/src/java/org/sakaiproject/component: impl impl/spring/support impl/spring/support/dynamic impl/support util
    Words ['Subject:', '[sakai]', 'svn', 'commit:', 'r39756', '-', 'in', 'component/branches/SAK-12166/component-api/component/src/java/org/sakaiproject/component:', 'impl', 'impl/spring/support', 'impl/spring/support/dynamic', 'impl/support', 'util']
    Line: X-Content-Type-Outer-Envelope: text/plain; charset=UTF-8
    Words ['X-Content-Type-Outer-Envelope:', 'text/plain;', 'charset=UTF-8']
    Line: X-Content-Type-Message-Body: text/plain; charset=UTF-8
    Words ['X-Content-Type-Message-Body:', 'text/plain;', 'charset=UTF-8']
    Line: Content-Type: text/plain; charset=UTF-8
    Words ['Content-Type:', 'text/plain;', 'charset=UTF-8']
    Line: X-DSPAM-Result: Innocent
    Words ['X-DSPAM-Result:', 'Innocent']
    Line: X-DSPAM-Processed: Fri Jan  4 10:04:14 2008
    Words ['X-DSPAM-Processed:', 'Fri', 'Jan', '4', '10:04:14', '2008']
    Line: X-DSPAM-Confidence: 0.6932
    Words ['X-DSPAM-Confidence:', '0.6932']
    Line: X-DSPAM-Probability: 0.0000
    Words ['X-DSPAM-Probability:', '0.0000']
    Line: 
    Words []
    Line: Details: http://source.sakaiproject.org/viewsvn/?view=rev&rev=39756
    Words ['Details:', 'http://source.sakaiproject.org/viewsvn/?view=rev&rev=39756']
    Line: 
    Words []
    Line: Author: antranig@caret.cam.ac.uk
    Words ['Author:', 'antranig@caret.cam.ac.uk']
    Line: Date: 2008-01-04 10:01:40 -0500 (Fri, 04 Jan 2008)
    Words ['Date:', '2008-01-04', '10:01:40', '-0500', '(Fri,', '04', 'Jan', '2008)']
    Line: New Revision: 39756
    Words ['New', 'Revision:', '39756']
    Line: 
    Words []
    Line: Added:
    Words ['Added:']
    Line: component/branches/SAK-12166/component-api/component/src/java/org/sakaiproject/component/impl/spring/support/dynamic/
    Words ['component/branches/SAK-12166/component-api/component/src/java/org/sakaiproject/component/impl/spring/support/dynamic/']
    Line: component/branches/SAK-12166/component-api/component/src/java/org/sakaiproject/component/impl/spring/support/dynamic/DynamicComponentManager.java
    Words ['component/branches/SAK-12166/component-api/component/src/java/org/sakaiproject/component/impl/spring/support/dynamic/DynamicComponentManager.java']
    Line: component/branches/SAK-12166/component-api/component/src/java/org/sakaiproject/component/impl/support/
    Words ['component/branches/SAK-12166/component-api/component/src/java/org/sakaiproject/component/impl/support/']
    Line: component/branches/SAK-12166/component-api/component/src/java/org/sakaiproject/component/impl/support/DynamicComponentRecord.java
    Words ['component/branches/SAK-12166/component-api/component/src/java/org/sakaiproject/component/impl/support/DynamicComponentRecord.java']
    Line: component/branches/SAK-12166/component-api/component/src/java/org/sakaiproject/component/impl/support/DynamicJARManager.java
    Words ['component/branches/SAK-12166/component-api/component/src/java/org/sakaiproject/component/impl/support/DynamicJARManager.java']
    Line: component/branches/SAK-12166/component-api/component/src/java/org/sakaiproject/component/impl/support/JARRecord.java
    Words ['component/branches/SAK-12166/component-api/component/src/java/org/sakaiproject/component/impl/support/JARRecord.java']
    Line: component/branches/SAK-12166/component-api/component/src/java/org/sakaiproject/component/util/ByteToCharBase64.java
    Words ['component/branches/SAK-12166/component-api/component/src/java/org/sakaiproject/component/util/ByteToCharBase64.java']
    Line: component/branches/SAK-12166/component-api/component/src/java/org/sakaiproject/component/util/FileUtil.java
    Words ['component/branches/SAK-12166/component-api/component/src/java/org/sakaiproject/component/util/FileUtil.java']
    Line: component/branches/SAK-12166/component-api/component/src/java/org/sakaiproject/component/util/RecordFileIO.java
    Words ['component/branches/SAK-12166/component-api/component/src/java/org/sakaiproject/component/util/RecordFileIO.java']
    Line: component/branches/SAK-12166/component-api/component/src/java/org/sakaiproject/component/util/RecordReader.java
    Words ['component/branches/SAK-12166/component-api/component/src/java/org/sakaiproject/component/util/RecordReader.java']
    Line: component/branches/SAK-12166/component-api/component/src/java/org/sakaiproject/component/util/RecordWriter.java
    Words ['component/branches/SAK-12166/component-api/component/src/java/org/sakaiproject/component/util/RecordWriter.java']
    Line: component/branches/SAK-12166/component-api/component/src/java/org/sakaiproject/component/util/StreamDigestor.java
    Words ['component/branches/SAK-12166/component-api/component/src/java/org/sakaiproject/component/util/StreamDigestor.java']
    Line: Modified:
    Words ['Modified:']
    Line: component/branches/SAK-12166/component-api/component/src/java/org/sakaiproject/component/impl/spring/support/ComponentsLoaderImpl.java
    Words ['component/branches/SAK-12166/component-api/component/src/java/org/sakaiproject/component/impl/spring/support/ComponentsLoaderImpl.java']
    Line: Log:
    Words ['Log:']
    Line: Temporary commit of incomplete work on JAR caching
    Words ['Temporary', 'commit', 'of', 'incomplete', 'work', 'on', 'JAR', 'caching']
    Line: 
    Words []
    Line: ----------------------
    Words ['----------------------']
    Line: This automatic notification message was sent by Sakai Collab (https://collab.sakaiproject.org/portal) from the Source site.
    Words ['This', 'automatic', 'notification', 'message', 'was', 'sent', 'by', 'Sakai', 'Collab', '(https://collab.sakaiproject.org/portal)', 'from', 'the', 'Source', 'site.']
    Line: You can modify how you receive notifications at My Workspace > Preferences.
    Words ['You', 'can', 'modify', 'how', 'you', 'receive', 'notifications', 'at', 'My', 'Workspace', '>', 'Preferences.']
    Line: 
    Words []
    Line: 
    Words []
    Line: 
    Words []
    Line: From gopal.ramasammycook@gmail.com Fri Jan  4 09:05:31 2008
    Words ['From', 'gopal.ramasammycook@gmail.com', 'Fri', 'Jan', '4', '09:05:31', '2008']
    Line: Return-Path: <postmaster@collab.sakaiproject.org>
    Words ['Return-Path:', '<postmaster@collab.sakaiproject.org>']
    Line: Received: from murder (mail.umich.edu [141.211.14.90])
    Words ['Received:', 'from', 'murder', '(mail.umich.edu', '[141.211.14.90])']
    Line: 	 by frankenstein.mail.umich.edu (Cyrus v2.3.8) with LMTPA;
    Words ['by', 'frankenstein.mail.umich.edu', '(Cyrus', 'v2.3.8)', 'with', 'LMTPA;']
    Line: 	 Fri, 04 Jan 2008 09:05:31 -0500
    Words ['Fri,', '04', 'Jan', '2008', '09:05:31', '-0500']
    Line: X-Sieve: CMU Sieve 2.3
    Words ['X-Sieve:', 'CMU', 'Sieve', '2.3']
    Line: Received: from murder ([unix socket])
    Words ['Received:', 'from', 'murder', '([unix', 'socket])']
    Line: 	 by mail.umich.edu (Cyrus v2.2.12) with LMTPA;
    Words ['by', 'mail.umich.edu', '(Cyrus', 'v2.2.12)', 'with', 'LMTPA;']
    Line: 	 Fri, 04 Jan 2008 09:05:31 -0500
    Words ['Fri,', '04', 'Jan', '2008', '09:05:31', '-0500']
    Line: Received: from guys.mr.itd.umich.edu (guys.mr.itd.umich.edu [141.211.14.76])
    Words ['Received:', 'from', 'guys.mr.itd.umich.edu', '(guys.mr.itd.umich.edu', '[141.211.14.76])']
    Line: 	by flawless.mail.umich.edu () with ESMTP id m04E5U3C029277;
    Words ['by', 'flawless.mail.umich.edu', '()', 'with', 'ESMTP', 'id', 'm04E5U3C029277;']
    Line: 	Fri, 4 Jan 2008 09:05:30 -0500
    Words ['Fri,', '4', 'Jan', '2008', '09:05:30', '-0500']
    Line: Received: FROM paploo.uhi.ac.uk (app1.prod.collab.uhi.ac.uk [194.35.219.184])
    Words ['Received:', 'FROM', 'paploo.uhi.ac.uk', '(app1.prod.collab.uhi.ac.uk', '[194.35.219.184])']
    Line: 	BY guys.mr.itd.umich.edu ID 477E3D23.EE2E7.5237 ;
    Words ['BY', 'guys.mr.itd.umich.edu', 'ID', '477E3D23.EE2E7.5237', ';']
    Line: 	 4 Jan 2008 09:05:26 -0500
    Words ['4', 'Jan', '2008', '09:05:26', '-0500']
    Line: Received: from paploo.uhi.ac.uk (localhost [127.0.0.1])
    Words ['Received:', 'from', 'paploo.uhi.ac.uk', '(localhost', '[127.0.0.1])']
    Line: 	by paploo.uhi.ac.uk (Postfix) with ESMTP id 33C7856DC0;
    Words ['by', 'paploo.uhi.ac.uk', '(Postfix)', 'with', 'ESMTP', 'id', '33C7856DC0;']
    Line: 	Fri,  4 Jan 2008 14:05:26 +0000 (GMT)
    Words ['Fri,', '4', 'Jan', '2008', '14:05:26', '+0000', '(GMT)']
    Line: Message-ID: <200801041403.m04E3psW006926@nakamura.uits.iupui.edu>
    Words ['Message-ID:', '<200801041403.m04E3psW006926@nakamura.uits.iupui.edu>']
    Line: Mime-Version: 1.0
    Words ['Mime-Version:', '1.0']
    Line: Content-Transfer-Encoding: 7bit
    Words ['Content-Transfer-Encoding:', '7bit']
    Line: Received: from prod.collab.uhi.ac.uk ([194.35.219.182])
    Words ['Received:', 'from', 'prod.collab.uhi.ac.uk', '([194.35.219.182])']
    Line:           by paploo.uhi.ac.uk (JAMES SMTP Server 2.1.3) with SMTP ID 575
    Words ['by', 'paploo.uhi.ac.uk', '(JAMES', 'SMTP', 'Server', '2.1.3)', 'with', 'SMTP', 'ID', '575']
    Line:           for <source@collab.sakaiproject.org>;
    Words ['for', '<source@collab.sakaiproject.org>;']
    Line:           Fri, 4 Jan 2008 14:05:04 +0000 (GMT)
    Words ['Fri,', '4', 'Jan', '2008', '14:05:04', '+0000', '(GMT)']
    Line: Received: from nakamura.uits.iupui.edu (nakamura.uits.iupui.edu [134.68.220.122])
    Words ['Received:', 'from', 'nakamura.uits.iupui.edu', '(nakamura.uits.iupui.edu', '[134.68.220.122])']
    Line: 	by shmi.uhi.ac.uk (Postfix) with ESMTP id 3C0261D617
    Words ['by', 'shmi.uhi.ac.uk', '(Postfix)', 'with', 'ESMTP', 'id', '3C0261D617']
    Line: 	for <source@collab.sakaiproject.org>; Fri,  4 Jan 2008 14:05:03 +0000 (GMT)
    Words ['for', '<source@collab.sakaiproject.org>;', 'Fri,', '4', 'Jan', '2008', '14:05:03', '+0000', '(GMT)']
    Line: Received: from nakamura.uits.iupui.edu (localhost [127.0.0.1])
    Words ['Received:', 'from', 'nakamura.uits.iupui.edu', '(localhost', '[127.0.0.1])']
    Line: 	by nakamura.uits.iupui.edu (8.12.11.20060308/8.12.11) with ESMTP id m04E3pQS006928
    Words ['by', 'nakamura.uits.iupui.edu', '(8.12.11.20060308/8.12.11)', 'with', 'ESMTP', 'id', 'm04E3pQS006928']
    Line: 	for <source@collab.sakaiproject.org>; Fri, 4 Jan 2008 09:03:52 -0500
    Words ['for', '<source@collab.sakaiproject.org>;', 'Fri,', '4', 'Jan', '2008', '09:03:52', '-0500']
    Line: Received: (from apache@localhost)
    Words ['Received:', '(from', 'apache@localhost)']
    Line: 	by nakamura.uits.iupui.edu (8.12.11.20060308/8.12.11/Submit) id m04E3psW006926
    Words ['by', 'nakamura.uits.iupui.edu', '(8.12.11.20060308/8.12.11/Submit)', 'id', 'm04E3psW006926']
    Line: 	for source@collab.sakaiproject.org; Fri, 4 Jan 2008 09:03:51 -0500
    Words ['for', 'source@collab.sakaiproject.org;', 'Fri,', '4', 'Jan', '2008', '09:03:51', '-0500']
    Line: Date: Fri, 4 Jan 2008 09:03:51 -0500
    Words ['Date:', 'Fri,', '4', 'Jan', '2008', '09:03:51', '-0500']
    Line: X-Authentication-Warning: nakamura.uits.iupui.edu: apache set sender to gopal.ramasammycook@gmail.com using -f
    Words ['X-Authentication-Warning:', 'nakamura.uits.iupui.edu:', 'apache', 'set', 'sender', 'to', 'gopal.ramasammycook@gmail.com', 'using', '-f']
    Line: To: source@collab.sakaiproject.org
    Words ['To:', 'source@collab.sakaiproject.org']
    Line: From: gopal.ramasammycook@gmail.com
    Words ['From:', 'gopal.ramasammycook@gmail.com']
    Line: Subject: [sakai] svn commit: r39755 - in sam/branches/SAK-12065: samigo-api/src/java/org/sakaiproject/tool/assessment/shared/api/grading samigo-app/src/java/org/sakaiproject/tool/assessment/ui/bean/evaluation samigo-app/src/java/org/sakaiproject/tool/assessment/ui/listener/evaluation samigo-services/src/java/org/sakaiproject/tool/assessment/facade samigo-services/src/java/org/sakaiproject/tool/assessment/integration/helper/ifc samigo-services/src/java/org/sakaiproject/tool/assessment/integration/helper/integrated samigo-services/src/java/org/sakaiproject/tool/assessment/integration/helper/standalone samigo-services/src/java/org/sakaiproject/tool/assessment/shared/impl/grading
    Words ['Subject:', '[sakai]', 'svn', 'commit:', 'r39755', '-', 'in', 'sam/branches/SAK-12065:', 'samigo-api/src/java/org/sakaiproject/tool/assessment/shared/api/grading', 'samigo-app/src/java/org/sakaiproject/tool/assessment/ui/bean/evaluation', 'samigo-app/src/java/org/sakaiproject/tool/assessment/ui/listener/evaluation', 'samigo-services/src/java/org/sakaiproject/tool/assessment/facade', 'samigo-services/src/java/org/sakaiproject/tool/assessment/integration/helper/ifc', 'samigo-services/src/java/org/sakaiproject/tool/assessment/integration/helper/integrated', 'samigo-services/src/java/org/sakaiproject/tool/assessment/integration/helper/standalone', 'samigo-services/src/java/org/sakaiproject/tool/assessment/shared/impl/grading']
    Line: X-Content-Type-Outer-Envelope: text/plain; charset=UTF-8
    Words ['X-Content-Type-Outer-Envelope:', 'text/plain;', 'charset=UTF-8']
    Line: X-Content-Type-Message-Body: text/plain; charset=UTF-8
    Words ['X-Content-Type-Message-Body:', 'text/plain;', 'charset=UTF-8']
    Line: Content-Type: text/plain; charset=UTF-8
    Words ['Content-Type:', 'text/plain;', 'charset=UTF-8']
    Line: X-DSPAM-Result: Innocent
    Words ['X-DSPAM-Result:', 'Innocent']
    Line: X-DSPAM-Processed: Fri Jan  4 09:05:31 2008
    Words ['X-DSPAM-Processed:', 'Fri', 'Jan', '4', '09:05:31', '2008']
    Line: X-DSPAM-Confidence: 0.7558
    Words ['X-DSPAM-Confidence:', '0.7558']
    Line: X-DSPAM-Probability: 0.0000
    Words ['X-DSPAM-Probability:', '0.0000']
    Line: 
    Words []
    Line: Details: http://source.sakaiproject.org/viewsvn/?view=rev&rev=39755
    Words ['Details:', 'http://source.sakaiproject.org/viewsvn/?view=rev&rev=39755']
    Line: 
    Words []
    Line: Author: gopal.ramasammycook@gmail.com
    Words ['Author:', 'gopal.ramasammycook@gmail.com']
    Line: Date: 2008-01-04 09:02:54 -0500 (Fri, 04 Jan 2008)
    Words ['Date:', '2008-01-04', '09:02:54', '-0500', '(Fri,', '04', 'Jan', '2008)']
    Line: New Revision: 39755
    Words ['New', 'Revision:', '39755']
    Line: 
    Words []
    Line: Modified:
    Words ['Modified:']
    Line: sam/branches/SAK-12065/samigo-api/src/java/org/sakaiproject/tool/assessment/shared/api/grading/GradingSectionAwareServiceAPI.java
    Words ['sam/branches/SAK-12065/samigo-api/src/java/org/sakaiproject/tool/assessment/shared/api/grading/GradingSectionAwareServiceAPI.java']
    Line: sam/branches/SAK-12065/samigo-app/src/java/org/sakaiproject/tool/assessment/ui/bean/evaluation/QuestionScoresBean.java
    Words ['sam/branches/SAK-12065/samigo-app/src/java/org/sakaiproject/tool/assessment/ui/bean/evaluation/QuestionScoresBean.java']
    Line: sam/branches/SAK-12065/samigo-app/src/java/org/sakaiproject/tool/assessment/ui/bean/evaluation/SubmissionStatusBean.java
    Words ['sam/branches/SAK-12065/samigo-app/src/java/org/sakaiproject/tool/assessment/ui/bean/evaluation/SubmissionStatusBean.java']
    Line: sam/branches/SAK-12065/samigo-app/src/java/org/sakaiproject/tool/assessment/ui/bean/evaluation/TotalScoresBean.java
    Words ['sam/branches/SAK-12065/samigo-app/src/java/org/sakaiproject/tool/assessment/ui/bean/evaluation/TotalScoresBean.java']
    Line: sam/branches/SAK-12065/samigo-app/src/java/org/sakaiproject/tool/assessment/ui/listener/evaluation/SubmissionStatusListener.java
    Words ['sam/branches/SAK-12065/samigo-app/src/java/org/sakaiproject/tool/assessment/ui/listener/evaluation/SubmissionStatusListener.java']
    Line: sam/branches/SAK-12065/samigo-services/src/java/org/sakaiproject/tool/assessment/facade/PublishedAssessmentFacadeQueries.java
    Words ['sam/branches/SAK-12065/samigo-services/src/java/org/sakaiproject/tool/assessment/facade/PublishedAssessmentFacadeQueries.java']
    Line: sam/branches/SAK-12065/samigo-services/src/java/org/sakaiproject/tool/assessment/facade/PublishedAssessmentFacadeQueriesAPI.java
    Words ['sam/branches/SAK-12065/samigo-services/src/java/org/sakaiproject/tool/assessment/facade/PublishedAssessmentFacadeQueriesAPI.java']
    Line: sam/branches/SAK-12065/samigo-services/src/java/org/sakaiproject/tool/assessment/integration/helper/ifc/SectionAwareServiceHelper.java
    Words ['sam/branches/SAK-12065/samigo-services/src/java/org/sakaiproject/tool/assessment/integration/helper/ifc/SectionAwareServiceHelper.java']
    Line: sam/branches/SAK-12065/samigo-services/src/java/org/sakaiproject/tool/assessment/integration/helper/integrated/SectionAwareServiceHelperImpl.java
    Words ['sam/branches/SAK-12065/samigo-services/src/java/org/sakaiproject/tool/assessment/integration/helper/integrated/SectionAwareServiceHelperImpl.java']
    Line: sam/branches/SAK-12065/samigo-services/src/java/org/sakaiproject/tool/assessment/integration/helper/standalone/SectionAwareServiceHelperImpl.java
    Words ['sam/branches/SAK-12065/samigo-services/src/java/org/sakaiproject/tool/assessment/integration/helper/standalone/SectionAwareServiceHelperImpl.java']
    Line: sam/branches/SAK-12065/samigo-services/src/java/org/sakaiproject/tool/assessment/shared/impl/grading/GradingSectionAwareServiceImpl.java
    Words ['sam/branches/SAK-12065/samigo-services/src/java/org/sakaiproject/tool/assessment/shared/impl/grading/GradingSectionAwareServiceImpl.java']
    Line: Log:
    Words ['Log:']
    Line: SAK-12065 Gopal - Samigo Group Release. SubmissionStatus/TotalScores/Questions View filter.
    Words ['SAK-12065', 'Gopal', '-', 'Samigo', 'Group', 'Release.', 'SubmissionStatus/TotalScores/Questions', 'View', 'filter.']
    Line: 
    Words []
    Line: ----------------------
    Words ['----------------------']
    Line: This automatic notification message was sent by Sakai Collab (https://collab.sakaiproject.org/portal) from the Source site.
    Words ['This', 'automatic', 'notification', 'message', 'was', 'sent', 'by', 'Sakai', 'Collab', '(https://collab.sakaiproject.org/portal)', 'from', 'the', 'Source', 'site.']
    Line: You can modify how you receive notifications at My Workspace > Preferences.
    Words ['You', 'can', 'modify', 'how', 'you', 'receive', 'notifications', 'at', 'My', 'Workspace', '>', 'Preferences.']
    Line: 
    Words []
    Line: 
    Words []
    Line: 
    Words []
    Line: From david.horwitz@uct.ac.za Fri Jan  4 07:02:32 2008
    Words ['From', 'david.horwitz@uct.ac.za', 'Fri', 'Jan', '4', '07:02:32', '2008']
    Line: Return-Path: <postmaster@collab.sakaiproject.org>
    Words ['Return-Path:', '<postmaster@collab.sakaiproject.org>']
    Line: Received: from murder (mail.umich.edu [141.211.14.39])
    Words ['Received:', 'from', 'murder', '(mail.umich.edu', '[141.211.14.39])']
    Line: 	 by frankenstein.mail.umich.edu (Cyrus v2.3.8) with LMTPA;
    Words ['by', 'frankenstein.mail.umich.edu', '(Cyrus', 'v2.3.8)', 'with', 'LMTPA;']
    Line: 	 Fri, 04 Jan 2008 07:02:32 -0500
    Words ['Fri,', '04', 'Jan', '2008', '07:02:32', '-0500']
    Line: X-Sieve: CMU Sieve 2.3
    Words ['X-Sieve:', 'CMU', 'Sieve', '2.3']
    Line: Received: from murder ([unix socket])
    Words ['Received:', 'from', 'murder', '([unix', 'socket])']
    Line: 	 by mail.umich.edu (Cyrus v2.2.12) with LMTPA;
    Words ['by', 'mail.umich.edu', '(Cyrus', 'v2.2.12)', 'with', 'LMTPA;']
    Line: 	 Fri, 04 Jan 2008 07:02:32 -0500
    Words ['Fri,', '04', 'Jan', '2008', '07:02:32', '-0500']
    Line: Received: from guys.mr.itd.umich.edu (guys.mr.itd.umich.edu [141.211.14.76])
    Words ['Received:', 'from', 'guys.mr.itd.umich.edu', '(guys.mr.itd.umich.edu', '[141.211.14.76])']
    Line: 	by faithful.mail.umich.edu () with ESMTP id m04C2VN7026678;
    Words ['by', 'faithful.mail.umich.edu', '()', 'with', 'ESMTP', 'id', 'm04C2VN7026678;']
    Line: 	Fri, 4 Jan 2008 07:02:31 -0500
    Words ['Fri,', '4', 'Jan', '2008', '07:02:31', '-0500']
    Line: Received: FROM paploo.uhi.ac.uk (app1.prod.collab.uhi.ac.uk [194.35.219.184])
    Words ['Received:', 'FROM', 'paploo.uhi.ac.uk', '(app1.prod.collab.uhi.ac.uk', '[194.35.219.184])']
    Line: 	BY guys.mr.itd.umich.edu ID 477E2050.C2599.3263 ;
    Words ['BY', 'guys.mr.itd.umich.edu', 'ID', '477E2050.C2599.3263', ';']
    Line: 	 4 Jan 2008 07:02:27 -0500
    Words ['4', 'Jan', '2008', '07:02:27', '-0500']
    Line: Received: from paploo.uhi.ac.uk (localhost [127.0.0.1])
    Words ['Received:', 'from', 'paploo.uhi.ac.uk', '(localhost', '[127.0.0.1])']
    Line: 	by paploo.uhi.ac.uk (Postfix) with ESMTP id 6497FBA906;
    Words ['by', 'paploo.uhi.ac.uk', '(Postfix)', 'with', 'ESMTP', 'id', '6497FBA906;']
    Line: 	Fri,  4 Jan 2008 12:02:11 +0000 (GMT)
    Words ['Fri,', '4', 'Jan', '2008', '12:02:11', '+0000', '(GMT)']
    Line: Message-ID: <200801041200.m04C0gfK006793@nakamura.uits.iupui.edu>
    Words ['Message-ID:', '<200801041200.m04C0gfK006793@nakamura.uits.iupui.edu>']
    Line: Mime-Version: 1.0
    Words ['Mime-Version:', '1.0']
    Line: Content-Transfer-Encoding: 7bit
    Words ['Content-Transfer-Encoding:', '7bit']
    Line: Received: from prod.collab.uhi.ac.uk ([194.35.219.182])
    Words ['Received:', 'from', 'prod.collab.uhi.ac.uk', '([194.35.219.182])']
    Line:           by paploo.uhi.ac.uk (JAMES SMTP Server 2.1.3) with SMTP ID 611
    Words ['by', 'paploo.uhi.ac.uk', '(JAMES', 'SMTP', 'Server', '2.1.3)', 'with', 'SMTP', 'ID', '611']
    Line:           for <source@collab.sakaiproject.org>;
    Words ['for', '<source@collab.sakaiproject.org>;']
    Line:           Fri, 4 Jan 2008 12:01:53 +0000 (GMT)
    Words ['Fri,', '4', 'Jan', '2008', '12:01:53', '+0000', '(GMT)']
    Line: Received: from nakamura.uits.iupui.edu (nakamura.uits.iupui.edu [134.68.220.122])
    Words ['Received:', 'from', 'nakamura.uits.iupui.edu', '(nakamura.uits.iupui.edu', '[134.68.220.122])']
    Line: 	by shmi.uhi.ac.uk (Postfix) with ESMTP id 5296342D3C
    Words ['by', 'shmi.uhi.ac.uk', '(Postfix)', 'with', 'ESMTP', 'id', '5296342D3C']
    Line: 	for <source@collab.sakaiproject.org>; Fri,  4 Jan 2008 12:01:53 +0000 (GMT)
    Words ['for', '<source@collab.sakaiproject.org>;', 'Fri,', '4', 'Jan', '2008', '12:01:53', '+0000', '(GMT)']
    Line: Received: from nakamura.uits.iupui.edu (localhost [127.0.0.1])
    Words ['Received:', 'from', 'nakamura.uits.iupui.edu', '(localhost', '[127.0.0.1])']
    Line: 	by nakamura.uits.iupui.edu (8.12.11.20060308/8.12.11) with ESMTP id m04C0gnm006795
    Words ['by', 'nakamura.uits.iupui.edu', '(8.12.11.20060308/8.12.11)', 'with', 'ESMTP', 'id', 'm04C0gnm006795']
    Line: 	for <source@collab.sakaiproject.org>; Fri, 4 Jan 2008 07:00:42 -0500
    Words ['for', '<source@collab.sakaiproject.org>;', 'Fri,', '4', 'Jan', '2008', '07:00:42', '-0500']
    Line: Received: (from apache@localhost)
    Words ['Received:', '(from', 'apache@localhost)']
    Line: 	by nakamura.uits.iupui.edu (8.12.11.20060308/8.12.11/Submit) id m04C0gfK006793
    Words ['by', 'nakamura.uits.iupui.edu', '(8.12.11.20060308/8.12.11/Submit)', 'id', 'm04C0gfK006793']
    Line: 	for source@collab.sakaiproject.org; Fri, 4 Jan 2008 07:00:42 -0500
    Words ['for', 'source@collab.sakaiproject.org;', 'Fri,', '4', 'Jan', '2008', '07:00:42', '-0500']
    Line: Date: Fri, 4 Jan 2008 07:00:42 -0500
    Words ['Date:', 'Fri,', '4', 'Jan', '2008', '07:00:42', '-0500']
    Line: X-Authentication-Warning: nakamura.uits.iupui.edu: apache set sender to david.horwitz@uct.ac.za using -f
    Words ['X-Authentication-Warning:', 'nakamura.uits.iupui.edu:', 'apache', 'set', 'sender', 'to', 'david.horwitz@uct.ac.za', 'using', '-f']
    Line: To: source@collab.sakaiproject.org
    Words ['To:', 'source@collab.sakaiproject.org']
    Line: From: david.horwitz@uct.ac.za
    Words ['From:', 'david.horwitz@uct.ac.za']
    Line: Subject: [sakai] svn commit: r39754 - in polls/branches/sakai_2-5-x: . tool tool/src/java/org/sakaiproject/poll/tool tool/src/java/org/sakaiproject/poll/tool/evolvers tool/src/webapp/WEB-INF
    Words ['Subject:', '[sakai]', 'svn', 'commit:', 'r39754', '-', 'in', 'polls/branches/sakai_2-5-x:', '.', 'tool', 'tool/src/java/org/sakaiproject/poll/tool', 'tool/src/java/org/sakaiproject/poll/tool/evolvers', 'tool/src/webapp/WEB-INF']
    Line: X-Content-Type-Outer-Envelope: text/plain; charset=UTF-8
    Words ['X-Content-Type-Outer-Envelope:', 'text/plain;', 'charset=UTF-8']
    Line: X-Content-Type-Message-Body: text/plain; charset=UTF-8
    Words ['X-Content-Type-Message-Body:', 'text/plain;', 'charset=UTF-8']
    Line: Content-Type: text/plain; charset=UTF-8
    Words ['Content-Type:', 'text/plain;', 'charset=UTF-8']
    Line: X-DSPAM-Result: Innocent
    Words ['X-DSPAM-Result:', 'Innocent']
    Line: X-DSPAM-Processed: Fri Jan  4 07:02:32 2008
    Words ['X-DSPAM-Processed:', 'Fri', 'Jan', '4', '07:02:32', '2008']
    Line: X-DSPAM-Confidence: 0.6526
    Words ['X-DSPAM-Confidence:', '0.6526']
    Line: X-DSPAM-Probability: 0.0000
    Words ['X-DSPAM-Probability:', '0.0000']
    Line: 
    Words []
    Line: Details: http://source.sakaiproject.org/viewsvn/?view=rev&rev=39754
    Words ['Details:', 'http://source.sakaiproject.org/viewsvn/?view=rev&rev=39754']
    Line: 
    Words []
    Line: Author: david.horwitz@uct.ac.za
    Words ['Author:', 'david.horwitz@uct.ac.za']
    Line: Date: 2008-01-04 07:00:10 -0500 (Fri, 04 Jan 2008)
    Words ['Date:', '2008-01-04', '07:00:10', '-0500', '(Fri,', '04', 'Jan', '2008)']
    Line: New Revision: 39754
    Words ['New', 'Revision:', '39754']
    Line: 
    Words []
    Line: Added:
    Words ['Added:']
    Line: polls/branches/sakai_2-5-x/tool/src/java/org/sakaiproject/poll/tool/evolvers/
    Words ['polls/branches/sakai_2-5-x/tool/src/java/org/sakaiproject/poll/tool/evolvers/']
    Line: polls/branches/sakai_2-5-x/tool/src/java/org/sakaiproject/poll/tool/evolvers/SakaiFCKTextEvolver.java
    Words ['polls/branches/sakai_2-5-x/tool/src/java/org/sakaiproject/poll/tool/evolvers/SakaiFCKTextEvolver.java']
    Line: Removed:
    Words ['Removed:']
    Line: polls/branches/sakai_2-5-x/tool/src/java/org/sakaiproject/poll/tool/evolvers/SakaiFCKTextEvolver.java
    Words ['polls/branches/sakai_2-5-x/tool/src/java/org/sakaiproject/poll/tool/evolvers/SakaiFCKTextEvolver.java']
    Line: Modified:
    Words ['Modified:']
    Line: polls/branches/sakai_2-5-x/.classpath
    Words ['polls/branches/sakai_2-5-x/.classpath']
    Line: polls/branches/sakai_2-5-x/tool/pom.xml
    Words ['polls/branches/sakai_2-5-x/tool/pom.xml']
    Line: polls/branches/sakai_2-5-x/tool/src/webapp/WEB-INF/requestContext.xml
    Words ['polls/branches/sakai_2-5-x/tool/src/webapp/WEB-INF/requestContext.xml']
    Line: Log:
    Words ['Log:']
    Line: svn log -r39753 https://source.sakaiproject.org/svn/polls/trunk
    Words ['svn', 'log', '-r39753', 'https://source.sakaiproject.org/svn/polls/trunk']
    Line: ------------------------------------------------------------------------
    Words ['------------------------------------------------------------------------']
    Line: r39753 | david.horwitz@uct.ac.za | 2008-01-04 13:05:51 +0200 (Fri, 04 Jan 2008) | 1 line
    Words ['r39753', '|', 'david.horwitz@uct.ac.za', '|', '2008-01-04', '13:05:51', '+0200', '(Fri,', '04', 'Jan', '2008)', '|', '1', 'line']
    Line: 
    Words []
    Line: SAK-12228 implmented workaround sugested by AB - needs to be tested against a trunk build
    Words ['SAK-12228', 'implmented', 'workaround', 'sugested', 'by', 'AB', '-', 'needs', 'to', 'be', 'tested', 'against', 'a', 'trunk', 'build']
    Line: ------------------------------------------------------------------------
    Words ['------------------------------------------------------------------------']
    Line: dhorwitz@david-horwitz-6:~/branchManagemnt/sakai_2-5-x> svn merge -c39753 https://source.sakaiproject.org/svn/polls/trunk polls/
    Words ['dhorwitz@david-horwitz-6:~/branchManagemnt/sakai_2-5-x>', 'svn', 'merge', '-c39753', 'https://source.sakaiproject.org/svn/polls/trunk', 'polls/']
    Line: U    polls/.classpath
    Words ['U', 'polls/.classpath']
    Line: A    polls/tool/src/java/org/sakaiproject/poll/tool/evolvers
    Words ['A', 'polls/tool/src/java/org/sakaiproject/poll/tool/evolvers']
    Line: A    polls/tool/src/java/org/sakaiproject/poll/tool/evolvers/SakaiFCKTextEvolver.java
    Words ['A', 'polls/tool/src/java/org/sakaiproject/poll/tool/evolvers/SakaiFCKTextEvolver.java']
    Line: C    polls/tool/src/webapp/WEB-INF/requestContext.xml
    Words ['C', 'polls/tool/src/webapp/WEB-INF/requestContext.xml']
    Line: U    polls/tool/pom.xml
    Words ['U', 'polls/tool/pom.xml']
    Line: 
    Words []
    Line: dhorwitz@david-horwitz-6:~/branchManagemnt/sakai_2-5-x> svn resolved polls/tool/src/webapp/WEB-INF/requestContext.xml
    Words ['dhorwitz@david-horwitz-6:~/branchManagemnt/sakai_2-5-x>', 'svn', 'resolved', 'polls/tool/src/webapp/WEB-INF/requestContext.xml']
    Line: Resolved conflicted state of 'polls/tool/src/webapp/WEB-INF/requestContext.xml
    Words ['Resolved', 'conflicted', 'state', 'of', "'polls/tool/src/webapp/WEB-INF/requestContext.xml"]
    Line: 
    Words []
    Line: 
    Words []
    Line: ----------------------
    Words ['----------------------']
    Line: This automatic notification message was sent by Sakai Collab (https://collab.sakaiproject.org/portal) from the Source site.
    Words ['This', 'automatic', 'notification', 'message', 'was', 'sent', 'by', 'Sakai', 'Collab', '(https://collab.sakaiproject.org/portal)', 'from', 'the', 'Source', 'site.']
    Line: You can modify how you receive notifications at My Workspace > Preferences.
    Words ['You', 'can', 'modify', 'how', 'you', 'receive', 'notifications', 'at', 'My', 'Workspace', '>', 'Preferences.']
    Line: 
    Words []
    Line: 
    Words []
    Line: 
    Words []
    Line: From david.horwitz@uct.ac.za Fri Jan  4 06:08:27 2008
    Words ['From', 'david.horwitz@uct.ac.za', 'Fri', 'Jan', '4', '06:08:27', '2008']
    Line: Return-Path: <postmaster@collab.sakaiproject.org>
    Words ['Return-Path:', '<postmaster@collab.sakaiproject.org>']
    Line: Received: from murder (mail.umich.edu [141.211.14.98])
    Words ['Received:', 'from', 'murder', '(mail.umich.edu', '[141.211.14.98])']
    Line: 	 by frankenstein.mail.umich.edu (Cyrus v2.3.8) with LMTPA;
    Words ['by', 'frankenstein.mail.umich.edu', '(Cyrus', 'v2.3.8)', 'with', 'LMTPA;']
    Line: 	 Fri, 04 Jan 2008 06:08:27 -0500
    Words ['Fri,', '04', 'Jan', '2008', '06:08:27', '-0500']
    Line: X-Sieve: CMU Sieve 2.3
    Words ['X-Sieve:', 'CMU', 'Sieve', '2.3']
    Line: Received: from murder ([unix socket])
    Words ['Received:', 'from', 'murder', '([unix', 'socket])']
    Line: 	 by mail.umich.edu (Cyrus v2.2.12) with LMTPA;
    Words ['by', 'mail.umich.edu', '(Cyrus', 'v2.2.12)', 'with', 'LMTPA;']
    Line: 	 Fri, 04 Jan 2008 06:08:27 -0500
    Words ['Fri,', '04', 'Jan', '2008', '06:08:27', '-0500']
    Line: Received: from firestarter.mr.itd.umich.edu (firestarter.mr.itd.umich.edu [141.211.14.83])
    Words ['Received:', 'from', 'firestarter.mr.itd.umich.edu', '(firestarter.mr.itd.umich.edu', '[141.211.14.83])']
    Line: 	by casino.mail.umich.edu () with ESMTP id m04B8Qw9001368;
    Words ['by', 'casino.mail.umich.edu', '()', 'with', 'ESMTP', 'id', 'm04B8Qw9001368;']
    Line: 	Fri, 4 Jan 2008 06:08:26 -0500
    Words ['Fri,', '4', 'Jan', '2008', '06:08:26', '-0500']
    Line: Received: FROM paploo.uhi.ac.uk (app1.prod.collab.uhi.ac.uk [194.35.219.184])
    Words ['Received:', 'FROM', 'paploo.uhi.ac.uk', '(app1.prod.collab.uhi.ac.uk', '[194.35.219.184])']
    Line: 	BY firestarter.mr.itd.umich.edu ID 477E13A5.30FC0.24054 ;
    Words ['BY', 'firestarter.mr.itd.umich.edu', 'ID', '477E13A5.30FC0.24054', ';']
    Line: 	 4 Jan 2008 06:08:23 -0500
    Words ['4', 'Jan', '2008', '06:08:23', '-0500']
    Line: Received: from paploo.uhi.ac.uk (localhost [127.0.0.1])
    Words ['Received:', 'from', 'paploo.uhi.ac.uk', '(localhost', '[127.0.0.1])']
    Line: 	by paploo.uhi.ac.uk (Postfix) with ESMTP id 784A476D7B;
    Words ['by', 'paploo.uhi.ac.uk', '(Postfix)', 'with', 'ESMTP', 'id', '784A476D7B;']
    Line: 	Fri,  4 Jan 2008 11:08:12 +0000 (GMT)
    Words ['Fri,', '4', 'Jan', '2008', '11:08:12', '+0000', '(GMT)']
    Line: Message-ID: <200801041106.m04B6lK3006677@nakamura.uits.iupui.edu>
    Words ['Message-ID:', '<200801041106.m04B6lK3006677@nakamura.uits.iupui.edu>']
    Line: Mime-Version: 1.0
    Words ['Mime-Version:', '1.0']
    Line: Content-Transfer-Encoding: 7bit
    Words ['Content-Transfer-Encoding:', '7bit']
    Line: Received: from prod.collab.uhi.ac.uk ([194.35.219.182])
    Words ['Received:', 'from', 'prod.collab.uhi.ac.uk', '([194.35.219.182])']
    Line:           by paploo.uhi.ac.uk (JAMES SMTP Server 2.1.3) with SMTP ID 585
    Words ['by', 'paploo.uhi.ac.uk', '(JAMES', 'SMTP', 'Server', '2.1.3)', 'with', 'SMTP', 'ID', '585']
    Line:           for <source@collab.sakaiproject.org>;
    Words ['for', '<source@collab.sakaiproject.org>;']
    Line:           Fri, 4 Jan 2008 11:07:56 +0000 (GMT)
    Words ['Fri,', '4', 'Jan', '2008', '11:07:56', '+0000', '(GMT)']
    Line: Received: from nakamura.uits.iupui.edu (nakamura.uits.iupui.edu [134.68.220.122])
    Words ['Received:', 'from', 'nakamura.uits.iupui.edu', '(nakamura.uits.iupui.edu', '[134.68.220.122])']
    Line: 	by shmi.uhi.ac.uk (Postfix) with ESMTP id 1CACC42D0C
    Words ['by', 'shmi.uhi.ac.uk', '(Postfix)', 'with', 'ESMTP', 'id', '1CACC42D0C']
    Line: 	for <source@collab.sakaiproject.org>; Fri,  4 Jan 2008 11:07:58 +0000 (GMT)
    Words ['for', '<source@collab.sakaiproject.org>;', 'Fri,', '4', 'Jan', '2008', '11:07:58', '+0000', '(GMT)']
    Line: Received: from nakamura.uits.iupui.edu (localhost [127.0.0.1])
    Words ['Received:', 'from', 'nakamura.uits.iupui.edu', '(localhost', '[127.0.0.1])']
    Line: 	by nakamura.uits.iupui.edu (8.12.11.20060308/8.12.11) with ESMTP id m04B6lWM006679
    Words ['by', 'nakamura.uits.iupui.edu', '(8.12.11.20060308/8.12.11)', 'with', 'ESMTP', 'id', 'm04B6lWM006679']
    Line: 	for <source@collab.sakaiproject.org>; Fri, 4 Jan 2008 06:06:47 -0500
    Words ['for', '<source@collab.sakaiproject.org>;', 'Fri,', '4', 'Jan', '2008', '06:06:47', '-0500']
    Line: Received: (from apache@localhost)
    Words ['Received:', '(from', 'apache@localhost)']
    Line: 	by nakamura.uits.iupui.edu (8.12.11.20060308/8.12.11/Submit) id m04B6lK3006677
    Words ['by', 'nakamura.uits.iupui.edu', '(8.12.11.20060308/8.12.11/Submit)', 'id', 'm04B6lK3006677']
    Line: 	for source@collab.sakaiproject.org; Fri, 4 Jan 2008 06:06:47 -0500
    Words ['for', 'source@collab.sakaiproject.org;', 'Fri,', '4', 'Jan', '2008', '06:06:47', '-0500']
    Line: Date: Fri, 4 Jan 2008 06:06:47 -0500
    Words ['Date:', 'Fri,', '4', 'Jan', '2008', '06:06:47', '-0500']
    Line: X-Authentication-Warning: nakamura.uits.iupui.edu: apache set sender to david.horwitz@uct.ac.za using -f
    Words ['X-Authentication-Warning:', 'nakamura.uits.iupui.edu:', 'apache', 'set', 'sender', 'to', 'david.horwitz@uct.ac.za', 'using', '-f']
    Line: To: source@collab.sakaiproject.org
    Words ['To:', 'source@collab.sakaiproject.org']
    Line: From: david.horwitz@uct.ac.za
    Words ['From:', 'david.horwitz@uct.ac.za']
    Line: Subject: [sakai] svn commit: r39753 - in polls/trunk: . tool tool/src/java/org/sakaiproject/poll/tool tool/src/java/org/sakaiproject/poll/tool/evolvers tool/src/webapp/WEB-INF
    Words ['Subject:', '[sakai]', 'svn', 'commit:', 'r39753', '-', 'in', 'polls/trunk:', '.', 'tool', 'tool/src/java/org/sakaiproject/poll/tool', 'tool/src/java/org/sakaiproject/poll/tool/evolvers', 'tool/src/webapp/WEB-INF']
    Line: X-Content-Type-Outer-Envelope: text/plain; charset=UTF-8
    Words ['X-Content-Type-Outer-Envelope:', 'text/plain;', 'charset=UTF-8']
    Line: X-Content-Type-Message-Body: text/plain; charset=UTF-8
    Words ['X-Content-Type-Message-Body:', 'text/plain;', 'charset=UTF-8']
    Line: Content-Type: text/plain; charset=UTF-8
    Words ['Content-Type:', 'text/plain;', 'charset=UTF-8']
    Line: X-DSPAM-Result: Innocent
    Words ['X-DSPAM-Result:', 'Innocent']
    Line: X-DSPAM-Processed: Fri Jan  4 06:08:27 2008
    Words ['X-DSPAM-Processed:', 'Fri', 'Jan', '4', '06:08:27', '2008']
    Line: X-DSPAM-Confidence: 0.6948
    Words ['X-DSPAM-Confidence:', '0.6948']
    Line: X-DSPAM-Probability: 0.0000
    Words ['X-DSPAM-Probability:', '0.0000']
    Line: 
    Words []
    Line: Details: http://source.sakaiproject.org/viewsvn/?view=rev&rev=39753
    Words ['Details:', 'http://source.sakaiproject.org/viewsvn/?view=rev&rev=39753']
    Line: 
    Words []
    Line: Author: david.horwitz@uct.ac.za
    Words ['Author:', 'david.horwitz@uct.ac.za']
    Line: Date: 2008-01-04 06:05:51 -0500 (Fri, 04 Jan 2008)
    Words ['Date:', '2008-01-04', '06:05:51', '-0500', '(Fri,', '04', 'Jan', '2008)']
    Line: New Revision: 39753
    Words ['New', 'Revision:', '39753']
    Line: 
    Words []
    Line: Added:
    Words ['Added:']
    Line: polls/trunk/tool/src/java/org/sakaiproject/poll/tool/evolvers/
    Words ['polls/trunk/tool/src/java/org/sakaiproject/poll/tool/evolvers/']
    Line: polls/trunk/tool/src/java/org/sakaiproject/poll/tool/evolvers/SakaiFCKTextEvolver.java
    Words ['polls/trunk/tool/src/java/org/sakaiproject/poll/tool/evolvers/SakaiFCKTextEvolver.java']
    Line: Modified:
    Words ['Modified:']
    Line: polls/trunk/.classpath
    Words ['polls/trunk/.classpath']
    Line: polls/trunk/tool/pom.xml
    Words ['polls/trunk/tool/pom.xml']
    Line: polls/trunk/tool/src/webapp/WEB-INF/requestContext.xml
    Words ['polls/trunk/tool/src/webapp/WEB-INF/requestContext.xml']
    Line: Log:
    Words ['Log:']
    Line: SAK-12228 implmented workaround sugested by AB - needs to be tested against a trunk build
    Words ['SAK-12228', 'implmented', 'workaround', 'sugested', 'by', 'AB', '-', 'needs', 'to', 'be', 'tested', 'against', 'a', 'trunk', 'build']
    Line: 
    Words []
    Line: ----------------------
    Words ['----------------------']
    Line: This automatic notification message was sent by Sakai Collab (https://collab.sakaiproject.org/portal) from the Source site.
    Words ['This', 'automatic', 'notification', 'message', 'was', 'sent', 'by', 'Sakai', 'Collab', '(https://collab.sakaiproject.org/portal)', 'from', 'the', 'Source', 'site.']
    Line: You can modify how you receive notifications at My Workspace > Preferences.
    Words ['You', 'can', 'modify', 'how', 'you', 'receive', 'notifications', 'at', 'My', 'Workspace', '>', 'Preferences.']
    Line: 
    Words []
    Line: 
    Words []
    Line: 
    Words []
    Line: From david.horwitz@uct.ac.za Fri Jan  4 04:49:08 2008
    Words ['From', 'david.horwitz@uct.ac.za', 'Fri', 'Jan', '4', '04:49:08', '2008']
    Line: Return-Path: <postmaster@collab.sakaiproject.org>
    Words ['Return-Path:', '<postmaster@collab.sakaiproject.org>']
    Line: Received: from murder (mail.umich.edu [141.211.14.92])
    Words ['Received:', 'from', 'murder', '(mail.umich.edu', '[141.211.14.92])']
    Line: 	 by frankenstein.mail.umich.edu (Cyrus v2.3.8) with LMTPA;
    Words ['by', 'frankenstein.mail.umich.edu', '(Cyrus', 'v2.3.8)', 'with', 'LMTPA;']
    Line: 	 Fri, 04 Jan 2008 04:49:08 -0500
    Words ['Fri,', '04', 'Jan', '2008', '04:49:08', '-0500']
    Line: X-Sieve: CMU Sieve 2.3
    Words ['X-Sieve:', 'CMU', 'Sieve', '2.3']
    Line: Received: from murder ([unix socket])
    Words ['Received:', 'from', 'murder', '([unix', 'socket])']
    Line: 	 by mail.umich.edu (Cyrus v2.2.12) with LMTPA;
    Words ['by', 'mail.umich.edu', '(Cyrus', 'v2.2.12)', 'with', 'LMTPA;']
    Line: 	 Fri, 04 Jan 2008 04:49:08 -0500
    Words ['Fri,', '04', 'Jan', '2008', '04:49:08', '-0500']
    Line: Received: from galaxyquest.mr.itd.umich.edu (galaxyquest.mr.itd.umich.edu [141.211.93.145])
    Words ['Received:', 'from', 'galaxyquest.mr.itd.umich.edu', '(galaxyquest.mr.itd.umich.edu', '[141.211.93.145])']
    Line: 	by score.mail.umich.edu () with ESMTP id m049n60G017588;
    Words ['by', 'score.mail.umich.edu', '()', 'with', 'ESMTP', 'id', 'm049n60G017588;']
    Line: 	Fri, 4 Jan 2008 04:49:06 -0500
    Words ['Fri,', '4', 'Jan', '2008', '04:49:06', '-0500']
    Line: Received: FROM paploo.uhi.ac.uk (app1.prod.collab.uhi.ac.uk [194.35.219.184])
    Words ['Received:', 'FROM', 'paploo.uhi.ac.uk', '(app1.prod.collab.uhi.ac.uk', '[194.35.219.184])']
    Line: 	BY galaxyquest.mr.itd.umich.edu ID 477E010C.48C2.10259 ;
    Words ['BY', 'galaxyquest.mr.itd.umich.edu', 'ID', '477E010C.48C2.10259', ';']
    Line: 	 4 Jan 2008 04:49:03 -0500
    Words ['4', 'Jan', '2008', '04:49:03', '-0500']
    Line: Received: from paploo.uhi.ac.uk (localhost [127.0.0.1])
    Words ['Received:', 'from', 'paploo.uhi.ac.uk', '(localhost', '[127.0.0.1])']
    Line: 	by paploo.uhi.ac.uk (Postfix) with ESMTP id 254CC8CDEE;
    Words ['by', 'paploo.uhi.ac.uk', '(Postfix)', 'with', 'ESMTP', 'id', '254CC8CDEE;']
    Line: 	Fri,  4 Jan 2008 09:48:55 +0000 (GMT)
    Words ['Fri,', '4', 'Jan', '2008', '09:48:55', '+0000', '(GMT)']
    Line: Message-ID: <200801040947.m049lUxo006517@nakamura.uits.iupui.edu>
    Words ['Message-ID:', '<200801040947.m049lUxo006517@nakamura.uits.iupui.edu>']
    Line: Mime-Version: 1.0
    Words ['Mime-Version:', '1.0']
    Line: Content-Transfer-Encoding: 7bit
    Words ['Content-Transfer-Encoding:', '7bit']
    Line: Received: from prod.collab.uhi.ac.uk ([194.35.219.182])
    Words ['Received:', 'from', 'prod.collab.uhi.ac.uk', '([194.35.219.182])']
    Line:           by paploo.uhi.ac.uk (JAMES SMTP Server 2.1.3) with SMTP ID 246
    Words ['by', 'paploo.uhi.ac.uk', '(JAMES', 'SMTP', 'Server', '2.1.3)', 'with', 'SMTP', 'ID', '246']
    Line:           for <source@collab.sakaiproject.org>;
    Words ['for', '<source@collab.sakaiproject.org>;']
    Line:           Fri, 4 Jan 2008 09:48:36 +0000 (GMT)
    Words ['Fri,', '4', 'Jan', '2008', '09:48:36', '+0000', '(GMT)']
    Line: Received: from nakamura.uits.iupui.edu (nakamura.uits.iupui.edu [134.68.220.122])
    Words ['Received:', 'from', 'nakamura.uits.iupui.edu', '(nakamura.uits.iupui.edu', '[134.68.220.122])']
    Line: 	by shmi.uhi.ac.uk (Postfix) with ESMTP id 8C13342C92
    Words ['by', 'shmi.uhi.ac.uk', '(Postfix)', 'with', 'ESMTP', 'id', '8C13342C92']
    Line: 	for <source@collab.sakaiproject.org>; Fri,  4 Jan 2008 09:48:40 +0000 (GMT)
    Words ['for', '<source@collab.sakaiproject.org>;', 'Fri,', '4', 'Jan', '2008', '09:48:40', '+0000', '(GMT)']
    Line: Received: from nakamura.uits.iupui.edu (localhost [127.0.0.1])
    Words ['Received:', 'from', 'nakamura.uits.iupui.edu', '(localhost', '[127.0.0.1])']
    Line: 	by nakamura.uits.iupui.edu (8.12.11.20060308/8.12.11) with ESMTP id m049lU3P006519
    Words ['by', 'nakamura.uits.iupui.edu', '(8.12.11.20060308/8.12.11)', 'with', 'ESMTP', 'id', 'm049lU3P006519']
    Line: 	for <source@collab.sakaiproject.org>; Fri, 4 Jan 2008 04:47:30 -0500
    Words ['for', '<source@collab.sakaiproject.org>;', 'Fri,', '4', 'Jan', '2008', '04:47:30', '-0500']
    Line: Received: (from apache@localhost)
    Words ['Received:', '(from', 'apache@localhost)']
    Line: 	by nakamura.uits.iupui.edu (8.12.11.20060308/8.12.11/Submit) id m049lUxo006517
    Words ['by', 'nakamura.uits.iupui.edu', '(8.12.11.20060308/8.12.11/Submit)', 'id', 'm049lUxo006517']
    Line: 	for source@collab.sakaiproject.org; Fri, 4 Jan 2008 04:47:30 -0500
    Words ['for', 'source@collab.sakaiproject.org;', 'Fri,', '4', 'Jan', '2008', '04:47:30', '-0500']
    Line: Date: Fri, 4 Jan 2008 04:47:30 -0500
    Words ['Date:', 'Fri,', '4', 'Jan', '2008', '04:47:30', '-0500']
    Line: X-Authentication-Warning: nakamura.uits.iupui.edu: apache set sender to david.horwitz@uct.ac.za using -f
    Words ['X-Authentication-Warning:', 'nakamura.uits.iupui.edu:', 'apache', 'set', 'sender', 'to', 'david.horwitz@uct.ac.za', 'using', '-f']
    Line: To: source@collab.sakaiproject.org
    Words ['To:', 'source@collab.sakaiproject.org']
    Line: From: david.horwitz@uct.ac.za
    Words ['From:', 'david.horwitz@uct.ac.za']
    Line: Subject: [sakai] svn commit: r39752 - in podcasts/branches/sakai_2-5-x/podcasts-app/src/webapp: css podcasts
    Words ['Subject:', '[sakai]', 'svn', 'commit:', 'r39752', '-', 'in', 'podcasts/branches/sakai_2-5-x/podcasts-app/src/webapp:', 'css', 'podcasts']
    Line: X-Content-Type-Outer-Envelope: text/plain; charset=UTF-8
    Words ['X-Content-Type-Outer-Envelope:', 'text/plain;', 'charset=UTF-8']
    Line: X-Content-Type-Message-Body: text/plain; charset=UTF-8
    Words ['X-Content-Type-Message-Body:', 'text/plain;', 'charset=UTF-8']
    Line: Content-Type: text/plain; charset=UTF-8
    Words ['Content-Type:', 'text/plain;', 'charset=UTF-8']
    Line: X-DSPAM-Result: Innocent
    Words ['X-DSPAM-Result:', 'Innocent']
    Line: X-DSPAM-Processed: Fri Jan  4 04:49:08 2008
    Words ['X-DSPAM-Processed:', 'Fri', 'Jan', '4', '04:49:08', '2008']
    Line: X-DSPAM-Confidence: 0.6528
    Words ['X-DSPAM-Confidence:', '0.6528']
    Line: X-DSPAM-Probability: 0.0000
    Words ['X-DSPAM-Probability:', '0.0000']
    Line: 
    Words []
    Line: Details: http://source.sakaiproject.org/viewsvn/?view=rev&rev=39752
    Words ['Details:', 'http://source.sakaiproject.org/viewsvn/?view=rev&rev=39752']
    Line: 
    Words []
    Line: Author: david.horwitz@uct.ac.za
    Words ['Author:', 'david.horwitz@uct.ac.za']
    Line: Date: 2008-01-04 04:47:16 -0500 (Fri, 04 Jan 2008)
    Words ['Date:', '2008-01-04', '04:47:16', '-0500', '(Fri,', '04', 'Jan', '2008)']
    Line: New Revision: 39752
    Words ['New', 'Revision:', '39752']
    Line: 
    Words []
    Line: Modified:
    Words ['Modified:']
    Line: podcasts/branches/sakai_2-5-x/podcasts-app/src/webapp/css/podcaster.css
    Words ['podcasts/branches/sakai_2-5-x/podcasts-app/src/webapp/css/podcaster.css']
    Line: podcasts/branches/sakai_2-5-x/podcasts-app/src/webapp/podcasts/podMain.jsp
    Words ['podcasts/branches/sakai_2-5-x/podcasts-app/src/webapp/podcasts/podMain.jsp']
    Line: Log:
    Words ['Log:']
    Line: svn log -r39641 https://source.sakaiproject.org/svn/podcasts/trunk
    Words ['svn', 'log', '-r39641', 'https://source.sakaiproject.org/svn/podcasts/trunk']
    Line: ------------------------------------------------------------------------
    Words ['------------------------------------------------------------------------']
    Line: r39641 | josrodri@iupui.edu | 2007-12-28 23:44:24 +0200 (Fri, 28 Dec 2007) | 1 line
    Words ['r39641', '|', 'josrodri@iupui.edu', '|', '2007-12-28', '23:44:24', '+0200', '(Fri,', '28', 'Dec', '2007)', '|', '1', 'line']
    Line: 
    Words []
    Line: SAK-9882: refactored podMain.jsp the right way (at least much closer to)
    Words ['SAK-9882:', 'refactored', 'podMain.jsp', 'the', 'right', 'way', '(at', 'least', 'much', 'closer', 'to)']
    Line: ------------------------------------------------------------------------
    Words ['------------------------------------------------------------------------']
    Line: 
    Words []
    Line: dhorwitz@david-horwitz-6:~/branchManagemnt/sakai_2-5-x> svn merge  -c39641 https://source.sakaiproject.org/svn/podcasts/trunk podcasts/
    Words ['dhorwitz@david-horwitz-6:~/branchManagemnt/sakai_2-5-x>', 'svn', 'merge', '-c39641', 'https://source.sakaiproject.org/svn/podcasts/trunk', 'podcasts/']
    Line: C    podcasts/podcasts-app/src/webapp/podcasts/podMain.jsp
    Words ['C', 'podcasts/podcasts-app/src/webapp/podcasts/podMain.jsp']
    Line: U    podcasts/podcasts-app/src/webapp/css/podcaster.css
    Words ['U', 'podcasts/podcasts-app/src/webapp/css/podcaster.css']
    Line: 
    Words []
    Line: conflict merged manualy
    Words ['conflict', 'merged', 'manualy']
    Line: 
    Words []
    Line: 
    Words []
    Line: 
    Words []
    Line: ----------------------
    Words ['----------------------']
    Line: This automatic notification message was sent by Sakai Collab (https://collab.sakaiproject.org/portal) from the Source site.
    Words ['This', 'automatic', 'notification', 'message', 'was', 'sent', 'by', 'Sakai', 'Collab', '(https://collab.sakaiproject.org/portal)', 'from', 'the', 'Source', 'site.']
    Line: You can modify how you receive notifications at My Workspace > Preferences.
    Words ['You', 'can', 'modify', 'how', 'you', 'receive', 'notifications', 'at', 'My', 'Workspace', '>', 'Preferences.']
    Line: 
    Words []
    Line: 
    Words []
    Line: 
    Words []
    Line: From david.horwitz@uct.ac.za Fri Jan  4 04:33:44 2008
    Words ['From', 'david.horwitz@uct.ac.za', 'Fri', 'Jan', '4', '04:33:44', '2008']
    Line: Return-Path: <postmaster@collab.sakaiproject.org>
    Words ['Return-Path:', '<postmaster@collab.sakaiproject.org>']
    Line: Received: from murder (mail.umich.edu [141.211.14.46])
    Words ['Received:', 'from', 'murder', '(mail.umich.edu', '[141.211.14.46])']
    Line: 	 by frankenstein.mail.umich.edu (Cyrus v2.3.8) with LMTPA;
    Words ['by', 'frankenstein.mail.umich.edu', '(Cyrus', 'v2.3.8)', 'with', 'LMTPA;']
    Line: 	 Fri, 04 Jan 2008 04:33:44 -0500
    Words ['Fri,', '04', 'Jan', '2008', '04:33:44', '-0500']
    Line: X-Sieve: CMU Sieve 2.3
    Words ['X-Sieve:', 'CMU', 'Sieve', '2.3']
    Line: Received: from murder ([unix socket])
    Words ['Received:', 'from', 'murder', '([unix', 'socket])']
    Line: 	 by mail.umich.edu (Cyrus v2.2.12) with LMTPA;
    Words ['by', 'mail.umich.edu', '(Cyrus', 'v2.2.12)', 'with', 'LMTPA;']
    Line: 	 Fri, 04 Jan 2008 04:33:44 -0500
    Words ['Fri,', '04', 'Jan', '2008', '04:33:44', '-0500']
    Line: Received: from workinggirl.mr.itd.umich.edu (workinggirl.mr.itd.umich.edu [141.211.93.143])
    Words ['Received:', 'from', 'workinggirl.mr.itd.umich.edu', '(workinggirl.mr.itd.umich.edu', '[141.211.93.143])']
    Line: 	by fan.mail.umich.edu () with ESMTP id m049Xge3031803;
    Words ['by', 'fan.mail.umich.edu', '()', 'with', 'ESMTP', 'id', 'm049Xge3031803;']
    Line: 	Fri, 4 Jan 2008 04:33:42 -0500
    Words ['Fri,', '4', 'Jan', '2008', '04:33:42', '-0500']
    Line: Received: FROM paploo.uhi.ac.uk (app1.prod.collab.uhi.ac.uk [194.35.219.184])
    Words ['Received:', 'FROM', 'paploo.uhi.ac.uk', '(app1.prod.collab.uhi.ac.uk', '[194.35.219.184])']
    Line: 	BY workinggirl.mr.itd.umich.edu ID 477DFD6C.75DBE.26054 ;
    Words ['BY', 'workinggirl.mr.itd.umich.edu', 'ID', '477DFD6C.75DBE.26054', ';']
    Line: 	 4 Jan 2008 04:33:35 -0500
    Words ['4', 'Jan', '2008', '04:33:35', '-0500']
    Line: Received: from paploo.uhi.ac.uk (localhost [127.0.0.1])
    Words ['Received:', 'from', 'paploo.uhi.ac.uk', '(localhost', '[127.0.0.1])']
    Line: 	by paploo.uhi.ac.uk (Postfix) with ESMTP id 6C929BA656;
    Words ['by', 'paploo.uhi.ac.uk', '(Postfix)', 'with', 'ESMTP', 'id', '6C929BA656;']
    Line: 	Fri,  4 Jan 2008 09:33:27 +0000 (GMT)
    Words ['Fri,', '4', 'Jan', '2008', '09:33:27', '+0000', '(GMT)']
    Line: Message-ID: <200801040932.m049W2i5006493@nakamura.uits.iupui.edu>
    Words ['Message-ID:', '<200801040932.m049W2i5006493@nakamura.uits.iupui.edu>']
    Line: Mime-Version: 1.0
    Words ['Mime-Version:', '1.0']
    Line: Content-Transfer-Encoding: 7bit
    Words ['Content-Transfer-Encoding:', '7bit']
    Line: Received: from prod.collab.uhi.ac.uk ([194.35.219.182])
    Words ['Received:', 'from', 'prod.collab.uhi.ac.uk', '([194.35.219.182])']
    Line:           by paploo.uhi.ac.uk (JAMES SMTP Server 2.1.3) with SMTP ID 153
    Words ['by', 'paploo.uhi.ac.uk', '(JAMES', 'SMTP', 'Server', '2.1.3)', 'with', 'SMTP', 'ID', '153']
    Line:           for <source@collab.sakaiproject.org>;
    Words ['for', '<source@collab.sakaiproject.org>;']
    Line:           Fri, 4 Jan 2008 09:33:10 +0000 (GMT)
    Words ['Fri,', '4', 'Jan', '2008', '09:33:10', '+0000', '(GMT)']
    Line: Received: from nakamura.uits.iupui.edu (nakamura.uits.iupui.edu [134.68.220.122])
    Words ['Received:', 'from', 'nakamura.uits.iupui.edu', '(nakamura.uits.iupui.edu', '[134.68.220.122])']
    Line: 	by shmi.uhi.ac.uk (Postfix) with ESMTP id 6C69423767
    Words ['by', 'shmi.uhi.ac.uk', '(Postfix)', 'with', 'ESMTP', 'id', '6C69423767']
    Line: 	for <source@collab.sakaiproject.org>; Fri,  4 Jan 2008 09:33:13 +0000 (GMT)
    Words ['for', '<source@collab.sakaiproject.org>;', 'Fri,', '4', 'Jan', '2008', '09:33:13', '+0000', '(GMT)']
    Line: Received: from nakamura.uits.iupui.edu (localhost [127.0.0.1])
    Words ['Received:', 'from', 'nakamura.uits.iupui.edu', '(localhost', '[127.0.0.1])']
    Line: 	by nakamura.uits.iupui.edu (8.12.11.20060308/8.12.11) with ESMTP id m049W3fl006495
    Words ['by', 'nakamura.uits.iupui.edu', '(8.12.11.20060308/8.12.11)', 'with', 'ESMTP', 'id', 'm049W3fl006495']
    Line: 	for <source@collab.sakaiproject.org>; Fri, 4 Jan 2008 04:32:03 -0500
    Words ['for', '<source@collab.sakaiproject.org>;', 'Fri,', '4', 'Jan', '2008', '04:32:03', '-0500']
    Line: Received: (from apache@localhost)
    Words ['Received:', '(from', 'apache@localhost)']
    Line: 	by nakamura.uits.iupui.edu (8.12.11.20060308/8.12.11/Submit) id m049W2i5006493
    Words ['by', 'nakamura.uits.iupui.edu', '(8.12.11.20060308/8.12.11/Submit)', 'id', 'm049W2i5006493']
    Line: 	for source@collab.sakaiproject.org; Fri, 4 Jan 2008 04:32:02 -0500
    Words ['for', 'source@collab.sakaiproject.org;', 'Fri,', '4', 'Jan', '2008', '04:32:02', '-0500']
    Line: Date: Fri, 4 Jan 2008 04:32:02 -0500
    Words ['Date:', 'Fri,', '4', 'Jan', '2008', '04:32:02', '-0500']
    Line: X-Authentication-Warning: nakamura.uits.iupui.edu: apache set sender to david.horwitz@uct.ac.za using -f
    Words ['X-Authentication-Warning:', 'nakamura.uits.iupui.edu:', 'apache', 'set', 'sender', 'to', 'david.horwitz@uct.ac.za', 'using', '-f']
    Line: To: source@collab.sakaiproject.org
    Words ['To:', 'source@collab.sakaiproject.org']
    Line: From: david.horwitz@uct.ac.za
    Words ['From:', 'david.horwitz@uct.ac.za']
    Line: Subject: [sakai] svn commit: r39751 - in podcasts/branches/sakai_2-5-x/podcasts-app/src/webapp: css images podcasts
    Words ['Subject:', '[sakai]', 'svn', 'commit:', 'r39751', '-', 'in', 'podcasts/branches/sakai_2-5-x/podcasts-app/src/webapp:', 'css', 'images', 'podcasts']
    Line: X-Content-Type-Outer-Envelope: text/plain; charset=UTF-8
    Words ['X-Content-Type-Outer-Envelope:', 'text/plain;', 'charset=UTF-8']
    Line: X-Content-Type-Message-Body: text/plain; charset=UTF-8
    Words ['X-Content-Type-Message-Body:', 'text/plain;', 'charset=UTF-8']
    Line: Content-Type: text/plain; charset=UTF-8
    Words ['Content-Type:', 'text/plain;', 'charset=UTF-8']
    Line: X-DSPAM-Result: Innocent
    Words ['X-DSPAM-Result:', 'Innocent']
    Line: X-DSPAM-Processed: Fri Jan  4 04:33:44 2008
    Words ['X-DSPAM-Processed:', 'Fri', 'Jan', '4', '04:33:44', '2008']
    Line: X-DSPAM-Confidence: 0.7002
    Words ['X-DSPAM-Confidence:', '0.7002']
    Line: X-DSPAM-Probability: 0.0000
    Words ['X-DSPAM-Probability:', '0.0000']
    Line: 
    Words []
    Line: Details: http://source.sakaiproject.org/viewsvn/?view=rev&rev=39751
    Words ['Details:', 'http://source.sakaiproject.org/viewsvn/?view=rev&rev=39751']
    Line: 
    Words []
    Line: Author: david.horwitz@uct.ac.za
    Words ['Author:', 'david.horwitz@uct.ac.za']
    Line: Date: 2008-01-04 04:31:35 -0500 (Fri, 04 Jan 2008)
    Words ['Date:', '2008-01-04', '04:31:35', '-0500', '(Fri,', '04', 'Jan', '2008)']
    Line: New Revision: 39751
    Words ['New', 'Revision:', '39751']
    Line: 
    Words []
    Line: Removed:
    Words ['Removed:']
    Line: podcasts/branches/sakai_2-5-x/podcasts-app/src/webapp/images/rss-feed-icon.png
    Words ['podcasts/branches/sakai_2-5-x/podcasts-app/src/webapp/images/rss-feed-icon.png']
    Line: podcasts/branches/sakai_2-5-x/podcasts-app/src/webapp/podcasts/podPermissions.jsp
    Words ['podcasts/branches/sakai_2-5-x/podcasts-app/src/webapp/podcasts/podPermissions.jsp']
    Line: Modified:
    Words ['Modified:']
    Line: podcasts/branches/sakai_2-5-x/podcasts-app/src/webapp/css/podcaster.css
    Words ['podcasts/branches/sakai_2-5-x/podcasts-app/src/webapp/css/podcaster.css']
    Line: podcasts/branches/sakai_2-5-x/podcasts-app/src/webapp/podcasts/podDelete.jsp
    Words ['podcasts/branches/sakai_2-5-x/podcasts-app/src/webapp/podcasts/podDelete.jsp']
    Line: podcasts/branches/sakai_2-5-x/podcasts-app/src/webapp/podcasts/podMain.jsp
    Words ['podcasts/branches/sakai_2-5-x/podcasts-app/src/webapp/podcasts/podMain.jsp']
    Line: podcasts/branches/sakai_2-5-x/podcasts-app/src/webapp/podcasts/podNoResource.jsp
    Words ['podcasts/branches/sakai_2-5-x/podcasts-app/src/webapp/podcasts/podNoResource.jsp']
    Line: podcasts/branches/sakai_2-5-x/podcasts-app/src/webapp/podcasts/podOptions.jsp
    Words ['podcasts/branches/sakai_2-5-x/podcasts-app/src/webapp/podcasts/podOptions.jsp']
    Line: Log:
    Words ['Log:']
    Line: svn log -r39146 https://source.sakaiproject.org/svn/podcasts/trunk
    Words ['svn', 'log', '-r39146', 'https://source.sakaiproject.org/svn/podcasts/trunk']
    Line: ------------------------------------------------------------------------
    Words ['------------------------------------------------------------------------']
    Line: r39146 | josrodri@iupui.edu | 2007-12-12 21:40:33 +0200 (Wed, 12 Dec 2007) | 1 line
    Words ['r39146', '|', 'josrodri@iupui.edu', '|', '2007-12-12', '21:40:33', '+0200', '(Wed,', '12', 'Dec', '2007)', '|', '1', 'line']
    Line: 
    Words []
    Line: SAK-9882: refactored the other pages as well to take advantage of proper jsp components as well as validation cleanup.
    Words ['SAK-9882:', 'refactored', 'the', 'other', 'pages', 'as', 'well', 'to', 'take', 'advantage', 'of', 'proper', 'jsp', 'components', 'as', 'well', 'as', 'validation', 'cleanup.']
    Line: ------------------------------------------------------------------------
    Words ['------------------------------------------------------------------------']
    Line: dhorwitz@david-horwitz-6:~/branchManagemnt/sakai_2-5-x> svn merge -c39146 https://source.sakaiproject.org/svn/podcasts/trunk podcasts/
    Words ['dhorwitz@david-horwitz-6:~/branchManagemnt/sakai_2-5-x>', 'svn', 'merge', '-c39146', 'https://source.sakaiproject.org/svn/podcasts/trunk', 'podcasts/']
    Line: D    podcasts/podcasts-app/src/webapp/podcasts/podPermissions.jsp
    Words ['D', 'podcasts/podcasts-app/src/webapp/podcasts/podPermissions.jsp']
    Line: U    podcasts/podcasts-app/src/webapp/podcasts/podDelete.jsp
    Words ['U', 'podcasts/podcasts-app/src/webapp/podcasts/podDelete.jsp']
    Line: U    podcasts/podcasts-app/src/webapp/podcasts/podMain.jsp
    Words ['U', 'podcasts/podcasts-app/src/webapp/podcasts/podMain.jsp']
    Line: U    podcasts/podcasts-app/src/webapp/podcasts/podNoResource.jsp
    Words ['U', 'podcasts/podcasts-app/src/webapp/podcasts/podNoResource.jsp']
    Line: U    podcasts/podcasts-app/src/webapp/podcasts/podOptions.jsp
    Words ['U', 'podcasts/podcasts-app/src/webapp/podcasts/podOptions.jsp']
    Line: D    podcasts/podcasts-app/src/webapp/images/rss-feed-icon.png
    Words ['D', 'podcasts/podcasts-app/src/webapp/images/rss-feed-icon.png']
    Line: U    podcasts/podcasts-app/src/webapp/css/podcaster.css
    Words ['U', 'podcasts/podcasts-app/src/webapp/css/podcaster.css']
    Line: 
    Words []
    Line: 
    Words []
    Line: 
    Words []
    Line: ----------------------
    Words ['----------------------']
    Line: This automatic notification message was sent by Sakai Collab (https://collab.sakaiproject.org/portal) from the Source site.
    Words ['This', 'automatic', 'notification', 'message', 'was', 'sent', 'by', 'Sakai', 'Collab', '(https://collab.sakaiproject.org/portal)', 'from', 'the', 'Source', 'site.']
    Line: You can modify how you receive notifications at My Workspace > Preferences.
    Words ['You', 'can', 'modify', 'how', 'you', 'receive', 'notifications', 'at', 'My', 'Workspace', '>', 'Preferences.']
    Line: 
    Words []
    Line: 
    Words []
    Line: 
    Words []
    Line: From stephen.marquard@uct.ac.za Fri Jan  4 04:07:34 2008
    Words ['From', 'stephen.marquard@uct.ac.za', 'Fri', 'Jan', '4', '04:07:34', '2008']
    Line: Return-Path: <postmaster@collab.sakaiproject.org>
    Words ['Return-Path:', '<postmaster@collab.sakaiproject.org>']
    Line: Received: from murder (mail.umich.edu [141.211.14.25])
    Words ['Received:', 'from', 'murder', '(mail.umich.edu', '[141.211.14.25])']
    Line: 	 by frankenstein.mail.umich.edu (Cyrus v2.3.8) with LMTPA;
    Words ['by', 'frankenstein.mail.umich.edu', '(Cyrus', 'v2.3.8)', 'with', 'LMTPA;']
    Line: 	 Fri, 04 Jan 2008 04:07:34 -0500
    Words ['Fri,', '04', 'Jan', '2008', '04:07:34', '-0500']
    Line: X-Sieve: CMU Sieve 2.3
    Words ['X-Sieve:', 'CMU', 'Sieve', '2.3']
    Line: Received: from murder ([unix socket])
    Words ['Received:', 'from', 'murder', '([unix', 'socket])']
    Line: 	 by mail.umich.edu (Cyrus v2.2.12) with LMTPA;
    Words ['by', 'mail.umich.edu', '(Cyrus', 'v2.2.12)', 'with', 'LMTPA;']
    Line: 	 Fri, 04 Jan 2008 04:07:34 -0500
    Words ['Fri,', '04', 'Jan', '2008', '04:07:34', '-0500']
    Line: Received: from salemslot.mr.itd.umich.edu (salemslot.mr.itd.umich.edu [141.211.14.58])
    Words ['Received:', 'from', 'salemslot.mr.itd.umich.edu', '(salemslot.mr.itd.umich.edu', '[141.211.14.58])']
    Line: 	by panther.mail.umich.edu () with ESMTP id m0497WAN027902;
    Words ['by', 'panther.mail.umich.edu', '()', 'with', 'ESMTP', 'id', 'm0497WAN027902;']
    Line: 	Fri, 4 Jan 2008 04:07:32 -0500
    Words ['Fri,', '4', 'Jan', '2008', '04:07:32', '-0500']
    Line: Received: FROM paploo.uhi.ac.uk (app1.prod.collab.uhi.ac.uk [194.35.219.184])
    Words ['Received:', 'FROM', 'paploo.uhi.ac.uk', '(app1.prod.collab.uhi.ac.uk', '[194.35.219.184])']
    Line: 	BY salemslot.mr.itd.umich.edu ID 477DF74E.49493.30415 ;
    Words ['BY', 'salemslot.mr.itd.umich.edu', 'ID', '477DF74E.49493.30415', ';']
    Line: 	 4 Jan 2008 04:07:29 -0500
    Words ['4', 'Jan', '2008', '04:07:29', '-0500']
    Line: Received: from paploo.uhi.ac.uk (localhost [127.0.0.1])
    Words ['Received:', 'from', 'paploo.uhi.ac.uk', '(localhost', '[127.0.0.1])']
    Line: 	by paploo.uhi.ac.uk (Postfix) with ESMTP id 88598BA5B6;
    Words ['by', 'paploo.uhi.ac.uk', '(Postfix)', 'with', 'ESMTP', 'id', '88598BA5B6;']
    Line: 	Fri,  4 Jan 2008 09:07:19 +0000 (GMT)
    Words ['Fri,', '4', 'Jan', '2008', '09:07:19', '+0000', '(GMT)']
    Line: Message-ID: <200801040905.m0495rWB006420@nakamura.uits.iupui.edu>
    Words ['Message-ID:', '<200801040905.m0495rWB006420@nakamura.uits.iupui.edu>']
    Line: Mime-Version: 1.0
    Words ['Mime-Version:', '1.0']
    Line: Content-Transfer-Encoding: 7bit
    Words ['Content-Transfer-Encoding:', '7bit']
    Line: Received: from prod.collab.uhi.ac.uk ([194.35.219.182])
    Words ['Received:', 'from', 'prod.collab.uhi.ac.uk', '([194.35.219.182])']
    Line:           by paploo.uhi.ac.uk (JAMES SMTP Server 2.1.3) with SMTP ID 385
    Words ['by', 'paploo.uhi.ac.uk', '(JAMES', 'SMTP', 'Server', '2.1.3)', 'with', 'SMTP', 'ID', '385']
    Line:           for <source@collab.sakaiproject.org>;
    Words ['for', '<source@collab.sakaiproject.org>;']
    Line:           Fri, 4 Jan 2008 09:07:04 +0000 (GMT)
    Words ['Fri,', '4', 'Jan', '2008', '09:07:04', '+0000', '(GMT)']
    Line: Received: from nakamura.uits.iupui.edu (nakamura.uits.iupui.edu [134.68.220.122])
    Words ['Received:', 'from', 'nakamura.uits.iupui.edu', '(nakamura.uits.iupui.edu', '[134.68.220.122])']
    Line: 	by shmi.uhi.ac.uk (Postfix) with ESMTP id 90636418A8
    Words ['by', 'shmi.uhi.ac.uk', '(Postfix)', 'with', 'ESMTP', 'id', '90636418A8']
    Line: 	for <source@collab.sakaiproject.org>; Fri,  4 Jan 2008 09:07:04 +0000 (GMT)
    Words ['for', '<source@collab.sakaiproject.org>;', 'Fri,', '4', 'Jan', '2008', '09:07:04', '+0000', '(GMT)']
    Line: Received: from nakamura.uits.iupui.edu (localhost [127.0.0.1])
    Words ['Received:', 'from', 'nakamura.uits.iupui.edu', '(localhost', '[127.0.0.1])']
    Line: 	by nakamura.uits.iupui.edu (8.12.11.20060308/8.12.11) with ESMTP id m0495sZs006422
    Words ['by', 'nakamura.uits.iupui.edu', '(8.12.11.20060308/8.12.11)', 'with', 'ESMTP', 'id', 'm0495sZs006422']
    Line: 	for <source@collab.sakaiproject.org>; Fri, 4 Jan 2008 04:05:54 -0500
    Words ['for', '<source@collab.sakaiproject.org>;', 'Fri,', '4', 'Jan', '2008', '04:05:54', '-0500']
    Line: Received: (from apache@localhost)
    Words ['Received:', '(from', 'apache@localhost)']
    Line: 	by nakamura.uits.iupui.edu (8.12.11.20060308/8.12.11/Submit) id m0495rWB006420
    Words ['by', 'nakamura.uits.iupui.edu', '(8.12.11.20060308/8.12.11/Submit)', 'id', 'm0495rWB006420']
    Line: 	for source@collab.sakaiproject.org; Fri, 4 Jan 2008 04:05:53 -0500
    Words ['for', 'source@collab.sakaiproject.org;', 'Fri,', '4', 'Jan', '2008', '04:05:53', '-0500']
    Line: Date: Fri, 4 Jan 2008 04:05:53 -0500
    Words ['Date:', 'Fri,', '4', 'Jan', '2008', '04:05:53', '-0500']
    Line: X-Authentication-Warning: nakamura.uits.iupui.edu: apache set sender to stephen.marquard@uct.ac.za using -f
    Words ['X-Authentication-Warning:', 'nakamura.uits.iupui.edu:', 'apache', 'set', 'sender', 'to', 'stephen.marquard@uct.ac.za', 'using', '-f']
    Line: To: source@collab.sakaiproject.org
    Words ['To:', 'source@collab.sakaiproject.org']
    Line: From: stephen.marquard@uct.ac.za
    Words ['From:', 'stephen.marquard@uct.ac.za']
    Line: Subject: [sakai] svn commit: r39750 - event/branches/SAK-6216/event-util/util/src/java/org/sakaiproject/util
    Words ['Subject:', '[sakai]', 'svn', 'commit:', 'r39750', '-', 'event/branches/SAK-6216/event-util/util/src/java/org/sakaiproject/util']
    Line: X-Content-Type-Outer-Envelope: text/plain; charset=UTF-8
    Words ['X-Content-Type-Outer-Envelope:', 'text/plain;', 'charset=UTF-8']
    Line: X-Content-Type-Message-Body: text/plain; charset=UTF-8
    Words ['X-Content-Type-Message-Body:', 'text/plain;', 'charset=UTF-8']
    Line: Content-Type: text/plain; charset=UTF-8
    Words ['Content-Type:', 'text/plain;', 'charset=UTF-8']
    Line: X-DSPAM-Result: Innocent
    Words ['X-DSPAM-Result:', 'Innocent']
    Line: X-DSPAM-Processed: Fri Jan  4 04:07:34 2008
    Words ['X-DSPAM-Processed:', 'Fri', 'Jan', '4', '04:07:34', '2008']
    Line: X-DSPAM-Confidence: 0.7554
    Words ['X-DSPAM-Confidence:', '0.7554']
    Line: X-DSPAM-Probability: 0.0000
    Words ['X-DSPAM-Probability:', '0.0000']
    Line: 
    Words []
    Line: Details: http://source.sakaiproject.org/viewsvn/?view=rev&rev=39750
    Words ['Details:', 'http://source.sakaiproject.org/viewsvn/?view=rev&rev=39750']
    Line: 
    Words []
    Line: Author: stephen.marquard@uct.ac.za
    Words ['Author:', 'stephen.marquard@uct.ac.za']
    Line: Date: 2008-01-04 04:05:43 -0500 (Fri, 04 Jan 2008)
    Words ['Date:', '2008-01-04', '04:05:43', '-0500', '(Fri,', '04', 'Jan', '2008)']
    Line: New Revision: 39750
    Words ['New', 'Revision:', '39750']
    Line: 
    Words []
    Line: Modified:
    Words ['Modified:']
    Line: event/branches/SAK-6216/event-util/util/src/java/org/sakaiproject/util/EmailNotification.java
    Words ['event/branches/SAK-6216/event-util/util/src/java/org/sakaiproject/util/EmailNotification.java']
    Line: Log:
    Words ['Log:']
    Line: SAK-6216 merge event change from SAK-11169 (r39033) to synchronize branch with 2-5-x (for convenience for UCT local build)
    Words ['SAK-6216', 'merge', 'event', 'change', 'from', 'SAK-11169', '(r39033)', 'to', 'synchronize', 'branch', 'with', '2-5-x', '(for', 'convenience', 'for', 'UCT', 'local', 'build)']
    Line: 
    Words []
    Line: ----------------------
    Words ['----------------------']
    Line: This automatic notification message was sent by Sakai Collab (https://collab.sakaiproject.org/portal) from the Source site.
    Words ['This', 'automatic', 'notification', 'message', 'was', 'sent', 'by', 'Sakai', 'Collab', '(https://collab.sakaiproject.org/portal)', 'from', 'the', 'Source', 'site.']
    Line: You can modify how you receive notifications at My Workspace > Preferences.
    Words ['You', 'can', 'modify', 'how', 'you', 'receive', 'notifications', 'at', 'My', 'Workspace', '>', 'Preferences.']
    Line: 
    Words []
    Line: 
    Words []
    Line: 
    Words []
    Line: From louis@media.berkeley.edu Thu Jan  3 19:51:21 2008
    Words ['From', 'louis@media.berkeley.edu', 'Thu', 'Jan', '3', '19:51:21', '2008']
    Line: Return-Path: <postmaster@collab.sakaiproject.org>
    Words ['Return-Path:', '<postmaster@collab.sakaiproject.org>']
    Line: Received: from murder (mail.umich.edu [141.211.14.91])
    Words ['Received:', 'from', 'murder', '(mail.umich.edu', '[141.211.14.91])']
    Line: 	 by frankenstein.mail.umich.edu (Cyrus v2.3.8) with LMTPA;
    Words ['by', 'frankenstein.mail.umich.edu', '(Cyrus', 'v2.3.8)', 'with', 'LMTPA;']
    Line: 	 Thu, 03 Jan 2008 19:51:21 -0500
    Words ['Thu,', '03', 'Jan', '2008', '19:51:21', '-0500']
    Line: X-Sieve: CMU Sieve 2.3
    Words ['X-Sieve:', 'CMU', 'Sieve', '2.3']
    Line: Received: from murder ([unix socket])
    Words ['Received:', 'from', 'murder', '([unix', 'socket])']
    Line: 	 by mail.umich.edu (Cyrus v2.2.12) with LMTPA;
    Words ['by', 'mail.umich.edu', '(Cyrus', 'v2.2.12)', 'with', 'LMTPA;']
    Line: 	 Thu, 03 Jan 2008 19:51:21 -0500
    Words ['Thu,', '03', 'Jan', '2008', '19:51:21', '-0500']
    Line: Received: from eyewitness.mr.itd.umich.edu (eyewitness.mr.itd.umich.edu [141.211.93.142])
    Words ['Received:', 'from', 'eyewitness.mr.itd.umich.edu', '(eyewitness.mr.itd.umich.edu', '[141.211.93.142])']
    Line: 	by jacknife.mail.umich.edu () with ESMTP id m040pJHB027171;
    Words ['by', 'jacknife.mail.umich.edu', '()', 'with', 'ESMTP', 'id', 'm040pJHB027171;']
    Line: 	Thu, 3 Jan 2008 19:51:19 -0500
    Words ['Thu,', '3', 'Jan', '2008', '19:51:19', '-0500']
    Line: Received: FROM paploo.uhi.ac.uk (app1.prod.collab.uhi.ac.uk [194.35.219.184])
    Words ['Received:', 'FROM', 'paploo.uhi.ac.uk', '(app1.prod.collab.uhi.ac.uk', '[194.35.219.184])']
    Line: 	BY eyewitness.mr.itd.umich.edu ID 477D8300.AC098.32562 ;
    Words ['BY', 'eyewitness.mr.itd.umich.edu', 'ID', '477D8300.AC098.32562', ';']
    Line: 	 3 Jan 2008 19:51:15 -0500
    Words ['3', 'Jan', '2008', '19:51:15', '-0500']
    Line: Received: from paploo.uhi.ac.uk (localhost [127.0.0.1])
    Words ['Received:', 'from', 'paploo.uhi.ac.uk', '(localhost', '[127.0.0.1])']
    Line: 	by paploo.uhi.ac.uk (Postfix) with ESMTP id E6CC4B9F8A;
    Words ['by', 'paploo.uhi.ac.uk', '(Postfix)', 'with', 'ESMTP', 'id', 'E6CC4B9F8A;']
    Line: 	Fri,  4 Jan 2008 00:36:06 +0000 (GMT)
    Words ['Fri,', '4', 'Jan', '2008', '00:36:06', '+0000', '(GMT)']
    Line: Message-ID: <200801040023.m040NpCc005473@nakamura.uits.iupui.edu>
    Words ['Message-ID:', '<200801040023.m040NpCc005473@nakamura.uits.iupui.edu>']
    Line: Mime-Version: 1.0
    Words ['Mime-Version:', '1.0']
    Line: Content-Transfer-Encoding: 7bit
    Words ['Content-Transfer-Encoding:', '7bit']
    Line: Received: from prod.collab.uhi.ac.uk ([194.35.219.182])
    Words ['Received:', 'from', 'prod.collab.uhi.ac.uk', '([194.35.219.182])']
    Line:           by paploo.uhi.ac.uk (JAMES SMTP Server 2.1.3) with SMTP ID 754
    Words ['by', 'paploo.uhi.ac.uk', '(JAMES', 'SMTP', 'Server', '2.1.3)', 'with', 'SMTP', 'ID', '754']
    Line:           for <source@collab.sakaiproject.org>;
    Words ['for', '<source@collab.sakaiproject.org>;']
    Line:           Fri, 4 Jan 2008 00:35:43 +0000 (GMT)
    Words ['Fri,', '4', 'Jan', '2008', '00:35:43', '+0000', '(GMT)']
    Line: Received: from nakamura.uits.iupui.edu (nakamura.uits.iupui.edu [134.68.220.122])
    Words ['Received:', 'from', 'nakamura.uits.iupui.edu', '(nakamura.uits.iupui.edu', '[134.68.220.122])']
    Line: 	by shmi.uhi.ac.uk (Postfix) with ESMTP id 8889842C49
    Words ['by', 'shmi.uhi.ac.uk', '(Postfix)', 'with', 'ESMTP', 'id', '8889842C49']
    Line: 	for <source@collab.sakaiproject.org>; Fri,  4 Jan 2008 00:25:00 +0000 (GMT)
    Words ['for', '<source@collab.sakaiproject.org>;', 'Fri,', '4', 'Jan', '2008', '00:25:00', '+0000', '(GMT)']
    Line: Received: from nakamura.uits.iupui.edu (localhost [127.0.0.1])
    Words ['Received:', 'from', 'nakamura.uits.iupui.edu', '(localhost', '[127.0.0.1])']
    Line: 	by nakamura.uits.iupui.edu (8.12.11.20060308/8.12.11) with ESMTP id m040NpgM005475
    Words ['by', 'nakamura.uits.iupui.edu', '(8.12.11.20060308/8.12.11)', 'with', 'ESMTP', 'id', 'm040NpgM005475']
    Line: 	for <source@collab.sakaiproject.org>; Thu, 3 Jan 2008 19:23:51 -0500
    Words ['for', '<source@collab.sakaiproject.org>;', 'Thu,', '3', 'Jan', '2008', '19:23:51', '-0500']
    Line: Received: (from apache@localhost)
    Words ['Received:', '(from', 'apache@localhost)']
    Line: 	by nakamura.uits.iupui.edu (8.12.11.20060308/8.12.11/Submit) id m040NpCc005473
    Words ['by', 'nakamura.uits.iupui.edu', '(8.12.11.20060308/8.12.11/Submit)', 'id', 'm040NpCc005473']
    Line: 	for source@collab.sakaiproject.org; Thu, 3 Jan 2008 19:23:51 -0500
    Words ['for', 'source@collab.sakaiproject.org;', 'Thu,', '3', 'Jan', '2008', '19:23:51', '-0500']
    Line: Date: Thu, 3 Jan 2008 19:23:51 -0500
    Words ['Date:', 'Thu,', '3', 'Jan', '2008', '19:23:51', '-0500']
    Line: X-Authentication-Warning: nakamura.uits.iupui.edu: apache set sender to louis@media.berkeley.edu using -f
    Words ['X-Authentication-Warning:', 'nakamura.uits.iupui.edu:', 'apache', 'set', 'sender', 'to', 'louis@media.berkeley.edu', 'using', '-f']
    Line: To: source@collab.sakaiproject.org
    Words ['To:', 'source@collab.sakaiproject.org']
    Line: From: louis@media.berkeley.edu
    Words ['From:', 'louis@media.berkeley.edu']
    Line: Subject: [sakai] svn commit: r39749 - in bspace/site-manage/sakai_2-4-x/site-manage-tool/tool/src: bundle webapp/vm/sitesetup
    Words ['Subject:', '[sakai]', 'svn', 'commit:', 'r39749', '-', 'in', 'bspace/site-manage/sakai_2-4-x/site-manage-tool/tool/src:', 'bundle', 'webapp/vm/sitesetup']
    Line: X-Content-Type-Outer-Envelope: text/plain; charset=UTF-8
    Words ['X-Content-Type-Outer-Envelope:', 'text/plain;', 'charset=UTF-8']
    Line: X-Content-Type-Message-Body: text/plain; charset=UTF-8
    Words ['X-Content-Type-Message-Body:', 'text/plain;', 'charset=UTF-8']
    Line: Content-Type: text/plain; charset=UTF-8
    Words ['Content-Type:', 'text/plain;', 'charset=UTF-8']
    Line: X-DSPAM-Result: Innocent
    Words ['X-DSPAM-Result:', 'Innocent']
    Line: X-DSPAM-Processed: Thu Jan  3 19:51:20 2008
    Words ['X-DSPAM-Processed:', 'Thu', 'Jan', '3', '19:51:20', '2008']
    Line: X-DSPAM-Confidence: 0.6956
    Words ['X-DSPAM-Confidence:', '0.6956']
    Line: X-DSPAM-Probability: 0.0000
    Words ['X-DSPAM-Probability:', '0.0000']
    Line: 
    Words []
    Line: Details: http://source.sakaiproject.org/viewsvn/?view=rev&rev=39749
    Words ['Details:', 'http://source.sakaiproject.org/viewsvn/?view=rev&rev=39749']
    Line: 
    Words []
    Line: Author: louis@media.berkeley.edu
    Words ['Author:', 'louis@media.berkeley.edu']
    Line: Date: 2008-01-03 19:23:46 -0500 (Thu, 03 Jan 2008)
    Words ['Date:', '2008-01-03', '19:23:46', '-0500', '(Thu,', '03', 'Jan', '2008)']
    Line: New Revision: 39749
    Words ['New', 'Revision:', '39749']
    Line: 
    Words []
    Line: Modified:
    Words ['Modified:']
    Line: bspace/site-manage/sakai_2-4-x/site-manage-tool/tool/src/bundle/sitesetupgeneric.properties
    Words ['bspace/site-manage/sakai_2-4-x/site-manage-tool/tool/src/bundle/sitesetupgeneric.properties']
    Line: bspace/site-manage/sakai_2-4-x/site-manage-tool/tool/src/webapp/vm/sitesetup/chef_site-importSites.vm
    Words ['bspace/site-manage/sakai_2-4-x/site-manage-tool/tool/src/webapp/vm/sitesetup/chef_site-importSites.vm']
    Line: Log:
    Words ['Log:']
    Line: BSP-1420 Update text to clarify "Re-Use Materials..." option in WS Setup
    Words ['BSP-1420', 'Update', 'text', 'to', 'clarify', '"Re-Use', 'Materials..."', 'option', 'in', 'WS', 'Setup']
    Line: 
    Words []
    Line: ----------------------
    Words ['----------------------']
    Line: This automatic notification message was sent by Sakai Collab (https://collab.sakaiproject.org/portal) from the Source site.
    Words ['This', 'automatic', 'notification', 'message', 'was', 'sent', 'by', 'Sakai', 'Collab', '(https://collab.sakaiproject.org/portal)', 'from', 'the', 'Source', 'site.']
    Line: You can modify how you receive notifications at My Workspace > Preferences.
    Words ['You', 'can', 'modify', 'how', 'you', 'receive', 'notifications', 'at', 'My', 'Workspace', '>', 'Preferences.']
    Line: 
    Words []
    Line: 
    Words []
    Line: 
    Words []
    Line: From louis@media.berkeley.edu Thu Jan  3 17:18:23 2008
    Words ['From', 'louis@media.berkeley.edu', 'Thu', 'Jan', '3', '17:18:23', '2008']
    Line: Return-Path: <postmaster@collab.sakaiproject.org>
    Words ['Return-Path:', '<postmaster@collab.sakaiproject.org>']
    Line: Received: from murder (mail.umich.edu [141.211.14.91])
    Words ['Received:', 'from', 'murder', '(mail.umich.edu', '[141.211.14.91])']
    Line: 	 by frankenstein.mail.umich.edu (Cyrus v2.3.8) with LMTPA;
    Words ['by', 'frankenstein.mail.umich.edu', '(Cyrus', 'v2.3.8)', 'with', 'LMTPA;']
    Line: 	 Thu, 03 Jan 2008 17:18:23 -0500
    Words ['Thu,', '03', 'Jan', '2008', '17:18:23', '-0500']
    Line: X-Sieve: CMU Sieve 2.3
    Words ['X-Sieve:', 'CMU', 'Sieve', '2.3']
    Line: Received: from murder ([unix socket])
    Words ['Received:', 'from', 'murder', '([unix', 'socket])']
    Line: 	 by mail.umich.edu (Cyrus v2.2.12) with LMTPA;
    Words ['by', 'mail.umich.edu', '(Cyrus', 'v2.2.12)', 'with', 'LMTPA;']
    Line: 	 Thu, 03 Jan 2008 17:18:23 -0500
    Words ['Thu,', '03', 'Jan', '2008', '17:18:23', '-0500']
    Line: Received: from salemslot.mr.itd.umich.edu (salemslot.mr.itd.umich.edu [141.211.14.58])
    Words ['Received:', 'from', 'salemslot.mr.itd.umich.edu', '(salemslot.mr.itd.umich.edu', '[141.211.14.58])']
    Line: 	by jacknife.mail.umich.edu () with ESMTP id m03MIMXY027729;
    Words ['by', 'jacknife.mail.umich.edu', '()', 'with', 'ESMTP', 'id', 'm03MIMXY027729;']
    Line: 	Thu, 3 Jan 2008 17:18:22 -0500
    Words ['Thu,', '3', 'Jan', '2008', '17:18:22', '-0500']
    Line: Received: FROM paploo.uhi.ac.uk (app1.prod.collab.uhi.ac.uk [194.35.219.184])
    Words ['Received:', 'FROM', 'paploo.uhi.ac.uk', '(app1.prod.collab.uhi.ac.uk', '[194.35.219.184])']
    Line: 	BY salemslot.mr.itd.umich.edu ID 477D5F23.797F6.16348 ;
    Words ['BY', 'salemslot.mr.itd.umich.edu', 'ID', '477D5F23.797F6.16348', ';']
    Line: 	 3 Jan 2008 17:18:14 -0500
    Words ['3', 'Jan', '2008', '17:18:14', '-0500']
    Line: Received: from paploo.uhi.ac.uk (localhost [127.0.0.1])
    Words ['Received:', 'from', 'paploo.uhi.ac.uk', '(localhost', '[127.0.0.1])']
    Line: 	by paploo.uhi.ac.uk (Postfix) with ESMTP id EF439B98CE;
    Words ['by', 'paploo.uhi.ac.uk', '(Postfix)', 'with', 'ESMTP', 'id', 'EF439B98CE;']
    Line: 	Thu,  3 Jan 2008 22:18:19 +0000 (GMT)
    Words ['Thu,', '3', 'Jan', '2008', '22:18:19', '+0000', '(GMT)']
    Line: Message-ID: <200801032216.m03MGhDa005292@nakamura.uits.iupui.edu>
    Words ['Message-ID:', '<200801032216.m03MGhDa005292@nakamura.uits.iupui.edu>']
    Line: Mime-Version: 1.0
    Words ['Mime-Version:', '1.0']
    Line: Content-Transfer-Encoding: 7bit
    Words ['Content-Transfer-Encoding:', '7bit']
    Line: Received: from prod.collab.uhi.ac.uk ([194.35.219.182])
    Words ['Received:', 'from', 'prod.collab.uhi.ac.uk', '([194.35.219.182])']
    Line:           by paploo.uhi.ac.uk (JAMES SMTP Server 2.1.3) with SMTP ID 236
    Words ['by', 'paploo.uhi.ac.uk', '(JAMES', 'SMTP', 'Server', '2.1.3)', 'with', 'SMTP', 'ID', '236']
    Line:           for <source@collab.sakaiproject.org>;
    Words ['for', '<source@collab.sakaiproject.org>;']
    Line:           Thu, 3 Jan 2008 22:18:04 +0000 (GMT)
    Words ['Thu,', '3', 'Jan', '2008', '22:18:04', '+0000', '(GMT)']
    Line: Received: from nakamura.uits.iupui.edu (nakamura.uits.iupui.edu [134.68.220.122])
    Words ['Received:', 'from', 'nakamura.uits.iupui.edu', '(nakamura.uits.iupui.edu', '[134.68.220.122])']
    Line: 	by shmi.uhi.ac.uk (Postfix) with ESMTP id 905D53C2FD
    Words ['by', 'shmi.uhi.ac.uk', '(Postfix)', 'with', 'ESMTP', 'id', '905D53C2FD']
    Line: 	for <source@collab.sakaiproject.org>; Thu,  3 Jan 2008 22:17:52 +0000 (GMT)
    Words ['for', '<source@collab.sakaiproject.org>;', 'Thu,', '3', 'Jan', '2008', '22:17:52', '+0000', '(GMT)']
    Line: Received: from nakamura.uits.iupui.edu (localhost [127.0.0.1])
    Words ['Received:', 'from', 'nakamura.uits.iupui.edu', '(localhost', '[127.0.0.1])']
    Line: 	by nakamura.uits.iupui.edu (8.12.11.20060308/8.12.11) with ESMTP id m03MGhrs005294
    Words ['by', 'nakamura.uits.iupui.edu', '(8.12.11.20060308/8.12.11)', 'with', 'ESMTP', 'id', 'm03MGhrs005294']
    Line: 	for <source@collab.sakaiproject.org>; Thu, 3 Jan 2008 17:16:43 -0500
    Words ['for', '<source@collab.sakaiproject.org>;', 'Thu,', '3', 'Jan', '2008', '17:16:43', '-0500']
    Line: Received: (from apache@localhost)
    Words ['Received:', '(from', 'apache@localhost)']
    Line: 	by nakamura.uits.iupui.edu (8.12.11.20060308/8.12.11/Submit) id m03MGhDa005292
    Words ['by', 'nakamura.uits.iupui.edu', '(8.12.11.20060308/8.12.11/Submit)', 'id', 'm03MGhDa005292']
    Line: 	for source@collab.sakaiproject.org; Thu, 3 Jan 2008 17:16:43 -0500
    Words ['for', 'source@collab.sakaiproject.org;', 'Thu,', '3', 'Jan', '2008', '17:16:43', '-0500']
    Line: Date: Thu, 3 Jan 2008 17:16:43 -0500
    Words ['Date:', 'Thu,', '3', 'Jan', '2008', '17:16:43', '-0500']
    Line: X-Authentication-Warning: nakamura.uits.iupui.edu: apache set sender to louis@media.berkeley.edu using -f
    Words ['X-Authentication-Warning:', 'nakamura.uits.iupui.edu:', 'apache', 'set', 'sender', 'to', 'louis@media.berkeley.edu', 'using', '-f']
    Line: To: source@collab.sakaiproject.org
    Words ['To:', 'source@collab.sakaiproject.org']
    Line: From: louis@media.berkeley.edu
    Words ['From:', 'louis@media.berkeley.edu']
    Line: Subject: [sakai] svn commit: r39746 - in bspace/site-manage/sakai_2-4-x/site-manage-tool/tool/src: bundle webapp/vm/sitesetup
    Words ['Subject:', '[sakai]', 'svn', 'commit:', 'r39746', '-', 'in', 'bspace/site-manage/sakai_2-4-x/site-manage-tool/tool/src:', 'bundle', 'webapp/vm/sitesetup']
    Line: X-Content-Type-Outer-Envelope: text/plain; charset=UTF-8
    Words ['X-Content-Type-Outer-Envelope:', 'text/plain;', 'charset=UTF-8']
    Line: X-Content-Type-Message-Body: text/plain; charset=UTF-8
    Words ['X-Content-Type-Message-Body:', 'text/plain;', 'charset=UTF-8']
    Line: Content-Type: text/plain; charset=UTF-8
    Words ['Content-Type:', 'text/plain;', 'charset=UTF-8']
    Line: X-DSPAM-Result: Innocent
    Words ['X-DSPAM-Result:', 'Innocent']
    Line: X-DSPAM-Processed: Thu Jan  3 17:18:23 2008
    Words ['X-DSPAM-Processed:', 'Thu', 'Jan', '3', '17:18:23', '2008']
    Line: X-DSPAM-Confidence: 0.6959
    Words ['X-DSPAM-Confidence:', '0.6959']
    Line: X-DSPAM-Probability: 0.0000
    Words ['X-DSPAM-Probability:', '0.0000']
    Line: 
    Words []
    Line: Details: http://source.sakaiproject.org/viewsvn/?view=rev&rev=39746
    Words ['Details:', 'http://source.sakaiproject.org/viewsvn/?view=rev&rev=39746']
    Line: 
    Words []
    Line: Author: louis@media.berkeley.edu
    Words ['Author:', 'louis@media.berkeley.edu']
    Line: Date: 2008-01-03 17:16:39 -0500 (Thu, 03 Jan 2008)
    Words ['Date:', '2008-01-03', '17:16:39', '-0500', '(Thu,', '03', 'Jan', '2008)']
    Line: New Revision: 39746
    Words ['New', 'Revision:', '39746']
    Line: 
    Words []
    Line: Modified:
    Words ['Modified:']
    Line: bspace/site-manage/sakai_2-4-x/site-manage-tool/tool/src/bundle/sitesetupgeneric.properties
    Words ['bspace/site-manage/sakai_2-4-x/site-manage-tool/tool/src/bundle/sitesetupgeneric.properties']
    Line: bspace/site-manage/sakai_2-4-x/site-manage-tool/tool/src/webapp/vm/sitesetup/chef_site-siteInfo-duplicate.vm
    Words ['bspace/site-manage/sakai_2-4-x/site-manage-tool/tool/src/webapp/vm/sitesetup/chef_site-siteInfo-duplicate.vm']
    Line: Log:
    Words ['Log:']
    Line: BSP-1421 Add text to clarify "Duplicate Site" option in Site Info
    Words ['BSP-1421', 'Add', 'text', 'to', 'clarify', '"Duplicate', 'Site"', 'option', 'in', 'Site', 'Info']
    Line: 
    Words []
    Line: ----------------------
    Words ['----------------------']
    Line: This automatic notification message was sent by Sakai Collab (https://collab.sakaiproject.org/portal) from the Source site.
    Words ['This', 'automatic', 'notification', 'message', 'was', 'sent', 'by', 'Sakai', 'Collab', '(https://collab.sakaiproject.org/portal)', 'from', 'the', 'Source', 'site.']
    Line: You can modify how you receive notifications at My Workspace > Preferences.
    Words ['You', 'can', 'modify', 'how', 'you', 'receive', 'notifications', 'at', 'My', 'Workspace', '>', 'Preferences.']
    Line: 
    Words []
    Line: 
    Words []
    Line: 
    Words []
    Line: From ray@media.berkeley.edu Thu Jan  3 17:07:00 2008
    Words ['From', 'ray@media.berkeley.edu', 'Thu', 'Jan', '3', '17:07:00', '2008']
    Line: Return-Path: <postmaster@collab.sakaiproject.org>
    Words ['Return-Path:', '<postmaster@collab.sakaiproject.org>']
    Line: Received: from murder (mail.umich.edu [141.211.14.39])
    Words ['Received:', 'from', 'murder', '(mail.umich.edu', '[141.211.14.39])']
    Line: 	 by frankenstein.mail.umich.edu (Cyrus v2.3.8) with LMTPA;
    Words ['by', 'frankenstein.mail.umich.edu', '(Cyrus', 'v2.3.8)', 'with', 'LMTPA;']
    Line: 	 Thu, 03 Jan 2008 17:07:00 -0500
    Words ['Thu,', '03', 'Jan', '2008', '17:07:00', '-0500']
    Line: X-Sieve: CMU Sieve 2.3
    Words ['X-Sieve:', 'CMU', 'Sieve', '2.3']
    Line: Received: from murder ([unix socket])
    Words ['Received:', 'from', 'murder', '([unix', 'socket])']
    Line: 	 by mail.umich.edu (Cyrus v2.2.12) with LMTPA;
    Words ['by', 'mail.umich.edu', '(Cyrus', 'v2.2.12)', 'with', 'LMTPA;']
    Line: 	 Thu, 03 Jan 2008 17:07:00 -0500
    Words ['Thu,', '03', 'Jan', '2008', '17:07:00', '-0500']
    Line: Received: from anniehall.mr.itd.umich.edu (anniehall.mr.itd.umich.edu [141.211.93.141])
    Words ['Received:', 'from', 'anniehall.mr.itd.umich.edu', '(anniehall.mr.itd.umich.edu', '[141.211.93.141])']
    Line: 	by faithful.mail.umich.edu () with ESMTP id m03M6xaq014868;
    Words ['by', 'faithful.mail.umich.edu', '()', 'with', 'ESMTP', 'id', 'm03M6xaq014868;']
    Line: 	Thu, 3 Jan 2008 17:06:59 -0500
    Words ['Thu,', '3', 'Jan', '2008', '17:06:59', '-0500']
    Line: Received: FROM paploo.uhi.ac.uk (app1.prod.collab.uhi.ac.uk [194.35.219.184])
    Words ['Received:', 'FROM', 'paploo.uhi.ac.uk', '(app1.prod.collab.uhi.ac.uk', '[194.35.219.184])']
    Line: 	BY anniehall.mr.itd.umich.edu ID 477D5C7A.4FE1F.22211 ;
    Words ['BY', 'anniehall.mr.itd.umich.edu', 'ID', '477D5C7A.4FE1F.22211', ';']
    Line: 	 3 Jan 2008 17:06:53 -0500
    Words ['3', 'Jan', '2008', '17:06:53', '-0500']
    Line: Received: from paploo.uhi.ac.uk (localhost [127.0.0.1])
    Words ['Received:', 'from', 'paploo.uhi.ac.uk', '(localhost', '[127.0.0.1])']
    Line: 	by paploo.uhi.ac.uk (Postfix) with ESMTP id 0BC8D7225E;
    Words ['by', 'paploo.uhi.ac.uk', '(Postfix)', 'with', 'ESMTP', 'id', '0BC8D7225E;']
    Line: 	Thu,  3 Jan 2008 22:06:57 +0000 (GMT)
    Words ['Thu,', '3', 'Jan', '2008', '22:06:57', '+0000', '(GMT)']
    Line: Message-ID: <200801032205.m03M5Ea7005273@nakamura.uits.iupui.edu>
    Words ['Message-ID:', '<200801032205.m03M5Ea7005273@nakamura.uits.iupui.edu>']
    Line: Mime-Version: 1.0
    Words ['Mime-Version:', '1.0']
    Line: Content-Transfer-Encoding: 7bit
    Words ['Content-Transfer-Encoding:', '7bit']
    Line: Received: from prod.collab.uhi.ac.uk ([194.35.219.182])
    Words ['Received:', 'from', 'prod.collab.uhi.ac.uk', '([194.35.219.182])']
    Line:           by paploo.uhi.ac.uk (JAMES SMTP Server 2.1.3) with SMTP ID 554
    Words ['by', 'paploo.uhi.ac.uk', '(JAMES', 'SMTP', 'Server', '2.1.3)', 'with', 'SMTP', 'ID', '554']
    Line:           for <source@collab.sakaiproject.org>;
    Words ['for', '<source@collab.sakaiproject.org>;']
    Line:           Thu, 3 Jan 2008 22:06:34 +0000 (GMT)
    Words ['Thu,', '3', 'Jan', '2008', '22:06:34', '+0000', '(GMT)']
    Line: Received: from nakamura.uits.iupui.edu (nakamura.uits.iupui.edu [134.68.220.122])
    Words ['Received:', 'from', 'nakamura.uits.iupui.edu', '(nakamura.uits.iupui.edu', '[134.68.220.122])']
    Line: 	by shmi.uhi.ac.uk (Postfix) with ESMTP id 2AB513C2FD
    Words ['by', 'shmi.uhi.ac.uk', '(Postfix)', 'with', 'ESMTP', 'id', '2AB513C2FD']
    Line: 	for <source@collab.sakaiproject.org>; Thu,  3 Jan 2008 22:06:23 +0000 (GMT)
    Words ['for', '<source@collab.sakaiproject.org>;', 'Thu,', '3', 'Jan', '2008', '22:06:23', '+0000', '(GMT)']
    Line: Received: from nakamura.uits.iupui.edu (localhost [127.0.0.1])
    Words ['Received:', 'from', 'nakamura.uits.iupui.edu', '(localhost', '[127.0.0.1])']
    Line: 	by nakamura.uits.iupui.edu (8.12.11.20060308/8.12.11) with ESMTP id m03M5EQa005275
    Words ['by', 'nakamura.uits.iupui.edu', '(8.12.11.20060308/8.12.11)', 'with', 'ESMTP', 'id', 'm03M5EQa005275']
    Line: 	for <source@collab.sakaiproject.org>; Thu, 3 Jan 2008 17:05:14 -0500
    Words ['for', '<source@collab.sakaiproject.org>;', 'Thu,', '3', 'Jan', '2008', '17:05:14', '-0500']
    Line: Received: (from apache@localhost)
    Words ['Received:', '(from', 'apache@localhost)']
    Line: 	by nakamura.uits.iupui.edu (8.12.11.20060308/8.12.11/Submit) id m03M5Ea7005273
    Words ['by', 'nakamura.uits.iupui.edu', '(8.12.11.20060308/8.12.11/Submit)', 'id', 'm03M5Ea7005273']
    Line: 	for source@collab.sakaiproject.org; Thu, 3 Jan 2008 17:05:14 -0500
    Words ['for', 'source@collab.sakaiproject.org;', 'Thu,', '3', 'Jan', '2008', '17:05:14', '-0500']
    Line: Date: Thu, 3 Jan 2008 17:05:14 -0500
    Words ['Date:', 'Thu,', '3', 'Jan', '2008', '17:05:14', '-0500']
    Line: X-Authentication-Warning: nakamura.uits.iupui.edu: apache set sender to ray@media.berkeley.edu using -f
    Words ['X-Authentication-Warning:', 'nakamura.uits.iupui.edu:', 'apache', 'set', 'sender', 'to', 'ray@media.berkeley.edu', 'using', '-f']
    Line: To: source@collab.sakaiproject.org
    Words ['To:', 'source@collab.sakaiproject.org']
    Line: From: ray@media.berkeley.edu
    Words ['From:', 'ray@media.berkeley.edu']
    Line: Subject: [sakai] svn commit: r39745 - providers/trunk/cm/cm-authz-provider/src/java/org/sakaiproject/coursemanagement/impl/provider
    Words ['Subject:', '[sakai]', 'svn', 'commit:', 'r39745', '-', 'providers/trunk/cm/cm-authz-provider/src/java/org/sakaiproject/coursemanagement/impl/provider']
    Line: X-Content-Type-Outer-Envelope: text/plain; charset=UTF-8
    Words ['X-Content-Type-Outer-Envelope:', 'text/plain;', 'charset=UTF-8']
    Line: X-Content-Type-Message-Body: text/plain; charset=UTF-8
    Words ['X-Content-Type-Message-Body:', 'text/plain;', 'charset=UTF-8']
    Line: Content-Type: text/plain; charset=UTF-8
    Words ['Content-Type:', 'text/plain;', 'charset=UTF-8']
    Line: X-DSPAM-Result: Innocent
    Words ['X-DSPAM-Result:', 'Innocent']
    Line: X-DSPAM-Processed: Thu Jan  3 17:07:00 2008
    Words ['X-DSPAM-Processed:', 'Thu', 'Jan', '3', '17:07:00', '2008']
    Line: X-DSPAM-Confidence: 0.7556
    Words ['X-DSPAM-Confidence:', '0.7556']
    Line: X-DSPAM-Probability: 0.0000
    Words ['X-DSPAM-Probability:', '0.0000']
    Line: 
    Words []
    Line: Details: http://source.sakaiproject.org/viewsvn/?view=rev&rev=39745
    Words ['Details:', 'http://source.sakaiproject.org/viewsvn/?view=rev&rev=39745']
    Line: 
    Words []
    Line: Author: ray@media.berkeley.edu
    Words ['Author:', 'ray@media.berkeley.edu']
    Line: Date: 2008-01-03 17:05:11 -0500 (Thu, 03 Jan 2008)
    Words ['Date:', '2008-01-03', '17:05:11', '-0500', '(Thu,', '03', 'Jan', '2008)']
    Line: New Revision: 39745
    Words ['New', 'Revision:', '39745']
    Line: 
    Words []
    Line: Modified:
    Words ['Modified:']
    Line: providers/trunk/cm/cm-authz-provider/src/java/org/sakaiproject/coursemanagement/impl/provider/CourseManagementGroupProvider.java
    Words ['providers/trunk/cm/cm-authz-provider/src/java/org/sakaiproject/coursemanagement/impl/provider/CourseManagementGroupProvider.java']
    Line: Log:
    Words ['Log:']
    Line: SAK-12602 Fix logic when a user has multiple roles in a section
    Words ['SAK-12602', 'Fix', 'logic', 'when', 'a', 'user', 'has', 'multiple', 'roles', 'in', 'a', 'section']
    Line: 
    Words []
    Line: ----------------------
    Words ['----------------------']
    Line: This automatic notification message was sent by Sakai Collab (https://collab.sakaiproject.org/portal) from the Source site.
    Words ['This', 'automatic', 'notification', 'message', 'was', 'sent', 'by', 'Sakai', 'Collab', '(https://collab.sakaiproject.org/portal)', 'from', 'the', 'Source', 'site.']
    Line: You can modify how you receive notifications at My Workspace > Preferences.
    Words ['You', 'can', 'modify', 'how', 'you', 'receive', 'notifications', 'at', 'My', 'Workspace', '>', 'Preferences.']
    Line: 
    Words []
    Line: 
    Words []
    Line: 
    Words []
    Line: From cwen@iupui.edu Thu Jan  3 16:34:40 2008
    Words ['From', 'cwen@iupui.edu', 'Thu', 'Jan', '3', '16:34:40', '2008']
    Line: Return-Path: <postmaster@collab.sakaiproject.org>
    Words ['Return-Path:', '<postmaster@collab.sakaiproject.org>']
    Line: Received: from murder (mail.umich.edu [141.211.14.34])
    Words ['Received:', 'from', 'murder', '(mail.umich.edu', '[141.211.14.34])']
    Line: 	 by frankenstein.mail.umich.edu (Cyrus v2.3.8) with LMTPA;
    Words ['by', 'frankenstein.mail.umich.edu', '(Cyrus', 'v2.3.8)', 'with', 'LMTPA;']
    Line: 	 Thu, 03 Jan 2008 16:34:40 -0500
    Words ['Thu,', '03', 'Jan', '2008', '16:34:40', '-0500']
    Line: X-Sieve: CMU Sieve 2.3
    Words ['X-Sieve:', 'CMU', 'Sieve', '2.3']
    Line: Received: from murder ([unix socket])
    Words ['Received:', 'from', 'murder', '([unix', 'socket])']
    Line: 	 by mail.umich.edu (Cyrus v2.2.12) with LMTPA;
    Words ['by', 'mail.umich.edu', '(Cyrus', 'v2.2.12)', 'with', 'LMTPA;']
    Line: 	 Thu, 03 Jan 2008 16:34:40 -0500
    Words ['Thu,', '03', 'Jan', '2008', '16:34:40', '-0500']
    Line: Received: from icestorm.mr.itd.umich.edu (icestorm.mr.itd.umich.edu [141.211.93.149])
    Words ['Received:', 'from', 'icestorm.mr.itd.umich.edu', '(icestorm.mr.itd.umich.edu', '[141.211.93.149])']
    Line: 	by chaos.mail.umich.edu () with ESMTP id m03LYdY1029538;
    Words ['by', 'chaos.mail.umich.edu', '()', 'with', 'ESMTP', 'id', 'm03LYdY1029538;']
    Line: 	Thu, 3 Jan 2008 16:34:39 -0500
    Words ['Thu,', '3', 'Jan', '2008', '16:34:39', '-0500']
    Line: Received: FROM paploo.uhi.ac.uk (app1.prod.collab.uhi.ac.uk [194.35.219.184])
    Words ['Received:', 'FROM', 'paploo.uhi.ac.uk', '(app1.prod.collab.uhi.ac.uk', '[194.35.219.184])']
    Line: 	BY icestorm.mr.itd.umich.edu ID 477D54EA.13F34.26602 ;
    Words ['BY', 'icestorm.mr.itd.umich.edu', 'ID', '477D54EA.13F34.26602', ';']
    Line: 	 3 Jan 2008 16:34:36 -0500
    Words ['3', 'Jan', '2008', '16:34:36', '-0500']
    Line: Received: from paploo.uhi.ac.uk (localhost [127.0.0.1])
    Words ['Received:', 'from', 'paploo.uhi.ac.uk', '(localhost', '[127.0.0.1])']
    Line: 	by paploo.uhi.ac.uk (Postfix) with ESMTP id CC710ADC79;
    Words ['by', 'paploo.uhi.ac.uk', '(Postfix)', 'with', 'ESMTP', 'id', 'CC710ADC79;']
    Line: 	Thu,  3 Jan 2008 21:34:29 +0000 (GMT)
    Words ['Thu,', '3', 'Jan', '2008', '21:34:29', '+0000', '(GMT)']
    Line: Message-ID: <200801032133.m03LX3gG005191@nakamura.uits.iupui.edu>
    Words ['Message-ID:', '<200801032133.m03LX3gG005191@nakamura.uits.iupui.edu>']
    Line: Mime-Version: 1.0
    Words ['Mime-Version:', '1.0']
    Line: Content-Transfer-Encoding: 7bit
    Words ['Content-Transfer-Encoding:', '7bit']
    Line: Received: from prod.collab.uhi.ac.uk ([194.35.219.182])
    Words ['Received:', 'from', 'prod.collab.uhi.ac.uk', '([194.35.219.182])']
    Line:           by paploo.uhi.ac.uk (JAMES SMTP Server 2.1.3) with SMTP ID 611
    Words ['by', 'paploo.uhi.ac.uk', '(JAMES', 'SMTP', 'Server', '2.1.3)', 'with', 'SMTP', 'ID', '611']
    Line:           for <source@collab.sakaiproject.org>;
    Words ['for', '<source@collab.sakaiproject.org>;']
    Line:           Thu, 3 Jan 2008 21:34:08 +0000 (GMT)
    Words ['Thu,', '3', 'Jan', '2008', '21:34:08', '+0000', '(GMT)']
    Line: Received: from nakamura.uits.iupui.edu (nakamura.uits.iupui.edu [134.68.220.122])
    Words ['Received:', 'from', 'nakamura.uits.iupui.edu', '(nakamura.uits.iupui.edu', '[134.68.220.122])']
    Line: 	by shmi.uhi.ac.uk (Postfix) with ESMTP id 43C4242B55
    Words ['by', 'shmi.uhi.ac.uk', '(Postfix)', 'with', 'ESMTP', 'id', '43C4242B55']
    Line: 	for <source@collab.sakaiproject.org>; Thu,  3 Jan 2008 21:34:12 +0000 (GMT)
    Words ['for', '<source@collab.sakaiproject.org>;', 'Thu,', '3', 'Jan', '2008', '21:34:12', '+0000', '(GMT)']
    Line: Received: from nakamura.uits.iupui.edu (localhost [127.0.0.1])
    Words ['Received:', 'from', 'nakamura.uits.iupui.edu', '(localhost', '[127.0.0.1])']
    Line: 	by nakamura.uits.iupui.edu (8.12.11.20060308/8.12.11) with ESMTP id m03LX3Vb005193
    Words ['by', 'nakamura.uits.iupui.edu', '(8.12.11.20060308/8.12.11)', 'with', 'ESMTP', 'id', 'm03LX3Vb005193']
    Line: 	for <source@collab.sakaiproject.org>; Thu, 3 Jan 2008 16:33:03 -0500
    Words ['for', '<source@collab.sakaiproject.org>;', 'Thu,', '3', 'Jan', '2008', '16:33:03', '-0500']
    Line: Received: (from apache@localhost)
    Words ['Received:', '(from', 'apache@localhost)']
    Line: 	by nakamura.uits.iupui.edu (8.12.11.20060308/8.12.11/Submit) id m03LX3gG005191
    Words ['by', 'nakamura.uits.iupui.edu', '(8.12.11.20060308/8.12.11/Submit)', 'id', 'm03LX3gG005191']
    Line: 	for source@collab.sakaiproject.org; Thu, 3 Jan 2008 16:33:03 -0500
    Words ['for', 'source@collab.sakaiproject.org;', 'Thu,', '3', 'Jan', '2008', '16:33:03', '-0500']
    Line: Date: Thu, 3 Jan 2008 16:33:03 -0500
    Words ['Date:', 'Thu,', '3', 'Jan', '2008', '16:33:03', '-0500']
    Line: X-Authentication-Warning: nakamura.uits.iupui.edu: apache set sender to cwen@iupui.edu using -f
    Words ['X-Authentication-Warning:', 'nakamura.uits.iupui.edu:', 'apache', 'set', 'sender', 'to', 'cwen@iupui.edu', 'using', '-f']
    Line: To: source@collab.sakaiproject.org
    Words ['To:', 'source@collab.sakaiproject.org']
    Line: From: cwen@iupui.edu
    Words ['From:', 'cwen@iupui.edu']
    Line: Subject: [sakai] svn commit: r39744 - oncourse/branches/oncourse_OPC_122007
    Words ['Subject:', '[sakai]', 'svn', 'commit:', 'r39744', '-', 'oncourse/branches/oncourse_OPC_122007']
    Line: X-Content-Type-Outer-Envelope: text/plain; charset=UTF-8
    Words ['X-Content-Type-Outer-Envelope:', 'text/plain;', 'charset=UTF-8']
    Line: X-Content-Type-Message-Body: text/plain; charset=UTF-8
    Words ['X-Content-Type-Message-Body:', 'text/plain;', 'charset=UTF-8']
    Line: Content-Type: text/plain; charset=UTF-8
    Words ['Content-Type:', 'text/plain;', 'charset=UTF-8']
    Line: X-DSPAM-Result: Innocent
    Words ['X-DSPAM-Result:', 'Innocent']
    Line: X-DSPAM-Processed: Thu Jan  3 16:34:40 2008
    Words ['X-DSPAM-Processed:', 'Thu', 'Jan', '3', '16:34:40', '2008']
    Line: X-DSPAM-Confidence: 0.9846
    Words ['X-DSPAM-Confidence:', '0.9846']
    Line: X-DSPAM-Probability: 0.0000
    Words ['X-DSPAM-Probability:', '0.0000']
    Line: 
    Words []
    Line: Details: http://source.sakaiproject.org/viewsvn/?view=rev&rev=39744
    Words ['Details:', 'http://source.sakaiproject.org/viewsvn/?view=rev&rev=39744']
    Line: 
    Words []
    Line: Author: cwen@iupui.edu
    Words ['Author:', 'cwen@iupui.edu']
    Line: Date: 2008-01-03 16:33:02 -0500 (Thu, 03 Jan 2008)
    Words ['Date:', '2008-01-03', '16:33:02', '-0500', '(Thu,', '03', 'Jan', '2008)']
    Line: New Revision: 39744
    Words ['New', 'Revision:', '39744']
    Line: 
    Words []
    Line: Modified:
    Words ['Modified:']
    Line: oncourse/branches/oncourse_OPC_122007/
    Words ['oncourse/branches/oncourse_OPC_122007/']
    Line: oncourse/branches/oncourse_OPC_122007/.externals
    Words ['oncourse/branches/oncourse_OPC_122007/.externals']
    Line: Log:
    Words ['Log:']
    Line: update external for GB.
    Words ['update', 'external', 'for', 'GB.']
    Line: 
    Words []
    Line: ----------------------
    Words ['----------------------']
    Line: This automatic notification message was sent by Sakai Collab (https://collab.sakaiproject.org/portal) from the Source site.
    Words ['This', 'automatic', 'notification', 'message', 'was', 'sent', 'by', 'Sakai', 'Collab', '(https://collab.sakaiproject.org/portal)', 'from', 'the', 'Source', 'site.']
    Line: You can modify how you receive notifications at My Workspace > Preferences.
    Words ['You', 'can', 'modify', 'how', 'you', 'receive', 'notifications', 'at', 'My', 'Workspace', '>', 'Preferences.']
    Line: 
    Words []
    Line: 
    Words []
    Line: 
    Words []
    Line: From cwen@iupui.edu Thu Jan  3 16:29:07 2008
    Words ['From', 'cwen@iupui.edu', 'Thu', 'Jan', '3', '16:29:07', '2008']
    Line: Return-Path: <postmaster@collab.sakaiproject.org>
    Words ['Return-Path:', '<postmaster@collab.sakaiproject.org>']
    Line: Received: from murder (mail.umich.edu [141.211.14.46])
    Words ['Received:', 'from', 'murder', '(mail.umich.edu', '[141.211.14.46])']
    Line: 	 by frankenstein.mail.umich.edu (Cyrus v2.3.8) with LMTPA;
    Words ['by', 'frankenstein.mail.umich.edu', '(Cyrus', 'v2.3.8)', 'with', 'LMTPA;']
    Line: 	 Thu, 03 Jan 2008 16:29:07 -0500
    Words ['Thu,', '03', 'Jan', '2008', '16:29:07', '-0500']
    Line: X-Sieve: CMU Sieve 2.3
    Words ['X-Sieve:', 'CMU', 'Sieve', '2.3']
    Line: Received: from murder ([unix socket])
    Words ['Received:', 'from', 'murder', '([unix', 'socket])']
    Line: 	 by mail.umich.edu (Cyrus v2.2.12) with LMTPA;
    Words ['by', 'mail.umich.edu', '(Cyrus', 'v2.2.12)', 'with', 'LMTPA;']
    Line: 	 Thu, 03 Jan 2008 16:29:07 -0500
    Words ['Thu,', '03', 'Jan', '2008', '16:29:07', '-0500']
    Line: Received: from galaxyquest.mr.itd.umich.edu (galaxyquest.mr.itd.umich.edu [141.211.93.145])
    Words ['Received:', 'from', 'galaxyquest.mr.itd.umich.edu', '(galaxyquest.mr.itd.umich.edu', '[141.211.93.145])']
    Line: 	by fan.mail.umich.edu () with ESMTP id m03LT6uw027749;
    Words ['by', 'fan.mail.umich.edu', '()', 'with', 'ESMTP', 'id', 'm03LT6uw027749;']
    Line: 	Thu, 3 Jan 2008 16:29:06 -0500
    Words ['Thu,', '3', 'Jan', '2008', '16:29:06', '-0500']
    Line: Received: FROM paploo.uhi.ac.uk (app1.prod.collab.uhi.ac.uk [194.35.219.184])
    Words ['Received:', 'FROM', 'paploo.uhi.ac.uk', '(app1.prod.collab.uhi.ac.uk', '[194.35.219.184])']
    Line: 	BY galaxyquest.mr.itd.umich.edu ID 477D5397.E161D.20326 ;
    Words ['BY', 'galaxyquest.mr.itd.umich.edu', 'ID', '477D5397.E161D.20326', ';']
    Line: 	 3 Jan 2008 16:28:58 -0500
    Words ['3', 'Jan', '2008', '16:28:58', '-0500']
    Line: Received: from paploo.uhi.ac.uk (localhost [127.0.0.1])
    Words ['Received:', 'from', 'paploo.uhi.ac.uk', '(localhost', '[127.0.0.1])']
    Line: 	by paploo.uhi.ac.uk (Postfix) with ESMTP id DEC65ADC79;
    Words ['by', 'paploo.uhi.ac.uk', '(Postfix)', 'with', 'ESMTP', 'id', 'DEC65ADC79;']
    Line: 	Thu,  3 Jan 2008 21:28:52 +0000 (GMT)
    Words ['Thu,', '3', 'Jan', '2008', '21:28:52', '+0000', '(GMT)']
    Line: Message-ID: <200801032127.m03LRUqH005177@nakamura.uits.iupui.edu>
    Words ['Message-ID:', '<200801032127.m03LRUqH005177@nakamura.uits.iupui.edu>']
    Line: Mime-Version: 1.0
    Words ['Mime-Version:', '1.0']
    Line: Content-Transfer-Encoding: 7bit
    Words ['Content-Transfer-Encoding:', '7bit']
    Line: Received: from prod.collab.uhi.ac.uk ([194.35.219.182])
    Words ['Received:', 'from', 'prod.collab.uhi.ac.uk', '([194.35.219.182])']
    Line:           by paploo.uhi.ac.uk (JAMES SMTP Server 2.1.3) with SMTP ID 917
    Words ['by', 'paploo.uhi.ac.uk', '(JAMES', 'SMTP', 'Server', '2.1.3)', 'with', 'SMTP', 'ID', '917']
    Line:           for <source@collab.sakaiproject.org>;
    Words ['for', '<source@collab.sakaiproject.org>;']
    Line:           Thu, 3 Jan 2008 21:28:39 +0000 (GMT)
    Words ['Thu,', '3', 'Jan', '2008', '21:28:39', '+0000', '(GMT)']
    Line: Received: from nakamura.uits.iupui.edu (nakamura.uits.iupui.edu [134.68.220.122])
    Words ['Received:', 'from', 'nakamura.uits.iupui.edu', '(nakamura.uits.iupui.edu', '[134.68.220.122])']
    Line: 	by shmi.uhi.ac.uk (Postfix) with ESMTP id 1FBB042B30
    Words ['by', 'shmi.uhi.ac.uk', '(Postfix)', 'with', 'ESMTP', 'id', '1FBB042B30']
    Line: 	for <source@collab.sakaiproject.org>; Thu,  3 Jan 2008 21:28:38 +0000 (GMT)
    Words ['for', '<source@collab.sakaiproject.org>;', 'Thu,', '3', 'Jan', '2008', '21:28:38', '+0000', '(GMT)']
    Line: Received: from nakamura.uits.iupui.edu (localhost [127.0.0.1])
    Words ['Received:', 'from', 'nakamura.uits.iupui.edu', '(localhost', '[127.0.0.1])']
    Line: 	by nakamura.uits.iupui.edu (8.12.11.20060308/8.12.11) with ESMTP id m03LRUk4005179
    Words ['by', 'nakamura.uits.iupui.edu', '(8.12.11.20060308/8.12.11)', 'with', 'ESMTP', 'id', 'm03LRUk4005179']
    Line: 	for <source@collab.sakaiproject.org>; Thu, 3 Jan 2008 16:27:30 -0500
    Words ['for', '<source@collab.sakaiproject.org>;', 'Thu,', '3', 'Jan', '2008', '16:27:30', '-0500']
    Line: Received: (from apache@localhost)
    Words ['Received:', '(from', 'apache@localhost)']
    Line: 	by nakamura.uits.iupui.edu (8.12.11.20060308/8.12.11/Submit) id m03LRUqH005177
    Words ['by', 'nakamura.uits.iupui.edu', '(8.12.11.20060308/8.12.11/Submit)', 'id', 'm03LRUqH005177']
    Line: 	for source@collab.sakaiproject.org; Thu, 3 Jan 2008 16:27:30 -0500
    Words ['for', 'source@collab.sakaiproject.org;', 'Thu,', '3', 'Jan', '2008', '16:27:30', '-0500']
    Line: Date: Thu, 3 Jan 2008 16:27:30 -0500
    Words ['Date:', 'Thu,', '3', 'Jan', '2008', '16:27:30', '-0500']
    Line: X-Authentication-Warning: nakamura.uits.iupui.edu: apache set sender to cwen@iupui.edu using -f
    Words ['X-Authentication-Warning:', 'nakamura.uits.iupui.edu:', 'apache', 'set', 'sender', 'to', 'cwen@iupui.edu', 'using', '-f']
    Line: To: source@collab.sakaiproject.org
    Words ['To:', 'source@collab.sakaiproject.org']
    Line: From: cwen@iupui.edu
    Words ['From:', 'cwen@iupui.edu']
    Line: Subject: [sakai] svn commit: r39743 - gradebook/branches/oncourse_2-4-2/app/ui/src/java/org/sakaiproject/tool/gradebook/ui
    Words ['Subject:', '[sakai]', 'svn', 'commit:', 'r39743', '-', 'gradebook/branches/oncourse_2-4-2/app/ui/src/java/org/sakaiproject/tool/gradebook/ui']
    Line: X-Content-Type-Outer-Envelope: text/plain; charset=UTF-8
    Words ['X-Content-Type-Outer-Envelope:', 'text/plain;', 'charset=UTF-8']
    Line: X-Content-Type-Message-Body: text/plain; charset=UTF-8
    Words ['X-Content-Type-Message-Body:', 'text/plain;', 'charset=UTF-8']
    Line: Content-Type: text/plain; charset=UTF-8
    Words ['Content-Type:', 'text/plain;', 'charset=UTF-8']
    Line: X-DSPAM-Result: Innocent
    Words ['X-DSPAM-Result:', 'Innocent']
    Line: X-DSPAM-Processed: Thu Jan  3 16:29:07 2008
    Words ['X-DSPAM-Processed:', 'Thu', 'Jan', '3', '16:29:07', '2008']
    Line: X-DSPAM-Confidence: 0.8509
    Words ['X-DSPAM-Confidence:', '0.8509']
    Line: X-DSPAM-Probability: 0.0000
    Words ['X-DSPAM-Probability:', '0.0000']
    Line: 
    Words []
    Line: Details: http://source.sakaiproject.org/viewsvn/?view=rev&rev=39743
    Words ['Details:', 'http://source.sakaiproject.org/viewsvn/?view=rev&rev=39743']
    Line: 
    Words []
    Line: Author: cwen@iupui.edu
    Words ['Author:', 'cwen@iupui.edu']
    Line: Date: 2008-01-03 16:27:29 -0500 (Thu, 03 Jan 2008)
    Words ['Date:', '2008-01-03', '16:27:29', '-0500', '(Thu,', '03', 'Jan', '2008)']
    Line: New Revision: 39743
    Words ['New', 'Revision:', '39743']
    Line: 
    Words []
    Line: Modified:
    Words ['Modified:']
    Line: gradebook/branches/oncourse_2-4-2/app/ui/src/java/org/sakaiproject/tool/gradebook/ui/RosterBean.java
    Words ['gradebook/branches/oncourse_2-4-2/app/ui/src/java/org/sakaiproject/tool/gradebook/ui/RosterBean.java']
    Line: Log:
    Words ['Log:']
    Line: svn merge -c 39403 https://source.sakaiproject.org/svn/gradebook/trunk
    Words ['svn', 'merge', '-c', '39403', 'https://source.sakaiproject.org/svn/gradebook/trunk']
    Line: U    app/ui/src/java/org/sakaiproject/tool/gradebook/ui/RosterBean.java
    Words ['U', 'app/ui/src/java/org/sakaiproject/tool/gradebook/ui/RosterBean.java']
    Line: 
    Words []
    Line: svn log -r 39403 https://source.sakaiproject.org/svn/gradebook/trunk
    Words ['svn', 'log', '-r', '39403', 'https://source.sakaiproject.org/svn/gradebook/trunk']
    Line: ------------------------------------------------------------------------
    Words ['------------------------------------------------------------------------']
    Line: r39403 | wagnermr@iupui.edu | 2007-12-17 17:11:08 -0500 (Mon, 17 Dec 2007) | 3 lines
    Words ['r39403', '|', 'wagnermr@iupui.edu', '|', '2007-12-17', '17:11:08', '-0500', '(Mon,', '17', 'Dec', '2007)', '|', '3', 'lines']
    Line: 
    Words []
    Line: SAK-12504
    Words ['SAK-12504']
    Line: http://jira.sakaiproject.org/jira/browse/SAK-12504
    Words ['http://jira.sakaiproject.org/jira/browse/SAK-12504']
    Line: Viewing "All Grades" page as a TA with grader permissions causes stack trace
    Words ['Viewing', '"All', 'Grades"', 'page', 'as', 'a', 'TA', 'with', 'grader', 'permissions', 'causes', 'stack', 'trace']
    Line: ------------------------------------------------------------------------
    Words ['------------------------------------------------------------------------']
    Line: 
    Words []
    Line: 
    Words []
    Line: ----------------------
    Words ['----------------------']
    Line: This automatic notification message was sent by Sakai Collab (https://collab.sakaiproject.org/portal) from the Source site.
    Words ['This', 'automatic', 'notification', 'message', 'was', 'sent', 'by', 'Sakai', 'Collab', '(https://collab.sakaiproject.org/portal)', 'from', 'the', 'Source', 'site.']
    Line: You can modify how you receive notifications at My Workspace > Preferences.
    Words ['You', 'can', 'modify', 'how', 'you', 'receive', 'notifications', 'at', 'My', 'Workspace', '>', 'Preferences.']
    Line: 
    Words []
    Line: 
    Words []
    Line: 
    Words []
    Line: From cwen@iupui.edu Thu Jan  3 16:23:48 2008
    Words ['From', 'cwen@iupui.edu', 'Thu', 'Jan', '3', '16:23:48', '2008']
    Line: Return-Path: <postmaster@collab.sakaiproject.org>
    Words ['Return-Path:', '<postmaster@collab.sakaiproject.org>']
    Line: Received: from murder (mail.umich.edu [141.211.14.91])
    Words ['Received:', 'from', 'murder', '(mail.umich.edu', '[141.211.14.91])']
    Line: 	 by frankenstein.mail.umich.edu (Cyrus v2.3.8) with LMTPA;
    Words ['by', 'frankenstein.mail.umich.edu', '(Cyrus', 'v2.3.8)', 'with', 'LMTPA;']
    Line: 	 Thu, 03 Jan 2008 16:23:48 -0500
    Words ['Thu,', '03', 'Jan', '2008', '16:23:48', '-0500']
    Line: X-Sieve: CMU Sieve 2.3
    Words ['X-Sieve:', 'CMU', 'Sieve', '2.3']
    Line: Received: from murder ([unix socket])
    Words ['Received:', 'from', 'murder', '([unix', 'socket])']
    Line: 	 by mail.umich.edu (Cyrus v2.2.12) with LMTPA;
    Words ['by', 'mail.umich.edu', '(Cyrus', 'v2.2.12)', 'with', 'LMTPA;']
    Line: 	 Thu, 03 Jan 2008 16:23:48 -0500
    Words ['Thu,', '03', 'Jan', '2008', '16:23:48', '-0500']
    Line: Received: from salemslot.mr.itd.umich.edu (salemslot.mr.itd.umich.edu [141.211.14.58])
    Words ['Received:', 'from', 'salemslot.mr.itd.umich.edu', '(salemslot.mr.itd.umich.edu', '[141.211.14.58])']
    Line: 	by jacknife.mail.umich.edu () with ESMTP id m03LNlf0002115;
    Words ['by', 'jacknife.mail.umich.edu', '()', 'with', 'ESMTP', 'id', 'm03LNlf0002115;']
    Line: 	Thu, 3 Jan 2008 16:23:47 -0500
    Words ['Thu,', '3', 'Jan', '2008', '16:23:47', '-0500']
    Line: Received: FROM paploo.uhi.ac.uk (app1.prod.collab.uhi.ac.uk [194.35.219.184])
    Words ['Received:', 'FROM', 'paploo.uhi.ac.uk', '(app1.prod.collab.uhi.ac.uk', '[194.35.219.184])']
    Line: 	BY salemslot.mr.itd.umich.edu ID 477D525E.1448.30389 ;
    Words ['BY', 'salemslot.mr.itd.umich.edu', 'ID', '477D525E.1448.30389', ';']
    Line: 	 3 Jan 2008 16:23:44 -0500
    Words ['3', 'Jan', '2008', '16:23:44', '-0500']
    Line: Received: from paploo.uhi.ac.uk (localhost [127.0.0.1])
    Words ['Received:', 'from', 'paploo.uhi.ac.uk', '(localhost', '[127.0.0.1])']
    Line: 	by paploo.uhi.ac.uk (Postfix) with ESMTP id 9D005B9D06;
    Words ['by', 'paploo.uhi.ac.uk', '(Postfix)', 'with', 'ESMTP', 'id', '9D005B9D06;']
    Line: 	Thu,  3 Jan 2008 21:23:38 +0000 (GMT)
    Words ['Thu,', '3', 'Jan', '2008', '21:23:38', '+0000', '(GMT)']
    Line: Message-ID: <200801032122.m03LMFo4005148@nakamura.uits.iupui.edu>
    Words ['Message-ID:', '<200801032122.m03LMFo4005148@nakamura.uits.iupui.edu>']
    Line: Mime-Version: 1.0
    Words ['Mime-Version:', '1.0']
    Line: Content-Transfer-Encoding: 7bit
    Words ['Content-Transfer-Encoding:', '7bit']
    Line: Received: from prod.collab.uhi.ac.uk ([194.35.219.182])
    Words ['Received:', 'from', 'prod.collab.uhi.ac.uk', '([194.35.219.182])']
    Line:           by paploo.uhi.ac.uk (JAMES SMTP Server 2.1.3) with SMTP ID 6
    Words ['by', 'paploo.uhi.ac.uk', '(JAMES', 'SMTP', 'Server', '2.1.3)', 'with', 'SMTP', 'ID', '6']
    Line:           for <source@collab.sakaiproject.org>;
    Words ['for', '<source@collab.sakaiproject.org>;']
    Line:           Thu, 3 Jan 2008 21:23:24 +0000 (GMT)
    Words ['Thu,', '3', 'Jan', '2008', '21:23:24', '+0000', '(GMT)']
    Line: Received: from nakamura.uits.iupui.edu (nakamura.uits.iupui.edu [134.68.220.122])
    Words ['Received:', 'from', 'nakamura.uits.iupui.edu', '(nakamura.uits.iupui.edu', '[134.68.220.122])']
    Line: 	by shmi.uhi.ac.uk (Postfix) with ESMTP id 3535542B69
    Words ['by', 'shmi.uhi.ac.uk', '(Postfix)', 'with', 'ESMTP', 'id', '3535542B69']
    Line: 	for <source@collab.sakaiproject.org>; Thu,  3 Jan 2008 21:23:24 +0000 (GMT)
    Words ['for', '<source@collab.sakaiproject.org>;', 'Thu,', '3', 'Jan', '2008', '21:23:24', '+0000', '(GMT)']
    Line: Received: from nakamura.uits.iupui.edu (localhost [127.0.0.1])
    Words ['Received:', 'from', 'nakamura.uits.iupui.edu', '(localhost', '[127.0.0.1])']
    Line: 	by nakamura.uits.iupui.edu (8.12.11.20060308/8.12.11) with ESMTP id m03LMFtT005150
    Words ['by', 'nakamura.uits.iupui.edu', '(8.12.11.20060308/8.12.11)', 'with', 'ESMTP', 'id', 'm03LMFtT005150']
    Line: 	for <source@collab.sakaiproject.org>; Thu, 3 Jan 2008 16:22:15 -0500
    Words ['for', '<source@collab.sakaiproject.org>;', 'Thu,', '3', 'Jan', '2008', '16:22:15', '-0500']
    Line: Received: (from apache@localhost)
    Words ['Received:', '(from', 'apache@localhost)']
    Line: 	by nakamura.uits.iupui.edu (8.12.11.20060308/8.12.11/Submit) id m03LMFo4005148
    Words ['by', 'nakamura.uits.iupui.edu', '(8.12.11.20060308/8.12.11/Submit)', 'id', 'm03LMFo4005148']
    Line: 	for source@collab.sakaiproject.org; Thu, 3 Jan 2008 16:22:15 -0500
    Words ['for', 'source@collab.sakaiproject.org;', 'Thu,', '3', 'Jan', '2008', '16:22:15', '-0500']
    Line: Date: Thu, 3 Jan 2008 16:22:15 -0500
    Words ['Date:', 'Thu,', '3', 'Jan', '2008', '16:22:15', '-0500']
    Line: X-Authentication-Warning: nakamura.uits.iupui.edu: apache set sender to cwen@iupui.edu using -f
    Words ['X-Authentication-Warning:', 'nakamura.uits.iupui.edu:', 'apache', 'set', 'sender', 'to', 'cwen@iupui.edu', 'using', '-f']
    Line: To: source@collab.sakaiproject.org
    Words ['To:', 'source@collab.sakaiproject.org']
    Line: From: cwen@iupui.edu
    Words ['From:', 'cwen@iupui.edu']
    Line: Subject: [sakai] svn commit: r39742 - gradebook/branches/oncourse_2-4-2/app/ui/src/java/org/sakaiproject/tool/gradebook/ui
    Words ['Subject:', '[sakai]', 'svn', 'commit:', 'r39742', '-', 'gradebook/branches/oncourse_2-4-2/app/ui/src/java/org/sakaiproject/tool/gradebook/ui']
    Line: X-Content-Type-Outer-Envelope: text/plain; charset=UTF-8
    Words ['X-Content-Type-Outer-Envelope:', 'text/plain;', 'charset=UTF-8']
    Line: X-Content-Type-Message-Body: text/plain; charset=UTF-8
    Words ['X-Content-Type-Message-Body:', 'text/plain;', 'charset=UTF-8']
    Line: Content-Type: text/plain; charset=UTF-8
    Words ['Content-Type:', 'text/plain;', 'charset=UTF-8']
    Line: X-DSPAM-Result: Innocent
    Words ['X-DSPAM-Result:', 'Innocent']
    Line: X-DSPAM-Processed: Thu Jan  3 16:23:48 2008
    Words ['X-DSPAM-Processed:', 'Thu', 'Jan', '3', '16:23:48', '2008']
    Line: X-DSPAM-Confidence: 0.9907
    Words ['X-DSPAM-Confidence:', '0.9907']
    Line: X-DSPAM-Probability: 0.0000
    Words ['X-DSPAM-Probability:', '0.0000']
    Line: 
    Words []
    Line: Details: http://source.sakaiproject.org/viewsvn/?view=rev&rev=39742
    Words ['Details:', 'http://source.sakaiproject.org/viewsvn/?view=rev&rev=39742']
    Line: 
    Words []
    Line: Author: cwen@iupui.edu
    Words ['Author:', 'cwen@iupui.edu']
    Line: Date: 2008-01-03 16:22:14 -0500 (Thu, 03 Jan 2008)
    Words ['Date:', '2008-01-03', '16:22:14', '-0500', '(Thu,', '03', 'Jan', '2008)']
    Line: New Revision: 39742
    Words ['New', 'Revision:', '39742']
    Line: 
    Words []
    Line: Modified:
    Words ['Modified:']
    Line: gradebook/branches/oncourse_2-4-2/app/ui/src/java/org/sakaiproject/tool/gradebook/ui/RosterBean.java
    Words ['gradebook/branches/oncourse_2-4-2/app/ui/src/java/org/sakaiproject/tool/gradebook/ui/RosterBean.java']
    Line: Log:
    Words ['Log:']
    Line: svn merge -c 35014 https://source.sakaiproject.org/svn/gradebook/trunk
    Words ['svn', 'merge', '-c', '35014', 'https://source.sakaiproject.org/svn/gradebook/trunk']
    Line: U    app/ui/src/java/org/sakaiproject/tool/gradebook/ui/RosterBean.java
    Words ['U', 'app/ui/src/java/org/sakaiproject/tool/gradebook/ui/RosterBean.java']
    Line: 
    Words []
    Line: svn log -r 35014 https://source.sakaiproject.org/svn/gradebook/trunk
    Words ['svn', 'log', '-r', '35014', 'https://source.sakaiproject.org/svn/gradebook/trunk']
    Line: ------------------------------------------------------------------------
    Words ['------------------------------------------------------------------------']
    Line: r35014 | wagnermr@iupui.edu | 2007-09-12 16:17:59 -0400 (Wed, 12 Sep 2007) | 3 lines
    Words ['r35014', '|', 'wagnermr@iupui.edu', '|', '2007-09-12', '16:17:59', '-0400', '(Wed,', '12', 'Sep', '2007)', '|', '3', 'lines']
    Line: 
    Words []
    Line: SAK-11458
    Words ['SAK-11458']
    Line: http://bugs.sakaiproject.org/jira/browse/SAK-11458
    Words ['http://bugs.sakaiproject.org/jira/browse/SAK-11458']
    Line: Course grade does not appear on "All Grades" page if no categories in gb
    Words ['Course', 'grade', 'does', 'not', 'appear', 'on', '"All', 'Grades"', 'page', 'if', 'no', 'categories', 'in', 'gb']
    Line: ------------------------------------------------------------------------
    Words ['------------------------------------------------------------------------']
    Line: 
    Words []
    Line: 
    Words []
    Line: ----------------------
    Words ['----------------------']
    Line: This automatic notification message was sent by Sakai Collab (https://collab.sakaiproject.org/portal) from the Source site.
    Words ['This', 'automatic', 'notification', 'message', 'was', 'sent', 'by', 'Sakai', 'Collab', '(https://collab.sakaiproject.org/portal)', 'from', 'the', 'Source', 'site.']
    Line: You can modify how you receive notifications at My Workspace > Preferences.
    Words ['You', 'can', 'modify', 'how', 'you', 'receive', 'notifications', 'at', 'My', 'Workspace', '>', 'Preferences.']
    Line: 
    Words []



# 2. han = open('mbox-short.txt')

# 3. han = open('mbox-short.txt')

# 4. for line in han:

# 5. line = line.rstrip()

# 6. wds = line.split()

# 7. if wds[0] != 'From':

# 8. continue

# 9. print(wds[2])

# 10. IndexError: list index out of range
```


```python
han = open('mbox-short.txt')
for line in han:
    line = line.rstrip()
    print('Line:',line)
    #skip the blank line
    if line == '':
        print('Skip Blank')
        continue
    wds = line.split()
    print('Words',wds)
    #Guardian Pattern
    if len(wds) < 1:
        continue
    if wds[0] != 'From':
        print('Ignore')
        continue
    print(wds[2])
```

    Line: From stephen.marquard@uct.ac.za Sat Jan  5 09:14:16 2008
    Words ['From', 'stephen.marquard@uct.ac.za', 'Sat', 'Jan', '5', '09:14:16', '2008']
    Sat
    Line: Return-Path: <postmaster@collab.sakaiproject.org>
    Words ['Return-Path:', '<postmaster@collab.sakaiproject.org>']
    Ignore
    Line: Received: from murder (mail.umich.edu [141.211.14.90])
    Words ['Received:', 'from', 'murder', '(mail.umich.edu', '[141.211.14.90])']
    Ignore
    Line: 	 by frankenstein.mail.umich.edu (Cyrus v2.3.8) with LMTPA;
    Words ['by', 'frankenstein.mail.umich.edu', '(Cyrus', 'v2.3.8)', 'with', 'LMTPA;']
    Ignore
    Line: 	 Sat, 05 Jan 2008 09:14:16 -0500
    Words ['Sat,', '05', 'Jan', '2008', '09:14:16', '-0500']
    Ignore
    Line: X-Sieve: CMU Sieve 2.3
    Words ['X-Sieve:', 'CMU', 'Sieve', '2.3']
    Ignore
    Line: Received: from murder ([unix socket])
    Words ['Received:', 'from', 'murder', '([unix', 'socket])']
    Ignore
    Line: 	 by mail.umich.edu (Cyrus v2.2.12) with LMTPA;
    Words ['by', 'mail.umich.edu', '(Cyrus', 'v2.2.12)', 'with', 'LMTPA;']
    Ignore
    Line: 	 Sat, 05 Jan 2008 09:14:16 -0500
    Words ['Sat,', '05', 'Jan', '2008', '09:14:16', '-0500']
    Ignore
    Line: Received: from holes.mr.itd.umich.edu (holes.mr.itd.umich.edu [141.211.14.79])
    Words ['Received:', 'from', 'holes.mr.itd.umich.edu', '(holes.mr.itd.umich.edu', '[141.211.14.79])']
    Ignore
    Line: 	by flawless.mail.umich.edu () with ESMTP id m05EEFR1013674;
    Words ['by', 'flawless.mail.umich.edu', '()', 'with', 'ESMTP', 'id', 'm05EEFR1013674;']
    Ignore
    Line: 	Sat, 5 Jan 2008 09:14:15 -0500
    Words ['Sat,', '5', 'Jan', '2008', '09:14:15', '-0500']
    Ignore
    Line: Received: FROM paploo.uhi.ac.uk (app1.prod.collab.uhi.ac.uk [194.35.219.184])
    Words ['Received:', 'FROM', 'paploo.uhi.ac.uk', '(app1.prod.collab.uhi.ac.uk', '[194.35.219.184])']
    Ignore
    Line: 	BY holes.mr.itd.umich.edu ID 477F90B0.2DB2F.12494 ;
    Words ['BY', 'holes.mr.itd.umich.edu', 'ID', '477F90B0.2DB2F.12494', ';']
    Ignore
    Line: 	 5 Jan 2008 09:14:10 -0500
    Words ['5', 'Jan', '2008', '09:14:10', '-0500']
    Ignore
    Line: Received: from paploo.uhi.ac.uk (localhost [127.0.0.1])
    Words ['Received:', 'from', 'paploo.uhi.ac.uk', '(localhost', '[127.0.0.1])']
    Ignore
    Line: 	by paploo.uhi.ac.uk (Postfix) with ESMTP id 5F919BC2F2;
    Words ['by', 'paploo.uhi.ac.uk', '(Postfix)', 'with', 'ESMTP', 'id', '5F919BC2F2;']
    Ignore
    Line: 	Sat,  5 Jan 2008 14:10:05 +0000 (GMT)
    Words ['Sat,', '5', 'Jan', '2008', '14:10:05', '+0000', '(GMT)']
    Ignore
    Line: Message-ID: <200801051412.m05ECIaH010327@nakamura.uits.iupui.edu>
    Words ['Message-ID:', '<200801051412.m05ECIaH010327@nakamura.uits.iupui.edu>']
    Ignore
    Line: Mime-Version: 1.0
    Words ['Mime-Version:', '1.0']
    Ignore
    Line: Content-Transfer-Encoding: 7bit
    Words ['Content-Transfer-Encoding:', '7bit']
    Ignore
    Line: Received: from prod.collab.uhi.ac.uk ([194.35.219.182])
    Words ['Received:', 'from', 'prod.collab.uhi.ac.uk', '([194.35.219.182])']
    Ignore
    Line:           by paploo.uhi.ac.uk (JAMES SMTP Server 2.1.3) with SMTP ID 899
    Words ['by', 'paploo.uhi.ac.uk', '(JAMES', 'SMTP', 'Server', '2.1.3)', 'with', 'SMTP', 'ID', '899']
    Ignore
    Line:           for <source@collab.sakaiproject.org>;
    Words ['for', '<source@collab.sakaiproject.org>;']
    Ignore
    Line:           Sat, 5 Jan 2008 14:09:50 +0000 (GMT)
    Words ['Sat,', '5', 'Jan', '2008', '14:09:50', '+0000', '(GMT)']
    Ignore
    Line: Received: from nakamura.uits.iupui.edu (nakamura.uits.iupui.edu [134.68.220.122])
    Words ['Received:', 'from', 'nakamura.uits.iupui.edu', '(nakamura.uits.iupui.edu', '[134.68.220.122])']
    Ignore
    Line: 	by shmi.uhi.ac.uk (Postfix) with ESMTP id A215243002
    Words ['by', 'shmi.uhi.ac.uk', '(Postfix)', 'with', 'ESMTP', 'id', 'A215243002']
    Ignore
    Line: 	for <source@collab.sakaiproject.org>; Sat,  5 Jan 2008 14:13:33 +0000 (GMT)
    Words ['for', '<source@collab.sakaiproject.org>;', 'Sat,', '5', 'Jan', '2008', '14:13:33', '+0000', '(GMT)']
    Ignore
    Line: Received: from nakamura.uits.iupui.edu (localhost [127.0.0.1])
    Words ['Received:', 'from', 'nakamura.uits.iupui.edu', '(localhost', '[127.0.0.1])']
    Ignore
    Line: 	by nakamura.uits.iupui.edu (8.12.11.20060308/8.12.11) with ESMTP id m05ECJVp010329
    Words ['by', 'nakamura.uits.iupui.edu', '(8.12.11.20060308/8.12.11)', 'with', 'ESMTP', 'id', 'm05ECJVp010329']
    Ignore
    Line: 	for <source@collab.sakaiproject.org>; Sat, 5 Jan 2008 09:12:19 -0500
    Words ['for', '<source@collab.sakaiproject.org>;', 'Sat,', '5', 'Jan', '2008', '09:12:19', '-0500']
    Ignore
    Line: Received: (from apache@localhost)
    Words ['Received:', '(from', 'apache@localhost)']
    Ignore
    Line: 	by nakamura.uits.iupui.edu (8.12.11.20060308/8.12.11/Submit) id m05ECIaH010327
    Words ['by', 'nakamura.uits.iupui.edu', '(8.12.11.20060308/8.12.11/Submit)', 'id', 'm05ECIaH010327']
    Ignore
    Line: 	for source@collab.sakaiproject.org; Sat, 5 Jan 2008 09:12:18 -0500
    Words ['for', 'source@collab.sakaiproject.org;', 'Sat,', '5', 'Jan', '2008', '09:12:18', '-0500']
    Ignore
    Line: Date: Sat, 5 Jan 2008 09:12:18 -0500
    Words ['Date:', 'Sat,', '5', 'Jan', '2008', '09:12:18', '-0500']
    Ignore
    Line: X-Authentication-Warning: nakamura.uits.iupui.edu: apache set sender to stephen.marquard@uct.ac.za using -f
    Words ['X-Authentication-Warning:', 'nakamura.uits.iupui.edu:', 'apache', 'set', 'sender', 'to', 'stephen.marquard@uct.ac.za', 'using', '-f']
    Ignore
    Line: To: source@collab.sakaiproject.org
    Words ['To:', 'source@collab.sakaiproject.org']
    Ignore
    Line: From: stephen.marquard@uct.ac.za
    Words ['From:', 'stephen.marquard@uct.ac.za']
    Ignore
    Line: Subject: [sakai] svn commit: r39772 - content/branches/sakai_2-5-x/content-impl/impl/src/java/org/sakaiproject/content/impl
    Words ['Subject:', '[sakai]', 'svn', 'commit:', 'r39772', '-', 'content/branches/sakai_2-5-x/content-impl/impl/src/java/org/sakaiproject/content/impl']
    Ignore
    Line: X-Content-Type-Outer-Envelope: text/plain; charset=UTF-8
    Words ['X-Content-Type-Outer-Envelope:', 'text/plain;', 'charset=UTF-8']
    Ignore
    Line: X-Content-Type-Message-Body: text/plain; charset=UTF-8
    Words ['X-Content-Type-Message-Body:', 'text/plain;', 'charset=UTF-8']
    Ignore
    Line: Content-Type: text/plain; charset=UTF-8
    Words ['Content-Type:', 'text/plain;', 'charset=UTF-8']
    Ignore
    Line: X-DSPAM-Result: Innocent
    Words ['X-DSPAM-Result:', 'Innocent']
    Ignore
    Line: X-DSPAM-Processed: Sat Jan  5 09:14:16 2008
    Words ['X-DSPAM-Processed:', 'Sat', 'Jan', '5', '09:14:16', '2008']
    Ignore
    Line: X-DSPAM-Confidence: 0.8475
    Words ['X-DSPAM-Confidence:', '0.8475']
    Ignore
    Line: X-DSPAM-Probability: 0.0000
    Words ['X-DSPAM-Probability:', '0.0000']
    Ignore
    Line: 
    Skip Blank
    Line: Details: http://source.sakaiproject.org/viewsvn/?view=rev&rev=39772
    Words ['Details:', 'http://source.sakaiproject.org/viewsvn/?view=rev&rev=39772']
    Ignore
    Line: 
    Skip Blank
    Line: Author: stephen.marquard@uct.ac.za
    Words ['Author:', 'stephen.marquard@uct.ac.za']
    Ignore
    Line: Date: 2008-01-05 09:12:07 -0500 (Sat, 05 Jan 2008)
    Words ['Date:', '2008-01-05', '09:12:07', '-0500', '(Sat,', '05', 'Jan', '2008)']
    Ignore
    Line: New Revision: 39772
    Words ['New', 'Revision:', '39772']
    Ignore
    Line: 
    Skip Blank
    Line: Modified:
    Words ['Modified:']
    Ignore
    Line: content/branches/sakai_2-5-x/content-impl/impl/src/java/org/sakaiproject/content/impl/ContentServiceSqlOracle.java
    Words ['content/branches/sakai_2-5-x/content-impl/impl/src/java/org/sakaiproject/content/impl/ContentServiceSqlOracle.java']
    Ignore
    Line: content/branches/sakai_2-5-x/content-impl/impl/src/java/org/sakaiproject/content/impl/DbContentService.java
    Words ['content/branches/sakai_2-5-x/content-impl/impl/src/java/org/sakaiproject/content/impl/DbContentService.java']
    Ignore
    Line: Log:
    Words ['Log:']
    Ignore
    Line: SAK-12501 merge to 2-5-x: r39622, r39624:5, r39632:3 (resolve conflict from differing linebreaks for r39622)
    Words ['SAK-12501', 'merge', 'to', '2-5-x:', 'r39622,', 'r39624:5,', 'r39632:3', '(resolve', 'conflict', 'from', 'differing', 'linebreaks', 'for', 'r39622)']
    Ignore
    Line: 
    Skip Blank
    Line: ----------------------
    Words ['----------------------']
    Ignore
    Line: This automatic notification message was sent by Sakai Collab (https://collab.sakaiproject.org/portal) from the Source site.
    Words ['This', 'automatic', 'notification', 'message', 'was', 'sent', 'by', 'Sakai', 'Collab', '(https://collab.sakaiproject.org/portal)', 'from', 'the', 'Source', 'site.']
    Ignore
    Line: You can modify how you receive notifications at My Workspace > Preferences.
    Words ['You', 'can', 'modify', 'how', 'you', 'receive', 'notifications', 'at', 'My', 'Workspace', '>', 'Preferences.']
    Ignore
    Line: 
    Skip Blank
    Line: 
    Skip Blank
    Line: 
    Skip Blank
    Line: From louis@media.berkeley.edu Fri Jan  4 18:10:48 2008
    Words ['From', 'louis@media.berkeley.edu', 'Fri', 'Jan', '4', '18:10:48', '2008']
    Fri
    Line: Return-Path: <postmaster@collab.sakaiproject.org>
    Words ['Return-Path:', '<postmaster@collab.sakaiproject.org>']
    Ignore
    Line: Received: from murder (mail.umich.edu [141.211.14.97])
    Words ['Received:', 'from', 'murder', '(mail.umich.edu', '[141.211.14.97])']
    Ignore
    Line: 	 by frankenstein.mail.umich.edu (Cyrus v2.3.8) with LMTPA;
    Words ['by', 'frankenstein.mail.umich.edu', '(Cyrus', 'v2.3.8)', 'with', 'LMTPA;']
    Ignore
    Line: 	 Fri, 04 Jan 2008 18:10:48 -0500
    Words ['Fri,', '04', 'Jan', '2008', '18:10:48', '-0500']
    Ignore
    Line: X-Sieve: CMU Sieve 2.3
    Words ['X-Sieve:', 'CMU', 'Sieve', '2.3']
    Ignore
    Line: Received: from murder ([unix socket])
    Words ['Received:', 'from', 'murder', '([unix', 'socket])']
    Ignore
    Line: 	 by mail.umich.edu (Cyrus v2.2.12) with LMTPA;
    Words ['by', 'mail.umich.edu', '(Cyrus', 'v2.2.12)', 'with', 'LMTPA;']
    Ignore
    Line: 	 Fri, 04 Jan 2008 18:10:48 -0500
    Words ['Fri,', '04', 'Jan', '2008', '18:10:48', '-0500']
    Ignore
    Line: Received: from icestorm.mr.itd.umich.edu (icestorm.mr.itd.umich.edu [141.211.93.149])
    Words ['Received:', 'from', 'icestorm.mr.itd.umich.edu', '(icestorm.mr.itd.umich.edu', '[141.211.93.149])']
    Ignore
    Line: 	by sleepers.mail.umich.edu () with ESMTP id m04NAbGa029441;
    Words ['by', 'sleepers.mail.umich.edu', '()', 'with', 'ESMTP', 'id', 'm04NAbGa029441;']
    Ignore
    Line: 	Fri, 4 Jan 2008 18:10:37 -0500
    Words ['Fri,', '4', 'Jan', '2008', '18:10:37', '-0500']
    Ignore
    Line: Received: FROM paploo.uhi.ac.uk (app1.prod.collab.uhi.ac.uk [194.35.219.184])
    Words ['Received:', 'FROM', 'paploo.uhi.ac.uk', '(app1.prod.collab.uhi.ac.uk', '[194.35.219.184])']
    Ignore
    Line: 	BY icestorm.mr.itd.umich.edu ID 477EBCE3.161BB.4320 ;
    Words ['BY', 'icestorm.mr.itd.umich.edu', 'ID', '477EBCE3.161BB.4320', ';']
    Ignore
    Line: 	 4 Jan 2008 18:10:31 -0500
    Words ['4', 'Jan', '2008', '18:10:31', '-0500']
    Ignore
    Line: Received: from paploo.uhi.ac.uk (localhost [127.0.0.1])
    Words ['Received:', 'from', 'paploo.uhi.ac.uk', '(localhost', '[127.0.0.1])']
    Ignore
    Line: 	by paploo.uhi.ac.uk (Postfix) with ESMTP id 07969BB706;
    Words ['by', 'paploo.uhi.ac.uk', '(Postfix)', 'with', 'ESMTP', 'id', '07969BB706;']
    Ignore
    Line: 	Fri,  4 Jan 2008 23:10:33 +0000 (GMT)
    Words ['Fri,', '4', 'Jan', '2008', '23:10:33', '+0000', '(GMT)']
    Ignore
    Line: Message-ID: <200801042308.m04N8v6O008125@nakamura.uits.iupui.edu>
    Words ['Message-ID:', '<200801042308.m04N8v6O008125@nakamura.uits.iupui.edu>']
    Ignore
    Line: Mime-Version: 1.0
    Words ['Mime-Version:', '1.0']
    Ignore
    Line: Content-Transfer-Encoding: 7bit
    Words ['Content-Transfer-Encoding:', '7bit']
    Ignore
    Line: Received: from prod.collab.uhi.ac.uk ([194.35.219.182])
    Words ['Received:', 'from', 'prod.collab.uhi.ac.uk', '([194.35.219.182])']
    Ignore
    Line:           by paploo.uhi.ac.uk (JAMES SMTP Server 2.1.3) with SMTP ID 710
    Words ['by', 'paploo.uhi.ac.uk', '(JAMES', 'SMTP', 'Server', '2.1.3)', 'with', 'SMTP', 'ID', '710']
    Ignore
    Line:           for <source@collab.sakaiproject.org>;
    Words ['for', '<source@collab.sakaiproject.org>;']
    Ignore
    Line:           Fri, 4 Jan 2008 23:10:10 +0000 (GMT)
    Words ['Fri,', '4', 'Jan', '2008', '23:10:10', '+0000', '(GMT)']
    Ignore
    Line: Received: from nakamura.uits.iupui.edu (nakamura.uits.iupui.edu [134.68.220.122])
    Words ['Received:', 'from', 'nakamura.uits.iupui.edu', '(nakamura.uits.iupui.edu', '[134.68.220.122])']
    Ignore
    Line: 	by shmi.uhi.ac.uk (Postfix) with ESMTP id 4BA2F42F57
    Words ['by', 'shmi.uhi.ac.uk', '(Postfix)', 'with', 'ESMTP', 'id', '4BA2F42F57']
    Ignore
    Line: 	for <source@collab.sakaiproject.org>; Fri,  4 Jan 2008 23:10:10 +0000 (GMT)
    Words ['for', '<source@collab.sakaiproject.org>;', 'Fri,', '4', 'Jan', '2008', '23:10:10', '+0000', '(GMT)']
    Ignore
    Line: Received: from nakamura.uits.iupui.edu (localhost [127.0.0.1])
    Words ['Received:', 'from', 'nakamura.uits.iupui.edu', '(localhost', '[127.0.0.1])']
    Ignore
    Line: 	by nakamura.uits.iupui.edu (8.12.11.20060308/8.12.11) with ESMTP id m04N8vHG008127
    Words ['by', 'nakamura.uits.iupui.edu', '(8.12.11.20060308/8.12.11)', 'with', 'ESMTP', 'id', 'm04N8vHG008127']
    Ignore
    Line: 	for <source@collab.sakaiproject.org>; Fri, 4 Jan 2008 18:08:57 -0500
    Words ['for', '<source@collab.sakaiproject.org>;', 'Fri,', '4', 'Jan', '2008', '18:08:57', '-0500']
    Ignore
    Line: Received: (from apache@localhost)
    Words ['Received:', '(from', 'apache@localhost)']
    Ignore
    Line: 	by nakamura.uits.iupui.edu (8.12.11.20060308/8.12.11/Submit) id m04N8v6O008125
    Words ['by', 'nakamura.uits.iupui.edu', '(8.12.11.20060308/8.12.11/Submit)', 'id', 'm04N8v6O008125']
    Ignore
    Line: 	for source@collab.sakaiproject.org; Fri, 4 Jan 2008 18:08:57 -0500
    Words ['for', 'source@collab.sakaiproject.org;', 'Fri,', '4', 'Jan', '2008', '18:08:57', '-0500']
    Ignore
    Line: Date: Fri, 4 Jan 2008 18:08:57 -0500
    Words ['Date:', 'Fri,', '4', 'Jan', '2008', '18:08:57', '-0500']
    Ignore
    Line: X-Authentication-Warning: nakamura.uits.iupui.edu: apache set sender to louis@media.berkeley.edu using -f
    Words ['X-Authentication-Warning:', 'nakamura.uits.iupui.edu:', 'apache', 'set', 'sender', 'to', 'louis@media.berkeley.edu', 'using', '-f']
    Ignore
    Line: To: source@collab.sakaiproject.org
    Words ['To:', 'source@collab.sakaiproject.org']
    Ignore
    Line: From: louis@media.berkeley.edu
    Words ['From:', 'louis@media.berkeley.edu']
    Ignore
    Line: Subject: [sakai] svn commit: r39771 - in bspace/site-manage/sakai_2-4-x/site-manage-tool/tool/src: bundle java/org/sakaiproject/site/tool
    Words ['Subject:', '[sakai]', 'svn', 'commit:', 'r39771', '-', 'in', 'bspace/site-manage/sakai_2-4-x/site-manage-tool/tool/src:', 'bundle', 'java/org/sakaiproject/site/tool']
    Ignore
    Line: X-Content-Type-Outer-Envelope: text/plain; charset=UTF-8
    Words ['X-Content-Type-Outer-Envelope:', 'text/plain;', 'charset=UTF-8']
    Ignore
    Line: X-Content-Type-Message-Body: text/plain; charset=UTF-8
    Words ['X-Content-Type-Message-Body:', 'text/plain;', 'charset=UTF-8']
    Ignore
    Line: Content-Type: text/plain; charset=UTF-8
    Words ['Content-Type:', 'text/plain;', 'charset=UTF-8']
    Ignore
    Line: X-DSPAM-Result: Innocent
    Words ['X-DSPAM-Result:', 'Innocent']
    Ignore
    Line: X-DSPAM-Processed: Fri Jan  4 18:10:48 2008
    Words ['X-DSPAM-Processed:', 'Fri', 'Jan', '4', '18:10:48', '2008']
    Ignore
    Line: X-DSPAM-Confidence: 0.6178
    Words ['X-DSPAM-Confidence:', '0.6178']
    Ignore
    Line: X-DSPAM-Probability: 0.0000
    Words ['X-DSPAM-Probability:', '0.0000']
    Ignore
    Line: 
    Skip Blank
    Line: Details: http://source.sakaiproject.org/viewsvn/?view=rev&rev=39771
    Words ['Details:', 'http://source.sakaiproject.org/viewsvn/?view=rev&rev=39771']
    Ignore
    Line: 
    Skip Blank
    Line: Author: louis@media.berkeley.edu
    Words ['Author:', 'louis@media.berkeley.edu']
    Ignore
    Line: Date: 2008-01-04 18:08:50 -0500 (Fri, 04 Jan 2008)
    Words ['Date:', '2008-01-04', '18:08:50', '-0500', '(Fri,', '04', 'Jan', '2008)']
    Ignore
    Line: New Revision: 39771
    Words ['New', 'Revision:', '39771']
    Ignore
    Line: 
    Skip Blank
    Line: Modified:
    Words ['Modified:']
    Ignore
    Line: bspace/site-manage/sakai_2-4-x/site-manage-tool/tool/src/bundle/sitesetupgeneric.properties
    Words ['bspace/site-manage/sakai_2-4-x/site-manage-tool/tool/src/bundle/sitesetupgeneric.properties']
    Ignore
    Line: bspace/site-manage/sakai_2-4-x/site-manage-tool/tool/src/java/org/sakaiproject/site/tool/SiteAction.java
    Words ['bspace/site-manage/sakai_2-4-x/site-manage-tool/tool/src/java/org/sakaiproject/site/tool/SiteAction.java']
    Ignore
    Line: Log:
    Words ['Log:']
    Ignore
    Line: BSP-1415 New (Guest) user Notification
    Words ['BSP-1415', 'New', '(Guest)', 'user', 'Notification']
    Ignore
    Line: 
    Skip Blank
    Line: ----------------------
    Words ['----------------------']
    Ignore
    Line: This automatic notification message was sent by Sakai Collab (https://collab.sakaiproject.org/portal) from the Source site.
    Words ['This', 'automatic', 'notification', 'message', 'was', 'sent', 'by', 'Sakai', 'Collab', '(https://collab.sakaiproject.org/portal)', 'from', 'the', 'Source', 'site.']
    Ignore
    Line: You can modify how you receive notifications at My Workspace > Preferences.
    Words ['You', 'can', 'modify', 'how', 'you', 'receive', 'notifications', 'at', 'My', 'Workspace', '>', 'Preferences.']
    Ignore
    Line: 
    Skip Blank
    Line: 
    Skip Blank
    Line: 
    Skip Blank
    Line: From zqian@umich.edu Fri Jan  4 16:10:39 2008
    Words ['From', 'zqian@umich.edu', 'Fri', 'Jan', '4', '16:10:39', '2008']
    Fri
    Line: Return-Path: <postmaster@collab.sakaiproject.org>
    Words ['Return-Path:', '<postmaster@collab.sakaiproject.org>']
    Ignore
    Line: Received: from murder (mail.umich.edu [141.211.14.25])
    Words ['Received:', 'from', 'murder', '(mail.umich.edu', '[141.211.14.25])']
    Ignore
    Line: 	 by frankenstein.mail.umich.edu (Cyrus v2.3.8) with LMTPA;
    Words ['by', 'frankenstein.mail.umich.edu', '(Cyrus', 'v2.3.8)', 'with', 'LMTPA;']
    Ignore
    Line: 	 Fri, 04 Jan 2008 16:10:39 -0500
    Words ['Fri,', '04', 'Jan', '2008', '16:10:39', '-0500']
    Ignore
    Line: X-Sieve: CMU Sieve 2.3
    Words ['X-Sieve:', 'CMU', 'Sieve', '2.3']
    Ignore
    Line: Received: from murder ([unix socket])
    Words ['Received:', 'from', 'murder', '([unix', 'socket])']
    Ignore
    Line: 	 by mail.umich.edu (Cyrus v2.2.12) with LMTPA;
    Words ['by', 'mail.umich.edu', '(Cyrus', 'v2.2.12)', 'with', 'LMTPA;']
    Ignore
    Line: 	 Fri, 04 Jan 2008 16:10:39 -0500
    Words ['Fri,', '04', 'Jan', '2008', '16:10:39', '-0500']
    Ignore
    Line: Received: from ghostbusters.mr.itd.umich.edu (ghostbusters.mr.itd.umich.edu [141.211.93.144])
    Words ['Received:', 'from', 'ghostbusters.mr.itd.umich.edu', '(ghostbusters.mr.itd.umich.edu', '[141.211.93.144])']
    Ignore
    Line: 	by panther.mail.umich.edu () with ESMTP id m04LAcZw014275;
    Words ['by', 'panther.mail.umich.edu', '()', 'with', 'ESMTP', 'id', 'm04LAcZw014275;']
    Ignore
    Line: 	Fri, 4 Jan 2008 16:10:38 -0500
    Words ['Fri,', '4', 'Jan', '2008', '16:10:38', '-0500']
    Ignore
    Line: Received: FROM paploo.uhi.ac.uk (app1.prod.collab.uhi.ac.uk [194.35.219.184])
    Words ['Received:', 'FROM', 'paploo.uhi.ac.uk', '(app1.prod.collab.uhi.ac.uk', '[194.35.219.184])']
    Ignore
    Line: 	BY ghostbusters.mr.itd.umich.edu ID 477EA0C6.A0214.25480 ;
    Words ['BY', 'ghostbusters.mr.itd.umich.edu', 'ID', '477EA0C6.A0214.25480', ';']
    Ignore
    Line: 	 4 Jan 2008 16:10:33 -0500
    Words ['4', 'Jan', '2008', '16:10:33', '-0500']
    Ignore
    Line: Received: from paploo.uhi.ac.uk (localhost [127.0.0.1])
    Words ['Received:', 'from', 'paploo.uhi.ac.uk', '(localhost', '[127.0.0.1])']
    Ignore
    Line: 	by paploo.uhi.ac.uk (Postfix) with ESMTP id C48CDBB490;
    Words ['by', 'paploo.uhi.ac.uk', '(Postfix)', 'with', 'ESMTP', 'id', 'C48CDBB490;']
    Ignore
    Line: 	Fri,  4 Jan 2008 21:10:31 +0000 (GMT)
    Words ['Fri,', '4', 'Jan', '2008', '21:10:31', '+0000', '(GMT)']
    Ignore
    Line: Message-ID: <200801042109.m04L92hb007923@nakamura.uits.iupui.edu>
    Words ['Message-ID:', '<200801042109.m04L92hb007923@nakamura.uits.iupui.edu>']
    Ignore
    Line: Mime-Version: 1.0
    Words ['Mime-Version:', '1.0']
    Ignore
    Line: Content-Transfer-Encoding: 7bit
    Words ['Content-Transfer-Encoding:', '7bit']
    Ignore
    Line: Received: from prod.collab.uhi.ac.uk ([194.35.219.182])
    Words ['Received:', 'from', 'prod.collab.uhi.ac.uk', '([194.35.219.182])']
    Ignore
    Line:           by paploo.uhi.ac.uk (JAMES SMTP Server 2.1.3) with SMTP ID 906
    Words ['by', 'paploo.uhi.ac.uk', '(JAMES', 'SMTP', 'Server', '2.1.3)', 'with', 'SMTP', 'ID', '906']
    Ignore
    Line:           for <source@collab.sakaiproject.org>;
    Words ['for', '<source@collab.sakaiproject.org>;']
    Ignore
    Line:           Fri, 4 Jan 2008 21:10:18 +0000 (GMT)
    Words ['Fri,', '4', 'Jan', '2008', '21:10:18', '+0000', '(GMT)']
    Ignore
    Line: Received: from nakamura.uits.iupui.edu (nakamura.uits.iupui.edu [134.68.220.122])
    Words ['Received:', 'from', 'nakamura.uits.iupui.edu', '(nakamura.uits.iupui.edu', '[134.68.220.122])']
    Ignore
    Line: 	by shmi.uhi.ac.uk (Postfix) with ESMTP id 7D13042F71
    Words ['by', 'shmi.uhi.ac.uk', '(Postfix)', 'with', 'ESMTP', 'id', '7D13042F71']
    Ignore
    Line: 	for <source@collab.sakaiproject.org>; Fri,  4 Jan 2008 21:10:14 +0000 (GMT)
    Words ['for', '<source@collab.sakaiproject.org>;', 'Fri,', '4', 'Jan', '2008', '21:10:14', '+0000', '(GMT)']
    Ignore
    Line: Received: from nakamura.uits.iupui.edu (localhost [127.0.0.1])
    Words ['Received:', 'from', 'nakamura.uits.iupui.edu', '(localhost', '[127.0.0.1])']
    Ignore
    Line: 	by nakamura.uits.iupui.edu (8.12.11.20060308/8.12.11) with ESMTP id m04L927E007925
    Words ['by', 'nakamura.uits.iupui.edu', '(8.12.11.20060308/8.12.11)', 'with', 'ESMTP', 'id', 'm04L927E007925']
    Ignore
    Line: 	for <source@collab.sakaiproject.org>; Fri, 4 Jan 2008 16:09:02 -0500
    Words ['for', '<source@collab.sakaiproject.org>;', 'Fri,', '4', 'Jan', '2008', '16:09:02', '-0500']
    Ignore
    Line: Received: (from apache@localhost)
    Words ['Received:', '(from', 'apache@localhost)']
    Ignore
    Line: 	by nakamura.uits.iupui.edu (8.12.11.20060308/8.12.11/Submit) id m04L92hb007923
    Words ['by', 'nakamura.uits.iupui.edu', '(8.12.11.20060308/8.12.11/Submit)', 'id', 'm04L92hb007923']
    Ignore
    Line: 	for source@collab.sakaiproject.org; Fri, 4 Jan 2008 16:09:02 -0500
    Words ['for', 'source@collab.sakaiproject.org;', 'Fri,', '4', 'Jan', '2008', '16:09:02', '-0500']
    Ignore
    Line: Date: Fri, 4 Jan 2008 16:09:02 -0500
    Words ['Date:', 'Fri,', '4', 'Jan', '2008', '16:09:02', '-0500']
    Ignore
    Line: X-Authentication-Warning: nakamura.uits.iupui.edu: apache set sender to zqian@umich.edu using -f
    Words ['X-Authentication-Warning:', 'nakamura.uits.iupui.edu:', 'apache', 'set', 'sender', 'to', 'zqian@umich.edu', 'using', '-f']
    Ignore
    Line: To: source@collab.sakaiproject.org
    Words ['To:', 'source@collab.sakaiproject.org']
    Ignore
    Line: From: zqian@umich.edu
    Words ['From:', 'zqian@umich.edu']
    Ignore
    Line: Subject: [sakai] svn commit: r39770 - site-manage/branches/sakai_2-5-x/site-manage-tool/tool/src/webapp/vm/sitesetup
    Words ['Subject:', '[sakai]', 'svn', 'commit:', 'r39770', '-', 'site-manage/branches/sakai_2-5-x/site-manage-tool/tool/src/webapp/vm/sitesetup']
    Ignore
    Line: X-Content-Type-Outer-Envelope: text/plain; charset=UTF-8
    Words ['X-Content-Type-Outer-Envelope:', 'text/plain;', 'charset=UTF-8']
    Ignore
    Line: X-Content-Type-Message-Body: text/plain; charset=UTF-8
    Words ['X-Content-Type-Message-Body:', 'text/plain;', 'charset=UTF-8']
    Ignore
    Line: Content-Type: text/plain; charset=UTF-8
    Words ['Content-Type:', 'text/plain;', 'charset=UTF-8']
    Ignore
    Line: X-DSPAM-Result: Innocent
    Words ['X-DSPAM-Result:', 'Innocent']
    Ignore
    Line: X-DSPAM-Processed: Fri Jan  4 16:10:39 2008
    Words ['X-DSPAM-Processed:', 'Fri', 'Jan', '4', '16:10:39', '2008']
    Ignore
    Line: X-DSPAM-Confidence: 0.6961
    Words ['X-DSPAM-Confidence:', '0.6961']
    Ignore
    Line: X-DSPAM-Probability: 0.0000
    Words ['X-DSPAM-Probability:', '0.0000']
    Ignore
    Line: 
    Skip Blank
    Line: Details: http://source.sakaiproject.org/viewsvn/?view=rev&rev=39770
    Words ['Details:', 'http://source.sakaiproject.org/viewsvn/?view=rev&rev=39770']
    Ignore
    Line: 
    Skip Blank
    Line: Author: zqian@umich.edu
    Words ['Author:', 'zqian@umich.edu']
    Ignore
    Line: Date: 2008-01-04 16:09:01 -0500 (Fri, 04 Jan 2008)
    Words ['Date:', '2008-01-04', '16:09:01', '-0500', '(Fri,', '04', 'Jan', '2008)']
    Ignore
    Line: New Revision: 39770
    Words ['New', 'Revision:', '39770']
    Ignore
    Line: 
    Skip Blank
    Line: Modified:
    Words ['Modified:']
    Ignore
    Line: site-manage/branches/sakai_2-5-x/site-manage-tool/tool/src/webapp/vm/sitesetup/chef_site-siteInfo-list.vm
    Words ['site-manage/branches/sakai_2-5-x/site-manage-tool/tool/src/webapp/vm/sitesetup/chef_site-siteInfo-list.vm']
    Ignore
    Line: Log:
    Words ['Log:']
    Ignore
    Line: merge fix to SAK-9996 into 2-5-x branch: svn merge -r 39687:39688 https://source.sakaiproject.org/svn/site-manage/trunk/
    Words ['merge', 'fix', 'to', 'SAK-9996', 'into', '2-5-x', 'branch:', 'svn', 'merge', '-r', '39687:39688', 'https://source.sakaiproject.org/svn/site-manage/trunk/']
    Ignore
    Line: 
    Skip Blank
    Line: ----------------------
    Words ['----------------------']
    Ignore
    Line: This automatic notification message was sent by Sakai Collab (https://collab.sakaiproject.org/portal) from the Source site.
    Words ['This', 'automatic', 'notification', 'message', 'was', 'sent', 'by', 'Sakai', 'Collab', '(https://collab.sakaiproject.org/portal)', 'from', 'the', 'Source', 'site.']
    Ignore
    Line: You can modify how you receive notifications at My Workspace > Preferences.
    Words ['You', 'can', 'modify', 'how', 'you', 'receive', 'notifications', 'at', 'My', 'Workspace', '>', 'Preferences.']
    Ignore
    Line: 
    Skip Blank
    Line: 
    Skip Blank
    Line: 
    Skip Blank
    Line: From rjlowe@iupui.edu Fri Jan  4 15:46:24 2008
    Words ['From', 'rjlowe@iupui.edu', 'Fri', 'Jan', '4', '15:46:24', '2008']
    Fri
    Line: Return-Path: <postmaster@collab.sakaiproject.org>
    Words ['Return-Path:', '<postmaster@collab.sakaiproject.org>']
    Ignore
    Line: Received: from murder (mail.umich.edu [141.211.14.25])
    Words ['Received:', 'from', 'murder', '(mail.umich.edu', '[141.211.14.25])']
    Ignore
    Line: 	 by frankenstein.mail.umich.edu (Cyrus v2.3.8) with LMTPA;
    Words ['by', 'frankenstein.mail.umich.edu', '(Cyrus', 'v2.3.8)', 'with', 'LMTPA;']
    Ignore
    Line: 	 Fri, 04 Jan 2008 15:46:24 -0500
    Words ['Fri,', '04', 'Jan', '2008', '15:46:24', '-0500']
    Ignore
    Line: X-Sieve: CMU Sieve 2.3
    Words ['X-Sieve:', 'CMU', 'Sieve', '2.3']
    Ignore
    Line: Received: from murder ([unix socket])
    Words ['Received:', 'from', 'murder', '([unix', 'socket])']
    Ignore
    Line: 	 by mail.umich.edu (Cyrus v2.2.12) with LMTPA;
    Words ['by', 'mail.umich.edu', '(Cyrus', 'v2.2.12)', 'with', 'LMTPA;']
    Ignore
    Line: 	 Fri, 04 Jan 2008 15:46:24 -0500
    Words ['Fri,', '04', 'Jan', '2008', '15:46:24', '-0500']
    Ignore
    Line: Received: from dreamcatcher.mr.itd.umich.edu (dreamcatcher.mr.itd.umich.edu [141.211.14.43])
    Words ['Received:', 'from', 'dreamcatcher.mr.itd.umich.edu', '(dreamcatcher.mr.itd.umich.edu', '[141.211.14.43])']
    Ignore
    Line: 	by panther.mail.umich.edu () with ESMTP id m04KkNbx032077;
    Words ['by', 'panther.mail.umich.edu', '()', 'with', 'ESMTP', 'id', 'm04KkNbx032077;']
    Ignore
    Line: 	Fri, 4 Jan 2008 15:46:23 -0500
    Words ['Fri,', '4', 'Jan', '2008', '15:46:23', '-0500']
    Ignore
    Line: Received: FROM paploo.uhi.ac.uk (app1.prod.collab.uhi.ac.uk [194.35.219.184])
    Words ['Received:', 'FROM', 'paploo.uhi.ac.uk', '(app1.prod.collab.uhi.ac.uk', '[194.35.219.184])']
    Ignore
    Line: 	BY dreamcatcher.mr.itd.umich.edu ID 477E9B13.2F3BC.22965 ;
    Words ['BY', 'dreamcatcher.mr.itd.umich.edu', 'ID', '477E9B13.2F3BC.22965', ';']
    Ignore
    Line: 	 4 Jan 2008 15:46:13 -0500
    Words ['4', 'Jan', '2008', '15:46:13', '-0500']
    Ignore
    Line: Received: from paploo.uhi.ac.uk (localhost [127.0.0.1])
    Words ['Received:', 'from', 'paploo.uhi.ac.uk', '(localhost', '[127.0.0.1])']
    Ignore
    Line: 	by paploo.uhi.ac.uk (Postfix) with ESMTP id 4AE03BB552;
    Words ['by', 'paploo.uhi.ac.uk', '(Postfix)', 'with', 'ESMTP', 'id', '4AE03BB552;']
    Ignore
    Line: 	Fri,  4 Jan 2008 20:46:13 +0000 (GMT)
    Words ['Fri,', '4', 'Jan', '2008', '20:46:13', '+0000', '(GMT)']
    Ignore
    Line: Message-ID: <200801042044.m04Kiem3007881@nakamura.uits.iupui.edu>
    Words ['Message-ID:', '<200801042044.m04Kiem3007881@nakamura.uits.iupui.edu>']
    Ignore
    Line: Mime-Version: 1.0
    Words ['Mime-Version:', '1.0']
    Ignore
    Line: Content-Transfer-Encoding: 7bit
    Words ['Content-Transfer-Encoding:', '7bit']
    Ignore
    Line: Received: from prod.collab.uhi.ac.uk ([194.35.219.182])
    Words ['Received:', 'from', 'prod.collab.uhi.ac.uk', '([194.35.219.182])']
    Ignore
    Line:           by paploo.uhi.ac.uk (JAMES SMTP Server 2.1.3) with SMTP ID 38
    Words ['by', 'paploo.uhi.ac.uk', '(JAMES', 'SMTP', 'Server', '2.1.3)', 'with', 'SMTP', 'ID', '38']
    Ignore
    Line:           for <source@collab.sakaiproject.org>;
    Words ['for', '<source@collab.sakaiproject.org>;']
    Ignore
    Line:           Fri, 4 Jan 2008 20:45:56 +0000 (GMT)
    Words ['Fri,', '4', 'Jan', '2008', '20:45:56', '+0000', '(GMT)']
    Ignore
    Line: Received: from nakamura.uits.iupui.edu (nakamura.uits.iupui.edu [134.68.220.122])
    Words ['Received:', 'from', 'nakamura.uits.iupui.edu', '(nakamura.uits.iupui.edu', '[134.68.220.122])']
    Ignore
    Line: 	by shmi.uhi.ac.uk (Postfix) with ESMTP id A55D242F57
    Words ['by', 'shmi.uhi.ac.uk', '(Postfix)', 'with', 'ESMTP', 'id', 'A55D242F57']
    Ignore
    Line: 	for <source@collab.sakaiproject.org>; Fri,  4 Jan 2008 20:45:52 +0000 (GMT)
    Words ['for', '<source@collab.sakaiproject.org>;', 'Fri,', '4', 'Jan', '2008', '20:45:52', '+0000', '(GMT)']
    Ignore
    Line: Received: from nakamura.uits.iupui.edu (localhost [127.0.0.1])
    Words ['Received:', 'from', 'nakamura.uits.iupui.edu', '(localhost', '[127.0.0.1])']
    Ignore
    Line: 	by nakamura.uits.iupui.edu (8.12.11.20060308/8.12.11) with ESMTP id m04KieqE007883
    Words ['by', 'nakamura.uits.iupui.edu', '(8.12.11.20060308/8.12.11)', 'with', 'ESMTP', 'id', 'm04KieqE007883']
    Ignore
    Line: 	for <source@collab.sakaiproject.org>; Fri, 4 Jan 2008 15:44:40 -0500
    Words ['for', '<source@collab.sakaiproject.org>;', 'Fri,', '4', 'Jan', '2008', '15:44:40', '-0500']
    Ignore
    Line: Received: (from apache@localhost)
    Words ['Received:', '(from', 'apache@localhost)']
    Ignore
    Line: 	by nakamura.uits.iupui.edu (8.12.11.20060308/8.12.11/Submit) id m04Kiem3007881
    Words ['by', 'nakamura.uits.iupui.edu', '(8.12.11.20060308/8.12.11/Submit)', 'id', 'm04Kiem3007881']
    Ignore
    Line: 	for source@collab.sakaiproject.org; Fri, 4 Jan 2008 15:44:40 -0500
    Words ['for', 'source@collab.sakaiproject.org;', 'Fri,', '4', 'Jan', '2008', '15:44:40', '-0500']
    Ignore
    Line: Date: Fri, 4 Jan 2008 15:44:40 -0500
    Words ['Date:', 'Fri,', '4', 'Jan', '2008', '15:44:40', '-0500']
    Ignore
    Line: X-Authentication-Warning: nakamura.uits.iupui.edu: apache set sender to rjlowe@iupui.edu using -f
    Words ['X-Authentication-Warning:', 'nakamura.uits.iupui.edu:', 'apache', 'set', 'sender', 'to', 'rjlowe@iupui.edu', 'using', '-f']
    Ignore
    Line: To: source@collab.sakaiproject.org
    Words ['To:', 'source@collab.sakaiproject.org']
    Ignore
    Line: From: rjlowe@iupui.edu
    Words ['From:', 'rjlowe@iupui.edu']
    Ignore
    Line: Subject: [sakai] svn commit: r39769 - in gradebook/trunk/app/ui/src: java/org/sakaiproject/tool/gradebook/ui/helpers/beans java/org/sakaiproject/tool/gradebook/ui/helpers/producers webapp/WEB-INF webapp/WEB-INF/bundle
    Words ['Subject:', '[sakai]', 'svn', 'commit:', 'r39769', '-', 'in', 'gradebook/trunk/app/ui/src:', 'java/org/sakaiproject/tool/gradebook/ui/helpers/beans', 'java/org/sakaiproject/tool/gradebook/ui/helpers/producers', 'webapp/WEB-INF', 'webapp/WEB-INF/bundle']
    Ignore
    Line: X-Content-Type-Outer-Envelope: text/plain; charset=UTF-8
    Words ['X-Content-Type-Outer-Envelope:', 'text/plain;', 'charset=UTF-8']
    Ignore
    Line: X-Content-Type-Message-Body: text/plain; charset=UTF-8
    Words ['X-Content-Type-Message-Body:', 'text/plain;', 'charset=UTF-8']
    Ignore
    Line: Content-Type: text/plain; charset=UTF-8
    Words ['Content-Type:', 'text/plain;', 'charset=UTF-8']
    Ignore
    Line: X-DSPAM-Result: Innocent
    Words ['X-DSPAM-Result:', 'Innocent']
    Ignore
    Line: X-DSPAM-Processed: Fri Jan  4 15:46:24 2008
    Words ['X-DSPAM-Processed:', 'Fri', 'Jan', '4', '15:46:24', '2008']
    Ignore
    Line: X-DSPAM-Confidence: 0.7565
    Words ['X-DSPAM-Confidence:', '0.7565']
    Ignore
    Line: X-DSPAM-Probability: 0.0000
    Words ['X-DSPAM-Probability:', '0.0000']
    Ignore
    Line: 
    Skip Blank
    Line: Details: http://source.sakaiproject.org/viewsvn/?view=rev&rev=39769
    Words ['Details:', 'http://source.sakaiproject.org/viewsvn/?view=rev&rev=39769']
    Ignore
    Line: 
    Skip Blank
    Line: Author: rjlowe@iupui.edu
    Words ['Author:', 'rjlowe@iupui.edu']
    Ignore
    Line: Date: 2008-01-04 15:44:39 -0500 (Fri, 04 Jan 2008)
    Words ['Date:', '2008-01-04', '15:44:39', '-0500', '(Fri,', '04', 'Jan', '2008)']
    Ignore
    Line: New Revision: 39769
    Words ['New', 'Revision:', '39769']
    Ignore
    Line: 
    Skip Blank
    Line: Modified:
    Words ['Modified:']
    Ignore
    Line: gradebook/trunk/app/ui/src/java/org/sakaiproject/tool/gradebook/ui/helpers/beans/AssignmentGradeRecordBean.java
    Words ['gradebook/trunk/app/ui/src/java/org/sakaiproject/tool/gradebook/ui/helpers/beans/AssignmentGradeRecordBean.java']
    Ignore
    Line: gradebook/trunk/app/ui/src/java/org/sakaiproject/tool/gradebook/ui/helpers/producers/GradeGradebookItemProducer.java
    Words ['gradebook/trunk/app/ui/src/java/org/sakaiproject/tool/gradebook/ui/helpers/producers/GradeGradebookItemProducer.java']
    Ignore
    Line: gradebook/trunk/app/ui/src/webapp/WEB-INF/applicationContext.xml
    Words ['gradebook/trunk/app/ui/src/webapp/WEB-INF/applicationContext.xml']
    Ignore
    Line: gradebook/trunk/app/ui/src/webapp/WEB-INF/bundle/messages.properties
    Words ['gradebook/trunk/app/ui/src/webapp/WEB-INF/bundle/messages.properties']
    Ignore
    Line: gradebook/trunk/app/ui/src/webapp/WEB-INF/requestContext.xml
    Words ['gradebook/trunk/app/ui/src/webapp/WEB-INF/requestContext.xml']
    Ignore
    Line: Log:
    Words ['Log:']
    Ignore
    Line: SAK-12180 - Fixed errors with grading helper
    Words ['SAK-12180', '-', 'Fixed', 'errors', 'with', 'grading', 'helper']
    Ignore
    Line: 
    Skip Blank
    Line: ----------------------
    Words ['----------------------']
    Ignore
    Line: This automatic notification message was sent by Sakai Collab (https://collab.sakaiproject.org/portal) from the Source site.
    Words ['This', 'automatic', 'notification', 'message', 'was', 'sent', 'by', 'Sakai', 'Collab', '(https://collab.sakaiproject.org/portal)', 'from', 'the', 'Source', 'site.']
    Ignore
    Line: You can modify how you receive notifications at My Workspace > Preferences.
    Words ['You', 'can', 'modify', 'how', 'you', 'receive', 'notifications', 'at', 'My', 'Workspace', '>', 'Preferences.']
    Ignore
    Line: 
    Skip Blank
    Line: 
    Skip Blank
    Line: 
    Skip Blank
    Line: From zqian@umich.edu Fri Jan  4 15:03:18 2008
    Words ['From', 'zqian@umich.edu', 'Fri', 'Jan', '4', '15:03:18', '2008']
    Fri
    Line: Return-Path: <postmaster@collab.sakaiproject.org>
    Words ['Return-Path:', '<postmaster@collab.sakaiproject.org>']
    Ignore
    Line: Received: from murder (mail.umich.edu [141.211.14.46])
    Words ['Received:', 'from', 'murder', '(mail.umich.edu', '[141.211.14.46])']
    Ignore
    Line: 	 by frankenstein.mail.umich.edu (Cyrus v2.3.8) with LMTPA;
    Words ['by', 'frankenstein.mail.umich.edu', '(Cyrus', 'v2.3.8)', 'with', 'LMTPA;']
    Ignore
    Line: 	 Fri, 04 Jan 2008 15:03:18 -0500
    Words ['Fri,', '04', 'Jan', '2008', '15:03:18', '-0500']
    Ignore
    Line: X-Sieve: CMU Sieve 2.3
    Words ['X-Sieve:', 'CMU', 'Sieve', '2.3']
    Ignore
    Line: Received: from murder ([unix socket])
    Words ['Received:', 'from', 'murder', '([unix', 'socket])']
    Ignore
    Line: 	 by mail.umich.edu (Cyrus v2.2.12) with LMTPA;
    Words ['by', 'mail.umich.edu', '(Cyrus', 'v2.2.12)', 'with', 'LMTPA;']
    Ignore
    Line: 	 Fri, 04 Jan 2008 15:03:18 -0500
    Words ['Fri,', '04', 'Jan', '2008', '15:03:18', '-0500']
    Ignore
    Line: Received: from firestarter.mr.itd.umich.edu (firestarter.mr.itd.umich.edu [141.211.14.83])
    Words ['Received:', 'from', 'firestarter.mr.itd.umich.edu', '(firestarter.mr.itd.umich.edu', '[141.211.14.83])']
    Ignore
    Line: 	by fan.mail.umich.edu () with ESMTP id m04K3HGF006563;
    Words ['by', 'fan.mail.umich.edu', '()', 'with', 'ESMTP', 'id', 'm04K3HGF006563;']
    Ignore
    Line: 	Fri, 4 Jan 2008 15:03:17 -0500
    Words ['Fri,', '4', 'Jan', '2008', '15:03:17', '-0500']
    Ignore
    Line: Received: FROM paploo.uhi.ac.uk (app1.prod.collab.uhi.ac.uk [194.35.219.184])
    Words ['Received:', 'FROM', 'paploo.uhi.ac.uk', '(app1.prod.collab.uhi.ac.uk', '[194.35.219.184])']
    Ignore
    Line: 	BY firestarter.mr.itd.umich.edu ID 477E9100.8F7F4.1590 ;
    Words ['BY', 'firestarter.mr.itd.umich.edu', 'ID', '477E9100.8F7F4.1590', ';']
    Ignore
    Line: 	 4 Jan 2008 15:03:15 -0500
    Words ['4', 'Jan', '2008', '15:03:15', '-0500']
    Ignore
    Line: Received: from paploo.uhi.ac.uk (localhost [127.0.0.1])
    Words ['Received:', 'from', 'paploo.uhi.ac.uk', '(localhost', '[127.0.0.1])']
    Ignore
    Line: 	by paploo.uhi.ac.uk (Postfix) with ESMTP id 57770BB477;
    Words ['by', 'paploo.uhi.ac.uk', '(Postfix)', 'with', 'ESMTP', 'id', '57770BB477;']
    Ignore
    Line: 	Fri,  4 Jan 2008 20:03:09 +0000 (GMT)
    Words ['Fri,', '4', 'Jan', '2008', '20:03:09', '+0000', '(GMT)']
    Ignore
    Line: Message-ID: <200801042001.m04K1cO0007738@nakamura.uits.iupui.edu>
    Words ['Message-ID:', '<200801042001.m04K1cO0007738@nakamura.uits.iupui.edu>']
    Ignore
    Line: Mime-Version: 1.0
    Words ['Mime-Version:', '1.0']
    Ignore
    Line: Content-Transfer-Encoding: 7bit
    Words ['Content-Transfer-Encoding:', '7bit']
    Ignore
    Line: Received: from prod.collab.uhi.ac.uk ([194.35.219.182])
    Words ['Received:', 'from', 'prod.collab.uhi.ac.uk', '([194.35.219.182])']
    Ignore
    Line:           by paploo.uhi.ac.uk (JAMES SMTP Server 2.1.3) with SMTP ID 622
    Words ['by', 'paploo.uhi.ac.uk', '(JAMES', 'SMTP', 'Server', '2.1.3)', 'with', 'SMTP', 'ID', '622']
    Ignore
    Line:           for <source@collab.sakaiproject.org>;
    Words ['for', '<source@collab.sakaiproject.org>;']
    Ignore
    Line:           Fri, 4 Jan 2008 20:02:46 +0000 (GMT)
    Words ['Fri,', '4', 'Jan', '2008', '20:02:46', '+0000', '(GMT)']
    Ignore
    Line: Received: from nakamura.uits.iupui.edu (nakamura.uits.iupui.edu [134.68.220.122])
    Words ['Received:', 'from', 'nakamura.uits.iupui.edu', '(nakamura.uits.iupui.edu', '[134.68.220.122])']
    Ignore
    Line: 	by shmi.uhi.ac.uk (Postfix) with ESMTP id AB4D042F4D
    Words ['by', 'shmi.uhi.ac.uk', '(Postfix)', 'with', 'ESMTP', 'id', 'AB4D042F4D']
    Ignore
    Line: 	for <source@collab.sakaiproject.org>; Fri,  4 Jan 2008 20:02:50 +0000 (GMT)
    Words ['for', '<source@collab.sakaiproject.org>;', 'Fri,', '4', 'Jan', '2008', '20:02:50', '+0000', '(GMT)']
    Ignore
    Line: Received: from nakamura.uits.iupui.edu (localhost [127.0.0.1])
    Words ['Received:', 'from', 'nakamura.uits.iupui.edu', '(localhost', '[127.0.0.1])']
    Ignore
    Line: 	by nakamura.uits.iupui.edu (8.12.11.20060308/8.12.11) with ESMTP id m04K1cXv007740
    Words ['by', 'nakamura.uits.iupui.edu', '(8.12.11.20060308/8.12.11)', 'with', 'ESMTP', 'id', 'm04K1cXv007740']
    Ignore
    Line: 	for <source@collab.sakaiproject.org>; Fri, 4 Jan 2008 15:01:38 -0500
    Words ['for', '<source@collab.sakaiproject.org>;', 'Fri,', '4', 'Jan', '2008', '15:01:38', '-0500']
    Ignore
    Line: Received: (from apache@localhost)
    Words ['Received:', '(from', 'apache@localhost)']
    Ignore
    Line: 	by nakamura.uits.iupui.edu (8.12.11.20060308/8.12.11/Submit) id m04K1cO0007738
    Words ['by', 'nakamura.uits.iupui.edu', '(8.12.11.20060308/8.12.11/Submit)', 'id', 'm04K1cO0007738']
    Ignore
    Line: 	for source@collab.sakaiproject.org; Fri, 4 Jan 2008 15:01:38 -0500
    Words ['for', 'source@collab.sakaiproject.org;', 'Fri,', '4', 'Jan', '2008', '15:01:38', '-0500']
    Ignore
    Line: Date: Fri, 4 Jan 2008 15:01:38 -0500
    Words ['Date:', 'Fri,', '4', 'Jan', '2008', '15:01:38', '-0500']
    Ignore
    Line: X-Authentication-Warning: nakamura.uits.iupui.edu: apache set sender to zqian@umich.edu using -f
    Words ['X-Authentication-Warning:', 'nakamura.uits.iupui.edu:', 'apache', 'set', 'sender', 'to', 'zqian@umich.edu', 'using', '-f']
    Ignore
    Line: To: source@collab.sakaiproject.org
    Words ['To:', 'source@collab.sakaiproject.org']
    Ignore
    Line: From: zqian@umich.edu
    Words ['From:', 'zqian@umich.edu']
    Ignore
    Line: Subject: [sakai] svn commit: r39766 - site-manage/branches/sakai_2-4-x/site-manage-tool/tool/src/java/org/sakaiproject/site/tool
    Words ['Subject:', '[sakai]', 'svn', 'commit:', 'r39766', '-', 'site-manage/branches/sakai_2-4-x/site-manage-tool/tool/src/java/org/sakaiproject/site/tool']
    Ignore
    Line: X-Content-Type-Outer-Envelope: text/plain; charset=UTF-8
    Words ['X-Content-Type-Outer-Envelope:', 'text/plain;', 'charset=UTF-8']
    Ignore
    Line: X-Content-Type-Message-Body: text/plain; charset=UTF-8
    Words ['X-Content-Type-Message-Body:', 'text/plain;', 'charset=UTF-8']
    Ignore
    Line: Content-Type: text/plain; charset=UTF-8
    Words ['Content-Type:', 'text/plain;', 'charset=UTF-8']
    Ignore
    Line: X-DSPAM-Result: Innocent
    Words ['X-DSPAM-Result:', 'Innocent']
    Ignore
    Line: X-DSPAM-Processed: Fri Jan  4 15:03:18 2008
    Words ['X-DSPAM-Processed:', 'Fri', 'Jan', '4', '15:03:18', '2008']
    Ignore
    Line: X-DSPAM-Confidence: 0.7626
    Words ['X-DSPAM-Confidence:', '0.7626']
    Ignore
    Line: X-DSPAM-Probability: 0.0000
    Words ['X-DSPAM-Probability:', '0.0000']
    Ignore
    Line: 
    Skip Blank
    Line: Details: http://source.sakaiproject.org/viewsvn/?view=rev&rev=39766
    Words ['Details:', 'http://source.sakaiproject.org/viewsvn/?view=rev&rev=39766']
    Ignore
    Line: 
    Skip Blank
    Line: Author: zqian@umich.edu
    Words ['Author:', 'zqian@umich.edu']
    Ignore
    Line: Date: 2008-01-04 15:01:37 -0500 (Fri, 04 Jan 2008)
    Words ['Date:', '2008-01-04', '15:01:37', '-0500', '(Fri,', '04', 'Jan', '2008)']
    Ignore
    Line: New Revision: 39766
    Words ['New', 'Revision:', '39766']
    Ignore
    Line: 
    Skip Blank
    Line: Modified:
    Words ['Modified:']
    Ignore
    Line: site-manage/branches/sakai_2-4-x/site-manage-tool/tool/src/java/org/sakaiproject/site/tool/SiteAction.java
    Words ['site-manage/branches/sakai_2-4-x/site-manage-tool/tool/src/java/org/sakaiproject/site/tool/SiteAction.java']
    Ignore
    Line: Log:
    Words ['Log:']
    Ignore
    Line: merge fix to SAK-10788 into site-manage 2.4.x branch:
    Words ['merge', 'fix', 'to', 'SAK-10788', 'into', 'site-manage', '2.4.x', 'branch:']
    Ignore
    Line: 
    Skip Blank
    Line: Sakai Source Repository  	#38024  	Wed Nov 07 14:54:46 MST 2007  	zqian@umich.edu  	 Fix to SAK-10788: If a provided id in a couse site is fake or doesn't provide any user information, Site Info appears to be like project site with empty participant list
    Words ['Sakai', 'Source', 'Repository', '#38024', 'Wed', 'Nov', '07', '14:54:46', 'MST', '2007', 'zqian@umich.edu', 'Fix', 'to', 'SAK-10788:', 'If', 'a', 'provided', 'id', 'in', 'a', 'couse', 'site', 'is', 'fake', 'or', "doesn't", 'provide', 'any', 'user', 'information,', 'Site', 'Info', 'appears', 'to', 'be', 'like', 'project', 'site', 'with', 'empty', 'participant', 'list']
    Ignore
    Line: 
    Skip Blank
    Line: Watch for enrollments object being null and concatenate provider ids when there are more than one.
    Words ['Watch', 'for', 'enrollments', 'object', 'being', 'null', 'and', 'concatenate', 'provider', 'ids', 'when', 'there', 'are', 'more', 'than', 'one.']
    Ignore
    Line: Files Changed
    Words ['Files', 'Changed']
    Ignore
    Line: MODIFY /site-manage/trunk/site-manage-tool/tool/src/java/org/sakaiproject/site/tool/SiteAction.java
    Words ['MODIFY', '/site-manage/trunk/site-manage-tool/tool/src/java/org/sakaiproject/site/tool/SiteAction.java']
    Ignore
    Line: 
    Skip Blank
    Line: 
    Skip Blank
    Line: 
    Skip Blank
    Line: 
    Skip Blank
    Line: ----------------------
    Words ['----------------------']
    Ignore
    Line: This automatic notification message was sent by Sakai Collab (https://collab.sakaiproject.org/portal) from the Source site.
    Words ['This', 'automatic', 'notification', 'message', 'was', 'sent', 'by', 'Sakai', 'Collab', '(https://collab.sakaiproject.org/portal)', 'from', 'the', 'Source', 'site.']
    Ignore
    Line: You can modify how you receive notifications at My Workspace > Preferences.
    Words ['You', 'can', 'modify', 'how', 'you', 'receive', 'notifications', 'at', 'My', 'Workspace', '>', 'Preferences.']
    Ignore
    Line: 
    Skip Blank
    Line: 
    Skip Blank
    Line: 
    Skip Blank
    Line: From rjlowe@iupui.edu Fri Jan  4 14:50:18 2008
    Words ['From', 'rjlowe@iupui.edu', 'Fri', 'Jan', '4', '14:50:18', '2008']
    Fri
    Line: Return-Path: <postmaster@collab.sakaiproject.org>
    Words ['Return-Path:', '<postmaster@collab.sakaiproject.org>']
    Ignore
    Line: Received: from murder (mail.umich.edu [141.211.14.93])
    Words ['Received:', 'from', 'murder', '(mail.umich.edu', '[141.211.14.93])']
    Ignore
    Line: 	 by frankenstein.mail.umich.edu (Cyrus v2.3.8) with LMTPA;
    Words ['by', 'frankenstein.mail.umich.edu', '(Cyrus', 'v2.3.8)', 'with', 'LMTPA;']
    Ignore
    Line: 	 Fri, 04 Jan 2008 14:50:18 -0500
    Words ['Fri,', '04', 'Jan', '2008', '14:50:18', '-0500']
    Ignore
    Line: X-Sieve: CMU Sieve 2.3
    Words ['X-Sieve:', 'CMU', 'Sieve', '2.3']
    Ignore
    Line: Received: from murder ([unix socket])
    Words ['Received:', 'from', 'murder', '([unix', 'socket])']
    Ignore
    Line: 	 by mail.umich.edu (Cyrus v2.2.12) with LMTPA;
    Words ['by', 'mail.umich.edu', '(Cyrus', 'v2.2.12)', 'with', 'LMTPA;']
    Ignore
    Line: 	 Fri, 04 Jan 2008 14:50:18 -0500
    Words ['Fri,', '04', 'Jan', '2008', '14:50:18', '-0500']
    Ignore
    Line: Received: from eyewitness.mr.itd.umich.edu (eyewitness.mr.itd.umich.edu [141.211.93.142])
    Words ['Received:', 'from', 'eyewitness.mr.itd.umich.edu', '(eyewitness.mr.itd.umich.edu', '[141.211.93.142])']
    Ignore
    Line: 	by mission.mail.umich.edu () with ESMTP id m04JoHJi019755;
    Words ['by', 'mission.mail.umich.edu', '()', 'with', 'ESMTP', 'id', 'm04JoHJi019755;']
    Ignore
    Line: 	Fri, 4 Jan 2008 14:50:17 -0500
    Words ['Fri,', '4', 'Jan', '2008', '14:50:17', '-0500']
    Ignore
    Line: Received: FROM paploo.uhi.ac.uk (app1.prod.collab.uhi.ac.uk [194.35.219.184])
    Words ['Received:', 'FROM', 'paploo.uhi.ac.uk', '(app1.prod.collab.uhi.ac.uk', '[194.35.219.184])']
    Ignore
    Line: 	BY eyewitness.mr.itd.umich.edu ID 477E8DF2.67B91.5278 ;
    Words ['BY', 'eyewitness.mr.itd.umich.edu', 'ID', '477E8DF2.67B91.5278', ';']
    Ignore
    Line: 	 4 Jan 2008 14:50:13 -0500
    Words ['4', 'Jan', '2008', '14:50:13', '-0500']
    Ignore
    Line: Received: from paploo.uhi.ac.uk (localhost [127.0.0.1])
    Words ['Received:', 'from', 'paploo.uhi.ac.uk', '(localhost', '[127.0.0.1])']
    Ignore
    Line: 	by paploo.uhi.ac.uk (Postfix) with ESMTP id 2D1B9BB492;
    Words ['by', 'paploo.uhi.ac.uk', '(Postfix)', 'with', 'ESMTP', 'id', '2D1B9BB492;']
    Ignore
    Line: 	Fri,  4 Jan 2008 19:47:10 +0000 (GMT)
    Words ['Fri,', '4', 'Jan', '2008', '19:47:10', '+0000', '(GMT)']
    Ignore
    Line: Message-ID: <200801041948.m04JmdwO007705@nakamura.uits.iupui.edu>
    Words ['Message-ID:', '<200801041948.m04JmdwO007705@nakamura.uits.iupui.edu>']
    Ignore
    Line: Mime-Version: 1.0
    Words ['Mime-Version:', '1.0']
    Ignore
    Line: Content-Transfer-Encoding: 7bit
    Words ['Content-Transfer-Encoding:', '7bit']
    Ignore
    Line: Received: from prod.collab.uhi.ac.uk ([194.35.219.182])
    Words ['Received:', 'from', 'prod.collab.uhi.ac.uk', '([194.35.219.182])']
    Ignore
    Line:           by paploo.uhi.ac.uk (JAMES SMTP Server 2.1.3) with SMTP ID 960
    Words ['by', 'paploo.uhi.ac.uk', '(JAMES', 'SMTP', 'Server', '2.1.3)', 'with', 'SMTP', 'ID', '960']
    Ignore
    Line:           for <source@collab.sakaiproject.org>;
    Words ['for', '<source@collab.sakaiproject.org>;']
    Ignore
    Line:           Fri, 4 Jan 2008 19:46:50 +0000 (GMT)
    Words ['Fri,', '4', 'Jan', '2008', '19:46:50', '+0000', '(GMT)']
    Ignore
    Line: Received: from nakamura.uits.iupui.edu (nakamura.uits.iupui.edu [134.68.220.122])
    Words ['Received:', 'from', 'nakamura.uits.iupui.edu', '(nakamura.uits.iupui.edu', '[134.68.220.122])']
    Ignore
    Line: 	by shmi.uhi.ac.uk (Postfix) with ESMTP id B3E6742F4A
    Words ['by', 'shmi.uhi.ac.uk', '(Postfix)', 'with', 'ESMTP', 'id', 'B3E6742F4A']
    Ignore
    Line: 	for <source@collab.sakaiproject.org>; Fri,  4 Jan 2008 19:49:51 +0000 (GMT)
    Words ['for', '<source@collab.sakaiproject.org>;', 'Fri,', '4', 'Jan', '2008', '19:49:51', '+0000', '(GMT)']
    Ignore
    Line: Received: from nakamura.uits.iupui.edu (localhost [127.0.0.1])
    Words ['Received:', 'from', 'nakamura.uits.iupui.edu', '(localhost', '[127.0.0.1])']
    Ignore
    Line: 	by nakamura.uits.iupui.edu (8.12.11.20060308/8.12.11) with ESMTP id m04JmeV9007707
    Words ['by', 'nakamura.uits.iupui.edu', '(8.12.11.20060308/8.12.11)', 'with', 'ESMTP', 'id', 'm04JmeV9007707']
    Ignore
    Line: 	for <source@collab.sakaiproject.org>; Fri, 4 Jan 2008 14:48:40 -0500
    Words ['for', '<source@collab.sakaiproject.org>;', 'Fri,', '4', 'Jan', '2008', '14:48:40', '-0500']
    Ignore
    Line: Received: (from apache@localhost)
    Words ['Received:', '(from', 'apache@localhost)']
    Ignore
    Line: 	by nakamura.uits.iupui.edu (8.12.11.20060308/8.12.11/Submit) id m04JmdwO007705
    Words ['by', 'nakamura.uits.iupui.edu', '(8.12.11.20060308/8.12.11/Submit)', 'id', 'm04JmdwO007705']
    Ignore
    Line: 	for source@collab.sakaiproject.org; Fri, 4 Jan 2008 14:48:39 -0500
    Words ['for', 'source@collab.sakaiproject.org;', 'Fri,', '4', 'Jan', '2008', '14:48:39', '-0500']
    Ignore
    Line: Date: Fri, 4 Jan 2008 14:48:39 -0500
    Words ['Date:', 'Fri,', '4', 'Jan', '2008', '14:48:39', '-0500']
    Ignore
    Line: X-Authentication-Warning: nakamura.uits.iupui.edu: apache set sender to rjlowe@iupui.edu using -f
    Words ['X-Authentication-Warning:', 'nakamura.uits.iupui.edu:', 'apache', 'set', 'sender', 'to', 'rjlowe@iupui.edu', 'using', '-f']
    Ignore
    Line: To: source@collab.sakaiproject.org
    Words ['To:', 'source@collab.sakaiproject.org']
    Ignore
    Line: From: rjlowe@iupui.edu
    Words ['From:', 'rjlowe@iupui.edu']
    Ignore
    Line: Subject: [sakai] svn commit: r39765 - in gradebook/trunk/app: business/src/java/org/sakaiproject/tool/gradebook/business business/src/java/org/sakaiproject/tool/gradebook/business/impl ui ui/src/java/org/sakaiproject/tool/gradebook/ui/helpers/beans ui/src/java/org/sakaiproject/tool/gradebook/ui/helpers/entity ui/src/java/org/sakaiproject/tool/gradebook/ui/helpers/params ui/src/java/org/sakaiproject/tool/gradebook/ui/helpers/producers ui/src/webapp/WEB-INF ui/src/webapp/WEB-INF/bundle ui/src/webapp/content/templates
    Words ['Subject:', '[sakai]', 'svn', 'commit:', 'r39765', '-', 'in', 'gradebook/trunk/app:', 'business/src/java/org/sakaiproject/tool/gradebook/business', 'business/src/java/org/sakaiproject/tool/gradebook/business/impl', 'ui', 'ui/src/java/org/sakaiproject/tool/gradebook/ui/helpers/beans', 'ui/src/java/org/sakaiproject/tool/gradebook/ui/helpers/entity', 'ui/src/java/org/sakaiproject/tool/gradebook/ui/helpers/params', 'ui/src/java/org/sakaiproject/tool/gradebook/ui/helpers/producers', 'ui/src/webapp/WEB-INF', 'ui/src/webapp/WEB-INF/bundle', 'ui/src/webapp/content/templates']
    Ignore
    Line: X-Content-Type-Outer-Envelope: text/plain; charset=UTF-8
    Words ['X-Content-Type-Outer-Envelope:', 'text/plain;', 'charset=UTF-8']
    Ignore
    Line: X-Content-Type-Message-Body: text/plain; charset=UTF-8
    Words ['X-Content-Type-Message-Body:', 'text/plain;', 'charset=UTF-8']
    Ignore
    Line: Content-Type: text/plain; charset=UTF-8
    Words ['Content-Type:', 'text/plain;', 'charset=UTF-8']
    Ignore
    Line: X-DSPAM-Result: Innocent
    Words ['X-DSPAM-Result:', 'Innocent']
    Ignore
    Line: X-DSPAM-Processed: Fri Jan  4 14:50:18 2008
    Words ['X-DSPAM-Processed:', 'Fri', 'Jan', '4', '14:50:18', '2008']
    Ignore
    Line: X-DSPAM-Confidence: 0.7556
    Words ['X-DSPAM-Confidence:', '0.7556']
    Ignore
    Line: X-DSPAM-Probability: 0.0000
    Words ['X-DSPAM-Probability:', '0.0000']
    Ignore
    Line: 
    Skip Blank
    Line: Details: http://source.sakaiproject.org/viewsvn/?view=rev&rev=39765
    Words ['Details:', 'http://source.sakaiproject.org/viewsvn/?view=rev&rev=39765']
    Ignore
    Line: 
    Skip Blank
    Line: Author: rjlowe@iupui.edu
    Words ['Author:', 'rjlowe@iupui.edu']
    Ignore
    Line: Date: 2008-01-04 14:48:37 -0500 (Fri, 04 Jan 2008)
    Words ['Date:', '2008-01-04', '14:48:37', '-0500', '(Fri,', '04', 'Jan', '2008)']
    Ignore
    Line: New Revision: 39765
    Words ['New', 'Revision:', '39765']
    Ignore
    Line: 
    Skip Blank
    Line: Added:
    Words ['Added:']
    Ignore
    Line: gradebook/trunk/app/ui/src/java/org/sakaiproject/tool/gradebook/ui/helpers/beans/AssignmentGradeRecordBean.java
    Words ['gradebook/trunk/app/ui/src/java/org/sakaiproject/tool/gradebook/ui/helpers/beans/AssignmentGradeRecordBean.java']
    Ignore
    Line: gradebook/trunk/app/ui/src/java/org/sakaiproject/tool/gradebook/ui/helpers/beans/AssignmentGradeRecordCreator.java
    Words ['gradebook/trunk/app/ui/src/java/org/sakaiproject/tool/gradebook/ui/helpers/beans/AssignmentGradeRecordCreator.java']
    Ignore
    Line: gradebook/trunk/app/ui/src/java/org/sakaiproject/tool/gradebook/ui/helpers/entity/GradebookEntryGradeEntityProvider.java
    Words ['gradebook/trunk/app/ui/src/java/org/sakaiproject/tool/gradebook/ui/helpers/entity/GradebookEntryGradeEntityProvider.java']
    Ignore
    Line: gradebook/trunk/app/ui/src/java/org/sakaiproject/tool/gradebook/ui/helpers/params/GradeGradebookItemViewParams.java
    Words ['gradebook/trunk/app/ui/src/java/org/sakaiproject/tool/gradebook/ui/helpers/params/GradeGradebookItemViewParams.java']
    Ignore
    Line: gradebook/trunk/app/ui/src/java/org/sakaiproject/tool/gradebook/ui/helpers/producers/GradeGradebookItemProducer.java
    Words ['gradebook/trunk/app/ui/src/java/org/sakaiproject/tool/gradebook/ui/helpers/producers/GradeGradebookItemProducer.java']
    Ignore
    Line: gradebook/trunk/app/ui/src/webapp/content/templates/grade-gradebook-item.html
    Words ['gradebook/trunk/app/ui/src/webapp/content/templates/grade-gradebook-item.html']
    Ignore
    Line: Modified:
    Words ['Modified:']
    Ignore
    Line: gradebook/trunk/app/business/src/java/org/sakaiproject/tool/gradebook/business/GradebookManager.java
    Words ['gradebook/trunk/app/business/src/java/org/sakaiproject/tool/gradebook/business/GradebookManager.java']
    Ignore
    Line: gradebook/trunk/app/business/src/java/org/sakaiproject/tool/gradebook/business/impl/GradebookManagerHibernateImpl.java
    Words ['gradebook/trunk/app/business/src/java/org/sakaiproject/tool/gradebook/business/impl/GradebookManagerHibernateImpl.java']
    Ignore
    Line: gradebook/trunk/app/ui/pom.xml
    Words ['gradebook/trunk/app/ui/pom.xml']
    Ignore
    Line: gradebook/trunk/app/ui/src/java/org/sakaiproject/tool/gradebook/ui/helpers/beans/GradebookItemBean.java
    Words ['gradebook/trunk/app/ui/src/java/org/sakaiproject/tool/gradebook/ui/helpers/beans/GradebookItemBean.java']
    Ignore
    Line: gradebook/trunk/app/ui/src/java/org/sakaiproject/tool/gradebook/ui/helpers/entity/GradebookEntryEntityProvider.java
    Words ['gradebook/trunk/app/ui/src/java/org/sakaiproject/tool/gradebook/ui/helpers/entity/GradebookEntryEntityProvider.java']
    Ignore
    Line: gradebook/trunk/app/ui/src/java/org/sakaiproject/tool/gradebook/ui/helpers/producers/AddGradebookItemProducer.java
    Words ['gradebook/trunk/app/ui/src/java/org/sakaiproject/tool/gradebook/ui/helpers/producers/AddGradebookItemProducer.java']
    Ignore
    Line: gradebook/trunk/app/ui/src/webapp/WEB-INF/applicationContext.xml
    Words ['gradebook/trunk/app/ui/src/webapp/WEB-INF/applicationContext.xml']
    Ignore
    Line: gradebook/trunk/app/ui/src/webapp/WEB-INF/bundle/messages.properties
    Words ['gradebook/trunk/app/ui/src/webapp/WEB-INF/bundle/messages.properties']
    Ignore
    Line: gradebook/trunk/app/ui/src/webapp/WEB-INF/requestContext.xml
    Words ['gradebook/trunk/app/ui/src/webapp/WEB-INF/requestContext.xml']
    Ignore
    Line: Log:
    Words ['Log:']
    Ignore
    Line: SAK-12180 - New helper tool to grade an assignment
    Words ['SAK-12180', '-', 'New', 'helper', 'tool', 'to', 'grade', 'an', 'assignment']
    Ignore
    Line: 
    Skip Blank
    Line: ----------------------
    Words ['----------------------']
    Ignore
    Line: This automatic notification message was sent by Sakai Collab (https://collab.sakaiproject.org/portal) from the Source site.
    Words ['This', 'automatic', 'notification', 'message', 'was', 'sent', 'by', 'Sakai', 'Collab', '(https://collab.sakaiproject.org/portal)', 'from', 'the', 'Source', 'site.']
    Ignore
    Line: You can modify how you receive notifications at My Workspace > Preferences.
    Words ['You', 'can', 'modify', 'how', 'you', 'receive', 'notifications', 'at', 'My', 'Workspace', '>', 'Preferences.']
    Ignore
    Line: 
    Skip Blank
    Line: 
    Skip Blank
    Line: 
    Skip Blank
    Line: From cwen@iupui.edu Fri Jan  4 11:37:30 2008
    Words ['From', 'cwen@iupui.edu', 'Fri', 'Jan', '4', '11:37:30', '2008']
    Fri
    Line: Return-Path: <postmaster@collab.sakaiproject.org>
    Words ['Return-Path:', '<postmaster@collab.sakaiproject.org>']
    Ignore
    Line: Received: from murder (mail.umich.edu [141.211.14.46])
    Words ['Received:', 'from', 'murder', '(mail.umich.edu', '[141.211.14.46])']
    Ignore
    Line: 	 by frankenstein.mail.umich.edu (Cyrus v2.3.8) with LMTPA;
    Words ['by', 'frankenstein.mail.umich.edu', '(Cyrus', 'v2.3.8)', 'with', 'LMTPA;']
    Ignore
    Line: 	 Fri, 04 Jan 2008 11:37:30 -0500
    Words ['Fri,', '04', 'Jan', '2008', '11:37:30', '-0500']
    Ignore
    Line: X-Sieve: CMU Sieve 2.3
    Words ['X-Sieve:', 'CMU', 'Sieve', '2.3']
    Ignore
    Line: Received: from murder ([unix socket])
    Words ['Received:', 'from', 'murder', '([unix', 'socket])']
    Ignore
    Line: 	 by mail.umich.edu (Cyrus v2.2.12) with LMTPA;
    Words ['by', 'mail.umich.edu', '(Cyrus', 'v2.2.12)', 'with', 'LMTPA;']
    Ignore
    Line: 	 Fri, 04 Jan 2008 11:37:30 -0500
    Words ['Fri,', '04', 'Jan', '2008', '11:37:30', '-0500']
    Ignore
    Line: Received: from tadpole.mr.itd.umich.edu (tadpole.mr.itd.umich.edu [141.211.14.72])
    Words ['Received:', 'from', 'tadpole.mr.itd.umich.edu', '(tadpole.mr.itd.umich.edu', '[141.211.14.72])']
    Ignore
    Line: 	by fan.mail.umich.edu () with ESMTP id m04GbT9x022078;
    Words ['by', 'fan.mail.umich.edu', '()', 'with', 'ESMTP', 'id', 'm04GbT9x022078;']
    Ignore
    Line: 	Fri, 4 Jan 2008 11:37:29 -0500
    Words ['Fri,', '4', 'Jan', '2008', '11:37:29', '-0500']
    Ignore
    Line: Received: FROM paploo.uhi.ac.uk (app1.prod.collab.uhi.ac.uk [194.35.219.184])
    Words ['Received:', 'FROM', 'paploo.uhi.ac.uk', '(app1.prod.collab.uhi.ac.uk', '[194.35.219.184])']
    Ignore
    Line: 	BY tadpole.mr.itd.umich.edu ID 477E60B2.82756.9904 ;
    Words ['BY', 'tadpole.mr.itd.umich.edu', 'ID', '477E60B2.82756.9904', ';']
    Ignore
    Line: 	 4 Jan 2008 11:37:09 -0500
    Words ['4', 'Jan', '2008', '11:37:09', '-0500']
    Ignore
    Line: Received: from paploo.uhi.ac.uk (localhost [127.0.0.1])
    Words ['Received:', 'from', 'paploo.uhi.ac.uk', '(localhost', '[127.0.0.1])']
    Ignore
    Line: 	by paploo.uhi.ac.uk (Postfix) with ESMTP id 8D13DBB001;
    Words ['by', 'paploo.uhi.ac.uk', '(Postfix)', 'with', 'ESMTP', 'id', '8D13DBB001;']
    Ignore
    Line: 	Fri,  4 Jan 2008 16:37:07 +0000 (GMT)
    Words ['Fri,', '4', 'Jan', '2008', '16:37:07', '+0000', '(GMT)']
    Ignore
    Line: Message-ID: <200801041635.m04GZQGZ007313@nakamura.uits.iupui.edu>
    Words ['Message-ID:', '<200801041635.m04GZQGZ007313@nakamura.uits.iupui.edu>']
    Ignore
    Line: Mime-Version: 1.0
    Words ['Mime-Version:', '1.0']
    Ignore
    Line: Content-Transfer-Encoding: 7bit
    Words ['Content-Transfer-Encoding:', '7bit']
    Ignore
    Line: Received: from prod.collab.uhi.ac.uk ([194.35.219.182])
    Words ['Received:', 'from', 'prod.collab.uhi.ac.uk', '([194.35.219.182])']
    Ignore
    Line:           by paploo.uhi.ac.uk (JAMES SMTP Server 2.1.3) with SMTP ID 120
    Words ['by', 'paploo.uhi.ac.uk', '(JAMES', 'SMTP', 'Server', '2.1.3)', 'with', 'SMTP', 'ID', '120']
    Ignore
    Line:           for <source@collab.sakaiproject.org>;
    Words ['for', '<source@collab.sakaiproject.org>;']
    Ignore
    Line:           Fri, 4 Jan 2008 16:36:40 +0000 (GMT)
    Words ['Fri,', '4', 'Jan', '2008', '16:36:40', '+0000', '(GMT)']
    Ignore
    Line: Received: from nakamura.uits.iupui.edu (nakamura.uits.iupui.edu [134.68.220.122])
    Words ['Received:', 'from', 'nakamura.uits.iupui.edu', '(nakamura.uits.iupui.edu', '[134.68.220.122])']
    Ignore
    Line: 	by shmi.uhi.ac.uk (Postfix) with ESMTP id D430B42E42
    Words ['by', 'shmi.uhi.ac.uk', '(Postfix)', 'with', 'ESMTP', 'id', 'D430B42E42']
    Ignore
    Line: 	for <source@collab.sakaiproject.org>; Fri,  4 Jan 2008 16:36:37 +0000 (GMT)
    Words ['for', '<source@collab.sakaiproject.org>;', 'Fri,', '4', 'Jan', '2008', '16:36:37', '+0000', '(GMT)']
    Ignore
    Line: Received: from nakamura.uits.iupui.edu (localhost [127.0.0.1])
    Words ['Received:', 'from', 'nakamura.uits.iupui.edu', '(localhost', '[127.0.0.1])']
    Ignore
    Line: 	by nakamura.uits.iupui.edu (8.12.11.20060308/8.12.11) with ESMTP id m04GZQ7W007315
    Words ['by', 'nakamura.uits.iupui.edu', '(8.12.11.20060308/8.12.11)', 'with', 'ESMTP', 'id', 'm04GZQ7W007315']
    Ignore
    Line: 	for <source@collab.sakaiproject.org>; Fri, 4 Jan 2008 11:35:26 -0500
    Words ['for', '<source@collab.sakaiproject.org>;', 'Fri,', '4', 'Jan', '2008', '11:35:26', '-0500']
    Ignore
    Line: Received: (from apache@localhost)
    Words ['Received:', '(from', 'apache@localhost)']
    Ignore
    Line: 	by nakamura.uits.iupui.edu (8.12.11.20060308/8.12.11/Submit) id m04GZQGZ007313
    Words ['by', 'nakamura.uits.iupui.edu', '(8.12.11.20060308/8.12.11/Submit)', 'id', 'm04GZQGZ007313']
    Ignore
    Line: 	for source@collab.sakaiproject.org; Fri, 4 Jan 2008 11:35:26 -0500
    Words ['for', 'source@collab.sakaiproject.org;', 'Fri,', '4', 'Jan', '2008', '11:35:26', '-0500']
    Ignore
    Line: Date: Fri, 4 Jan 2008 11:35:26 -0500
    Words ['Date:', 'Fri,', '4', 'Jan', '2008', '11:35:26', '-0500']
    Ignore
    Line: X-Authentication-Warning: nakamura.uits.iupui.edu: apache set sender to cwen@iupui.edu using -f
    Words ['X-Authentication-Warning:', 'nakamura.uits.iupui.edu:', 'apache', 'set', 'sender', 'to', 'cwen@iupui.edu', 'using', '-f']
    Ignore
    Line: To: source@collab.sakaiproject.org
    Words ['To:', 'source@collab.sakaiproject.org']
    Ignore
    Line: From: cwen@iupui.edu
    Words ['From:', 'cwen@iupui.edu']
    Ignore
    Line: Subject: [sakai] svn commit: r39764 - in msgcntr/trunk/messageforums-app/src/java/org/sakaiproject/tool/messageforums: . ui
    Words ['Subject:', '[sakai]', 'svn', 'commit:', 'r39764', '-', 'in', 'msgcntr/trunk/messageforums-app/src/java/org/sakaiproject/tool/messageforums:', '.', 'ui']
    Ignore
    Line: X-Content-Type-Outer-Envelope: text/plain; charset=UTF-8
    Words ['X-Content-Type-Outer-Envelope:', 'text/plain;', 'charset=UTF-8']
    Ignore
    Line: X-Content-Type-Message-Body: text/plain; charset=UTF-8
    Words ['X-Content-Type-Message-Body:', 'text/plain;', 'charset=UTF-8']
    Ignore
    Line: Content-Type: text/plain; charset=UTF-8
    Words ['Content-Type:', 'text/plain;', 'charset=UTF-8']
    Ignore
    Line: X-DSPAM-Result: Innocent
    Words ['X-DSPAM-Result:', 'Innocent']
    Ignore
    Line: X-DSPAM-Processed: Fri Jan  4 11:37:30 2008
    Words ['X-DSPAM-Processed:', 'Fri', 'Jan', '4', '11:37:30', '2008']
    Ignore
    Line: X-DSPAM-Confidence: 0.7002
    Words ['X-DSPAM-Confidence:', '0.7002']
    Ignore
    Line: X-DSPAM-Probability: 0.0000
    Words ['X-DSPAM-Probability:', '0.0000']
    Ignore
    Line: 
    Skip Blank
    Line: Details: http://source.sakaiproject.org/viewsvn/?view=rev&rev=39764
    Words ['Details:', 'http://source.sakaiproject.org/viewsvn/?view=rev&rev=39764']
    Ignore
    Line: 
    Skip Blank
    Line: Author: cwen@iupui.edu
    Words ['Author:', 'cwen@iupui.edu']
    Ignore
    Line: Date: 2008-01-04 11:35:25 -0500 (Fri, 04 Jan 2008)
    Words ['Date:', '2008-01-04', '11:35:25', '-0500', '(Fri,', '04', 'Jan', '2008)']
    Ignore
    Line: New Revision: 39764
    Words ['New', 'Revision:', '39764']
    Ignore
    Line: 
    Skip Blank
    Line: Modified:
    Words ['Modified:']
    Ignore
    Line: msgcntr/trunk/messageforums-app/src/java/org/sakaiproject/tool/messageforums/PrivateMessagesTool.java
    Words ['msgcntr/trunk/messageforums-app/src/java/org/sakaiproject/tool/messageforums/PrivateMessagesTool.java']
    Ignore
    Line: msgcntr/trunk/messageforums-app/src/java/org/sakaiproject/tool/messageforums/ui/PrivateMessageDecoratedBean.java
    Words ['msgcntr/trunk/messageforums-app/src/java/org/sakaiproject/tool/messageforums/ui/PrivateMessageDecoratedBean.java']
    Ignore
    Line: Log:
    Words ['Log:']
    Ignore
    Line: unmerge Xingtang's checkin for SAK-12488.
    Words ['unmerge', "Xingtang's", 'checkin', 'for', 'SAK-12488.']
    Ignore
    Line: 
    Skip Blank
    Line: svn merge -r39558:39557 https://source.sakaiproject.org/svn/msgcntr/trunk
    Words ['svn', 'merge', '-r39558:39557', 'https://source.sakaiproject.org/svn/msgcntr/trunk']
    Ignore
    Line: U    messageforums-app/src/java/org/sakaiproject/tool/messageforums/PrivateMessagesTool.java
    Words ['U', 'messageforums-app/src/java/org/sakaiproject/tool/messageforums/PrivateMessagesTool.java']
    Ignore
    Line: U    messageforums-app/src/java/org/sakaiproject/tool/messageforums/ui/PrivateMessageDecoratedBean.java
    Words ['U', 'messageforums-app/src/java/org/sakaiproject/tool/messageforums/ui/PrivateMessageDecoratedBean.java']
    Ignore
    Line: 
    Skip Blank
    Line: svn log -r 39558
    Words ['svn', 'log', '-r', '39558']
    Ignore
    Line: ------------------------------------------------------------------------
    Words ['------------------------------------------------------------------------']
    Ignore
    Line: r39558 | hu2@iupui.edu | 2007-12-20 15:25:38 -0500 (Thu, 20 Dec 2007) | 3 lines
    Words ['r39558', '|', 'hu2@iupui.edu', '|', '2007-12-20', '15:25:38', '-0500', '(Thu,', '20', 'Dec', '2007)', '|', '3', 'lines']
    Ignore
    Line: 
    Skip Blank
    Line: SAK-12488
    Words ['SAK-12488']
    Ignore
    Line: when send a message to yourself. click reply to all, cc row should be null.
    Words ['when', 'send', 'a', 'message', 'to', 'yourself.', 'click', 'reply', 'to', 'all,', 'cc', 'row', 'should', 'be', 'null.']
    Ignore
    Line: http://jira.sakaiproject.org/jira/browse/SAK-12488
    Words ['http://jira.sakaiproject.org/jira/browse/SAK-12488']
    Ignore
    Line: ------------------------------------------------------------------------
    Words ['------------------------------------------------------------------------']
    Ignore
    Line: 
    Skip Blank
    Line: 
    Skip Blank
    Line: ----------------------
    Words ['----------------------']
    Ignore
    Line: This automatic notification message was sent by Sakai Collab (https://collab.sakaiproject.org/portal) from the Source site.
    Words ['This', 'automatic', 'notification', 'message', 'was', 'sent', 'by', 'Sakai', 'Collab', '(https://collab.sakaiproject.org/portal)', 'from', 'the', 'Source', 'site.']
    Ignore
    Line: You can modify how you receive notifications at My Workspace > Preferences.
    Words ['You', 'can', 'modify', 'how', 'you', 'receive', 'notifications', 'at', 'My', 'Workspace', '>', 'Preferences.']
    Ignore
    Line: 
    Skip Blank
    Line: 
    Skip Blank
    Line: 
    Skip Blank
    Line: From cwen@iupui.edu Fri Jan  4 11:35:08 2008
    Words ['From', 'cwen@iupui.edu', 'Fri', 'Jan', '4', '11:35:08', '2008']
    Fri
    Line: Return-Path: <postmaster@collab.sakaiproject.org>
    Words ['Return-Path:', '<postmaster@collab.sakaiproject.org>']
    Ignore
    Line: Received: from murder (mail.umich.edu [141.211.14.46])
    Words ['Received:', 'from', 'murder', '(mail.umich.edu', '[141.211.14.46])']
    Ignore
    Line: 	 by frankenstein.mail.umich.edu (Cyrus v2.3.8) with LMTPA;
    Words ['by', 'frankenstein.mail.umich.edu', '(Cyrus', 'v2.3.8)', 'with', 'LMTPA;']
    Ignore
    Line: 	 Fri, 04 Jan 2008 11:35:08 -0500
    Words ['Fri,', '04', 'Jan', '2008', '11:35:08', '-0500']
    Ignore
    Line: X-Sieve: CMU Sieve 2.3
    Words ['X-Sieve:', 'CMU', 'Sieve', '2.3']
    Ignore
    Line: Received: from murder ([unix socket])
    Words ['Received:', 'from', 'murder', '([unix', 'socket])']
    Ignore
    Line: 	 by mail.umich.edu (Cyrus v2.2.12) with LMTPA;
    Words ['by', 'mail.umich.edu', '(Cyrus', 'v2.2.12)', 'with', 'LMTPA;']
    Ignore
    Line: 	 Fri, 04 Jan 2008 11:35:08 -0500
    Words ['Fri,', '04', 'Jan', '2008', '11:35:08', '-0500']
    Ignore
    Line: Received: from it.mr.itd.umich.edu (it.mr.itd.umich.edu [141.211.93.151])
    Words ['Received:', 'from', 'it.mr.itd.umich.edu', '(it.mr.itd.umich.edu', '[141.211.93.151])']
    Ignore
    Line: 	by fan.mail.umich.edu () with ESMTP id m04GZ6lt020480;
    Words ['by', 'fan.mail.umich.edu', '()', 'with', 'ESMTP', 'id', 'm04GZ6lt020480;']
    Ignore
    Line: 	Fri, 4 Jan 2008 11:35:06 -0500
    Words ['Fri,', '4', 'Jan', '2008', '11:35:06', '-0500']
    Ignore
    Line: Received: FROM paploo.uhi.ac.uk (app1.prod.collab.uhi.ac.uk [194.35.219.184])
    Words ['Received:', 'FROM', 'paploo.uhi.ac.uk', '(app1.prod.collab.uhi.ac.uk', '[194.35.219.184])']
    Ignore
    Line: 	BY it.mr.itd.umich.edu ID 477E6033.6469D.21870 ;
    Words ['BY', 'it.mr.itd.umich.edu', 'ID', '477E6033.6469D.21870', ';']
    Ignore
    Line: 	 4 Jan 2008 11:35:02 -0500
    Words ['4', 'Jan', '2008', '11:35:02', '-0500']
    Ignore
    Line: Received: from paploo.uhi.ac.uk (localhost [127.0.0.1])
    Words ['Received:', 'from', 'paploo.uhi.ac.uk', '(localhost', '[127.0.0.1])']
    Ignore
    Line: 	by paploo.uhi.ac.uk (Postfix) with ESMTP id E40FABAE5B;
    Words ['by', 'paploo.uhi.ac.uk', '(Postfix)', 'with', 'ESMTP', 'id', 'E40FABAE5B;']
    Ignore
    Line: 	Fri,  4 Jan 2008 16:34:38 +0000 (GMT)
    Words ['Fri,', '4', 'Jan', '2008', '16:34:38', '+0000', '(GMT)']
    Ignore
    Line: Message-ID: <200801041633.m04GX6eG007292@nakamura.uits.iupui.edu>
    Words ['Message-ID:', '<200801041633.m04GX6eG007292@nakamura.uits.iupui.edu>']
    Ignore
    Line: Mime-Version: 1.0
    Words ['Mime-Version:', '1.0']
    Ignore
    Line: Content-Transfer-Encoding: 7bit
    Words ['Content-Transfer-Encoding:', '7bit']
    Ignore
    Line: Received: from prod.collab.uhi.ac.uk ([194.35.219.182])
    Words ['Received:', 'from', 'prod.collab.uhi.ac.uk', '([194.35.219.182])']
    Ignore
    Line:           by paploo.uhi.ac.uk (JAMES SMTP Server 2.1.3) with SMTP ID 697
    Words ['by', 'paploo.uhi.ac.uk', '(JAMES', 'SMTP', 'Server', '2.1.3)', 'with', 'SMTP', 'ID', '697']
    Ignore
    Line:           for <source@collab.sakaiproject.org>;
    Words ['for', '<source@collab.sakaiproject.org>;']
    Ignore
    Line:           Fri, 4 Jan 2008 16:34:01 +0000 (GMT)
    Words ['Fri,', '4', 'Jan', '2008', '16:34:01', '+0000', '(GMT)']
    Ignore
    Line: Received: from nakamura.uits.iupui.edu (nakamura.uits.iupui.edu [134.68.220.122])
    Words ['Received:', 'from', 'nakamura.uits.iupui.edu', '(nakamura.uits.iupui.edu', '[134.68.220.122])']
    Ignore
    Line: 	by shmi.uhi.ac.uk (Postfix) with ESMTP id 1CD0C42E42
    Words ['by', 'shmi.uhi.ac.uk', '(Postfix)', 'with', 'ESMTP', 'id', '1CD0C42E42']
    Ignore
    Line: 	for <source@collab.sakaiproject.org>; Fri,  4 Jan 2008 16:34:17 +0000 (GMT)
    Words ['for', '<source@collab.sakaiproject.org>;', 'Fri,', '4', 'Jan', '2008', '16:34:17', '+0000', '(GMT)']
    Ignore
    Line: Received: from nakamura.uits.iupui.edu (localhost [127.0.0.1])
    Words ['Received:', 'from', 'nakamura.uits.iupui.edu', '(localhost', '[127.0.0.1])']
    Ignore
    Line: 	by nakamura.uits.iupui.edu (8.12.11.20060308/8.12.11) with ESMTP id m04GX6Y3007294
    Words ['by', 'nakamura.uits.iupui.edu', '(8.12.11.20060308/8.12.11)', 'with', 'ESMTP', 'id', 'm04GX6Y3007294']
    Ignore
    Line: 	for <source@collab.sakaiproject.org>; Fri, 4 Jan 2008 11:33:06 -0500
    Words ['for', '<source@collab.sakaiproject.org>;', 'Fri,', '4', 'Jan', '2008', '11:33:06', '-0500']
    Ignore
    Line: Received: (from apache@localhost)
    Words ['Received:', '(from', 'apache@localhost)']
    Ignore
    Line: 	by nakamura.uits.iupui.edu (8.12.11.20060308/8.12.11/Submit) id m04GX6eG007292
    Words ['by', 'nakamura.uits.iupui.edu', '(8.12.11.20060308/8.12.11/Submit)', 'id', 'm04GX6eG007292']
    Ignore
    Line: 	for source@collab.sakaiproject.org; Fri, 4 Jan 2008 11:33:06 -0500
    Words ['for', 'source@collab.sakaiproject.org;', 'Fri,', '4', 'Jan', '2008', '11:33:06', '-0500']
    Ignore
    Line: Date: Fri, 4 Jan 2008 11:33:06 -0500
    Words ['Date:', 'Fri,', '4', 'Jan', '2008', '11:33:06', '-0500']
    Ignore
    Line: X-Authentication-Warning: nakamura.uits.iupui.edu: apache set sender to cwen@iupui.edu using -f
    Words ['X-Authentication-Warning:', 'nakamura.uits.iupui.edu:', 'apache', 'set', 'sender', 'to', 'cwen@iupui.edu', 'using', '-f']
    Ignore
    Line: To: source@collab.sakaiproject.org
    Words ['To:', 'source@collab.sakaiproject.org']
    Ignore
    Line: From: cwen@iupui.edu
    Words ['From:', 'cwen@iupui.edu']
    Ignore
    Line: Subject: [sakai] svn commit: r39763 - in msgcntr/trunk: messageforums-api/src/bundle/org/sakaiproject/api/app/messagecenter/bundle messageforums-app/src/java/org/sakaiproject/tool/messageforums
    Words ['Subject:', '[sakai]', 'svn', 'commit:', 'r39763', '-', 'in', 'msgcntr/trunk:', 'messageforums-api/src/bundle/org/sakaiproject/api/app/messagecenter/bundle', 'messageforums-app/src/java/org/sakaiproject/tool/messageforums']
    Ignore
    Line: X-Content-Type-Outer-Envelope: text/plain; charset=UTF-8
    Words ['X-Content-Type-Outer-Envelope:', 'text/plain;', 'charset=UTF-8']
    Ignore
    Line: X-Content-Type-Message-Body: text/plain; charset=UTF-8
    Words ['X-Content-Type-Message-Body:', 'text/plain;', 'charset=UTF-8']
    Ignore
    Line: Content-Type: text/plain; charset=UTF-8
    Words ['Content-Type:', 'text/plain;', 'charset=UTF-8']
    Ignore
    Line: X-DSPAM-Result: Innocent
    Words ['X-DSPAM-Result:', 'Innocent']
    Ignore
    Line: X-DSPAM-Processed: Fri Jan  4 11:35:08 2008
    Words ['X-DSPAM-Processed:', 'Fri', 'Jan', '4', '11:35:08', '2008']
    Ignore
    Line: X-DSPAM-Confidence: 0.7615
    Words ['X-DSPAM-Confidence:', '0.7615']
    Ignore
    Line: X-DSPAM-Probability: 0.0000
    Words ['X-DSPAM-Probability:', '0.0000']
    Ignore
    Line: 
    Skip Blank
    Line: Details: http://source.sakaiproject.org/viewsvn/?view=rev&rev=39763
    Words ['Details:', 'http://source.sakaiproject.org/viewsvn/?view=rev&rev=39763']
    Ignore
    Line: 
    Skip Blank
    Line: Author: cwen@iupui.edu
    Words ['Author:', 'cwen@iupui.edu']
    Ignore
    Line: Date: 2008-01-04 11:33:05 -0500 (Fri, 04 Jan 2008)
    Words ['Date:', '2008-01-04', '11:33:05', '-0500', '(Fri,', '04', 'Jan', '2008)']
    Ignore
    Line: New Revision: 39763
    Words ['New', 'Revision:', '39763']
    Ignore
    Line: 
    Skip Blank
    Line: Modified:
    Words ['Modified:']
    Ignore
    Line: msgcntr/trunk/messageforums-api/src/bundle/org/sakaiproject/api/app/messagecenter/bundle/Messages.properties
    Words ['msgcntr/trunk/messageforums-api/src/bundle/org/sakaiproject/api/app/messagecenter/bundle/Messages.properties']
    Ignore
    Line: msgcntr/trunk/messageforums-app/src/java/org/sakaiproject/tool/messageforums/PrivateMessagesTool.java
    Words ['msgcntr/trunk/messageforums-app/src/java/org/sakaiproject/tool/messageforums/PrivateMessagesTool.java']
    Ignore
    Line: Log:
    Words ['Log:']
    Ignore
    Line: unmerge Xingtang's check in for SAK-12484.
    Words ['unmerge', "Xingtang's", 'check', 'in', 'for', 'SAK-12484.']
    Ignore
    Line: 
    Skip Blank
    Line: svn merge -r39571:39570 https://source.sakaiproject.org/svn/msgcntr/trunk
    Words ['svn', 'merge', '-r39571:39570', 'https://source.sakaiproject.org/svn/msgcntr/trunk']
    Ignore
    Line: U    messageforums-api/src/bundle/org/sakaiproject/api/app/messagecenter/bundle/Messages.properties
    Words ['U', 'messageforums-api/src/bundle/org/sakaiproject/api/app/messagecenter/bundle/Messages.properties']
    Ignore
    Line: U    messageforums-app/src/java/org/sakaiproject/tool/messageforums/PrivateMessagesTool.java
    Words ['U', 'messageforums-app/src/java/org/sakaiproject/tool/messageforums/PrivateMessagesTool.java']
    Ignore
    Line: 
    Skip Blank
    Line: svn log -r 39571
    Words ['svn', 'log', '-r', '39571']
    Ignore
    Line: ------------------------------------------------------------------------
    Words ['------------------------------------------------------------------------']
    Ignore
    Line: r39571 | hu2@iupui.edu | 2007-12-20 21:26:28 -0500 (Thu, 20 Dec 2007) | 3 lines
    Words ['r39571', '|', 'hu2@iupui.edu', '|', '2007-12-20', '21:26:28', '-0500', '(Thu,', '20', 'Dec', '2007)', '|', '3', 'lines']
    Ignore
    Line: 
    Skip Blank
    Line: SAK-12484
    Words ['SAK-12484']
    Ignore
    Line: reply all cc list should not include the current user name.
    Words ['reply', 'all', 'cc', 'list', 'should', 'not', 'include', 'the', 'current', 'user', 'name.']
    Ignore
    Line: http://jira.sakaiproject.org/jira/browse/SAK-12484
    Words ['http://jira.sakaiproject.org/jira/browse/SAK-12484']
    Ignore
    Line: ------------------------------------------------------------------------
    Words ['------------------------------------------------------------------------']
    Ignore
    Line: 
    Skip Blank
    Line: 
    Skip Blank
    Line: ----------------------
    Words ['----------------------']
    Ignore
    Line: This automatic notification message was sent by Sakai Collab (https://collab.sakaiproject.org/portal) from the Source site.
    Words ['This', 'automatic', 'notification', 'message', 'was', 'sent', 'by', 'Sakai', 'Collab', '(https://collab.sakaiproject.org/portal)', 'from', 'the', 'Source', 'site.']
    Ignore
    Line: You can modify how you receive notifications at My Workspace > Preferences.
    Words ['You', 'can', 'modify', 'how', 'you', 'receive', 'notifications', 'at', 'My', 'Workspace', '>', 'Preferences.']
    Ignore
    Line: 
    Skip Blank
    Line: 
    Skip Blank
    Line: 
    Skip Blank
    Line: From gsilver@umich.edu Fri Jan  4 11:12:37 2008
    Words ['From', 'gsilver@umich.edu', 'Fri', 'Jan', '4', '11:12:37', '2008']
    Fri
    Line: Return-Path: <postmaster@collab.sakaiproject.org>
    Words ['Return-Path:', '<postmaster@collab.sakaiproject.org>']
    Ignore
    Line: Received: from murder (mail.umich.edu [141.211.14.25])
    Words ['Received:', 'from', 'murder', '(mail.umich.edu', '[141.211.14.25])']
    Ignore
    Line: 	 by frankenstein.mail.umich.edu (Cyrus v2.3.8) with LMTPA;
    Words ['by', 'frankenstein.mail.umich.edu', '(Cyrus', 'v2.3.8)', 'with', 'LMTPA;']
    Ignore
    Line: 	 Fri, 04 Jan 2008 11:12:37 -0500
    Words ['Fri,', '04', 'Jan', '2008', '11:12:37', '-0500']
    Ignore
    Line: X-Sieve: CMU Sieve 2.3
    Words ['X-Sieve:', 'CMU', 'Sieve', '2.3']
    Ignore
    Line: Received: from murder ([unix socket])
    Words ['Received:', 'from', 'murder', '([unix', 'socket])']
    Ignore
    Line: 	 by mail.umich.edu (Cyrus v2.2.12) with LMTPA;
    Words ['by', 'mail.umich.edu', '(Cyrus', 'v2.2.12)', 'with', 'LMTPA;']
    Ignore
    Line: 	 Fri, 04 Jan 2008 11:12:37 -0500
    Words ['Fri,', '04', 'Jan', '2008', '11:12:37', '-0500']
    Ignore
    Line: Received: from holes.mr.itd.umich.edu (holes.mr.itd.umich.edu [141.211.14.79])
    Words ['Received:', 'from', 'holes.mr.itd.umich.edu', '(holes.mr.itd.umich.edu', '[141.211.14.79])']
    Ignore
    Line: 	by panther.mail.umich.edu () with ESMTP id m04GCaHB030887;
    Words ['by', 'panther.mail.umich.edu', '()', 'with', 'ESMTP', 'id', 'm04GCaHB030887;']
    Ignore
    Line: 	Fri, 4 Jan 2008 11:12:36 -0500
    Words ['Fri,', '4', 'Jan', '2008', '11:12:36', '-0500']
    Ignore
    Line: Received: FROM paploo.uhi.ac.uk (app1.prod.collab.uhi.ac.uk [194.35.219.184])
    Words ['Received:', 'FROM', 'paploo.uhi.ac.uk', '(app1.prod.collab.uhi.ac.uk', '[194.35.219.184])']
    Ignore
    Line: 	BY holes.mr.itd.umich.edu ID 477E5AEB.E670B.28397 ;
    Words ['BY', 'holes.mr.itd.umich.edu', 'ID', '477E5AEB.E670B.28397', ';']
    Ignore
    Line: 	 4 Jan 2008 11:12:30 -0500
    Words ['4', 'Jan', '2008', '11:12:30', '-0500']
    Ignore
    Line: Received: from paploo.uhi.ac.uk (localhost [127.0.0.1])
    Words ['Received:', 'from', 'paploo.uhi.ac.uk', '(localhost', '[127.0.0.1])']
    Ignore
    Line: 	by paploo.uhi.ac.uk (Postfix) with ESMTP id 99715BAE7D;
    Words ['by', 'paploo.uhi.ac.uk', '(Postfix)', 'with', 'ESMTP', 'id', '99715BAE7D;']
    Ignore
    Line: 	Fri,  4 Jan 2008 16:12:27 +0000 (GMT)
    Words ['Fri,', '4', 'Jan', '2008', '16:12:27', '+0000', '(GMT)']
    Ignore
    Line: Message-ID: <200801041611.m04GB1Lb007221@nakamura.uits.iupui.edu>
    Words ['Message-ID:', '<200801041611.m04GB1Lb007221@nakamura.uits.iupui.edu>']
    Ignore
    Line: Mime-Version: 1.0
    Words ['Mime-Version:', '1.0']
    Ignore
    Line: Content-Transfer-Encoding: 7bit
    Words ['Content-Transfer-Encoding:', '7bit']
    Ignore
    Line: Received: from prod.collab.uhi.ac.uk ([194.35.219.182])
    Words ['Received:', 'from', 'prod.collab.uhi.ac.uk', '([194.35.219.182])']
    Ignore
    Line:           by paploo.uhi.ac.uk (JAMES SMTP Server 2.1.3) with SMTP ID 272
    Words ['by', 'paploo.uhi.ac.uk', '(JAMES', 'SMTP', 'Server', '2.1.3)', 'with', 'SMTP', 'ID', '272']
    Ignore
    Line:           for <source@collab.sakaiproject.org>;
    Words ['for', '<source@collab.sakaiproject.org>;']
    Ignore
    Line:           Fri, 4 Jan 2008 16:12:14 +0000 (GMT)
    Words ['Fri,', '4', 'Jan', '2008', '16:12:14', '+0000', '(GMT)']
    Ignore
    Line: Received: from nakamura.uits.iupui.edu (nakamura.uits.iupui.edu [134.68.220.122])
    Words ['Received:', 'from', 'nakamura.uits.iupui.edu', '(nakamura.uits.iupui.edu', '[134.68.220.122])']
    Ignore
    Line: 	by shmi.uhi.ac.uk (Postfix) with ESMTP id 0A6ED42DFC
    Words ['by', 'shmi.uhi.ac.uk', '(Postfix)', 'with', 'ESMTP', 'id', '0A6ED42DFC']
    Ignore
    Line: 	for <source@collab.sakaiproject.org>; Fri,  4 Jan 2008 16:12:12 +0000 (GMT)
    Words ['for', '<source@collab.sakaiproject.org>;', 'Fri,', '4', 'Jan', '2008', '16:12:12', '+0000', '(GMT)']
    Ignore
    Line: Received: from nakamura.uits.iupui.edu (localhost [127.0.0.1])
    Words ['Received:', 'from', 'nakamura.uits.iupui.edu', '(localhost', '[127.0.0.1])']
    Ignore
    Line: 	by nakamura.uits.iupui.edu (8.12.11.20060308/8.12.11) with ESMTP id m04GB1Wt007223
    Words ['by', 'nakamura.uits.iupui.edu', '(8.12.11.20060308/8.12.11)', 'with', 'ESMTP', 'id', 'm04GB1Wt007223']
    Ignore
    Line: 	for <source@collab.sakaiproject.org>; Fri, 4 Jan 2008 11:11:01 -0500
    Words ['for', '<source@collab.sakaiproject.org>;', 'Fri,', '4', 'Jan', '2008', '11:11:01', '-0500']
    Ignore
    Line: Received: (from apache@localhost)
    Words ['Received:', '(from', 'apache@localhost)']
    Ignore
    Line: 	by nakamura.uits.iupui.edu (8.12.11.20060308/8.12.11/Submit) id m04GB1Lb007221
    Words ['by', 'nakamura.uits.iupui.edu', '(8.12.11.20060308/8.12.11/Submit)', 'id', 'm04GB1Lb007221']
    Ignore
    Line: 	for source@collab.sakaiproject.org; Fri, 4 Jan 2008 11:11:01 -0500
    Words ['for', 'source@collab.sakaiproject.org;', 'Fri,', '4', 'Jan', '2008', '11:11:01', '-0500']
    Ignore
    Line: Date: Fri, 4 Jan 2008 11:11:01 -0500
    Words ['Date:', 'Fri,', '4', 'Jan', '2008', '11:11:01', '-0500']
    Ignore
    Line: X-Authentication-Warning: nakamura.uits.iupui.edu: apache set sender to gsilver@umich.edu using -f
    Words ['X-Authentication-Warning:', 'nakamura.uits.iupui.edu:', 'apache', 'set', 'sender', 'to', 'gsilver@umich.edu', 'using', '-f']
    Ignore
    Line: To: source@collab.sakaiproject.org
    Words ['To:', 'source@collab.sakaiproject.org']
    Ignore
    Line: From: gsilver@umich.edu
    Words ['From:', 'gsilver@umich.edu']
    Ignore
    Line: Subject: [sakai] svn commit: r39762 - web/trunk/web-tool/tool/src/bundle
    Words ['Subject:', '[sakai]', 'svn', 'commit:', 'r39762', '-', 'web/trunk/web-tool/tool/src/bundle']
    Ignore
    Line: X-Content-Type-Outer-Envelope: text/plain; charset=UTF-8
    Words ['X-Content-Type-Outer-Envelope:', 'text/plain;', 'charset=UTF-8']
    Ignore
    Line: X-Content-Type-Message-Body: text/plain; charset=UTF-8
    Words ['X-Content-Type-Message-Body:', 'text/plain;', 'charset=UTF-8']
    Ignore
    Line: Content-Type: text/plain; charset=UTF-8
    Words ['Content-Type:', 'text/plain;', 'charset=UTF-8']
    Ignore
    Line: X-DSPAM-Result: Innocent
    Words ['X-DSPAM-Result:', 'Innocent']
    Ignore
    Line: X-DSPAM-Processed: Fri Jan  4 11:12:37 2008
    Words ['X-DSPAM-Processed:', 'Fri', 'Jan', '4', '11:12:37', '2008']
    Ignore
    Line: X-DSPAM-Confidence: 0.7601
    Words ['X-DSPAM-Confidence:', '0.7601']
    Ignore
    Line: X-DSPAM-Probability: 0.0000
    Words ['X-DSPAM-Probability:', '0.0000']
    Ignore
    Line: 
    Skip Blank
    Line: Details: http://source.sakaiproject.org/viewsvn/?view=rev&rev=39762
    Words ['Details:', 'http://source.sakaiproject.org/viewsvn/?view=rev&rev=39762']
    Ignore
    Line: 
    Skip Blank
    Line: Author: gsilver@umich.edu
    Words ['Author:', 'gsilver@umich.edu']
    Ignore
    Line: Date: 2008-01-04 11:11:00 -0500 (Fri, 04 Jan 2008)
    Words ['Date:', '2008-01-04', '11:11:00', '-0500', '(Fri,', '04', 'Jan', '2008)']
    Ignore
    Line: New Revision: 39762
    Words ['New', 'Revision:', '39762']
    Ignore
    Line: 
    Skip Blank
    Line: Modified:
    Words ['Modified:']
    Ignore
    Line: web/trunk/web-tool/tool/src/bundle/iframe.properties
    Words ['web/trunk/web-tool/tool/src/bundle/iframe.properties']
    Ignore
    Line: Log:
    Words ['Log:']
    Ignore
    Line: SAK-12596
    Words ['SAK-12596']
    Ignore
    Line: http://bugs.sakaiproject.org/jira/browse/SAK-12596
    Words ['http://bugs.sakaiproject.org/jira/browse/SAK-12596']
    Ignore
    Line: - left moot (unused) entries commented for now
    Words ['-', 'left', 'moot', '(unused)', 'entries', 'commented', 'for', 'now']
    Ignore
    Line: 
    Skip Blank
    Line: ----------------------
    Words ['----------------------']
    Ignore
    Line: This automatic notification message was sent by Sakai Collab (https://collab.sakaiproject.org/portal) from the Source site.
    Words ['This', 'automatic', 'notification', 'message', 'was', 'sent', 'by', 'Sakai', 'Collab', '(https://collab.sakaiproject.org/portal)', 'from', 'the', 'Source', 'site.']
    Ignore
    Line: You can modify how you receive notifications at My Workspace > Preferences.
    Words ['You', 'can', 'modify', 'how', 'you', 'receive', 'notifications', 'at', 'My', 'Workspace', '>', 'Preferences.']
    Ignore
    Line: 
    Skip Blank
    Line: 
    Skip Blank
    Line: 
    Skip Blank
    Line: From gsilver@umich.edu Fri Jan  4 11:11:52 2008
    Words ['From', 'gsilver@umich.edu', 'Fri', 'Jan', '4', '11:11:52', '2008']
    Fri
    Line: Return-Path: <postmaster@collab.sakaiproject.org>
    Words ['Return-Path:', '<postmaster@collab.sakaiproject.org>']
    Ignore
    Line: Received: from murder (mail.umich.edu [141.211.14.36])
    Words ['Received:', 'from', 'murder', '(mail.umich.edu', '[141.211.14.36])']
    Ignore
    Line: 	 by frankenstein.mail.umich.edu (Cyrus v2.3.8) with LMTPA;
    Words ['by', 'frankenstein.mail.umich.edu', '(Cyrus', 'v2.3.8)', 'with', 'LMTPA;']
    Ignore
    Line: 	 Fri, 04 Jan 2008 11:11:52 -0500
    Words ['Fri,', '04', 'Jan', '2008', '11:11:52', '-0500']
    Ignore
    Line: X-Sieve: CMU Sieve 2.3
    Words ['X-Sieve:', 'CMU', 'Sieve', '2.3']
    Ignore
    Line: Received: from murder ([unix socket])
    Words ['Received:', 'from', 'murder', '([unix', 'socket])']
    Ignore
    Line: 	 by mail.umich.edu (Cyrus v2.2.12) with LMTPA;
    Words ['by', 'mail.umich.edu', '(Cyrus', 'v2.2.12)', 'with', 'LMTPA;']
    Ignore
    Line: 	 Fri, 04 Jan 2008 11:11:52 -0500
    Words ['Fri,', '04', 'Jan', '2008', '11:11:52', '-0500']
    Ignore
    Line: Received: from creepshow.mr.itd.umich.edu (creepshow.mr.itd.umich.edu [141.211.14.84])
    Words ['Received:', 'from', 'creepshow.mr.itd.umich.edu', '(creepshow.mr.itd.umich.edu', '[141.211.14.84])']
    Ignore
    Line: 	by godsend.mail.umich.edu () with ESMTP id m04GBqqv025330;
    Words ['by', 'godsend.mail.umich.edu', '()', 'with', 'ESMTP', 'id', 'm04GBqqv025330;']
    Ignore
    Line: 	Fri, 4 Jan 2008 11:11:52 -0500
    Words ['Fri,', '4', 'Jan', '2008', '11:11:52', '-0500']
    Ignore
    Line: Received: FROM paploo.uhi.ac.uk (app1.prod.collab.uhi.ac.uk [194.35.219.184])
    Words ['Received:', 'FROM', 'paploo.uhi.ac.uk', '(app1.prod.collab.uhi.ac.uk', '[194.35.219.184])']
    Ignore
    Line: 	BY creepshow.mr.itd.umich.edu ID 477E5AB3.5CC32.30840 ;
    Words ['BY', 'creepshow.mr.itd.umich.edu', 'ID', '477E5AB3.5CC32.30840', ';']
    Ignore
    Line: 	 4 Jan 2008 11:11:34 -0500
    Words ['4', 'Jan', '2008', '11:11:34', '-0500']
    Ignore
    Line: Received: from paploo.uhi.ac.uk (localhost [127.0.0.1])
    Words ['Received:', 'from', 'paploo.uhi.ac.uk', '(localhost', '[127.0.0.1])']
    Ignore
    Line: 	by paploo.uhi.ac.uk (Postfix) with ESMTP id 62AA4BAE46;
    Words ['by', 'paploo.uhi.ac.uk', '(Postfix)', 'with', 'ESMTP', 'id', '62AA4BAE46;']
    Ignore
    Line: 	Fri,  4 Jan 2008 16:11:31 +0000 (GMT)
    Words ['Fri,', '4', 'Jan', '2008', '16:11:31', '+0000', '(GMT)']
    Ignore
    Line: Message-ID: <200801041610.m04GA5KP007209@nakamura.uits.iupui.edu>
    Words ['Message-ID:', '<200801041610.m04GA5KP007209@nakamura.uits.iupui.edu>']
    Ignore
    Line: Mime-Version: 1.0
    Words ['Mime-Version:', '1.0']
    Ignore
    Line: Content-Transfer-Encoding: 7bit
    Words ['Content-Transfer-Encoding:', '7bit']
    Ignore
    Line: Received: from prod.collab.uhi.ac.uk ([194.35.219.182])
    Words ['Received:', 'from', 'prod.collab.uhi.ac.uk', '([194.35.219.182])']
    Ignore
    Line:           by paploo.uhi.ac.uk (JAMES SMTP Server 2.1.3) with SMTP ID 1006
    Words ['by', 'paploo.uhi.ac.uk', '(JAMES', 'SMTP', 'Server', '2.1.3)', 'with', 'SMTP', 'ID', '1006']
    Ignore
    Line:           for <source@collab.sakaiproject.org>;
    Words ['for', '<source@collab.sakaiproject.org>;']
    Ignore
    Line:           Fri, 4 Jan 2008 16:11:18 +0000 (GMT)
    Words ['Fri,', '4', 'Jan', '2008', '16:11:18', '+0000', '(GMT)']
    Ignore
    Line: Received: from nakamura.uits.iupui.edu (nakamura.uits.iupui.edu [134.68.220.122])
    Words ['Received:', 'from', 'nakamura.uits.iupui.edu', '(nakamura.uits.iupui.edu', '[134.68.220.122])']
    Ignore
    Line: 	by shmi.uhi.ac.uk (Postfix) with ESMTP id C596A3DFA2
    Words ['by', 'shmi.uhi.ac.uk', '(Postfix)', 'with', 'ESMTP', 'id', 'C596A3DFA2']
    Ignore
    Line: 	for <source@collab.sakaiproject.org>; Fri,  4 Jan 2008 16:11:16 +0000 (GMT)
    Words ['for', '<source@collab.sakaiproject.org>;', 'Fri,', '4', 'Jan', '2008', '16:11:16', '+0000', '(GMT)']
    Ignore
    Line: Received: from nakamura.uits.iupui.edu (localhost [127.0.0.1])
    Words ['Received:', 'from', 'nakamura.uits.iupui.edu', '(localhost', '[127.0.0.1])']
    Ignore
    Line: 	by nakamura.uits.iupui.edu (8.12.11.20060308/8.12.11) with ESMTP id m04GA5LR007211
    Words ['by', 'nakamura.uits.iupui.edu', '(8.12.11.20060308/8.12.11)', 'with', 'ESMTP', 'id', 'm04GA5LR007211']
    Ignore
    Line: 	for <source@collab.sakaiproject.org>; Fri, 4 Jan 2008 11:10:05 -0500
    Words ['for', '<source@collab.sakaiproject.org>;', 'Fri,', '4', 'Jan', '2008', '11:10:05', '-0500']
    Ignore
    Line: Received: (from apache@localhost)
    Words ['Received:', '(from', 'apache@localhost)']
    Ignore
    Line: 	by nakamura.uits.iupui.edu (8.12.11.20060308/8.12.11/Submit) id m04GA5KP007209
    Words ['by', 'nakamura.uits.iupui.edu', '(8.12.11.20060308/8.12.11/Submit)', 'id', 'm04GA5KP007209']
    Ignore
    Line: 	for source@collab.sakaiproject.org; Fri, 4 Jan 2008 11:10:05 -0500
    Words ['for', 'source@collab.sakaiproject.org;', 'Fri,', '4', 'Jan', '2008', '11:10:05', '-0500']
    Ignore
    Line: Date: Fri, 4 Jan 2008 11:10:05 -0500
    Words ['Date:', 'Fri,', '4', 'Jan', '2008', '11:10:05', '-0500']
    Ignore
    Line: X-Authentication-Warning: nakamura.uits.iupui.edu: apache set sender to gsilver@umich.edu using -f
    Words ['X-Authentication-Warning:', 'nakamura.uits.iupui.edu:', 'apache', 'set', 'sender', 'to', 'gsilver@umich.edu', 'using', '-f']
    Ignore
    Line: To: source@collab.sakaiproject.org
    Words ['To:', 'source@collab.sakaiproject.org']
    Ignore
    Line: From: gsilver@umich.edu
    Words ['From:', 'gsilver@umich.edu']
    Ignore
    Line: Subject: [sakai] svn commit: r39761 - site/trunk/site-tool/tool/src/bundle
    Words ['Subject:', '[sakai]', 'svn', 'commit:', 'r39761', '-', 'site/trunk/site-tool/tool/src/bundle']
    Ignore
    Line: X-Content-Type-Outer-Envelope: text/plain; charset=UTF-8
    Words ['X-Content-Type-Outer-Envelope:', 'text/plain;', 'charset=UTF-8']
    Ignore
    Line: X-Content-Type-Message-Body: text/plain; charset=UTF-8
    Words ['X-Content-Type-Message-Body:', 'text/plain;', 'charset=UTF-8']
    Ignore
    Line: Content-Type: text/plain; charset=UTF-8
    Words ['Content-Type:', 'text/plain;', 'charset=UTF-8']
    Ignore
    Line: X-DSPAM-Result: Innocent
    Words ['X-DSPAM-Result:', 'Innocent']
    Ignore
    Line: X-DSPAM-Processed: Fri Jan  4 11:11:52 2008
    Words ['X-DSPAM-Processed:', 'Fri', 'Jan', '4', '11:11:52', '2008']
    Ignore
    Line: X-DSPAM-Confidence: 0.7605
    Words ['X-DSPAM-Confidence:', '0.7605']
    Ignore
    Line: X-DSPAM-Probability: 0.0000
    Words ['X-DSPAM-Probability:', '0.0000']
    Ignore
    Line: 
    Skip Blank
    Line: Details: http://source.sakaiproject.org/viewsvn/?view=rev&rev=39761
    Words ['Details:', 'http://source.sakaiproject.org/viewsvn/?view=rev&rev=39761']
    Ignore
    Line: 
    Skip Blank
    Line: Author: gsilver@umich.edu
    Words ['Author:', 'gsilver@umich.edu']
    Ignore
    Line: Date: 2008-01-04 11:10:04 -0500 (Fri, 04 Jan 2008)
    Words ['Date:', '2008-01-04', '11:10:04', '-0500', '(Fri,', '04', 'Jan', '2008)']
    Ignore
    Line: New Revision: 39761
    Words ['New', 'Revision:', '39761']
    Ignore
    Line: 
    Skip Blank
    Line: Modified:
    Words ['Modified:']
    Ignore
    Line: site/trunk/site-tool/tool/src/bundle/admin.properties
    Words ['site/trunk/site-tool/tool/src/bundle/admin.properties']
    Ignore
    Line: Log:
    Words ['Log:']
    Ignore
    Line: SAK-12595
    Words ['SAK-12595']
    Ignore
    Line: http://bugs.sakaiproject.org/jira/browse/SAK-12595
    Words ['http://bugs.sakaiproject.org/jira/browse/SAK-12595']
    Ignore
    Line: - left moot (unused) entries commented for now
    Words ['-', 'left', 'moot', '(unused)', 'entries', 'commented', 'for', 'now']
    Ignore
    Line: 
    Skip Blank
    Line: ----------------------
    Words ['----------------------']
    Ignore
    Line: This automatic notification message was sent by Sakai Collab (https://collab.sakaiproject.org/portal) from the Source site.
    Words ['This', 'automatic', 'notification', 'message', 'was', 'sent', 'by', 'Sakai', 'Collab', '(https://collab.sakaiproject.org/portal)', 'from', 'the', 'Source', 'site.']
    Ignore
    Line: You can modify how you receive notifications at My Workspace > Preferences.
    Words ['You', 'can', 'modify', 'how', 'you', 'receive', 'notifications', 'at', 'My', 'Workspace', '>', 'Preferences.']
    Ignore
    Line: 
    Skip Blank
    Line: 
    Skip Blank
    Line: 
    Skip Blank
    Line: From zqian@umich.edu Fri Jan  4 11:11:03 2008
    Words ['From', 'zqian@umich.edu', 'Fri', 'Jan', '4', '11:11:03', '2008']
    Fri
    Line: Return-Path: <postmaster@collab.sakaiproject.org>
    Words ['Return-Path:', '<postmaster@collab.sakaiproject.org>']
    Ignore
    Line: Received: from murder (mail.umich.edu [141.211.14.97])
    Words ['Received:', 'from', 'murder', '(mail.umich.edu', '[141.211.14.97])']
    Ignore
    Line: 	 by frankenstein.mail.umich.edu (Cyrus v2.3.8) with LMTPA;
    Words ['by', 'frankenstein.mail.umich.edu', '(Cyrus', 'v2.3.8)', 'with', 'LMTPA;']
    Ignore
    Line: 	 Fri, 04 Jan 2008 11:11:03 -0500
    Words ['Fri,', '04', 'Jan', '2008', '11:11:03', '-0500']
    Ignore
    Line: X-Sieve: CMU Sieve 2.3
    Words ['X-Sieve:', 'CMU', 'Sieve', '2.3']
    Ignore
    Line: Received: from murder ([unix socket])
    Words ['Received:', 'from', 'murder', '([unix', 'socket])']
    Ignore
    Line: 	 by mail.umich.edu (Cyrus v2.2.12) with LMTPA;
    Words ['by', 'mail.umich.edu', '(Cyrus', 'v2.2.12)', 'with', 'LMTPA;']
    Ignore
    Line: 	 Fri, 04 Jan 2008 11:11:03 -0500
    Words ['Fri,', '04', 'Jan', '2008', '11:11:03', '-0500']
    Ignore
    Line: Received: from carrie.mr.itd.umich.edu (carrie.mr.itd.umich.edu [141.211.93.152])
    Words ['Received:', 'from', 'carrie.mr.itd.umich.edu', '(carrie.mr.itd.umich.edu', '[141.211.93.152])']
    Ignore
    Line: 	by sleepers.mail.umich.edu () with ESMTP id m04GB3Vg011502;
    Words ['by', 'sleepers.mail.umich.edu', '()', 'with', 'ESMTP', 'id', 'm04GB3Vg011502;']
    Ignore
    Line: 	Fri, 4 Jan 2008 11:11:03 -0500
    Words ['Fri,', '4', 'Jan', '2008', '11:11:03', '-0500']
    Ignore
    Line: Received: FROM paploo.uhi.ac.uk (app1.prod.collab.uhi.ac.uk [194.35.219.184])
    Words ['Received:', 'FROM', 'paploo.uhi.ac.uk', '(app1.prod.collab.uhi.ac.uk', '[194.35.219.184])']
    Ignore
    Line: 	BY carrie.mr.itd.umich.edu ID 477E5A8D.B378F.24200 ;
    Words ['BY', 'carrie.mr.itd.umich.edu', 'ID', '477E5A8D.B378F.24200', ';']
    Ignore
    Line: 	 4 Jan 2008 11:10:56 -0500
    Words ['4', 'Jan', '2008', '11:10:56', '-0500']
    Ignore
    Line: Received: from paploo.uhi.ac.uk (localhost [127.0.0.1])
    Words ['Received:', 'from', 'paploo.uhi.ac.uk', '(localhost', '[127.0.0.1])']
    Ignore
    Line: 	by paploo.uhi.ac.uk (Postfix) with ESMTP id C7251BAD44;
    Words ['by', 'paploo.uhi.ac.uk', '(Postfix)', 'with', 'ESMTP', 'id', 'C7251BAD44;']
    Ignore
    Line: 	Fri,  4 Jan 2008 16:10:53 +0000 (GMT)
    Words ['Fri,', '4', 'Jan', '2008', '16:10:53', '+0000', '(GMT)']
    Ignore
    Line: Message-ID: <200801041609.m04G9EuX007197@nakamura.uits.iupui.edu>
    Words ['Message-ID:', '<200801041609.m04G9EuX007197@nakamura.uits.iupui.edu>']
    Ignore
    Line: Mime-Version: 1.0
    Words ['Mime-Version:', '1.0']
    Ignore
    Line: Content-Transfer-Encoding: 7bit
    Words ['Content-Transfer-Encoding:', '7bit']
    Ignore
    Line: Received: from prod.collab.uhi.ac.uk ([194.35.219.182])
    Words ['Received:', 'from', 'prod.collab.uhi.ac.uk', '([194.35.219.182])']
    Ignore
    Line:           by paploo.uhi.ac.uk (JAMES SMTP Server 2.1.3) with SMTP ID 483
    Words ['by', 'paploo.uhi.ac.uk', '(JAMES', 'SMTP', 'Server', '2.1.3)', 'with', 'SMTP', 'ID', '483']
    Ignore
    Line:           for <source@collab.sakaiproject.org>;
    Words ['for', '<source@collab.sakaiproject.org>;']
    Ignore
    Line:           Fri, 4 Jan 2008 16:10:27 +0000 (GMT)
    Words ['Fri,', '4', 'Jan', '2008', '16:10:27', '+0000', '(GMT)']
    Ignore
    Line: Received: from nakamura.uits.iupui.edu (nakamura.uits.iupui.edu [134.68.220.122])
    Words ['Received:', 'from', 'nakamura.uits.iupui.edu', '(nakamura.uits.iupui.edu', '[134.68.220.122])']
    Ignore
    Line: 	by shmi.uhi.ac.uk (Postfix) with ESMTP id 2E7043DFA2
    Words ['by', 'shmi.uhi.ac.uk', '(Postfix)', 'with', 'ESMTP', 'id', '2E7043DFA2']
    Ignore
    Line: 	for <source@collab.sakaiproject.org>; Fri,  4 Jan 2008 16:10:26 +0000 (GMT)
    Words ['for', '<source@collab.sakaiproject.org>;', 'Fri,', '4', 'Jan', '2008', '16:10:26', '+0000', '(GMT)']
    Ignore
    Line: Received: from nakamura.uits.iupui.edu (localhost [127.0.0.1])
    Words ['Received:', 'from', 'nakamura.uits.iupui.edu', '(localhost', '[127.0.0.1])']
    Ignore
    Line: 	by nakamura.uits.iupui.edu (8.12.11.20060308/8.12.11) with ESMTP id m04G9Eqg007199
    Words ['by', 'nakamura.uits.iupui.edu', '(8.12.11.20060308/8.12.11)', 'with', 'ESMTP', 'id', 'm04G9Eqg007199']
    Ignore
    Line: 	for <source@collab.sakaiproject.org>; Fri, 4 Jan 2008 11:09:15 -0500
    Words ['for', '<source@collab.sakaiproject.org>;', 'Fri,', '4', 'Jan', '2008', '11:09:15', '-0500']
    Ignore
    Line: Received: (from apache@localhost)
    Words ['Received:', '(from', 'apache@localhost)']
    Ignore
    Line: 	by nakamura.uits.iupui.edu (8.12.11.20060308/8.12.11/Submit) id m04G9EuX007197
    Words ['by', 'nakamura.uits.iupui.edu', '(8.12.11.20060308/8.12.11/Submit)', 'id', 'm04G9EuX007197']
    Ignore
    Line: 	for source@collab.sakaiproject.org; Fri, 4 Jan 2008 11:09:14 -0500
    Words ['for', 'source@collab.sakaiproject.org;', 'Fri,', '4', 'Jan', '2008', '11:09:14', '-0500']
    Ignore
    Line: Date: Fri, 4 Jan 2008 11:09:14 -0500
    Words ['Date:', 'Fri,', '4', 'Jan', '2008', '11:09:14', '-0500']
    Ignore
    Line: X-Authentication-Warning: nakamura.uits.iupui.edu: apache set sender to zqian@umich.edu using -f
    Words ['X-Authentication-Warning:', 'nakamura.uits.iupui.edu:', 'apache', 'set', 'sender', 'to', 'zqian@umich.edu', 'using', '-f']
    Ignore
    Line: To: source@collab.sakaiproject.org
    Words ['To:', 'source@collab.sakaiproject.org']
    Ignore
    Line: From: zqian@umich.edu
    Words ['From:', 'zqian@umich.edu']
    Ignore
    Line: Subject: [sakai] svn commit: r39760 - in site-manage/trunk/site-manage-tool/tool/src: java/org/sakaiproject/site/tool webapp/vm/sitesetup
    Words ['Subject:', '[sakai]', 'svn', 'commit:', 'r39760', '-', 'in', 'site-manage/trunk/site-manage-tool/tool/src:', 'java/org/sakaiproject/site/tool', 'webapp/vm/sitesetup']
    Ignore
    Line: X-Content-Type-Outer-Envelope: text/plain; charset=UTF-8
    Words ['X-Content-Type-Outer-Envelope:', 'text/plain;', 'charset=UTF-8']
    Ignore
    Line: X-Content-Type-Message-Body: text/plain; charset=UTF-8
    Words ['X-Content-Type-Message-Body:', 'text/plain;', 'charset=UTF-8']
    Ignore
    Line: Content-Type: text/plain; charset=UTF-8
    Words ['Content-Type:', 'text/plain;', 'charset=UTF-8']
    Ignore
    Line: X-DSPAM-Result: Innocent
    Words ['X-DSPAM-Result:', 'Innocent']
    Ignore
    Line: X-DSPAM-Processed: Fri Jan  4 11:11:03 2008
    Words ['X-DSPAM-Processed:', 'Fri', 'Jan', '4', '11:11:03', '2008']
    Ignore
    Line: X-DSPAM-Confidence: 0.6959
    Words ['X-DSPAM-Confidence:', '0.6959']
    Ignore
    Line: X-DSPAM-Probability: 0.0000
    Words ['X-DSPAM-Probability:', '0.0000']
    Ignore
    Line: 
    Skip Blank
    Line: Details: http://source.sakaiproject.org/viewsvn/?view=rev&rev=39760
    Words ['Details:', 'http://source.sakaiproject.org/viewsvn/?view=rev&rev=39760']
    Ignore
    Line: 
    Skip Blank
    Line: Author: zqian@umich.edu
    Words ['Author:', 'zqian@umich.edu']
    Ignore
    Line: Date: 2008-01-04 11:09:12 -0500 (Fri, 04 Jan 2008)
    Words ['Date:', '2008-01-04', '11:09:12', '-0500', '(Fri,', '04', 'Jan', '2008)']
    Ignore
    Line: New Revision: 39760
    Words ['New', 'Revision:', '39760']
    Ignore
    Line: 
    Skip Blank
    Line: Modified:
    Words ['Modified:']
    Ignore
    Line: site-manage/trunk/site-manage-tool/tool/src/java/org/sakaiproject/site/tool/SiteAction.java
    Words ['site-manage/trunk/site-manage-tool/tool/src/java/org/sakaiproject/site/tool/SiteAction.java']
    Ignore
    Line: site-manage/trunk/site-manage-tool/tool/src/webapp/vm/sitesetup/chef_site-siteInfo-list.vm
    Words ['site-manage/trunk/site-manage-tool/tool/src/webapp/vm/sitesetup/chef_site-siteInfo-list.vm']
    Ignore
    Line: Log:
    Words ['Log:']
    Ignore
    Line: fix to SAK-10911: Refactor use of site.upd, site.upd.site.mbrship and site.upd.grp.mbrship permissions
    Words ['fix', 'to', 'SAK-10911:', 'Refactor', 'use', 'of', 'site.upd,', 'site.upd.site.mbrship', 'and', 'site.upd.grp.mbrship', 'permissions']
    Ignore
    Line: 
    Skip Blank
    Line: ----------------------
    Words ['----------------------']
    Ignore
    Line: This automatic notification message was sent by Sakai Collab (https://collab.sakaiproject.org/portal) from the Source site.
    Words ['This', 'automatic', 'notification', 'message', 'was', 'sent', 'by', 'Sakai', 'Collab', '(https://collab.sakaiproject.org/portal)', 'from', 'the', 'Source', 'site.']
    Ignore
    Line: You can modify how you receive notifications at My Workspace > Preferences.
    Words ['You', 'can', 'modify', 'how', 'you', 'receive', 'notifications', 'at', 'My', 'Workspace', '>', 'Preferences.']
    Ignore
    Line: 
    Skip Blank
    Line: 
    Skip Blank
    Line: 
    Skip Blank
    Line: From gsilver@umich.edu Fri Jan  4 11:10:22 2008
    Words ['From', 'gsilver@umich.edu', 'Fri', 'Jan', '4', '11:10:22', '2008']
    Fri
    Line: Return-Path: <postmaster@collab.sakaiproject.org>
    Words ['Return-Path:', '<postmaster@collab.sakaiproject.org>']
    Ignore
    Line: Received: from murder (mail.umich.edu [141.211.14.39])
    Words ['Received:', 'from', 'murder', '(mail.umich.edu', '[141.211.14.39])']
    Ignore
    Line: 	 by frankenstein.mail.umich.edu (Cyrus v2.3.8) with LMTPA;
    Words ['by', 'frankenstein.mail.umich.edu', '(Cyrus', 'v2.3.8)', 'with', 'LMTPA;']
    Ignore
    Line: 	 Fri, 04 Jan 2008 11:10:22 -0500
    Words ['Fri,', '04', 'Jan', '2008', '11:10:22', '-0500']
    Ignore
    Line: X-Sieve: CMU Sieve 2.3
    Words ['X-Sieve:', 'CMU', 'Sieve', '2.3']
    Ignore
    Line: Received: from murder ([unix socket])
    Words ['Received:', 'from', 'murder', '([unix', 'socket])']
    Ignore
    Line: 	 by mail.umich.edu (Cyrus v2.2.12) with LMTPA;
    Words ['by', 'mail.umich.edu', '(Cyrus', 'v2.2.12)', 'with', 'LMTPA;']
    Ignore
    Line: 	 Fri, 04 Jan 2008 11:10:22 -0500
    Words ['Fri,', '04', 'Jan', '2008', '11:10:22', '-0500']
    Ignore
    Line: Received: from holes.mr.itd.umich.edu (holes.mr.itd.umich.edu [141.211.14.79])
    Words ['Received:', 'from', 'holes.mr.itd.umich.edu', '(holes.mr.itd.umich.edu', '[141.211.14.79])']
    Ignore
    Line: 	by faithful.mail.umich.edu () with ESMTP id m04GAL9k010604;
    Words ['by', 'faithful.mail.umich.edu', '()', 'with', 'ESMTP', 'id', 'm04GAL9k010604;']
    Ignore
    Line: 	Fri, 4 Jan 2008 11:10:21 -0500
    Words ['Fri,', '4', 'Jan', '2008', '11:10:21', '-0500']
    Ignore
    Line: Received: FROM paploo.uhi.ac.uk (app1.prod.collab.uhi.ac.uk [194.35.219.184])
    Words ['Received:', 'FROM', 'paploo.uhi.ac.uk', '(app1.prod.collab.uhi.ac.uk', '[194.35.219.184])']
    Ignore
    Line: 	BY holes.mr.itd.umich.edu ID 477E5A67.34350.23015 ;
    Words ['BY', 'holes.mr.itd.umich.edu', 'ID', '477E5A67.34350.23015', ';']
    Ignore
    Line: 	 4 Jan 2008 11:10:18 -0500
    Words ['4', 'Jan', '2008', '11:10:18', '-0500']
    Ignore
    Line: Received: from paploo.uhi.ac.uk (localhost [127.0.0.1])
    Words ['Received:', 'from', 'paploo.uhi.ac.uk', '(localhost', '[127.0.0.1])']
    Ignore
    Line: 	by paploo.uhi.ac.uk (Postfix) with ESMTP id 98D04BAD43;
    Words ['by', 'paploo.uhi.ac.uk', '(Postfix)', 'with', 'ESMTP', 'id', '98D04BAD43;']
    Ignore
    Line: 	Fri,  4 Jan 2008 16:10:11 +0000 (GMT)
    Words ['Fri,', '4', 'Jan', '2008', '16:10:11', '+0000', '(GMT)']
    Ignore
    Line: Message-ID: <200801041608.m04G8d7w007184@nakamura.uits.iupui.edu>
    Words ['Message-ID:', '<200801041608.m04G8d7w007184@nakamura.uits.iupui.edu>']
    Ignore
    Line: Mime-Version: 1.0
    Words ['Mime-Version:', '1.0']
    Ignore
    Line: Content-Transfer-Encoding: 7bit
    Words ['Content-Transfer-Encoding:', '7bit']
    Ignore
    Line: Received: from prod.collab.uhi.ac.uk ([194.35.219.182])
    Words ['Received:', 'from', 'prod.collab.uhi.ac.uk', '([194.35.219.182])']
    Ignore
    Line:           by paploo.uhi.ac.uk (JAMES SMTP Server 2.1.3) with SMTP ID 966
    Words ['by', 'paploo.uhi.ac.uk', '(JAMES', 'SMTP', 'Server', '2.1.3)', 'with', 'SMTP', 'ID', '966']
    Ignore
    Line:           for <source@collab.sakaiproject.org>;
    Words ['for', '<source@collab.sakaiproject.org>;']
    Ignore
    Line:           Fri, 4 Jan 2008 16:09:51 +0000 (GMT)
    Words ['Fri,', '4', 'Jan', '2008', '16:09:51', '+0000', '(GMT)']
    Ignore
    Line: Received: from nakamura.uits.iupui.edu (nakamura.uits.iupui.edu [134.68.220.122])
    Words ['Received:', 'from', 'nakamura.uits.iupui.edu', '(nakamura.uits.iupui.edu', '[134.68.220.122])']
    Ignore
    Line: 	by shmi.uhi.ac.uk (Postfix) with ESMTP id 9F89542DD0
    Words ['by', 'shmi.uhi.ac.uk', '(Postfix)', 'with', 'ESMTP', 'id', '9F89542DD0']
    Ignore
    Line: 	for <source@collab.sakaiproject.org>; Fri,  4 Jan 2008 16:09:50 +0000 (GMT)
    Words ['for', '<source@collab.sakaiproject.org>;', 'Fri,', '4', 'Jan', '2008', '16:09:50', '+0000', '(GMT)']
    Ignore
    Line: Received: from nakamura.uits.iupui.edu (localhost [127.0.0.1])
    Words ['Received:', 'from', 'nakamura.uits.iupui.edu', '(localhost', '[127.0.0.1])']
    Ignore
    Line: 	by nakamura.uits.iupui.edu (8.12.11.20060308/8.12.11) with ESMTP id m04G8dXN007186
    Words ['by', 'nakamura.uits.iupui.edu', '(8.12.11.20060308/8.12.11)', 'with', 'ESMTP', 'id', 'm04G8dXN007186']
    Ignore
    Line: 	for <source@collab.sakaiproject.org>; Fri, 4 Jan 2008 11:08:39 -0500
    Words ['for', '<source@collab.sakaiproject.org>;', 'Fri,', '4', 'Jan', '2008', '11:08:39', '-0500']
    Ignore
    Line: Received: (from apache@localhost)
    Words ['Received:', '(from', 'apache@localhost)']
    Ignore
    Line: 	by nakamura.uits.iupui.edu (8.12.11.20060308/8.12.11/Submit) id m04G8d7w007184
    Words ['by', 'nakamura.uits.iupui.edu', '(8.12.11.20060308/8.12.11/Submit)', 'id', 'm04G8d7w007184']
    Ignore
    Line: 	for source@collab.sakaiproject.org; Fri, 4 Jan 2008 11:08:39 -0500
    Words ['for', 'source@collab.sakaiproject.org;', 'Fri,', '4', 'Jan', '2008', '11:08:39', '-0500']
    Ignore
    Line: Date: Fri, 4 Jan 2008 11:08:39 -0500
    Words ['Date:', 'Fri,', '4', 'Jan', '2008', '11:08:39', '-0500']
    Ignore
    Line: X-Authentication-Warning: nakamura.uits.iupui.edu: apache set sender to gsilver@umich.edu using -f
    Words ['X-Authentication-Warning:', 'nakamura.uits.iupui.edu:', 'apache', 'set', 'sender', 'to', 'gsilver@umich.edu', 'using', '-f']
    Ignore
    Line: To: source@collab.sakaiproject.org
    Words ['To:', 'source@collab.sakaiproject.org']
    Ignore
    Line: From: gsilver@umich.edu
    Words ['From:', 'gsilver@umich.edu']
    Ignore
    Line: Subject: [sakai] svn commit: r39759 - mailarchive/trunk/mailarchive-tool/tool/src/bundle
    Words ['Subject:', '[sakai]', 'svn', 'commit:', 'r39759', '-', 'mailarchive/trunk/mailarchive-tool/tool/src/bundle']
    Ignore
    Line: X-Content-Type-Outer-Envelope: text/plain; charset=UTF-8
    Words ['X-Content-Type-Outer-Envelope:', 'text/plain;', 'charset=UTF-8']
    Ignore
    Line: X-Content-Type-Message-Body: text/plain; charset=UTF-8
    Words ['X-Content-Type-Message-Body:', 'text/plain;', 'charset=UTF-8']
    Ignore
    Line: Content-Type: text/plain; charset=UTF-8
    Words ['Content-Type:', 'text/plain;', 'charset=UTF-8']
    Ignore
    Line: X-DSPAM-Result: Innocent
    Words ['X-DSPAM-Result:', 'Innocent']
    Ignore
    Line: X-DSPAM-Processed: Fri Jan  4 11:10:22 2008
    Words ['X-DSPAM-Processed:', 'Fri', 'Jan', '4', '11:10:22', '2008']
    Ignore
    Line: X-DSPAM-Confidence: 0.7606
    Words ['X-DSPAM-Confidence:', '0.7606']
    Ignore
    Line: X-DSPAM-Probability: 0.0000
    Words ['X-DSPAM-Probability:', '0.0000']
    Ignore
    Line: 
    Skip Blank
    Line: Details: http://source.sakaiproject.org/viewsvn/?view=rev&rev=39759
    Words ['Details:', 'http://source.sakaiproject.org/viewsvn/?view=rev&rev=39759']
    Ignore
    Line: 
    Skip Blank
    Line: Author: gsilver@umich.edu
    Words ['Author:', 'gsilver@umich.edu']
    Ignore
    Line: Date: 2008-01-04 11:08:38 -0500 (Fri, 04 Jan 2008)
    Words ['Date:', '2008-01-04', '11:08:38', '-0500', '(Fri,', '04', 'Jan', '2008)']
    Ignore
    Line: New Revision: 39759
    Words ['New', 'Revision:', '39759']
    Ignore
    Line: 
    Skip Blank
    Line: Modified:
    Words ['Modified:']
    Ignore
    Line: mailarchive/trunk/mailarchive-tool/tool/src/bundle/email.properties
    Words ['mailarchive/trunk/mailarchive-tool/tool/src/bundle/email.properties']
    Ignore
    Line: Log:
    Words ['Log:']
    Ignore
    Line: SAK-12592
    Words ['SAK-12592']
    Ignore
    Line: http://bugs.sakaiproject.org/jira/browse/SAK-12592
    Words ['http://bugs.sakaiproject.org/jira/browse/SAK-12592']
    Ignore
    Line: - left moot (unused) entries commented for now
    Words ['-', 'left', 'moot', '(unused)', 'entries', 'commented', 'for', 'now']
    Ignore
    Line: 
    Skip Blank
    Line: ----------------------
    Words ['----------------------']
    Ignore
    Line: This automatic notification message was sent by Sakai Collab (https://collab.sakaiproject.org/portal) from the Source site.
    Words ['This', 'automatic', 'notification', 'message', 'was', 'sent', 'by', 'Sakai', 'Collab', '(https://collab.sakaiproject.org/portal)', 'from', 'the', 'Source', 'site.']
    Ignore
    Line: You can modify how you receive notifications at My Workspace > Preferences.
    Words ['You', 'can', 'modify', 'how', 'you', 'receive', 'notifications', 'at', 'My', 'Workspace', '>', 'Preferences.']
    Ignore
    Line: 
    Skip Blank
    Line: 
    Skip Blank
    Line: 
    Skip Blank
    Line: From wagnermr@iupui.edu Fri Jan  4 10:38:42 2008
    Words ['From', 'wagnermr@iupui.edu', 'Fri', 'Jan', '4', '10:38:42', '2008']
    Fri
    Line: Return-Path: <postmaster@collab.sakaiproject.org>
    Words ['Return-Path:', '<postmaster@collab.sakaiproject.org>']
    Ignore
    Line: Received: from murder (mail.umich.edu [141.211.14.90])
    Words ['Received:', 'from', 'murder', '(mail.umich.edu', '[141.211.14.90])']
    Ignore
    Line: 	 by frankenstein.mail.umich.edu (Cyrus v2.3.8) with LMTPA;
    Words ['by', 'frankenstein.mail.umich.edu', '(Cyrus', 'v2.3.8)', 'with', 'LMTPA;']
    Ignore
    Line: 	 Fri, 04 Jan 2008 10:38:42 -0500
    Words ['Fri,', '04', 'Jan', '2008', '10:38:42', '-0500']
    Ignore
    Line: X-Sieve: CMU Sieve 2.3
    Words ['X-Sieve:', 'CMU', 'Sieve', '2.3']
    Ignore
    Line: Received: from murder ([unix socket])
    Words ['Received:', 'from', 'murder', '([unix', 'socket])']
    Ignore
    Line: 	 by mail.umich.edu (Cyrus v2.2.12) with LMTPA;
    Words ['by', 'mail.umich.edu', '(Cyrus', 'v2.2.12)', 'with', 'LMTPA;']
    Ignore
    Line: 	 Fri, 04 Jan 2008 10:38:42 -0500
    Words ['Fri,', '04', 'Jan', '2008', '10:38:42', '-0500']
    Ignore
    Line: Received: from shining.mr.itd.umich.edu (shining.mr.itd.umich.edu [141.211.93.153])
    Words ['Received:', 'from', 'shining.mr.itd.umich.edu', '(shining.mr.itd.umich.edu', '[141.211.93.153])']
    Ignore
    Line: 	by flawless.mail.umich.edu () with ESMTP id m04Fcfjm012313;
    Words ['by', 'flawless.mail.umich.edu', '()', 'with', 'ESMTP', 'id', 'm04Fcfjm012313;']
    Ignore
    Line: 	Fri, 4 Jan 2008 10:38:41 -0500
    Words ['Fri,', '4', 'Jan', '2008', '10:38:41', '-0500']
    Ignore
    Line: Received: FROM paploo.uhi.ac.uk (app1.prod.collab.uhi.ac.uk [194.35.219.184])
    Words ['Received:', 'FROM', 'paploo.uhi.ac.uk', '(app1.prod.collab.uhi.ac.uk', '[194.35.219.184])']
    Ignore
    Line: 	BY shining.mr.itd.umich.edu ID 477E52FA.E6C6E.24093 ;
    Words ['BY', 'shining.mr.itd.umich.edu', 'ID', '477E52FA.E6C6E.24093', ';']
    Ignore
    Line: 	 4 Jan 2008 10:38:37 -0500
    Words ['4', 'Jan', '2008', '10:38:37', '-0500']
    Ignore
    Line: Received: from paploo.uhi.ac.uk (localhost [127.0.0.1])
    Words ['Received:', 'from', 'paploo.uhi.ac.uk', '(localhost', '[127.0.0.1])']
    Ignore
    Line: 	by paploo.uhi.ac.uk (Postfix) with ESMTP id 6A39594CD2;
    Words ['by', 'paploo.uhi.ac.uk', '(Postfix)', 'with', 'ESMTP', 'id', '6A39594CD2;']
    Ignore
    Line: 	Fri,  4 Jan 2008 15:37:36 +0000 (GMT)
    Words ['Fri,', '4', 'Jan', '2008', '15:37:36', '+0000', '(GMT)']
    Ignore
    Line: Message-ID: <200801041537.m04Fb6Ci007092@nakamura.uits.iupui.edu>
    Words ['Message-ID:', '<200801041537.m04Fb6Ci007092@nakamura.uits.iupui.edu>']
    Ignore
    Line: Mime-Version: 1.0
    Words ['Mime-Version:', '1.0']
    Ignore
    Line: Content-Transfer-Encoding: 7bit
    Words ['Content-Transfer-Encoding:', '7bit']
    Ignore
    Line: Received: from prod.collab.uhi.ac.uk ([194.35.219.182])
    Words ['Received:', 'from', 'prod.collab.uhi.ac.uk', '([194.35.219.182])']
    Ignore
    Line:           by paploo.uhi.ac.uk (JAMES SMTP Server 2.1.3) with SMTP ID 690
    Words ['by', 'paploo.uhi.ac.uk', '(JAMES', 'SMTP', 'Server', '2.1.3)', 'with', 'SMTP', 'ID', '690']
    Ignore
    Line:           for <source@collab.sakaiproject.org>;
    Words ['for', '<source@collab.sakaiproject.org>;']
    Ignore
    Line:           Fri, 4 Jan 2008 15:37:21 +0000 (GMT)
    Words ['Fri,', '4', 'Jan', '2008', '15:37:21', '+0000', '(GMT)']
    Ignore
    Line: Received: from nakamura.uits.iupui.edu (nakamura.uits.iupui.edu [134.68.220.122])
    Words ['Received:', 'from', 'nakamura.uits.iupui.edu', '(nakamura.uits.iupui.edu', '[134.68.220.122])']
    Ignore
    Line: 	by shmi.uhi.ac.uk (Postfix) with ESMTP id CEFA037ACE
    Words ['by', 'shmi.uhi.ac.uk', '(Postfix)', 'with', 'ESMTP', 'id', 'CEFA037ACE']
    Ignore
    Line: 	for <source@collab.sakaiproject.org>; Fri,  4 Jan 2008 15:38:17 +0000 (GMT)
    Words ['for', '<source@collab.sakaiproject.org>;', 'Fri,', '4', 'Jan', '2008', '15:38:17', '+0000', '(GMT)']
    Ignore
    Line: Received: from nakamura.uits.iupui.edu (localhost [127.0.0.1])
    Words ['Received:', 'from', 'nakamura.uits.iupui.edu', '(localhost', '[127.0.0.1])']
    Ignore
    Line: 	by nakamura.uits.iupui.edu (8.12.11.20060308/8.12.11) with ESMTP id m04Fb6nh007094
    Words ['by', 'nakamura.uits.iupui.edu', '(8.12.11.20060308/8.12.11)', 'with', 'ESMTP', 'id', 'm04Fb6nh007094']
    Ignore
    Line: 	for <source@collab.sakaiproject.org>; Fri, 4 Jan 2008 10:37:06 -0500
    Words ['for', '<source@collab.sakaiproject.org>;', 'Fri,', '4', 'Jan', '2008', '10:37:06', '-0500']
    Ignore
    Line: Received: (from apache@localhost)
    Words ['Received:', '(from', 'apache@localhost)']
    Ignore
    Line: 	by nakamura.uits.iupui.edu (8.12.11.20060308/8.12.11/Submit) id m04Fb6Ci007092
    Words ['by', 'nakamura.uits.iupui.edu', '(8.12.11.20060308/8.12.11/Submit)', 'id', 'm04Fb6Ci007092']
    Ignore
    Line: 	for source@collab.sakaiproject.org; Fri, 4 Jan 2008 10:37:06 -0500
    Words ['for', 'source@collab.sakaiproject.org;', 'Fri,', '4', 'Jan', '2008', '10:37:06', '-0500']
    Ignore
    Line: Date: Fri, 4 Jan 2008 10:37:06 -0500
    Words ['Date:', 'Fri,', '4', 'Jan', '2008', '10:37:06', '-0500']
    Ignore
    Line: X-Authentication-Warning: nakamura.uits.iupui.edu: apache set sender to wagnermr@iupui.edu using -f
    Words ['X-Authentication-Warning:', 'nakamura.uits.iupui.edu:', 'apache', 'set', 'sender', 'to', 'wagnermr@iupui.edu', 'using', '-f']
    Ignore
    Line: To: source@collab.sakaiproject.org
    Words ['To:', 'source@collab.sakaiproject.org']
    Ignore
    Line: From: wagnermr@iupui.edu
    Words ['From:', 'wagnermr@iupui.edu']
    Ignore
    Line: Subject: [sakai] svn commit: r39758 - in gradebook/trunk: app/business/src/java/org/sakaiproject/tool/gradebook/business/impl service/api/src/java/org/sakaiproject/service/gradebook/shared service/impl/src/java/org/sakaiproject/component/gradebook
    Words ['Subject:', '[sakai]', 'svn', 'commit:', 'r39758', '-', 'in', 'gradebook/trunk:', 'app/business/src/java/org/sakaiproject/tool/gradebook/business/impl', 'service/api/src/java/org/sakaiproject/service/gradebook/shared', 'service/impl/src/java/org/sakaiproject/component/gradebook']
    Ignore
    Line: X-Content-Type-Outer-Envelope: text/plain; charset=UTF-8
    Words ['X-Content-Type-Outer-Envelope:', 'text/plain;', 'charset=UTF-8']
    Ignore
    Line: X-Content-Type-Message-Body: text/plain; charset=UTF-8
    Words ['X-Content-Type-Message-Body:', 'text/plain;', 'charset=UTF-8']
    Ignore
    Line: Content-Type: text/plain; charset=UTF-8
    Words ['Content-Type:', 'text/plain;', 'charset=UTF-8']
    Ignore
    Line: X-DSPAM-Result: Innocent
    Words ['X-DSPAM-Result:', 'Innocent']
    Ignore
    Line: X-DSPAM-Processed: Fri Jan  4 10:38:42 2008
    Words ['X-DSPAM-Processed:', 'Fri', 'Jan', '4', '10:38:42', '2008']
    Ignore
    Line: X-DSPAM-Confidence: 0.7559
    Words ['X-DSPAM-Confidence:', '0.7559']
    Ignore
    Line: X-DSPAM-Probability: 0.0000
    Words ['X-DSPAM-Probability:', '0.0000']
    Ignore
    Line: 
    Skip Blank
    Line: Details: http://source.sakaiproject.org/viewsvn/?view=rev&rev=39758
    Words ['Details:', 'http://source.sakaiproject.org/viewsvn/?view=rev&rev=39758']
    Ignore
    Line: 
    Skip Blank
    Line: Author: wagnermr@iupui.edu
    Words ['Author:', 'wagnermr@iupui.edu']
    Ignore
    Line: Date: 2008-01-04 10:37:04 -0500 (Fri, 04 Jan 2008)
    Words ['Date:', '2008-01-04', '10:37:04', '-0500', '(Fri,', '04', 'Jan', '2008)']
    Ignore
    Line: New Revision: 39758
    Words ['New', 'Revision:', '39758']
    Ignore
    Line: 
    Skip Blank
    Line: Modified:
    Words ['Modified:']
    Ignore
    Line: gradebook/trunk/app/business/src/java/org/sakaiproject/tool/gradebook/business/impl/GradebookManagerHibernateImpl.java
    Words ['gradebook/trunk/app/business/src/java/org/sakaiproject/tool/gradebook/business/impl/GradebookManagerHibernateImpl.java']
    Ignore
    Line: gradebook/trunk/service/api/src/java/org/sakaiproject/service/gradebook/shared/GradebookService.java
    Words ['gradebook/trunk/service/api/src/java/org/sakaiproject/service/gradebook/shared/GradebookService.java']
    Ignore
    Line: gradebook/trunk/service/impl/src/java/org/sakaiproject/component/gradebook/GradebookServiceHibernateImpl.java
    Words ['gradebook/trunk/service/impl/src/java/org/sakaiproject/component/gradebook/GradebookServiceHibernateImpl.java']
    Ignore
    Line: Log:
    Words ['Log:']
    Ignore
    Line: SAK-12175
    Words ['SAK-12175']
    Ignore
    Line: http://bugs.sakaiproject.org/jira/browse/SAK-12175
    Words ['http://bugs.sakaiproject.org/jira/browse/SAK-12175']
    Ignore
    Line: Create methods required for gb integration with the Assignment2 tool
    Words ['Create', 'methods', 'required', 'for', 'gb', 'integration', 'with', 'the', 'Assignment2', 'tool']
    Ignore
    Line: getGradeDefinitionForStudentForItem
    Words ['getGradeDefinitionForStudentForItem']
    Ignore
    Line: 
    Skip Blank
    Line: ----------------------
    Words ['----------------------']
    Ignore
    Line: This automatic notification message was sent by Sakai Collab (https://collab.sakaiproject.org/portal) from the Source site.
    Words ['This', 'automatic', 'notification', 'message', 'was', 'sent', 'by', 'Sakai', 'Collab', '(https://collab.sakaiproject.org/portal)', 'from', 'the', 'Source', 'site.']
    Ignore
    Line: You can modify how you receive notifications at My Workspace > Preferences.
    Words ['You', 'can', 'modify', 'how', 'you', 'receive', 'notifications', 'at', 'My', 'Workspace', '>', 'Preferences.']
    Ignore
    Line: 
    Skip Blank
    Line: 
    Skip Blank
    Line: 
    Skip Blank
    Line: From zqian@umich.edu Fri Jan  4 10:17:43 2008
    Words ['From', 'zqian@umich.edu', 'Fri', 'Jan', '4', '10:17:43', '2008']
    Fri
    Line: Return-Path: <postmaster@collab.sakaiproject.org>
    Words ['Return-Path:', '<postmaster@collab.sakaiproject.org>']
    Ignore
    Line: Received: from murder (mail.umich.edu [141.211.14.97])
    Words ['Received:', 'from', 'murder', '(mail.umich.edu', '[141.211.14.97])']
    Ignore
    Line: 	 by frankenstein.mail.umich.edu (Cyrus v2.3.8) with LMTPA;
    Words ['by', 'frankenstein.mail.umich.edu', '(Cyrus', 'v2.3.8)', 'with', 'LMTPA;']
    Ignore
    Line: 	 Fri, 04 Jan 2008 10:17:43 -0500
    Words ['Fri,', '04', 'Jan', '2008', '10:17:43', '-0500']
    Ignore
    Line: X-Sieve: CMU Sieve 2.3
    Words ['X-Sieve:', 'CMU', 'Sieve', '2.3']
    Ignore
    Line: Received: from murder ([unix socket])
    Words ['Received:', 'from', 'murder', '([unix', 'socket])']
    Ignore
    Line: 	 by mail.umich.edu (Cyrus v2.2.12) with LMTPA;
    Words ['by', 'mail.umich.edu', '(Cyrus', 'v2.2.12)', 'with', 'LMTPA;']
    Ignore
    Line: 	 Fri, 04 Jan 2008 10:17:42 -0500
    Words ['Fri,', '04', 'Jan', '2008', '10:17:42', '-0500']
    Ignore
    Line: Received: from creepshow.mr.itd.umich.edu (creepshow.mr.itd.umich.edu [141.211.14.84])
    Words ['Received:', 'from', 'creepshow.mr.itd.umich.edu', '(creepshow.mr.itd.umich.edu', '[141.211.14.84])']
    Ignore
    Line: 	by sleepers.mail.umich.edu () with ESMTP id m04FHgfs011536;
    Words ['by', 'sleepers.mail.umich.edu', '()', 'with', 'ESMTP', 'id', 'm04FHgfs011536;']
    Ignore
    Line: 	Fri, 4 Jan 2008 10:17:42 -0500
    Words ['Fri,', '4', 'Jan', '2008', '10:17:42', '-0500']
    Ignore
    Line: Received: FROM paploo.uhi.ac.uk (app1.prod.collab.uhi.ac.uk [194.35.219.184])
    Words ['Received:', 'FROM', 'paploo.uhi.ac.uk', '(app1.prod.collab.uhi.ac.uk', '[194.35.219.184])']
    Ignore
    Line: 	BY creepshow.mr.itd.umich.edu ID 477E4E0F.CCA4B.926 ;
    Words ['BY', 'creepshow.mr.itd.umich.edu', 'ID', '477E4E0F.CCA4B.926', ';']
    Ignore
    Line: 	 4 Jan 2008 10:17:38 -0500
    Words ['4', 'Jan', '2008', '10:17:38', '-0500']
    Ignore
    Line: Received: from paploo.uhi.ac.uk (localhost [127.0.0.1])
    Words ['Received:', 'from', 'paploo.uhi.ac.uk', '(localhost', '[127.0.0.1])']
    Ignore
    Line: 	by paploo.uhi.ac.uk (Postfix) with ESMTP id BD02DBAC64;
    Words ['by', 'paploo.uhi.ac.uk', '(Postfix)', 'with', 'ESMTP', 'id', 'BD02DBAC64;']
    Ignore
    Line: 	Fri,  4 Jan 2008 15:17:34 +0000 (GMT)
    Words ['Fri,', '4', 'Jan', '2008', '15:17:34', '+0000', '(GMT)']
    Ignore
    Line: Message-ID: <200801041515.m04FFv42007050@nakamura.uits.iupui.edu>
    Words ['Message-ID:', '<200801041515.m04FFv42007050@nakamura.uits.iupui.edu>']
    Ignore
    Line: Mime-Version: 1.0
    Words ['Mime-Version:', '1.0']
    Ignore
    Line: Content-Transfer-Encoding: 7bit
    Words ['Content-Transfer-Encoding:', '7bit']
    Ignore
    Line: Received: from prod.collab.uhi.ac.uk ([194.35.219.182])
    Words ['Received:', 'from', 'prod.collab.uhi.ac.uk', '([194.35.219.182])']
    Ignore
    Line:           by paploo.uhi.ac.uk (JAMES SMTP Server 2.1.3) with SMTP ID 25
    Words ['by', 'paploo.uhi.ac.uk', '(JAMES', 'SMTP', 'Server', '2.1.3)', 'with', 'SMTP', 'ID', '25']
    Ignore
    Line:           for <source@collab.sakaiproject.org>;
    Words ['for', '<source@collab.sakaiproject.org>;']
    Ignore
    Line:           Fri, 4 Jan 2008 15:17:11 +0000 (GMT)
    Words ['Fri,', '4', 'Jan', '2008', '15:17:11', '+0000', '(GMT)']
    Ignore
    Line: Received: from nakamura.uits.iupui.edu (nakamura.uits.iupui.edu [134.68.220.122])
    Words ['Received:', 'from', 'nakamura.uits.iupui.edu', '(nakamura.uits.iupui.edu', '[134.68.220.122])']
    Ignore
    Line: 	by shmi.uhi.ac.uk (Postfix) with ESMTP id 5B396236B9
    Words ['by', 'shmi.uhi.ac.uk', '(Postfix)', 'with', 'ESMTP', 'id', '5B396236B9']
    Ignore
    Line: 	for <source@collab.sakaiproject.org>; Fri,  4 Jan 2008 15:17:08 +0000 (GMT)
    Words ['for', '<source@collab.sakaiproject.org>;', 'Fri,', '4', 'Jan', '2008', '15:17:08', '+0000', '(GMT)']
    Ignore
    Line: Received: from nakamura.uits.iupui.edu (localhost [127.0.0.1])
    Words ['Received:', 'from', 'nakamura.uits.iupui.edu', '(localhost', '[127.0.0.1])']
    Ignore
    Line: 	by nakamura.uits.iupui.edu (8.12.11.20060308/8.12.11) with ESMTP id m04FFv85007052
    Words ['by', 'nakamura.uits.iupui.edu', '(8.12.11.20060308/8.12.11)', 'with', 'ESMTP', 'id', 'm04FFv85007052']
    Ignore
    Line: 	for <source@collab.sakaiproject.org>; Fri, 4 Jan 2008 10:15:57 -0500
    Words ['for', '<source@collab.sakaiproject.org>;', 'Fri,', '4', 'Jan', '2008', '10:15:57', '-0500']
    Ignore
    Line: Received: (from apache@localhost)
    Words ['Received:', '(from', 'apache@localhost)']
    Ignore
    Line: 	by nakamura.uits.iupui.edu (8.12.11.20060308/8.12.11/Submit) id m04FFv42007050
    Words ['by', 'nakamura.uits.iupui.edu', '(8.12.11.20060308/8.12.11/Submit)', 'id', 'm04FFv42007050']
    Ignore
    Line: 	for source@collab.sakaiproject.org; Fri, 4 Jan 2008 10:15:57 -0500
    Words ['for', 'source@collab.sakaiproject.org;', 'Fri,', '4', 'Jan', '2008', '10:15:57', '-0500']
    Ignore
    Line: Date: Fri, 4 Jan 2008 10:15:57 -0500
    Words ['Date:', 'Fri,', '4', 'Jan', '2008', '10:15:57', '-0500']
    Ignore
    Line: X-Authentication-Warning: nakamura.uits.iupui.edu: apache set sender to zqian@umich.edu using -f
    Words ['X-Authentication-Warning:', 'nakamura.uits.iupui.edu:', 'apache', 'set', 'sender', 'to', 'zqian@umich.edu', 'using', '-f']
    Ignore
    Line: To: source@collab.sakaiproject.org
    Words ['To:', 'source@collab.sakaiproject.org']
    Ignore
    Line: From: zqian@umich.edu
    Words ['From:', 'zqian@umich.edu']
    Ignore
    Line: Subject: [sakai] svn commit: r39757 - in assignment/trunk: assignment-impl/impl/src/java/org/sakaiproject/assignment/impl assignment-tool/tool/src/webapp/vm/assignment
    Words ['Subject:', '[sakai]', 'svn', 'commit:', 'r39757', '-', 'in', 'assignment/trunk:', 'assignment-impl/impl/src/java/org/sakaiproject/assignment/impl', 'assignment-tool/tool/src/webapp/vm/assignment']
    Ignore
    Line: X-Content-Type-Outer-Envelope: text/plain; charset=UTF-8
    Words ['X-Content-Type-Outer-Envelope:', 'text/plain;', 'charset=UTF-8']
    Ignore
    Line: X-Content-Type-Message-Body: text/plain; charset=UTF-8
    Words ['X-Content-Type-Message-Body:', 'text/plain;', 'charset=UTF-8']
    Ignore
    Line: Content-Type: text/plain; charset=UTF-8
    Words ['Content-Type:', 'text/plain;', 'charset=UTF-8']
    Ignore
    Line: X-DSPAM-Result: Innocent
    Words ['X-DSPAM-Result:', 'Innocent']
    Ignore
    Line: X-DSPAM-Processed: Fri Jan  4 10:17:42 2008
    Words ['X-DSPAM-Processed:', 'Fri', 'Jan', '4', '10:17:42', '2008']
    Ignore
    Line: X-DSPAM-Confidence: 0.7605
    Words ['X-DSPAM-Confidence:', '0.7605']
    Ignore
    Line: X-DSPAM-Probability: 0.0000
    Words ['X-DSPAM-Probability:', '0.0000']
    Ignore
    Line: 
    Skip Blank
    Line: Details: http://source.sakaiproject.org/viewsvn/?view=rev&rev=39757
    Words ['Details:', 'http://source.sakaiproject.org/viewsvn/?view=rev&rev=39757']
    Ignore
    Line: 
    Skip Blank
    Line: Author: zqian@umich.edu
    Words ['Author:', 'zqian@umich.edu']
    Ignore
    Line: Date: 2008-01-04 10:15:54 -0500 (Fri, 04 Jan 2008)
    Words ['Date:', '2008-01-04', '10:15:54', '-0500', '(Fri,', '04', 'Jan', '2008)']
    Ignore
    Line: New Revision: 39757
    Words ['New', 'Revision:', '39757']
    Ignore
    Line: 
    Skip Blank
    Line: Modified:
    Words ['Modified:']
    Ignore
    Line: assignment/trunk/assignment-impl/impl/src/java/org/sakaiproject/assignment/impl/BaseAssignmentService.java
    Words ['assignment/trunk/assignment-impl/impl/src/java/org/sakaiproject/assignment/impl/BaseAssignmentService.java']
    Ignore
    Line: assignment/trunk/assignment-tool/tool/src/webapp/vm/assignment/chef_assignments_instructor_list_submissions.vm
    Words ['assignment/trunk/assignment-tool/tool/src/webapp/vm/assignment/chef_assignments_instructor_list_submissions.vm']
    Ignore
    Line: Log:
    Words ['Log:']
    Ignore
    Line: fix to SAK-12604:Don't show groups/sections filter if the site doesn't have any
    Words ['fix', 'to', "SAK-12604:Don't", 'show', 'groups/sections', 'filter', 'if', 'the', 'site', "doesn't", 'have', 'any']
    Ignore
    Line: 
    Skip Blank
    Line: ----------------------
    Words ['----------------------']
    Ignore
    Line: This automatic notification message was sent by Sakai Collab (https://collab.sakaiproject.org/portal) from the Source site.
    Words ['This', 'automatic', 'notification', 'message', 'was', 'sent', 'by', 'Sakai', 'Collab', '(https://collab.sakaiproject.org/portal)', 'from', 'the', 'Source', 'site.']
    Ignore
    Line: You can modify how you receive notifications at My Workspace > Preferences.
    Words ['You', 'can', 'modify', 'how', 'you', 'receive', 'notifications', 'at', 'My', 'Workspace', '>', 'Preferences.']
    Ignore
    Line: 
    Skip Blank
    Line: 
    Skip Blank
    Line: 
    Skip Blank
    Line: From antranig@caret.cam.ac.uk Fri Jan  4 10:04:14 2008
    Words ['From', 'antranig@caret.cam.ac.uk', 'Fri', 'Jan', '4', '10:04:14', '2008']
    Fri
    Line: Return-Path: <postmaster@collab.sakaiproject.org>
    Words ['Return-Path:', '<postmaster@collab.sakaiproject.org>']
    Ignore
    Line: Received: from murder (mail.umich.edu [141.211.14.25])
    Words ['Received:', 'from', 'murder', '(mail.umich.edu', '[141.211.14.25])']
    Ignore
    Line: 	 by frankenstein.mail.umich.edu (Cyrus v2.3.8) with LMTPA;
    Words ['by', 'frankenstein.mail.umich.edu', '(Cyrus', 'v2.3.8)', 'with', 'LMTPA;']
    Ignore
    Line: 	 Fri, 04 Jan 2008 10:04:14 -0500
    Words ['Fri,', '04', 'Jan', '2008', '10:04:14', '-0500']
    Ignore
    Line: X-Sieve: CMU Sieve 2.3
    Words ['X-Sieve:', 'CMU', 'Sieve', '2.3']
    Ignore
    Line: Received: from murder ([unix socket])
    Words ['Received:', 'from', 'murder', '([unix', 'socket])']
    Ignore
    Line: 	 by mail.umich.edu (Cyrus v2.2.12) with LMTPA;
    Words ['by', 'mail.umich.edu', '(Cyrus', 'v2.2.12)', 'with', 'LMTPA;']
    Ignore
    Line: 	 Fri, 04 Jan 2008 10:04:14 -0500
    Words ['Fri,', '04', 'Jan', '2008', '10:04:14', '-0500']
    Ignore
    Line: Received: from holes.mr.itd.umich.edu (holes.mr.itd.umich.edu [141.211.14.79])
    Words ['Received:', 'from', 'holes.mr.itd.umich.edu', '(holes.mr.itd.umich.edu', '[141.211.14.79])']
    Ignore
    Line: 	by panther.mail.umich.edu () with ESMTP id m04F4Dci015108;
    Words ['by', 'panther.mail.umich.edu', '()', 'with', 'ESMTP', 'id', 'm04F4Dci015108;']
    Ignore
    Line: 	Fri, 4 Jan 2008 10:04:13 -0500
    Words ['Fri,', '4', 'Jan', '2008', '10:04:13', '-0500']
    Ignore
    Line: Received: FROM paploo.uhi.ac.uk (app1.prod.collab.uhi.ac.uk [194.35.219.184])
    Words ['Received:', 'FROM', 'paploo.uhi.ac.uk', '(app1.prod.collab.uhi.ac.uk', '[194.35.219.184])']
    Ignore
    Line: 	BY holes.mr.itd.umich.edu ID 477E4AE3.D7AF.31669 ;
    Words ['BY', 'holes.mr.itd.umich.edu', 'ID', '477E4AE3.D7AF.31669', ';']
    Ignore
    Line: 	 4 Jan 2008 10:04:05 -0500
    Words ['4', 'Jan', '2008', '10:04:05', '-0500']
    Ignore
    Line: Received: from paploo.uhi.ac.uk (localhost [127.0.0.1])
    Words ['Received:', 'from', 'paploo.uhi.ac.uk', '(localhost', '[127.0.0.1])']
    Ignore
    Line: 	by paploo.uhi.ac.uk (Postfix) with ESMTP id 933E3BAC17;
    Words ['by', 'paploo.uhi.ac.uk', '(Postfix)', 'with', 'ESMTP', 'id', '933E3BAC17;']
    Ignore
    Line: 	Fri,  4 Jan 2008 15:04:00 +0000 (GMT)
    Words ['Fri,', '4', 'Jan', '2008', '15:04:00', '+0000', '(GMT)']
    Ignore
    Line: Message-ID: <200801041502.m04F21Jo007031@nakamura.uits.iupui.edu>
    Words ['Message-ID:', '<200801041502.m04F21Jo007031@nakamura.uits.iupui.edu>']
    Ignore
    Line: Mime-Version: 1.0
    Words ['Mime-Version:', '1.0']
    Ignore
    Line: Content-Transfer-Encoding: 7bit
    Words ['Content-Transfer-Encoding:', '7bit']
    Ignore
    Line: Received: from prod.collab.uhi.ac.uk ([194.35.219.182])
    Words ['Received:', 'from', 'prod.collab.uhi.ac.uk', '([194.35.219.182])']
    Ignore
    Line:           by paploo.uhi.ac.uk (JAMES SMTP Server 2.1.3) with SMTP ID 32
    Words ['by', 'paploo.uhi.ac.uk', '(JAMES', 'SMTP', 'Server', '2.1.3)', 'with', 'SMTP', 'ID', '32']
    Ignore
    Line:           for <source@collab.sakaiproject.org>;
    Words ['for', '<source@collab.sakaiproject.org>;']
    Ignore
    Line:           Fri, 4 Jan 2008 15:03:15 +0000 (GMT)
    Words ['Fri,', '4', 'Jan', '2008', '15:03:15', '+0000', '(GMT)']
    Ignore
    Line: Received: from nakamura.uits.iupui.edu (nakamura.uits.iupui.edu [134.68.220.122])
    Words ['Received:', 'from', 'nakamura.uits.iupui.edu', '(nakamura.uits.iupui.edu', '[134.68.220.122])']
    Ignore
    Line: 	by shmi.uhi.ac.uk (Postfix) with ESMTP id AC2F6236B9
    Words ['by', 'shmi.uhi.ac.uk', '(Postfix)', 'with', 'ESMTP', 'id', 'AC2F6236B9']
    Ignore
    Line: 	for <source@collab.sakaiproject.org>; Fri,  4 Jan 2008 15:03:12 +0000 (GMT)
    Words ['for', '<source@collab.sakaiproject.org>;', 'Fri,', '4', 'Jan', '2008', '15:03:12', '+0000', '(GMT)']
    Ignore
    Line: Received: from nakamura.uits.iupui.edu (localhost [127.0.0.1])
    Words ['Received:', 'from', 'nakamura.uits.iupui.edu', '(localhost', '[127.0.0.1])']
    Ignore
    Line: 	by nakamura.uits.iupui.edu (8.12.11.20060308/8.12.11) with ESMTP id m04F21hn007033
    Words ['by', 'nakamura.uits.iupui.edu', '(8.12.11.20060308/8.12.11)', 'with', 'ESMTP', 'id', 'm04F21hn007033']
    Ignore
    Line: 	for <source@collab.sakaiproject.org>; Fri, 4 Jan 2008 10:02:01 -0500
    Words ['for', '<source@collab.sakaiproject.org>;', 'Fri,', '4', 'Jan', '2008', '10:02:01', '-0500']
    Ignore
    Line: Received: (from apache@localhost)
    Words ['Received:', '(from', 'apache@localhost)']
    Ignore
    Line: 	by nakamura.uits.iupui.edu (8.12.11.20060308/8.12.11/Submit) id m04F21Jo007031
    Words ['by', 'nakamura.uits.iupui.edu', '(8.12.11.20060308/8.12.11/Submit)', 'id', 'm04F21Jo007031']
    Ignore
    Line: 	for source@collab.sakaiproject.org; Fri, 4 Jan 2008 10:02:01 -0500
    Words ['for', 'source@collab.sakaiproject.org;', 'Fri,', '4', 'Jan', '2008', '10:02:01', '-0500']
    Ignore
    Line: Date: Fri, 4 Jan 2008 10:02:01 -0500
    Words ['Date:', 'Fri,', '4', 'Jan', '2008', '10:02:01', '-0500']
    Ignore
    Line: X-Authentication-Warning: nakamura.uits.iupui.edu: apache set sender to antranig@caret.cam.ac.uk using -f
    Words ['X-Authentication-Warning:', 'nakamura.uits.iupui.edu:', 'apache', 'set', 'sender', 'to', 'antranig@caret.cam.ac.uk', 'using', '-f']
    Ignore
    Line: To: source@collab.sakaiproject.org
    Words ['To:', 'source@collab.sakaiproject.org']
    Ignore
    Line: From: antranig@caret.cam.ac.uk
    Words ['From:', 'antranig@caret.cam.ac.uk']
    Ignore
    Line: Subject: [sakai] svn commit: r39756 - in component/branches/SAK-12166/component-api/component/src/java/org/sakaiproject/component: impl impl/spring/support impl/spring/support/dynamic impl/support util
    Words ['Subject:', '[sakai]', 'svn', 'commit:', 'r39756', '-', 'in', 'component/branches/SAK-12166/component-api/component/src/java/org/sakaiproject/component:', 'impl', 'impl/spring/support', 'impl/spring/support/dynamic', 'impl/support', 'util']
    Ignore
    Line: X-Content-Type-Outer-Envelope: text/plain; charset=UTF-8
    Words ['X-Content-Type-Outer-Envelope:', 'text/plain;', 'charset=UTF-8']
    Ignore
    Line: X-Content-Type-Message-Body: text/plain; charset=UTF-8
    Words ['X-Content-Type-Message-Body:', 'text/plain;', 'charset=UTF-8']
    Ignore
    Line: Content-Type: text/plain; charset=UTF-8
    Words ['Content-Type:', 'text/plain;', 'charset=UTF-8']
    Ignore
    Line: X-DSPAM-Result: Innocent
    Words ['X-DSPAM-Result:', 'Innocent']
    Ignore
    Line: X-DSPAM-Processed: Fri Jan  4 10:04:14 2008
    Words ['X-DSPAM-Processed:', 'Fri', 'Jan', '4', '10:04:14', '2008']
    Ignore
    Line: X-DSPAM-Confidence: 0.6932
    Words ['X-DSPAM-Confidence:', '0.6932']
    Ignore
    Line: X-DSPAM-Probability: 0.0000
    Words ['X-DSPAM-Probability:', '0.0000']
    Ignore
    Line: 
    Skip Blank
    Line: Details: http://source.sakaiproject.org/viewsvn/?view=rev&rev=39756
    Words ['Details:', 'http://source.sakaiproject.org/viewsvn/?view=rev&rev=39756']
    Ignore
    Line: 
    Skip Blank
    Line: Author: antranig@caret.cam.ac.uk
    Words ['Author:', 'antranig@caret.cam.ac.uk']
    Ignore
    Line: Date: 2008-01-04 10:01:40 -0500 (Fri, 04 Jan 2008)
    Words ['Date:', '2008-01-04', '10:01:40', '-0500', '(Fri,', '04', 'Jan', '2008)']
    Ignore
    Line: New Revision: 39756
    Words ['New', 'Revision:', '39756']
    Ignore
    Line: 
    Skip Blank
    Line: Added:
    Words ['Added:']
    Ignore
    Line: component/branches/SAK-12166/component-api/component/src/java/org/sakaiproject/component/impl/spring/support/dynamic/
    Words ['component/branches/SAK-12166/component-api/component/src/java/org/sakaiproject/component/impl/spring/support/dynamic/']
    Ignore
    Line: component/branches/SAK-12166/component-api/component/src/java/org/sakaiproject/component/impl/spring/support/dynamic/DynamicComponentManager.java
    Words ['component/branches/SAK-12166/component-api/component/src/java/org/sakaiproject/component/impl/spring/support/dynamic/DynamicComponentManager.java']
    Ignore
    Line: component/branches/SAK-12166/component-api/component/src/java/org/sakaiproject/component/impl/support/
    Words ['component/branches/SAK-12166/component-api/component/src/java/org/sakaiproject/component/impl/support/']
    Ignore
    Line: component/branches/SAK-12166/component-api/component/src/java/org/sakaiproject/component/impl/support/DynamicComponentRecord.java
    Words ['component/branches/SAK-12166/component-api/component/src/java/org/sakaiproject/component/impl/support/DynamicComponentRecord.java']
    Ignore
    Line: component/branches/SAK-12166/component-api/component/src/java/org/sakaiproject/component/impl/support/DynamicJARManager.java
    Words ['component/branches/SAK-12166/component-api/component/src/java/org/sakaiproject/component/impl/support/DynamicJARManager.java']
    Ignore
    Line: component/branches/SAK-12166/component-api/component/src/java/org/sakaiproject/component/impl/support/JARRecord.java
    Words ['component/branches/SAK-12166/component-api/component/src/java/org/sakaiproject/component/impl/support/JARRecord.java']
    Ignore
    Line: component/branches/SAK-12166/component-api/component/src/java/org/sakaiproject/component/util/ByteToCharBase64.java
    Words ['component/branches/SAK-12166/component-api/component/src/java/org/sakaiproject/component/util/ByteToCharBase64.java']
    Ignore
    Line: component/branches/SAK-12166/component-api/component/src/java/org/sakaiproject/component/util/FileUtil.java
    Words ['component/branches/SAK-12166/component-api/component/src/java/org/sakaiproject/component/util/FileUtil.java']
    Ignore
    Line: component/branches/SAK-12166/component-api/component/src/java/org/sakaiproject/component/util/RecordFileIO.java
    Words ['component/branches/SAK-12166/component-api/component/src/java/org/sakaiproject/component/util/RecordFileIO.java']
    Ignore
    Line: component/branches/SAK-12166/component-api/component/src/java/org/sakaiproject/component/util/RecordReader.java
    Words ['component/branches/SAK-12166/component-api/component/src/java/org/sakaiproject/component/util/RecordReader.java']
    Ignore
    Line: component/branches/SAK-12166/component-api/component/src/java/org/sakaiproject/component/util/RecordWriter.java
    Words ['component/branches/SAK-12166/component-api/component/src/java/org/sakaiproject/component/util/RecordWriter.java']
    Ignore
    Line: component/branches/SAK-12166/component-api/component/src/java/org/sakaiproject/component/util/StreamDigestor.java
    Words ['component/branches/SAK-12166/component-api/component/src/java/org/sakaiproject/component/util/StreamDigestor.java']
    Ignore
    Line: Modified:
    Words ['Modified:']
    Ignore
    Line: component/branches/SAK-12166/component-api/component/src/java/org/sakaiproject/component/impl/spring/support/ComponentsLoaderImpl.java
    Words ['component/branches/SAK-12166/component-api/component/src/java/org/sakaiproject/component/impl/spring/support/ComponentsLoaderImpl.java']
    Ignore
    Line: Log:
    Words ['Log:']
    Ignore
    Line: Temporary commit of incomplete work on JAR caching
    Words ['Temporary', 'commit', 'of', 'incomplete', 'work', 'on', 'JAR', 'caching']
    Ignore
    Line: 
    Skip Blank
    Line: ----------------------
    Words ['----------------------']
    Ignore
    Line: This automatic notification message was sent by Sakai Collab (https://collab.sakaiproject.org/portal) from the Source site.
    Words ['This', 'automatic', 'notification', 'message', 'was', 'sent', 'by', 'Sakai', 'Collab', '(https://collab.sakaiproject.org/portal)', 'from', 'the', 'Source', 'site.']
    Ignore
    Line: You can modify how you receive notifications at My Workspace > Preferences.
    Words ['You', 'can', 'modify', 'how', 'you', 'receive', 'notifications', 'at', 'My', 'Workspace', '>', 'Preferences.']
    Ignore
    Line: 
    Skip Blank
    Line: 
    Skip Blank
    Line: 
    Skip Blank
    Line: From gopal.ramasammycook@gmail.com Fri Jan  4 09:05:31 2008
    Words ['From', 'gopal.ramasammycook@gmail.com', 'Fri', 'Jan', '4', '09:05:31', '2008']
    Fri
    Line: Return-Path: <postmaster@collab.sakaiproject.org>
    Words ['Return-Path:', '<postmaster@collab.sakaiproject.org>']
    Ignore
    Line: Received: from murder (mail.umich.edu [141.211.14.90])
    Words ['Received:', 'from', 'murder', '(mail.umich.edu', '[141.211.14.90])']
    Ignore
    Line: 	 by frankenstein.mail.umich.edu (Cyrus v2.3.8) with LMTPA;
    Words ['by', 'frankenstein.mail.umich.edu', '(Cyrus', 'v2.3.8)', 'with', 'LMTPA;']
    Ignore
    Line: 	 Fri, 04 Jan 2008 09:05:31 -0500
    Words ['Fri,', '04', 'Jan', '2008', '09:05:31', '-0500']
    Ignore
    Line: X-Sieve: CMU Sieve 2.3
    Words ['X-Sieve:', 'CMU', 'Sieve', '2.3']
    Ignore
    Line: Received: from murder ([unix socket])
    Words ['Received:', 'from', 'murder', '([unix', 'socket])']
    Ignore
    Line: 	 by mail.umich.edu (Cyrus v2.2.12) with LMTPA;
    Words ['by', 'mail.umich.edu', '(Cyrus', 'v2.2.12)', 'with', 'LMTPA;']
    Ignore
    Line: 	 Fri, 04 Jan 2008 09:05:31 -0500
    Words ['Fri,', '04', 'Jan', '2008', '09:05:31', '-0500']
    Ignore
    Line: Received: from guys.mr.itd.umich.edu (guys.mr.itd.umich.edu [141.211.14.76])
    Words ['Received:', 'from', 'guys.mr.itd.umich.edu', '(guys.mr.itd.umich.edu', '[141.211.14.76])']
    Ignore
    Line: 	by flawless.mail.umich.edu () with ESMTP id m04E5U3C029277;
    Words ['by', 'flawless.mail.umich.edu', '()', 'with', 'ESMTP', 'id', 'm04E5U3C029277;']
    Ignore
    Line: 	Fri, 4 Jan 2008 09:05:30 -0500
    Words ['Fri,', '4', 'Jan', '2008', '09:05:30', '-0500']
    Ignore
    Line: Received: FROM paploo.uhi.ac.uk (app1.prod.collab.uhi.ac.uk [194.35.219.184])
    Words ['Received:', 'FROM', 'paploo.uhi.ac.uk', '(app1.prod.collab.uhi.ac.uk', '[194.35.219.184])']
    Ignore
    Line: 	BY guys.mr.itd.umich.edu ID 477E3D23.EE2E7.5237 ;
    Words ['BY', 'guys.mr.itd.umich.edu', 'ID', '477E3D23.EE2E7.5237', ';']
    Ignore
    Line: 	 4 Jan 2008 09:05:26 -0500
    Words ['4', 'Jan', '2008', '09:05:26', '-0500']
    Ignore
    Line: Received: from paploo.uhi.ac.uk (localhost [127.0.0.1])
    Words ['Received:', 'from', 'paploo.uhi.ac.uk', '(localhost', '[127.0.0.1])']
    Ignore
    Line: 	by paploo.uhi.ac.uk (Postfix) with ESMTP id 33C7856DC0;
    Words ['by', 'paploo.uhi.ac.uk', '(Postfix)', 'with', 'ESMTP', 'id', '33C7856DC0;']
    Ignore
    Line: 	Fri,  4 Jan 2008 14:05:26 +0000 (GMT)
    Words ['Fri,', '4', 'Jan', '2008', '14:05:26', '+0000', '(GMT)']
    Ignore
    Line: Message-ID: <200801041403.m04E3psW006926@nakamura.uits.iupui.edu>
    Words ['Message-ID:', '<200801041403.m04E3psW006926@nakamura.uits.iupui.edu>']
    Ignore
    Line: Mime-Version: 1.0
    Words ['Mime-Version:', '1.0']
    Ignore
    Line: Content-Transfer-Encoding: 7bit
    Words ['Content-Transfer-Encoding:', '7bit']
    Ignore
    Line: Received: from prod.collab.uhi.ac.uk ([194.35.219.182])
    Words ['Received:', 'from', 'prod.collab.uhi.ac.uk', '([194.35.219.182])']
    Ignore
    Line:           by paploo.uhi.ac.uk (JAMES SMTP Server 2.1.3) with SMTP ID 575
    Words ['by', 'paploo.uhi.ac.uk', '(JAMES', 'SMTP', 'Server', '2.1.3)', 'with', 'SMTP', 'ID', '575']
    Ignore
    Line:           for <source@collab.sakaiproject.org>;
    Words ['for', '<source@collab.sakaiproject.org>;']
    Ignore
    Line:           Fri, 4 Jan 2008 14:05:04 +0000 (GMT)
    Words ['Fri,', '4', 'Jan', '2008', '14:05:04', '+0000', '(GMT)']
    Ignore
    Line: Received: from nakamura.uits.iupui.edu (nakamura.uits.iupui.edu [134.68.220.122])
    Words ['Received:', 'from', 'nakamura.uits.iupui.edu', '(nakamura.uits.iupui.edu', '[134.68.220.122])']
    Ignore
    Line: 	by shmi.uhi.ac.uk (Postfix) with ESMTP id 3C0261D617
    Words ['by', 'shmi.uhi.ac.uk', '(Postfix)', 'with', 'ESMTP', 'id', '3C0261D617']
    Ignore
    Line: 	for <source@collab.sakaiproject.org>; Fri,  4 Jan 2008 14:05:03 +0000 (GMT)
    Words ['for', '<source@collab.sakaiproject.org>;', 'Fri,', '4', 'Jan', '2008', '14:05:03', '+0000', '(GMT)']
    Ignore
    Line: Received: from nakamura.uits.iupui.edu (localhost [127.0.0.1])
    Words ['Received:', 'from', 'nakamura.uits.iupui.edu', '(localhost', '[127.0.0.1])']
    Ignore
    Line: 	by nakamura.uits.iupui.edu (8.12.11.20060308/8.12.11) with ESMTP id m04E3pQS006928
    Words ['by', 'nakamura.uits.iupui.edu', '(8.12.11.20060308/8.12.11)', 'with', 'ESMTP', 'id', 'm04E3pQS006928']
    Ignore
    Line: 	for <source@collab.sakaiproject.org>; Fri, 4 Jan 2008 09:03:52 -0500
    Words ['for', '<source@collab.sakaiproject.org>;', 'Fri,', '4', 'Jan', '2008', '09:03:52', '-0500']
    Ignore
    Line: Received: (from apache@localhost)
    Words ['Received:', '(from', 'apache@localhost)']
    Ignore
    Line: 	by nakamura.uits.iupui.edu (8.12.11.20060308/8.12.11/Submit) id m04E3psW006926
    Words ['by', 'nakamura.uits.iupui.edu', '(8.12.11.20060308/8.12.11/Submit)', 'id', 'm04E3psW006926']
    Ignore
    Line: 	for source@collab.sakaiproject.org; Fri, 4 Jan 2008 09:03:51 -0500
    Words ['for', 'source@collab.sakaiproject.org;', 'Fri,', '4', 'Jan', '2008', '09:03:51', '-0500']
    Ignore
    Line: Date: Fri, 4 Jan 2008 09:03:51 -0500
    Words ['Date:', 'Fri,', '4', 'Jan', '2008', '09:03:51', '-0500']
    Ignore
    Line: X-Authentication-Warning: nakamura.uits.iupui.edu: apache set sender to gopal.ramasammycook@gmail.com using -f
    Words ['X-Authentication-Warning:', 'nakamura.uits.iupui.edu:', 'apache', 'set', 'sender', 'to', 'gopal.ramasammycook@gmail.com', 'using', '-f']
    Ignore
    Line: To: source@collab.sakaiproject.org
    Words ['To:', 'source@collab.sakaiproject.org']
    Ignore
    Line: From: gopal.ramasammycook@gmail.com
    Words ['From:', 'gopal.ramasammycook@gmail.com']
    Ignore
    Line: Subject: [sakai] svn commit: r39755 - in sam/branches/SAK-12065: samigo-api/src/java/org/sakaiproject/tool/assessment/shared/api/grading samigo-app/src/java/org/sakaiproject/tool/assessment/ui/bean/evaluation samigo-app/src/java/org/sakaiproject/tool/assessment/ui/listener/evaluation samigo-services/src/java/org/sakaiproject/tool/assessment/facade samigo-services/src/java/org/sakaiproject/tool/assessment/integration/helper/ifc samigo-services/src/java/org/sakaiproject/tool/assessment/integration/helper/integrated samigo-services/src/java/org/sakaiproject/tool/assessment/integration/helper/standalone samigo-services/src/java/org/sakaiproject/tool/assessment/shared/impl/grading
    Words ['Subject:', '[sakai]', 'svn', 'commit:', 'r39755', '-', 'in', 'sam/branches/SAK-12065:', 'samigo-api/src/java/org/sakaiproject/tool/assessment/shared/api/grading', 'samigo-app/src/java/org/sakaiproject/tool/assessment/ui/bean/evaluation', 'samigo-app/src/java/org/sakaiproject/tool/assessment/ui/listener/evaluation', 'samigo-services/src/java/org/sakaiproject/tool/assessment/facade', 'samigo-services/src/java/org/sakaiproject/tool/assessment/integration/helper/ifc', 'samigo-services/src/java/org/sakaiproject/tool/assessment/integration/helper/integrated', 'samigo-services/src/java/org/sakaiproject/tool/assessment/integration/helper/standalone', 'samigo-services/src/java/org/sakaiproject/tool/assessment/shared/impl/grading']
    Ignore
    Line: X-Content-Type-Outer-Envelope: text/plain; charset=UTF-8
    Words ['X-Content-Type-Outer-Envelope:', 'text/plain;', 'charset=UTF-8']
    Ignore
    Line: X-Content-Type-Message-Body: text/plain; charset=UTF-8
    Words ['X-Content-Type-Message-Body:', 'text/plain;', 'charset=UTF-8']
    Ignore
    Line: Content-Type: text/plain; charset=UTF-8
    Words ['Content-Type:', 'text/plain;', 'charset=UTF-8']
    Ignore
    Line: X-DSPAM-Result: Innocent
    Words ['X-DSPAM-Result:', 'Innocent']
    Ignore
    Line: X-DSPAM-Processed: Fri Jan  4 09:05:31 2008
    Words ['X-DSPAM-Processed:', 'Fri', 'Jan', '4', '09:05:31', '2008']
    Ignore
    Line: X-DSPAM-Confidence: 0.7558
    Words ['X-DSPAM-Confidence:', '0.7558']
    Ignore
    Line: X-DSPAM-Probability: 0.0000
    Words ['X-DSPAM-Probability:', '0.0000']
    Ignore
    Line: 
    Skip Blank
    Line: Details: http://source.sakaiproject.org/viewsvn/?view=rev&rev=39755
    Words ['Details:', 'http://source.sakaiproject.org/viewsvn/?view=rev&rev=39755']
    Ignore
    Line: 
    Skip Blank
    Line: Author: gopal.ramasammycook@gmail.com
    Words ['Author:', 'gopal.ramasammycook@gmail.com']
    Ignore
    Line: Date: 2008-01-04 09:02:54 -0500 (Fri, 04 Jan 2008)
    Words ['Date:', '2008-01-04', '09:02:54', '-0500', '(Fri,', '04', 'Jan', '2008)']
    Ignore
    Line: New Revision: 39755
    Words ['New', 'Revision:', '39755']
    Ignore
    Line: 
    Skip Blank
    Line: Modified:
    Words ['Modified:']
    Ignore
    Line: sam/branches/SAK-12065/samigo-api/src/java/org/sakaiproject/tool/assessment/shared/api/grading/GradingSectionAwareServiceAPI.java
    Words ['sam/branches/SAK-12065/samigo-api/src/java/org/sakaiproject/tool/assessment/shared/api/grading/GradingSectionAwareServiceAPI.java']
    Ignore
    Line: sam/branches/SAK-12065/samigo-app/src/java/org/sakaiproject/tool/assessment/ui/bean/evaluation/QuestionScoresBean.java
    Words ['sam/branches/SAK-12065/samigo-app/src/java/org/sakaiproject/tool/assessment/ui/bean/evaluation/QuestionScoresBean.java']
    Ignore
    Line: sam/branches/SAK-12065/samigo-app/src/java/org/sakaiproject/tool/assessment/ui/bean/evaluation/SubmissionStatusBean.java
    Words ['sam/branches/SAK-12065/samigo-app/src/java/org/sakaiproject/tool/assessment/ui/bean/evaluation/SubmissionStatusBean.java']
    Ignore
    Line: sam/branches/SAK-12065/samigo-app/src/java/org/sakaiproject/tool/assessment/ui/bean/evaluation/TotalScoresBean.java
    Words ['sam/branches/SAK-12065/samigo-app/src/java/org/sakaiproject/tool/assessment/ui/bean/evaluation/TotalScoresBean.java']
    Ignore
    Line: sam/branches/SAK-12065/samigo-app/src/java/org/sakaiproject/tool/assessment/ui/listener/evaluation/SubmissionStatusListener.java
    Words ['sam/branches/SAK-12065/samigo-app/src/java/org/sakaiproject/tool/assessment/ui/listener/evaluation/SubmissionStatusListener.java']
    Ignore
    Line: sam/branches/SAK-12065/samigo-services/src/java/org/sakaiproject/tool/assessment/facade/PublishedAssessmentFacadeQueries.java
    Words ['sam/branches/SAK-12065/samigo-services/src/java/org/sakaiproject/tool/assessment/facade/PublishedAssessmentFacadeQueries.java']
    Ignore
    Line: sam/branches/SAK-12065/samigo-services/src/java/org/sakaiproject/tool/assessment/facade/PublishedAssessmentFacadeQueriesAPI.java
    Words ['sam/branches/SAK-12065/samigo-services/src/java/org/sakaiproject/tool/assessment/facade/PublishedAssessmentFacadeQueriesAPI.java']
    Ignore
    Line: sam/branches/SAK-12065/samigo-services/src/java/org/sakaiproject/tool/assessment/integration/helper/ifc/SectionAwareServiceHelper.java
    Words ['sam/branches/SAK-12065/samigo-services/src/java/org/sakaiproject/tool/assessment/integration/helper/ifc/SectionAwareServiceHelper.java']
    Ignore
    Line: sam/branches/SAK-12065/samigo-services/src/java/org/sakaiproject/tool/assessment/integration/helper/integrated/SectionAwareServiceHelperImpl.java
    Words ['sam/branches/SAK-12065/samigo-services/src/java/org/sakaiproject/tool/assessment/integration/helper/integrated/SectionAwareServiceHelperImpl.java']
    Ignore
    Line: sam/branches/SAK-12065/samigo-services/src/java/org/sakaiproject/tool/assessment/integration/helper/standalone/SectionAwareServiceHelperImpl.java
    Words ['sam/branches/SAK-12065/samigo-services/src/java/org/sakaiproject/tool/assessment/integration/helper/standalone/SectionAwareServiceHelperImpl.java']
    Ignore
    Line: sam/branches/SAK-12065/samigo-services/src/java/org/sakaiproject/tool/assessment/shared/impl/grading/GradingSectionAwareServiceImpl.java
    Words ['sam/branches/SAK-12065/samigo-services/src/java/org/sakaiproject/tool/assessment/shared/impl/grading/GradingSectionAwareServiceImpl.java']
    Ignore
    Line: Log:
    Words ['Log:']
    Ignore
    Line: SAK-12065 Gopal - Samigo Group Release. SubmissionStatus/TotalScores/Questions View filter.
    Words ['SAK-12065', 'Gopal', '-', 'Samigo', 'Group', 'Release.', 'SubmissionStatus/TotalScores/Questions', 'View', 'filter.']
    Ignore
    Line: 
    Skip Blank
    Line: ----------------------
    Words ['----------------------']
    Ignore
    Line: This automatic notification message was sent by Sakai Collab (https://collab.sakaiproject.org/portal) from the Source site.
    Words ['This', 'automatic', 'notification', 'message', 'was', 'sent', 'by', 'Sakai', 'Collab', '(https://collab.sakaiproject.org/portal)', 'from', 'the', 'Source', 'site.']
    Ignore
    Line: You can modify how you receive notifications at My Workspace > Preferences.
    Words ['You', 'can', 'modify', 'how', 'you', 'receive', 'notifications', 'at', 'My', 'Workspace', '>', 'Preferences.']
    Ignore
    Line: 
    Skip Blank
    Line: 
    Skip Blank
    Line: 
    Skip Blank
    Line: From david.horwitz@uct.ac.za Fri Jan  4 07:02:32 2008
    Words ['From', 'david.horwitz@uct.ac.za', 'Fri', 'Jan', '4', '07:02:32', '2008']
    Fri
    Line: Return-Path: <postmaster@collab.sakaiproject.org>
    Words ['Return-Path:', '<postmaster@collab.sakaiproject.org>']
    Ignore
    Line: Received: from murder (mail.umich.edu [141.211.14.39])
    Words ['Received:', 'from', 'murder', '(mail.umich.edu', '[141.211.14.39])']
    Ignore
    Line: 	 by frankenstein.mail.umich.edu (Cyrus v2.3.8) with LMTPA;
    Words ['by', 'frankenstein.mail.umich.edu', '(Cyrus', 'v2.3.8)', 'with', 'LMTPA;']
    Ignore
    Line: 	 Fri, 04 Jan 2008 07:02:32 -0500
    Words ['Fri,', '04', 'Jan', '2008', '07:02:32', '-0500']
    Ignore
    Line: X-Sieve: CMU Sieve 2.3
    Words ['X-Sieve:', 'CMU', 'Sieve', '2.3']
    Ignore
    Line: Received: from murder ([unix socket])
    Words ['Received:', 'from', 'murder', '([unix', 'socket])']
    Ignore
    Line: 	 by mail.umich.edu (Cyrus v2.2.12) with LMTPA;
    Words ['by', 'mail.umich.edu', '(Cyrus', 'v2.2.12)', 'with', 'LMTPA;']
    Ignore
    Line: 	 Fri, 04 Jan 2008 07:02:32 -0500
    Words ['Fri,', '04', 'Jan', '2008', '07:02:32', '-0500']
    Ignore
    Line: Received: from guys.mr.itd.umich.edu (guys.mr.itd.umich.edu [141.211.14.76])
    Words ['Received:', 'from', 'guys.mr.itd.umich.edu', '(guys.mr.itd.umich.edu', '[141.211.14.76])']
    Ignore
    Line: 	by faithful.mail.umich.edu () with ESMTP id m04C2VN7026678;
    Words ['by', 'faithful.mail.umich.edu', '()', 'with', 'ESMTP', 'id', 'm04C2VN7026678;']
    Ignore
    Line: 	Fri, 4 Jan 2008 07:02:31 -0500
    Words ['Fri,', '4', 'Jan', '2008', '07:02:31', '-0500']
    Ignore
    Line: Received: FROM paploo.uhi.ac.uk (app1.prod.collab.uhi.ac.uk [194.35.219.184])
    Words ['Received:', 'FROM', 'paploo.uhi.ac.uk', '(app1.prod.collab.uhi.ac.uk', '[194.35.219.184])']
    Ignore
    Line: 	BY guys.mr.itd.umich.edu ID 477E2050.C2599.3263 ;
    Words ['BY', 'guys.mr.itd.umich.edu', 'ID', '477E2050.C2599.3263', ';']
    Ignore
    Line: 	 4 Jan 2008 07:02:27 -0500
    Words ['4', 'Jan', '2008', '07:02:27', '-0500']
    Ignore
    Line: Received: from paploo.uhi.ac.uk (localhost [127.0.0.1])
    Words ['Received:', 'from', 'paploo.uhi.ac.uk', '(localhost', '[127.0.0.1])']
    Ignore
    Line: 	by paploo.uhi.ac.uk (Postfix) with ESMTP id 6497FBA906;
    Words ['by', 'paploo.uhi.ac.uk', '(Postfix)', 'with', 'ESMTP', 'id', '6497FBA906;']
    Ignore
    Line: 	Fri,  4 Jan 2008 12:02:11 +0000 (GMT)
    Words ['Fri,', '4', 'Jan', '2008', '12:02:11', '+0000', '(GMT)']
    Ignore
    Line: Message-ID: <200801041200.m04C0gfK006793@nakamura.uits.iupui.edu>
    Words ['Message-ID:', '<200801041200.m04C0gfK006793@nakamura.uits.iupui.edu>']
    Ignore
    Line: Mime-Version: 1.0
    Words ['Mime-Version:', '1.0']
    Ignore
    Line: Content-Transfer-Encoding: 7bit
    Words ['Content-Transfer-Encoding:', '7bit']
    Ignore
    Line: Received: from prod.collab.uhi.ac.uk ([194.35.219.182])
    Words ['Received:', 'from', 'prod.collab.uhi.ac.uk', '([194.35.219.182])']
    Ignore
    Line:           by paploo.uhi.ac.uk (JAMES SMTP Server 2.1.3) with SMTP ID 611
    Words ['by', 'paploo.uhi.ac.uk', '(JAMES', 'SMTP', 'Server', '2.1.3)', 'with', 'SMTP', 'ID', '611']
    Ignore
    Line:           for <source@collab.sakaiproject.org>;
    Words ['for', '<source@collab.sakaiproject.org>;']
    Ignore
    Line:           Fri, 4 Jan 2008 12:01:53 +0000 (GMT)
    Words ['Fri,', '4', 'Jan', '2008', '12:01:53', '+0000', '(GMT)']
    Ignore
    Line: Received: from nakamura.uits.iupui.edu (nakamura.uits.iupui.edu [134.68.220.122])
    Words ['Received:', 'from', 'nakamura.uits.iupui.edu', '(nakamura.uits.iupui.edu', '[134.68.220.122])']
    Ignore
    Line: 	by shmi.uhi.ac.uk (Postfix) with ESMTP id 5296342D3C
    Words ['by', 'shmi.uhi.ac.uk', '(Postfix)', 'with', 'ESMTP', 'id', '5296342D3C']
    Ignore
    Line: 	for <source@collab.sakaiproject.org>; Fri,  4 Jan 2008 12:01:53 +0000 (GMT)
    Words ['for', '<source@collab.sakaiproject.org>;', 'Fri,', '4', 'Jan', '2008', '12:01:53', '+0000', '(GMT)']
    Ignore
    Line: Received: from nakamura.uits.iupui.edu (localhost [127.0.0.1])
    Words ['Received:', 'from', 'nakamura.uits.iupui.edu', '(localhost', '[127.0.0.1])']
    Ignore
    Line: 	by nakamura.uits.iupui.edu (8.12.11.20060308/8.12.11) with ESMTP id m04C0gnm006795
    Words ['by', 'nakamura.uits.iupui.edu', '(8.12.11.20060308/8.12.11)', 'with', 'ESMTP', 'id', 'm04C0gnm006795']
    Ignore
    Line: 	for <source@collab.sakaiproject.org>; Fri, 4 Jan 2008 07:00:42 -0500
    Words ['for', '<source@collab.sakaiproject.org>;', 'Fri,', '4', 'Jan', '2008', '07:00:42', '-0500']
    Ignore
    Line: Received: (from apache@localhost)
    Words ['Received:', '(from', 'apache@localhost)']
    Ignore
    Line: 	by nakamura.uits.iupui.edu (8.12.11.20060308/8.12.11/Submit) id m04C0gfK006793
    Words ['by', 'nakamura.uits.iupui.edu', '(8.12.11.20060308/8.12.11/Submit)', 'id', 'm04C0gfK006793']
    Ignore
    Line: 	for source@collab.sakaiproject.org; Fri, 4 Jan 2008 07:00:42 -0500
    Words ['for', 'source@collab.sakaiproject.org;', 'Fri,', '4', 'Jan', '2008', '07:00:42', '-0500']
    Ignore
    Line: Date: Fri, 4 Jan 2008 07:00:42 -0500
    Words ['Date:', 'Fri,', '4', 'Jan', '2008', '07:00:42', '-0500']
    Ignore
    Line: X-Authentication-Warning: nakamura.uits.iupui.edu: apache set sender to david.horwitz@uct.ac.za using -f
    Words ['X-Authentication-Warning:', 'nakamura.uits.iupui.edu:', 'apache', 'set', 'sender', 'to', 'david.horwitz@uct.ac.za', 'using', '-f']
    Ignore
    Line: To: source@collab.sakaiproject.org
    Words ['To:', 'source@collab.sakaiproject.org']
    Ignore
    Line: From: david.horwitz@uct.ac.za
    Words ['From:', 'david.horwitz@uct.ac.za']
    Ignore
    Line: Subject: [sakai] svn commit: r39754 - in polls/branches/sakai_2-5-x: . tool tool/src/java/org/sakaiproject/poll/tool tool/src/java/org/sakaiproject/poll/tool/evolvers tool/src/webapp/WEB-INF
    Words ['Subject:', '[sakai]', 'svn', 'commit:', 'r39754', '-', 'in', 'polls/branches/sakai_2-5-x:', '.', 'tool', 'tool/src/java/org/sakaiproject/poll/tool', 'tool/src/java/org/sakaiproject/poll/tool/evolvers', 'tool/src/webapp/WEB-INF']
    Ignore
    Line: X-Content-Type-Outer-Envelope: text/plain; charset=UTF-8
    Words ['X-Content-Type-Outer-Envelope:', 'text/plain;', 'charset=UTF-8']
    Ignore
    Line: X-Content-Type-Message-Body: text/plain; charset=UTF-8
    Words ['X-Content-Type-Message-Body:', 'text/plain;', 'charset=UTF-8']
    Ignore
    Line: Content-Type: text/plain; charset=UTF-8
    Words ['Content-Type:', 'text/plain;', 'charset=UTF-8']
    Ignore
    Line: X-DSPAM-Result: Innocent
    Words ['X-DSPAM-Result:', 'Innocent']
    Ignore
    Line: X-DSPAM-Processed: Fri Jan  4 07:02:32 2008
    Words ['X-DSPAM-Processed:', 'Fri', 'Jan', '4', '07:02:32', '2008']
    Ignore
    Line: X-DSPAM-Confidence: 0.6526
    Words ['X-DSPAM-Confidence:', '0.6526']
    Ignore
    Line: X-DSPAM-Probability: 0.0000
    Words ['X-DSPAM-Probability:', '0.0000']
    Ignore
    Line: 
    Skip Blank
    Line: Details: http://source.sakaiproject.org/viewsvn/?view=rev&rev=39754
    Words ['Details:', 'http://source.sakaiproject.org/viewsvn/?view=rev&rev=39754']
    Ignore
    Line: 
    Skip Blank
    Line: Author: david.horwitz@uct.ac.za
    Words ['Author:', 'david.horwitz@uct.ac.za']
    Ignore
    Line: Date: 2008-01-04 07:00:10 -0500 (Fri, 04 Jan 2008)
    Words ['Date:', '2008-01-04', '07:00:10', '-0500', '(Fri,', '04', 'Jan', '2008)']
    Ignore
    Line: New Revision: 39754
    Words ['New', 'Revision:', '39754']
    Ignore
    Line: 
    Skip Blank
    Line: Added:
    Words ['Added:']
    Ignore
    Line: polls/branches/sakai_2-5-x/tool/src/java/org/sakaiproject/poll/tool/evolvers/
    Words ['polls/branches/sakai_2-5-x/tool/src/java/org/sakaiproject/poll/tool/evolvers/']
    Ignore
    Line: polls/branches/sakai_2-5-x/tool/src/java/org/sakaiproject/poll/tool/evolvers/SakaiFCKTextEvolver.java
    Words ['polls/branches/sakai_2-5-x/tool/src/java/org/sakaiproject/poll/tool/evolvers/SakaiFCKTextEvolver.java']
    Ignore
    Line: Removed:
    Words ['Removed:']
    Ignore
    Line: polls/branches/sakai_2-5-x/tool/src/java/org/sakaiproject/poll/tool/evolvers/SakaiFCKTextEvolver.java
    Words ['polls/branches/sakai_2-5-x/tool/src/java/org/sakaiproject/poll/tool/evolvers/SakaiFCKTextEvolver.java']
    Ignore
    Line: Modified:
    Words ['Modified:']
    Ignore
    Line: polls/branches/sakai_2-5-x/.classpath
    Words ['polls/branches/sakai_2-5-x/.classpath']
    Ignore
    Line: polls/branches/sakai_2-5-x/tool/pom.xml
    Words ['polls/branches/sakai_2-5-x/tool/pom.xml']
    Ignore
    Line: polls/branches/sakai_2-5-x/tool/src/webapp/WEB-INF/requestContext.xml
    Words ['polls/branches/sakai_2-5-x/tool/src/webapp/WEB-INF/requestContext.xml']
    Ignore
    Line: Log:
    Words ['Log:']
    Ignore
    Line: svn log -r39753 https://source.sakaiproject.org/svn/polls/trunk
    Words ['svn', 'log', '-r39753', 'https://source.sakaiproject.org/svn/polls/trunk']
    Ignore
    Line: ------------------------------------------------------------------------
    Words ['------------------------------------------------------------------------']
    Ignore
    Line: r39753 | david.horwitz@uct.ac.za | 2008-01-04 13:05:51 +0200 (Fri, 04 Jan 2008) | 1 line
    Words ['r39753', '|', 'david.horwitz@uct.ac.za', '|', '2008-01-04', '13:05:51', '+0200', '(Fri,', '04', 'Jan', '2008)', '|', '1', 'line']
    Ignore
    Line: 
    Skip Blank
    Line: SAK-12228 implmented workaround sugested by AB - needs to be tested against a trunk build
    Words ['SAK-12228', 'implmented', 'workaround', 'sugested', 'by', 'AB', '-', 'needs', 'to', 'be', 'tested', 'against', 'a', 'trunk', 'build']
    Ignore
    Line: ------------------------------------------------------------------------
    Words ['------------------------------------------------------------------------']
    Ignore
    Line: dhorwitz@david-horwitz-6:~/branchManagemnt/sakai_2-5-x> svn merge -c39753 https://source.sakaiproject.org/svn/polls/trunk polls/
    Words ['dhorwitz@david-horwitz-6:~/branchManagemnt/sakai_2-5-x>', 'svn', 'merge', '-c39753', 'https://source.sakaiproject.org/svn/polls/trunk', 'polls/']
    Ignore
    Line: U    polls/.classpath
    Words ['U', 'polls/.classpath']
    Ignore
    Line: A    polls/tool/src/java/org/sakaiproject/poll/tool/evolvers
    Words ['A', 'polls/tool/src/java/org/sakaiproject/poll/tool/evolvers']
    Ignore
    Line: A    polls/tool/src/java/org/sakaiproject/poll/tool/evolvers/SakaiFCKTextEvolver.java
    Words ['A', 'polls/tool/src/java/org/sakaiproject/poll/tool/evolvers/SakaiFCKTextEvolver.java']
    Ignore
    Line: C    polls/tool/src/webapp/WEB-INF/requestContext.xml
    Words ['C', 'polls/tool/src/webapp/WEB-INF/requestContext.xml']
    Ignore
    Line: U    polls/tool/pom.xml
    Words ['U', 'polls/tool/pom.xml']
    Ignore
    Line: 
    Skip Blank
    Line: dhorwitz@david-horwitz-6:~/branchManagemnt/sakai_2-5-x> svn resolved polls/tool/src/webapp/WEB-INF/requestContext.xml
    Words ['dhorwitz@david-horwitz-6:~/branchManagemnt/sakai_2-5-x>', 'svn', 'resolved', 'polls/tool/src/webapp/WEB-INF/requestContext.xml']
    Ignore
    Line: Resolved conflicted state of 'polls/tool/src/webapp/WEB-INF/requestContext.xml
    Words ['Resolved', 'conflicted', 'state', 'of', "'polls/tool/src/webapp/WEB-INF/requestContext.xml"]
    Ignore
    Line: 
    Skip Blank
    Line: 
    Skip Blank
    Line: ----------------------
    Words ['----------------------']
    Ignore
    Line: This automatic notification message was sent by Sakai Collab (https://collab.sakaiproject.org/portal) from the Source site.
    Words ['This', 'automatic', 'notification', 'message', 'was', 'sent', 'by', 'Sakai', 'Collab', '(https://collab.sakaiproject.org/portal)', 'from', 'the', 'Source', 'site.']
    Ignore
    Line: You can modify how you receive notifications at My Workspace > Preferences.
    Words ['You', 'can', 'modify', 'how', 'you', 'receive', 'notifications', 'at', 'My', 'Workspace', '>', 'Preferences.']
    Ignore
    Line: 
    Skip Blank
    Line: 
    Skip Blank
    Line: 
    Skip Blank
    Line: From david.horwitz@uct.ac.za Fri Jan  4 06:08:27 2008
    Words ['From', 'david.horwitz@uct.ac.za', 'Fri', 'Jan', '4', '06:08:27', '2008']
    Fri
    Line: Return-Path: <postmaster@collab.sakaiproject.org>
    Words ['Return-Path:', '<postmaster@collab.sakaiproject.org>']
    Ignore
    Line: Received: from murder (mail.umich.edu [141.211.14.98])
    Words ['Received:', 'from', 'murder', '(mail.umich.edu', '[141.211.14.98])']
    Ignore
    Line: 	 by frankenstein.mail.umich.edu (Cyrus v2.3.8) with LMTPA;
    Words ['by', 'frankenstein.mail.umich.edu', '(Cyrus', 'v2.3.8)', 'with', 'LMTPA;']
    Ignore
    Line: 	 Fri, 04 Jan 2008 06:08:27 -0500
    Words ['Fri,', '04', 'Jan', '2008', '06:08:27', '-0500']
    Ignore
    Line: X-Sieve: CMU Sieve 2.3
    Words ['X-Sieve:', 'CMU', 'Sieve', '2.3']
    Ignore
    Line: Received: from murder ([unix socket])
    Words ['Received:', 'from', 'murder', '([unix', 'socket])']
    Ignore
    Line: 	 by mail.umich.edu (Cyrus v2.2.12) with LMTPA;
    Words ['by', 'mail.umich.edu', '(Cyrus', 'v2.2.12)', 'with', 'LMTPA;']
    Ignore
    Line: 	 Fri, 04 Jan 2008 06:08:27 -0500
    Words ['Fri,', '04', 'Jan', '2008', '06:08:27', '-0500']
    Ignore
    Line: Received: from firestarter.mr.itd.umich.edu (firestarter.mr.itd.umich.edu [141.211.14.83])
    Words ['Received:', 'from', 'firestarter.mr.itd.umich.edu', '(firestarter.mr.itd.umich.edu', '[141.211.14.83])']
    Ignore
    Line: 	by casino.mail.umich.edu () with ESMTP id m04B8Qw9001368;
    Words ['by', 'casino.mail.umich.edu', '()', 'with', 'ESMTP', 'id', 'm04B8Qw9001368;']
    Ignore
    Line: 	Fri, 4 Jan 2008 06:08:26 -0500
    Words ['Fri,', '4', 'Jan', '2008', '06:08:26', '-0500']
    Ignore
    Line: Received: FROM paploo.uhi.ac.uk (app1.prod.collab.uhi.ac.uk [194.35.219.184])
    Words ['Received:', 'FROM', 'paploo.uhi.ac.uk', '(app1.prod.collab.uhi.ac.uk', '[194.35.219.184])']
    Ignore
    Line: 	BY firestarter.mr.itd.umich.edu ID 477E13A5.30FC0.24054 ;
    Words ['BY', 'firestarter.mr.itd.umich.edu', 'ID', '477E13A5.30FC0.24054', ';']
    Ignore
    Line: 	 4 Jan 2008 06:08:23 -0500
    Words ['4', 'Jan', '2008', '06:08:23', '-0500']
    Ignore
    Line: Received: from paploo.uhi.ac.uk (localhost [127.0.0.1])
    Words ['Received:', 'from', 'paploo.uhi.ac.uk', '(localhost', '[127.0.0.1])']
    Ignore
    Line: 	by paploo.uhi.ac.uk (Postfix) with ESMTP id 784A476D7B;
    Words ['by', 'paploo.uhi.ac.uk', '(Postfix)', 'with', 'ESMTP', 'id', '784A476D7B;']
    Ignore
    Line: 	Fri,  4 Jan 2008 11:08:12 +0000 (GMT)
    Words ['Fri,', '4', 'Jan', '2008', '11:08:12', '+0000', '(GMT)']
    Ignore
    Line: Message-ID: <200801041106.m04B6lK3006677@nakamura.uits.iupui.edu>
    Words ['Message-ID:', '<200801041106.m04B6lK3006677@nakamura.uits.iupui.edu>']
    Ignore
    Line: Mime-Version: 1.0
    Words ['Mime-Version:', '1.0']
    Ignore
    Line: Content-Transfer-Encoding: 7bit
    Words ['Content-Transfer-Encoding:', '7bit']
    Ignore
    Line: Received: from prod.collab.uhi.ac.uk ([194.35.219.182])
    Words ['Received:', 'from', 'prod.collab.uhi.ac.uk', '([194.35.219.182])']
    Ignore
    Line:           by paploo.uhi.ac.uk (JAMES SMTP Server 2.1.3) with SMTP ID 585
    Words ['by', 'paploo.uhi.ac.uk', '(JAMES', 'SMTP', 'Server', '2.1.3)', 'with', 'SMTP', 'ID', '585']
    Ignore
    Line:           for <source@collab.sakaiproject.org>;
    Words ['for', '<source@collab.sakaiproject.org>;']
    Ignore
    Line:           Fri, 4 Jan 2008 11:07:56 +0000 (GMT)
    Words ['Fri,', '4', 'Jan', '2008', '11:07:56', '+0000', '(GMT)']
    Ignore
    Line: Received: from nakamura.uits.iupui.edu (nakamura.uits.iupui.edu [134.68.220.122])
    Words ['Received:', 'from', 'nakamura.uits.iupui.edu', '(nakamura.uits.iupui.edu', '[134.68.220.122])']
    Ignore
    Line: 	by shmi.uhi.ac.uk (Postfix) with ESMTP id 1CACC42D0C
    Words ['by', 'shmi.uhi.ac.uk', '(Postfix)', 'with', 'ESMTP', 'id', '1CACC42D0C']
    Ignore
    Line: 	for <source@collab.sakaiproject.org>; Fri,  4 Jan 2008 11:07:58 +0000 (GMT)
    Words ['for', '<source@collab.sakaiproject.org>;', 'Fri,', '4', 'Jan', '2008', '11:07:58', '+0000', '(GMT)']
    Ignore
    Line: Received: from nakamura.uits.iupui.edu (localhost [127.0.0.1])
    Words ['Received:', 'from', 'nakamura.uits.iupui.edu', '(localhost', '[127.0.0.1])']
    Ignore
    Line: 	by nakamura.uits.iupui.edu (8.12.11.20060308/8.12.11) with ESMTP id m04B6lWM006679
    Words ['by', 'nakamura.uits.iupui.edu', '(8.12.11.20060308/8.12.11)', 'with', 'ESMTP', 'id', 'm04B6lWM006679']
    Ignore
    Line: 	for <source@collab.sakaiproject.org>; Fri, 4 Jan 2008 06:06:47 -0500
    Words ['for', '<source@collab.sakaiproject.org>;', 'Fri,', '4', 'Jan', '2008', '06:06:47', '-0500']
    Ignore
    Line: Received: (from apache@localhost)
    Words ['Received:', '(from', 'apache@localhost)']
    Ignore
    Line: 	by nakamura.uits.iupui.edu (8.12.11.20060308/8.12.11/Submit) id m04B6lK3006677
    Words ['by', 'nakamura.uits.iupui.edu', '(8.12.11.20060308/8.12.11/Submit)', 'id', 'm04B6lK3006677']
    Ignore
    Line: 	for source@collab.sakaiproject.org; Fri, 4 Jan 2008 06:06:47 -0500
    Words ['for', 'source@collab.sakaiproject.org;', 'Fri,', '4', 'Jan', '2008', '06:06:47', '-0500']
    Ignore
    Line: Date: Fri, 4 Jan 2008 06:06:47 -0500
    Words ['Date:', 'Fri,', '4', 'Jan', '2008', '06:06:47', '-0500']
    Ignore
    Line: X-Authentication-Warning: nakamura.uits.iupui.edu: apache set sender to david.horwitz@uct.ac.za using -f
    Words ['X-Authentication-Warning:', 'nakamura.uits.iupui.edu:', 'apache', 'set', 'sender', 'to', 'david.horwitz@uct.ac.za', 'using', '-f']
    Ignore
    Line: To: source@collab.sakaiproject.org
    Words ['To:', 'source@collab.sakaiproject.org']
    Ignore
    Line: From: david.horwitz@uct.ac.za
    Words ['From:', 'david.horwitz@uct.ac.za']
    Ignore
    Line: Subject: [sakai] svn commit: r39753 - in polls/trunk: . tool tool/src/java/org/sakaiproject/poll/tool tool/src/java/org/sakaiproject/poll/tool/evolvers tool/src/webapp/WEB-INF
    Words ['Subject:', '[sakai]', 'svn', 'commit:', 'r39753', '-', 'in', 'polls/trunk:', '.', 'tool', 'tool/src/java/org/sakaiproject/poll/tool', 'tool/src/java/org/sakaiproject/poll/tool/evolvers', 'tool/src/webapp/WEB-INF']
    Ignore
    Line: X-Content-Type-Outer-Envelope: text/plain; charset=UTF-8
    Words ['X-Content-Type-Outer-Envelope:', 'text/plain;', 'charset=UTF-8']
    Ignore
    Line: X-Content-Type-Message-Body: text/plain; charset=UTF-8
    Words ['X-Content-Type-Message-Body:', 'text/plain;', 'charset=UTF-8']
    Ignore
    Line: Content-Type: text/plain; charset=UTF-8
    Words ['Content-Type:', 'text/plain;', 'charset=UTF-8']
    Ignore
    Line: X-DSPAM-Result: Innocent
    Words ['X-DSPAM-Result:', 'Innocent']
    Ignore
    Line: X-DSPAM-Processed: Fri Jan  4 06:08:27 2008
    Words ['X-DSPAM-Processed:', 'Fri', 'Jan', '4', '06:08:27', '2008']
    Ignore
    Line: X-DSPAM-Confidence: 0.6948
    Words ['X-DSPAM-Confidence:', '0.6948']
    Ignore
    Line: X-DSPAM-Probability: 0.0000
    Words ['X-DSPAM-Probability:', '0.0000']
    Ignore
    Line: 
    Skip Blank
    Line: Details: http://source.sakaiproject.org/viewsvn/?view=rev&rev=39753
    Words ['Details:', 'http://source.sakaiproject.org/viewsvn/?view=rev&rev=39753']
    Ignore
    Line: 
    Skip Blank
    Line: Author: david.horwitz@uct.ac.za
    Words ['Author:', 'david.horwitz@uct.ac.za']
    Ignore
    Line: Date: 2008-01-04 06:05:51 -0500 (Fri, 04 Jan 2008)
    Words ['Date:', '2008-01-04', '06:05:51', '-0500', '(Fri,', '04', 'Jan', '2008)']
    Ignore
    Line: New Revision: 39753
    Words ['New', 'Revision:', '39753']
    Ignore
    Line: 
    Skip Blank
    Line: Added:
    Words ['Added:']
    Ignore
    Line: polls/trunk/tool/src/java/org/sakaiproject/poll/tool/evolvers/
    Words ['polls/trunk/tool/src/java/org/sakaiproject/poll/tool/evolvers/']
    Ignore
    Line: polls/trunk/tool/src/java/org/sakaiproject/poll/tool/evolvers/SakaiFCKTextEvolver.java
    Words ['polls/trunk/tool/src/java/org/sakaiproject/poll/tool/evolvers/SakaiFCKTextEvolver.java']
    Ignore
    Line: Modified:
    Words ['Modified:']
    Ignore
    Line: polls/trunk/.classpath
    Words ['polls/trunk/.classpath']
    Ignore
    Line: polls/trunk/tool/pom.xml
    Words ['polls/trunk/tool/pom.xml']
    Ignore
    Line: polls/trunk/tool/src/webapp/WEB-INF/requestContext.xml
    Words ['polls/trunk/tool/src/webapp/WEB-INF/requestContext.xml']
    Ignore
    Line: Log:
    Words ['Log:']
    Ignore
    Line: SAK-12228 implmented workaround sugested by AB - needs to be tested against a trunk build
    Words ['SAK-12228', 'implmented', 'workaround', 'sugested', 'by', 'AB', '-', 'needs', 'to', 'be', 'tested', 'against', 'a', 'trunk', 'build']
    Ignore
    Line: 
    Skip Blank
    Line: ----------------------
    Words ['----------------------']
    Ignore
    Line: This automatic notification message was sent by Sakai Collab (https://collab.sakaiproject.org/portal) from the Source site.
    Words ['This', 'automatic', 'notification', 'message', 'was', 'sent', 'by', 'Sakai', 'Collab', '(https://collab.sakaiproject.org/portal)', 'from', 'the', 'Source', 'site.']
    Ignore
    Line: You can modify how you receive notifications at My Workspace > Preferences.
    Words ['You', 'can', 'modify', 'how', 'you', 'receive', 'notifications', 'at', 'My', 'Workspace', '>', 'Preferences.']
    Ignore
    Line: 
    Skip Blank
    Line: 
    Skip Blank
    Line: 
    Skip Blank
    Line: From david.horwitz@uct.ac.za Fri Jan  4 04:49:08 2008
    Words ['From', 'david.horwitz@uct.ac.za', 'Fri', 'Jan', '4', '04:49:08', '2008']
    Fri
    Line: Return-Path: <postmaster@collab.sakaiproject.org>
    Words ['Return-Path:', '<postmaster@collab.sakaiproject.org>']
    Ignore
    Line: Received: from murder (mail.umich.edu [141.211.14.92])
    Words ['Received:', 'from', 'murder', '(mail.umich.edu', '[141.211.14.92])']
    Ignore
    Line: 	 by frankenstein.mail.umich.edu (Cyrus v2.3.8) with LMTPA;
    Words ['by', 'frankenstein.mail.umich.edu', '(Cyrus', 'v2.3.8)', 'with', 'LMTPA;']
    Ignore
    Line: 	 Fri, 04 Jan 2008 04:49:08 -0500
    Words ['Fri,', '04', 'Jan', '2008', '04:49:08', '-0500']
    Ignore
    Line: X-Sieve: CMU Sieve 2.3
    Words ['X-Sieve:', 'CMU', 'Sieve', '2.3']
    Ignore
    Line: Received: from murder ([unix socket])
    Words ['Received:', 'from', 'murder', '([unix', 'socket])']
    Ignore
    Line: 	 by mail.umich.edu (Cyrus v2.2.12) with LMTPA;
    Words ['by', 'mail.umich.edu', '(Cyrus', 'v2.2.12)', 'with', 'LMTPA;']
    Ignore
    Line: 	 Fri, 04 Jan 2008 04:49:08 -0500
    Words ['Fri,', '04', 'Jan', '2008', '04:49:08', '-0500']
    Ignore
    Line: Received: from galaxyquest.mr.itd.umich.edu (galaxyquest.mr.itd.umich.edu [141.211.93.145])
    Words ['Received:', 'from', 'galaxyquest.mr.itd.umich.edu', '(galaxyquest.mr.itd.umich.edu', '[141.211.93.145])']
    Ignore
    Line: 	by score.mail.umich.edu () with ESMTP id m049n60G017588;
    Words ['by', 'score.mail.umich.edu', '()', 'with', 'ESMTP', 'id', 'm049n60G017588;']
    Ignore
    Line: 	Fri, 4 Jan 2008 04:49:06 -0500
    Words ['Fri,', '4', 'Jan', '2008', '04:49:06', '-0500']
    Ignore
    Line: Received: FROM paploo.uhi.ac.uk (app1.prod.collab.uhi.ac.uk [194.35.219.184])
    Words ['Received:', 'FROM', 'paploo.uhi.ac.uk', '(app1.prod.collab.uhi.ac.uk', '[194.35.219.184])']
    Ignore
    Line: 	BY galaxyquest.mr.itd.umich.edu ID 477E010C.48C2.10259 ;
    Words ['BY', 'galaxyquest.mr.itd.umich.edu', 'ID', '477E010C.48C2.10259', ';']
    Ignore
    Line: 	 4 Jan 2008 04:49:03 -0500
    Words ['4', 'Jan', '2008', '04:49:03', '-0500']
    Ignore
    Line: Received: from paploo.uhi.ac.uk (localhost [127.0.0.1])
    Words ['Received:', 'from', 'paploo.uhi.ac.uk', '(localhost', '[127.0.0.1])']
    Ignore
    Line: 	by paploo.uhi.ac.uk (Postfix) with ESMTP id 254CC8CDEE;
    Words ['by', 'paploo.uhi.ac.uk', '(Postfix)', 'with', 'ESMTP', 'id', '254CC8CDEE;']
    Ignore
    Line: 	Fri,  4 Jan 2008 09:48:55 +0000 (GMT)
    Words ['Fri,', '4', 'Jan', '2008', '09:48:55', '+0000', '(GMT)']
    Ignore
    Line: Message-ID: <200801040947.m049lUxo006517@nakamura.uits.iupui.edu>
    Words ['Message-ID:', '<200801040947.m049lUxo006517@nakamura.uits.iupui.edu>']
    Ignore
    Line: Mime-Version: 1.0
    Words ['Mime-Version:', '1.0']
    Ignore
    Line: Content-Transfer-Encoding: 7bit
    Words ['Content-Transfer-Encoding:', '7bit']
    Ignore
    Line: Received: from prod.collab.uhi.ac.uk ([194.35.219.182])
    Words ['Received:', 'from', 'prod.collab.uhi.ac.uk', '([194.35.219.182])']
    Ignore
    Line:           by paploo.uhi.ac.uk (JAMES SMTP Server 2.1.3) with SMTP ID 246
    Words ['by', 'paploo.uhi.ac.uk', '(JAMES', 'SMTP', 'Server', '2.1.3)', 'with', 'SMTP', 'ID', '246']
    Ignore
    Line:           for <source@collab.sakaiproject.org>;
    Words ['for', '<source@collab.sakaiproject.org>;']
    Ignore
    Line:           Fri, 4 Jan 2008 09:48:36 +0000 (GMT)
    Words ['Fri,', '4', 'Jan', '2008', '09:48:36', '+0000', '(GMT)']
    Ignore
    Line: Received: from nakamura.uits.iupui.edu (nakamura.uits.iupui.edu [134.68.220.122])
    Words ['Received:', 'from', 'nakamura.uits.iupui.edu', '(nakamura.uits.iupui.edu', '[134.68.220.122])']
    Ignore
    Line: 	by shmi.uhi.ac.uk (Postfix) with ESMTP id 8C13342C92
    Words ['by', 'shmi.uhi.ac.uk', '(Postfix)', 'with', 'ESMTP', 'id', '8C13342C92']
    Ignore
    Line: 	for <source@collab.sakaiproject.org>; Fri,  4 Jan 2008 09:48:40 +0000 (GMT)
    Words ['for', '<source@collab.sakaiproject.org>;', 'Fri,', '4', 'Jan', '2008', '09:48:40', '+0000', '(GMT)']
    Ignore
    Line: Received: from nakamura.uits.iupui.edu (localhost [127.0.0.1])
    Words ['Received:', 'from', 'nakamura.uits.iupui.edu', '(localhost', '[127.0.0.1])']
    Ignore
    Line: 	by nakamura.uits.iupui.edu (8.12.11.20060308/8.12.11) with ESMTP id m049lU3P006519
    Words ['by', 'nakamura.uits.iupui.edu', '(8.12.11.20060308/8.12.11)', 'with', 'ESMTP', 'id', 'm049lU3P006519']
    Ignore
    Line: 	for <source@collab.sakaiproject.org>; Fri, 4 Jan 2008 04:47:30 -0500
    Words ['for', '<source@collab.sakaiproject.org>;', 'Fri,', '4', 'Jan', '2008', '04:47:30', '-0500']
    Ignore
    Line: Received: (from apache@localhost)
    Words ['Received:', '(from', 'apache@localhost)']
    Ignore
    Line: 	by nakamura.uits.iupui.edu (8.12.11.20060308/8.12.11/Submit) id m049lUxo006517
    Words ['by', 'nakamura.uits.iupui.edu', '(8.12.11.20060308/8.12.11/Submit)', 'id', 'm049lUxo006517']
    Ignore
    Line: 	for source@collab.sakaiproject.org; Fri, 4 Jan 2008 04:47:30 -0500
    Words ['for', 'source@collab.sakaiproject.org;', 'Fri,', '4', 'Jan', '2008', '04:47:30', '-0500']
    Ignore
    Line: Date: Fri, 4 Jan 2008 04:47:30 -0500
    Words ['Date:', 'Fri,', '4', 'Jan', '2008', '04:47:30', '-0500']
    Ignore
    Line: X-Authentication-Warning: nakamura.uits.iupui.edu: apache set sender to david.horwitz@uct.ac.za using -f
    Words ['X-Authentication-Warning:', 'nakamura.uits.iupui.edu:', 'apache', 'set', 'sender', 'to', 'david.horwitz@uct.ac.za', 'using', '-f']
    Ignore
    Line: To: source@collab.sakaiproject.org
    Words ['To:', 'source@collab.sakaiproject.org']
    Ignore
    Line: From: david.horwitz@uct.ac.za
    Words ['From:', 'david.horwitz@uct.ac.za']
    Ignore
    Line: Subject: [sakai] svn commit: r39752 - in podcasts/branches/sakai_2-5-x/podcasts-app/src/webapp: css podcasts
    Words ['Subject:', '[sakai]', 'svn', 'commit:', 'r39752', '-', 'in', 'podcasts/branches/sakai_2-5-x/podcasts-app/src/webapp:', 'css', 'podcasts']
    Ignore
    Line: X-Content-Type-Outer-Envelope: text/plain; charset=UTF-8
    Words ['X-Content-Type-Outer-Envelope:', 'text/plain;', 'charset=UTF-8']
    Ignore
    Line: X-Content-Type-Message-Body: text/plain; charset=UTF-8
    Words ['X-Content-Type-Message-Body:', 'text/plain;', 'charset=UTF-8']
    Ignore
    Line: Content-Type: text/plain; charset=UTF-8
    Words ['Content-Type:', 'text/plain;', 'charset=UTF-8']
    Ignore
    Line: X-DSPAM-Result: Innocent
    Words ['X-DSPAM-Result:', 'Innocent']
    Ignore
    Line: X-DSPAM-Processed: Fri Jan  4 04:49:08 2008
    Words ['X-DSPAM-Processed:', 'Fri', 'Jan', '4', '04:49:08', '2008']
    Ignore
    Line: X-DSPAM-Confidence: 0.6528
    Words ['X-DSPAM-Confidence:', '0.6528']
    Ignore
    Line: X-DSPAM-Probability: 0.0000
    Words ['X-DSPAM-Probability:', '0.0000']
    Ignore
    Line: 
    Skip Blank
    Line: Details: http://source.sakaiproject.org/viewsvn/?view=rev&rev=39752
    Words ['Details:', 'http://source.sakaiproject.org/viewsvn/?view=rev&rev=39752']
    Ignore
    Line: 
    Skip Blank
    Line: Author: david.horwitz@uct.ac.za
    Words ['Author:', 'david.horwitz@uct.ac.za']
    Ignore
    Line: Date: 2008-01-04 04:47:16 -0500 (Fri, 04 Jan 2008)
    Words ['Date:', '2008-01-04', '04:47:16', '-0500', '(Fri,', '04', 'Jan', '2008)']
    Ignore
    Line: New Revision: 39752
    Words ['New', 'Revision:', '39752']
    Ignore
    Line: 
    Skip Blank
    Line: Modified:
    Words ['Modified:']
    Ignore
    Line: podcasts/branches/sakai_2-5-x/podcasts-app/src/webapp/css/podcaster.css
    Words ['podcasts/branches/sakai_2-5-x/podcasts-app/src/webapp/css/podcaster.css']
    Ignore
    Line: podcasts/branches/sakai_2-5-x/podcasts-app/src/webapp/podcasts/podMain.jsp
    Words ['podcasts/branches/sakai_2-5-x/podcasts-app/src/webapp/podcasts/podMain.jsp']
    Ignore
    Line: Log:
    Words ['Log:']
    Ignore
    Line: svn log -r39641 https://source.sakaiproject.org/svn/podcasts/trunk
    Words ['svn', 'log', '-r39641', 'https://source.sakaiproject.org/svn/podcasts/trunk']
    Ignore
    Line: ------------------------------------------------------------------------
    Words ['------------------------------------------------------------------------']
    Ignore
    Line: r39641 | josrodri@iupui.edu | 2007-12-28 23:44:24 +0200 (Fri, 28 Dec 2007) | 1 line
    Words ['r39641', '|', 'josrodri@iupui.edu', '|', '2007-12-28', '23:44:24', '+0200', '(Fri,', '28', 'Dec', '2007)', '|', '1', 'line']
    Ignore
    Line: 
    Skip Blank
    Line: SAK-9882: refactored podMain.jsp the right way (at least much closer to)
    Words ['SAK-9882:', 'refactored', 'podMain.jsp', 'the', 'right', 'way', '(at', 'least', 'much', 'closer', 'to)']
    Ignore
    Line: ------------------------------------------------------------------------
    Words ['------------------------------------------------------------------------']
    Ignore
    Line: 
    Skip Blank
    Line: dhorwitz@david-horwitz-6:~/branchManagemnt/sakai_2-5-x> svn merge  -c39641 https://source.sakaiproject.org/svn/podcasts/trunk podcasts/
    Words ['dhorwitz@david-horwitz-6:~/branchManagemnt/sakai_2-5-x>', 'svn', 'merge', '-c39641', 'https://source.sakaiproject.org/svn/podcasts/trunk', 'podcasts/']
    Ignore
    Line: C    podcasts/podcasts-app/src/webapp/podcasts/podMain.jsp
    Words ['C', 'podcasts/podcasts-app/src/webapp/podcasts/podMain.jsp']
    Ignore
    Line: U    podcasts/podcasts-app/src/webapp/css/podcaster.css
    Words ['U', 'podcasts/podcasts-app/src/webapp/css/podcaster.css']
    Ignore
    Line: 
    Skip Blank
    Line: conflict merged manualy
    Words ['conflict', 'merged', 'manualy']
    Ignore
    Line: 
    Skip Blank
    Line: 
    Skip Blank
    Line: 
    Skip Blank
    Line: ----------------------
    Words ['----------------------']
    Ignore
    Line: This automatic notification message was sent by Sakai Collab (https://collab.sakaiproject.org/portal) from the Source site.
    Words ['This', 'automatic', 'notification', 'message', 'was', 'sent', 'by', 'Sakai', 'Collab', '(https://collab.sakaiproject.org/portal)', 'from', 'the', 'Source', 'site.']
    Ignore
    Line: You can modify how you receive notifications at My Workspace > Preferences.
    Words ['You', 'can', 'modify', 'how', 'you', 'receive', 'notifications', 'at', 'My', 'Workspace', '>', 'Preferences.']
    Ignore
    Line: 
    Skip Blank
    Line: 
    Skip Blank
    Line: 
    Skip Blank
    Line: From david.horwitz@uct.ac.za Fri Jan  4 04:33:44 2008
    Words ['From', 'david.horwitz@uct.ac.za', 'Fri', 'Jan', '4', '04:33:44', '2008']
    Fri
    Line: Return-Path: <postmaster@collab.sakaiproject.org>
    Words ['Return-Path:', '<postmaster@collab.sakaiproject.org>']
    Ignore
    Line: Received: from murder (mail.umich.edu [141.211.14.46])
    Words ['Received:', 'from', 'murder', '(mail.umich.edu', '[141.211.14.46])']
    Ignore
    Line: 	 by frankenstein.mail.umich.edu (Cyrus v2.3.8) with LMTPA;
    Words ['by', 'frankenstein.mail.umich.edu', '(Cyrus', 'v2.3.8)', 'with', 'LMTPA;']
    Ignore
    Line: 	 Fri, 04 Jan 2008 04:33:44 -0500
    Words ['Fri,', '04', 'Jan', '2008', '04:33:44', '-0500']
    Ignore
    Line: X-Sieve: CMU Sieve 2.3
    Words ['X-Sieve:', 'CMU', 'Sieve', '2.3']
    Ignore
    Line: Received: from murder ([unix socket])
    Words ['Received:', 'from', 'murder', '([unix', 'socket])']
    Ignore
    Line: 	 by mail.umich.edu (Cyrus v2.2.12) with LMTPA;
    Words ['by', 'mail.umich.edu', '(Cyrus', 'v2.2.12)', 'with', 'LMTPA;']
    Ignore
    Line: 	 Fri, 04 Jan 2008 04:33:44 -0500
    Words ['Fri,', '04', 'Jan', '2008', '04:33:44', '-0500']
    Ignore
    Line: Received: from workinggirl.mr.itd.umich.edu (workinggirl.mr.itd.umich.edu [141.211.93.143])
    Words ['Received:', 'from', 'workinggirl.mr.itd.umich.edu', '(workinggirl.mr.itd.umich.edu', '[141.211.93.143])']
    Ignore
    Line: 	by fan.mail.umich.edu () with ESMTP id m049Xge3031803;
    Words ['by', 'fan.mail.umich.edu', '()', 'with', 'ESMTP', 'id', 'm049Xge3031803;']
    Ignore
    Line: 	Fri, 4 Jan 2008 04:33:42 -0500
    Words ['Fri,', '4', 'Jan', '2008', '04:33:42', '-0500']
    Ignore
    Line: Received: FROM paploo.uhi.ac.uk (app1.prod.collab.uhi.ac.uk [194.35.219.184])
    Words ['Received:', 'FROM', 'paploo.uhi.ac.uk', '(app1.prod.collab.uhi.ac.uk', '[194.35.219.184])']
    Ignore
    Line: 	BY workinggirl.mr.itd.umich.edu ID 477DFD6C.75DBE.26054 ;
    Words ['BY', 'workinggirl.mr.itd.umich.edu', 'ID', '477DFD6C.75DBE.26054', ';']
    Ignore
    Line: 	 4 Jan 2008 04:33:35 -0500
    Words ['4', 'Jan', '2008', '04:33:35', '-0500']
    Ignore
    Line: Received: from paploo.uhi.ac.uk (localhost [127.0.0.1])
    Words ['Received:', 'from', 'paploo.uhi.ac.uk', '(localhost', '[127.0.0.1])']
    Ignore
    Line: 	by paploo.uhi.ac.uk (Postfix) with ESMTP id 6C929BA656;
    Words ['by', 'paploo.uhi.ac.uk', '(Postfix)', 'with', 'ESMTP', 'id', '6C929BA656;']
    Ignore
    Line: 	Fri,  4 Jan 2008 09:33:27 +0000 (GMT)
    Words ['Fri,', '4', 'Jan', '2008', '09:33:27', '+0000', '(GMT)']
    Ignore
    Line: Message-ID: <200801040932.m049W2i5006493@nakamura.uits.iupui.edu>
    Words ['Message-ID:', '<200801040932.m049W2i5006493@nakamura.uits.iupui.edu>']
    Ignore
    Line: Mime-Version: 1.0
    Words ['Mime-Version:', '1.0']
    Ignore
    Line: Content-Transfer-Encoding: 7bit
    Words ['Content-Transfer-Encoding:', '7bit']
    Ignore
    Line: Received: from prod.collab.uhi.ac.uk ([194.35.219.182])
    Words ['Received:', 'from', 'prod.collab.uhi.ac.uk', '([194.35.219.182])']
    Ignore
    Line:           by paploo.uhi.ac.uk (JAMES SMTP Server 2.1.3) with SMTP ID 153
    Words ['by', 'paploo.uhi.ac.uk', '(JAMES', 'SMTP', 'Server', '2.1.3)', 'with', 'SMTP', 'ID', '153']
    Ignore
    Line:           for <source@collab.sakaiproject.org>;
    Words ['for', '<source@collab.sakaiproject.org>;']
    Ignore
    Line:           Fri, 4 Jan 2008 09:33:10 +0000 (GMT)
    Words ['Fri,', '4', 'Jan', '2008', '09:33:10', '+0000', '(GMT)']
    Ignore
    Line: Received: from nakamura.uits.iupui.edu (nakamura.uits.iupui.edu [134.68.220.122])
    Words ['Received:', 'from', 'nakamura.uits.iupui.edu', '(nakamura.uits.iupui.edu', '[134.68.220.122])']
    Ignore
    Line: 	by shmi.uhi.ac.uk (Postfix) with ESMTP id 6C69423767
    Words ['by', 'shmi.uhi.ac.uk', '(Postfix)', 'with', 'ESMTP', 'id', '6C69423767']
    Ignore
    Line: 	for <source@collab.sakaiproject.org>; Fri,  4 Jan 2008 09:33:13 +0000 (GMT)
    Words ['for', '<source@collab.sakaiproject.org>;', 'Fri,', '4', 'Jan', '2008', '09:33:13', '+0000', '(GMT)']
    Ignore
    Line: Received: from nakamura.uits.iupui.edu (localhost [127.0.0.1])
    Words ['Received:', 'from', 'nakamura.uits.iupui.edu', '(localhost', '[127.0.0.1])']
    Ignore
    Line: 	by nakamura.uits.iupui.edu (8.12.11.20060308/8.12.11) with ESMTP id m049W3fl006495
    Words ['by', 'nakamura.uits.iupui.edu', '(8.12.11.20060308/8.12.11)', 'with', 'ESMTP', 'id', 'm049W3fl006495']
    Ignore
    Line: 	for <source@collab.sakaiproject.org>; Fri, 4 Jan 2008 04:32:03 -0500
    Words ['for', '<source@collab.sakaiproject.org>;', 'Fri,', '4', 'Jan', '2008', '04:32:03', '-0500']
    Ignore
    Line: Received: (from apache@localhost)
    Words ['Received:', '(from', 'apache@localhost)']
    Ignore
    Line: 	by nakamura.uits.iupui.edu (8.12.11.20060308/8.12.11/Submit) id m049W2i5006493
    Words ['by', 'nakamura.uits.iupui.edu', '(8.12.11.20060308/8.12.11/Submit)', 'id', 'm049W2i5006493']
    Ignore
    Line: 	for source@collab.sakaiproject.org; Fri, 4 Jan 2008 04:32:02 -0500
    Words ['for', 'source@collab.sakaiproject.org;', 'Fri,', '4', 'Jan', '2008', '04:32:02', '-0500']
    Ignore
    Line: Date: Fri, 4 Jan 2008 04:32:02 -0500
    Words ['Date:', 'Fri,', '4', 'Jan', '2008', '04:32:02', '-0500']
    Ignore
    Line: X-Authentication-Warning: nakamura.uits.iupui.edu: apache set sender to david.horwitz@uct.ac.za using -f
    Words ['X-Authentication-Warning:', 'nakamura.uits.iupui.edu:', 'apache', 'set', 'sender', 'to', 'david.horwitz@uct.ac.za', 'using', '-f']
    Ignore
    Line: To: source@collab.sakaiproject.org
    Words ['To:', 'source@collab.sakaiproject.org']
    Ignore
    Line: From: david.horwitz@uct.ac.za
    Words ['From:', 'david.horwitz@uct.ac.za']
    Ignore
    Line: Subject: [sakai] svn commit: r39751 - in podcasts/branches/sakai_2-5-x/podcasts-app/src/webapp: css images podcasts
    Words ['Subject:', '[sakai]', 'svn', 'commit:', 'r39751', '-', 'in', 'podcasts/branches/sakai_2-5-x/podcasts-app/src/webapp:', 'css', 'images', 'podcasts']
    Ignore
    Line: X-Content-Type-Outer-Envelope: text/plain; charset=UTF-8
    Words ['X-Content-Type-Outer-Envelope:', 'text/plain;', 'charset=UTF-8']
    Ignore
    Line: X-Content-Type-Message-Body: text/plain; charset=UTF-8
    Words ['X-Content-Type-Message-Body:', 'text/plain;', 'charset=UTF-8']
    Ignore
    Line: Content-Type: text/plain; charset=UTF-8
    Words ['Content-Type:', 'text/plain;', 'charset=UTF-8']
    Ignore
    Line: X-DSPAM-Result: Innocent
    Words ['X-DSPAM-Result:', 'Innocent']
    Ignore
    Line: X-DSPAM-Processed: Fri Jan  4 04:33:44 2008
    Words ['X-DSPAM-Processed:', 'Fri', 'Jan', '4', '04:33:44', '2008']
    Ignore
    Line: X-DSPAM-Confidence: 0.7002
    Words ['X-DSPAM-Confidence:', '0.7002']
    Ignore
    Line: X-DSPAM-Probability: 0.0000
    Words ['X-DSPAM-Probability:', '0.0000']
    Ignore
    Line: 
    Skip Blank
    Line: Details: http://source.sakaiproject.org/viewsvn/?view=rev&rev=39751
    Words ['Details:', 'http://source.sakaiproject.org/viewsvn/?view=rev&rev=39751']
    Ignore
    Line: 
    Skip Blank
    Line: Author: david.horwitz@uct.ac.za
    Words ['Author:', 'david.horwitz@uct.ac.za']
    Ignore
    Line: Date: 2008-01-04 04:31:35 -0500 (Fri, 04 Jan 2008)
    Words ['Date:', '2008-01-04', '04:31:35', '-0500', '(Fri,', '04', 'Jan', '2008)']
    Ignore
    Line: New Revision: 39751
    Words ['New', 'Revision:', '39751']
    Ignore
    Line: 
    Skip Blank
    Line: Removed:
    Words ['Removed:']
    Ignore
    Line: podcasts/branches/sakai_2-5-x/podcasts-app/src/webapp/images/rss-feed-icon.png
    Words ['podcasts/branches/sakai_2-5-x/podcasts-app/src/webapp/images/rss-feed-icon.png']
    Ignore
    Line: podcasts/branches/sakai_2-5-x/podcasts-app/src/webapp/podcasts/podPermissions.jsp
    Words ['podcasts/branches/sakai_2-5-x/podcasts-app/src/webapp/podcasts/podPermissions.jsp']
    Ignore
    Line: Modified:
    Words ['Modified:']
    Ignore
    Line: podcasts/branches/sakai_2-5-x/podcasts-app/src/webapp/css/podcaster.css
    Words ['podcasts/branches/sakai_2-5-x/podcasts-app/src/webapp/css/podcaster.css']
    Ignore
    Line: podcasts/branches/sakai_2-5-x/podcasts-app/src/webapp/podcasts/podDelete.jsp
    Words ['podcasts/branches/sakai_2-5-x/podcasts-app/src/webapp/podcasts/podDelete.jsp']
    Ignore
    Line: podcasts/branches/sakai_2-5-x/podcasts-app/src/webapp/podcasts/podMain.jsp
    Words ['podcasts/branches/sakai_2-5-x/podcasts-app/src/webapp/podcasts/podMain.jsp']
    Ignore
    Line: podcasts/branches/sakai_2-5-x/podcasts-app/src/webapp/podcasts/podNoResource.jsp
    Words ['podcasts/branches/sakai_2-5-x/podcasts-app/src/webapp/podcasts/podNoResource.jsp']
    Ignore
    Line: podcasts/branches/sakai_2-5-x/podcasts-app/src/webapp/podcasts/podOptions.jsp
    Words ['podcasts/branches/sakai_2-5-x/podcasts-app/src/webapp/podcasts/podOptions.jsp']
    Ignore
    Line: Log:
    Words ['Log:']
    Ignore
    Line: svn log -r39146 https://source.sakaiproject.org/svn/podcasts/trunk
    Words ['svn', 'log', '-r39146', 'https://source.sakaiproject.org/svn/podcasts/trunk']
    Ignore
    Line: ------------------------------------------------------------------------
    Words ['------------------------------------------------------------------------']
    Ignore
    Line: r39146 | josrodri@iupui.edu | 2007-12-12 21:40:33 +0200 (Wed, 12 Dec 2007) | 1 line
    Words ['r39146', '|', 'josrodri@iupui.edu', '|', '2007-12-12', '21:40:33', '+0200', '(Wed,', '12', 'Dec', '2007)', '|', '1', 'line']
    Ignore
    Line: 
    Skip Blank
    Line: SAK-9882: refactored the other pages as well to take advantage of proper jsp components as well as validation cleanup.
    Words ['SAK-9882:', 'refactored', 'the', 'other', 'pages', 'as', 'well', 'to', 'take', 'advantage', 'of', 'proper', 'jsp', 'components', 'as', 'well', 'as', 'validation', 'cleanup.']
    Ignore
    Line: ------------------------------------------------------------------------
    Words ['------------------------------------------------------------------------']
    Ignore
    Line: dhorwitz@david-horwitz-6:~/branchManagemnt/sakai_2-5-x> svn merge -c39146 https://source.sakaiproject.org/svn/podcasts/trunk podcasts/
    Words ['dhorwitz@david-horwitz-6:~/branchManagemnt/sakai_2-5-x>', 'svn', 'merge', '-c39146', 'https://source.sakaiproject.org/svn/podcasts/trunk', 'podcasts/']
    Ignore
    Line: D    podcasts/podcasts-app/src/webapp/podcasts/podPermissions.jsp
    Words ['D', 'podcasts/podcasts-app/src/webapp/podcasts/podPermissions.jsp']
    Ignore
    Line: U    podcasts/podcasts-app/src/webapp/podcasts/podDelete.jsp
    Words ['U', 'podcasts/podcasts-app/src/webapp/podcasts/podDelete.jsp']
    Ignore
    Line: U    podcasts/podcasts-app/src/webapp/podcasts/podMain.jsp
    Words ['U', 'podcasts/podcasts-app/src/webapp/podcasts/podMain.jsp']
    Ignore
    Line: U    podcasts/podcasts-app/src/webapp/podcasts/podNoResource.jsp
    Words ['U', 'podcasts/podcasts-app/src/webapp/podcasts/podNoResource.jsp']
    Ignore
    Line: U    podcasts/podcasts-app/src/webapp/podcasts/podOptions.jsp
    Words ['U', 'podcasts/podcasts-app/src/webapp/podcasts/podOptions.jsp']
    Ignore
    Line: D    podcasts/podcasts-app/src/webapp/images/rss-feed-icon.png
    Words ['D', 'podcasts/podcasts-app/src/webapp/images/rss-feed-icon.png']
    Ignore
    Line: U    podcasts/podcasts-app/src/webapp/css/podcaster.css
    Words ['U', 'podcasts/podcasts-app/src/webapp/css/podcaster.css']
    Ignore
    Line: 
    Skip Blank
    Line: 
    Skip Blank
    Line: 
    Skip Blank
    Line: ----------------------
    Words ['----------------------']
    Ignore
    Line: This automatic notification message was sent by Sakai Collab (https://collab.sakaiproject.org/portal) from the Source site.
    Words ['This', 'automatic', 'notification', 'message', 'was', 'sent', 'by', 'Sakai', 'Collab', '(https://collab.sakaiproject.org/portal)', 'from', 'the', 'Source', 'site.']
    Ignore
    Line: You can modify how you receive notifications at My Workspace > Preferences.
    Words ['You', 'can', 'modify', 'how', 'you', 'receive', 'notifications', 'at', 'My', 'Workspace', '>', 'Preferences.']
    Ignore
    Line: 
    Skip Blank
    Line: 
    Skip Blank
    Line: 
    Skip Blank
    Line: From stephen.marquard@uct.ac.za Fri Jan  4 04:07:34 2008
    Words ['From', 'stephen.marquard@uct.ac.za', 'Fri', 'Jan', '4', '04:07:34', '2008']
    Fri
    Line: Return-Path: <postmaster@collab.sakaiproject.org>
    Words ['Return-Path:', '<postmaster@collab.sakaiproject.org>']
    Ignore
    Line: Received: from murder (mail.umich.edu [141.211.14.25])
    Words ['Received:', 'from', 'murder', '(mail.umich.edu', '[141.211.14.25])']
    Ignore
    Line: 	 by frankenstein.mail.umich.edu (Cyrus v2.3.8) with LMTPA;
    Words ['by', 'frankenstein.mail.umich.edu', '(Cyrus', 'v2.3.8)', 'with', 'LMTPA;']
    Ignore
    Line: 	 Fri, 04 Jan 2008 04:07:34 -0500
    Words ['Fri,', '04', 'Jan', '2008', '04:07:34', '-0500']
    Ignore
    Line: X-Sieve: CMU Sieve 2.3
    Words ['X-Sieve:', 'CMU', 'Sieve', '2.3']
    Ignore
    Line: Received: from murder ([unix socket])
    Words ['Received:', 'from', 'murder', '([unix', 'socket])']
    Ignore
    Line: 	 by mail.umich.edu (Cyrus v2.2.12) with LMTPA;
    Words ['by', 'mail.umich.edu', '(Cyrus', 'v2.2.12)', 'with', 'LMTPA;']
    Ignore
    Line: 	 Fri, 04 Jan 2008 04:07:34 -0500
    Words ['Fri,', '04', 'Jan', '2008', '04:07:34', '-0500']
    Ignore
    Line: Received: from salemslot.mr.itd.umich.edu (salemslot.mr.itd.umich.edu [141.211.14.58])
    Words ['Received:', 'from', 'salemslot.mr.itd.umich.edu', '(salemslot.mr.itd.umich.edu', '[141.211.14.58])']
    Ignore
    Line: 	by panther.mail.umich.edu () with ESMTP id m0497WAN027902;
    Words ['by', 'panther.mail.umich.edu', '()', 'with', 'ESMTP', 'id', 'm0497WAN027902;']
    Ignore
    Line: 	Fri, 4 Jan 2008 04:07:32 -0500
    Words ['Fri,', '4', 'Jan', '2008', '04:07:32', '-0500']
    Ignore
    Line: Received: FROM paploo.uhi.ac.uk (app1.prod.collab.uhi.ac.uk [194.35.219.184])
    Words ['Received:', 'FROM', 'paploo.uhi.ac.uk', '(app1.prod.collab.uhi.ac.uk', '[194.35.219.184])']
    Ignore
    Line: 	BY salemslot.mr.itd.umich.edu ID 477DF74E.49493.30415 ;
    Words ['BY', 'salemslot.mr.itd.umich.edu', 'ID', '477DF74E.49493.30415', ';']
    Ignore
    Line: 	 4 Jan 2008 04:07:29 -0500
    Words ['4', 'Jan', '2008', '04:07:29', '-0500']
    Ignore
    Line: Received: from paploo.uhi.ac.uk (localhost [127.0.0.1])
    Words ['Received:', 'from', 'paploo.uhi.ac.uk', '(localhost', '[127.0.0.1])']
    Ignore
    Line: 	by paploo.uhi.ac.uk (Postfix) with ESMTP id 88598BA5B6;
    Words ['by', 'paploo.uhi.ac.uk', '(Postfix)', 'with', 'ESMTP', 'id', '88598BA5B6;']
    Ignore
    Line: 	Fri,  4 Jan 2008 09:07:19 +0000 (GMT)
    Words ['Fri,', '4', 'Jan', '2008', '09:07:19', '+0000', '(GMT)']
    Ignore
    Line: Message-ID: <200801040905.m0495rWB006420@nakamura.uits.iupui.edu>
    Words ['Message-ID:', '<200801040905.m0495rWB006420@nakamura.uits.iupui.edu>']
    Ignore
    Line: Mime-Version: 1.0
    Words ['Mime-Version:', '1.0']
    Ignore
    Line: Content-Transfer-Encoding: 7bit
    Words ['Content-Transfer-Encoding:', '7bit']
    Ignore
    Line: Received: from prod.collab.uhi.ac.uk ([194.35.219.182])
    Words ['Received:', 'from', 'prod.collab.uhi.ac.uk', '([194.35.219.182])']
    Ignore
    Line:           by paploo.uhi.ac.uk (JAMES SMTP Server 2.1.3) with SMTP ID 385
    Words ['by', 'paploo.uhi.ac.uk', '(JAMES', 'SMTP', 'Server', '2.1.3)', 'with', 'SMTP', 'ID', '385']
    Ignore
    Line:           for <source@collab.sakaiproject.org>;
    Words ['for', '<source@collab.sakaiproject.org>;']
    Ignore
    Line:           Fri, 4 Jan 2008 09:07:04 +0000 (GMT)
    Words ['Fri,', '4', 'Jan', '2008', '09:07:04', '+0000', '(GMT)']
    Ignore
    Line: Received: from nakamura.uits.iupui.edu (nakamura.uits.iupui.edu [134.68.220.122])
    Words ['Received:', 'from', 'nakamura.uits.iupui.edu', '(nakamura.uits.iupui.edu', '[134.68.220.122])']
    Ignore
    Line: 	by shmi.uhi.ac.uk (Postfix) with ESMTP id 90636418A8
    Words ['by', 'shmi.uhi.ac.uk', '(Postfix)', 'with', 'ESMTP', 'id', '90636418A8']
    Ignore
    Line: 	for <source@collab.sakaiproject.org>; Fri,  4 Jan 2008 09:07:04 +0000 (GMT)
    Words ['for', '<source@collab.sakaiproject.org>;', 'Fri,', '4', 'Jan', '2008', '09:07:04', '+0000', '(GMT)']
    Ignore
    Line: Received: from nakamura.uits.iupui.edu (localhost [127.0.0.1])
    Words ['Received:', 'from', 'nakamura.uits.iupui.edu', '(localhost', '[127.0.0.1])']
    Ignore
    Line: 	by nakamura.uits.iupui.edu (8.12.11.20060308/8.12.11) with ESMTP id m0495sZs006422
    Words ['by', 'nakamura.uits.iupui.edu', '(8.12.11.20060308/8.12.11)', 'with', 'ESMTP', 'id', 'm0495sZs006422']
    Ignore
    Line: 	for <source@collab.sakaiproject.org>; Fri, 4 Jan 2008 04:05:54 -0500
    Words ['for', '<source@collab.sakaiproject.org>;', 'Fri,', '4', 'Jan', '2008', '04:05:54', '-0500']
    Ignore
    Line: Received: (from apache@localhost)
    Words ['Received:', '(from', 'apache@localhost)']
    Ignore
    Line: 	by nakamura.uits.iupui.edu (8.12.11.20060308/8.12.11/Submit) id m0495rWB006420
    Words ['by', 'nakamura.uits.iupui.edu', '(8.12.11.20060308/8.12.11/Submit)', 'id', 'm0495rWB006420']
    Ignore
    Line: 	for source@collab.sakaiproject.org; Fri, 4 Jan 2008 04:05:53 -0500
    Words ['for', 'source@collab.sakaiproject.org;', 'Fri,', '4', 'Jan', '2008', '04:05:53', '-0500']
    Ignore
    Line: Date: Fri, 4 Jan 2008 04:05:53 -0500
    Words ['Date:', 'Fri,', '4', 'Jan', '2008', '04:05:53', '-0500']
    Ignore
    Line: X-Authentication-Warning: nakamura.uits.iupui.edu: apache set sender to stephen.marquard@uct.ac.za using -f
    Words ['X-Authentication-Warning:', 'nakamura.uits.iupui.edu:', 'apache', 'set', 'sender', 'to', 'stephen.marquard@uct.ac.za', 'using', '-f']
    Ignore
    Line: To: source@collab.sakaiproject.org
    Words ['To:', 'source@collab.sakaiproject.org']
    Ignore
    Line: From: stephen.marquard@uct.ac.za
    Words ['From:', 'stephen.marquard@uct.ac.za']
    Ignore
    Line: Subject: [sakai] svn commit: r39750 - event/branches/SAK-6216/event-util/util/src/java/org/sakaiproject/util
    Words ['Subject:', '[sakai]', 'svn', 'commit:', 'r39750', '-', 'event/branches/SAK-6216/event-util/util/src/java/org/sakaiproject/util']
    Ignore
    Line: X-Content-Type-Outer-Envelope: text/plain; charset=UTF-8
    Words ['X-Content-Type-Outer-Envelope:', 'text/plain;', 'charset=UTF-8']
    Ignore
    Line: X-Content-Type-Message-Body: text/plain; charset=UTF-8
    Words ['X-Content-Type-Message-Body:', 'text/plain;', 'charset=UTF-8']
    Ignore
    Line: Content-Type: text/plain; charset=UTF-8
    Words ['Content-Type:', 'text/plain;', 'charset=UTF-8']
    Ignore
    Line: X-DSPAM-Result: Innocent
    Words ['X-DSPAM-Result:', 'Innocent']
    Ignore
    Line: X-DSPAM-Processed: Fri Jan  4 04:07:34 2008
    Words ['X-DSPAM-Processed:', 'Fri', 'Jan', '4', '04:07:34', '2008']
    Ignore
    Line: X-DSPAM-Confidence: 0.7554
    Words ['X-DSPAM-Confidence:', '0.7554']
    Ignore
    Line: X-DSPAM-Probability: 0.0000
    Words ['X-DSPAM-Probability:', '0.0000']
    Ignore
    Line: 
    Skip Blank
    Line: Details: http://source.sakaiproject.org/viewsvn/?view=rev&rev=39750
    Words ['Details:', 'http://source.sakaiproject.org/viewsvn/?view=rev&rev=39750']
    Ignore
    Line: 
    Skip Blank
    Line: Author: stephen.marquard@uct.ac.za
    Words ['Author:', 'stephen.marquard@uct.ac.za']
    Ignore
    Line: Date: 2008-01-04 04:05:43 -0500 (Fri, 04 Jan 2008)
    Words ['Date:', '2008-01-04', '04:05:43', '-0500', '(Fri,', '04', 'Jan', '2008)']
    Ignore
    Line: New Revision: 39750
    Words ['New', 'Revision:', '39750']
    Ignore
    Line: 
    Skip Blank
    Line: Modified:
    Words ['Modified:']
    Ignore
    Line: event/branches/SAK-6216/event-util/util/src/java/org/sakaiproject/util/EmailNotification.java
    Words ['event/branches/SAK-6216/event-util/util/src/java/org/sakaiproject/util/EmailNotification.java']
    Ignore
    Line: Log:
    Words ['Log:']
    Ignore
    Line: SAK-6216 merge event change from SAK-11169 (r39033) to synchronize branch with 2-5-x (for convenience for UCT local build)
    Words ['SAK-6216', 'merge', 'event', 'change', 'from', 'SAK-11169', '(r39033)', 'to', 'synchronize', 'branch', 'with', '2-5-x', '(for', 'convenience', 'for', 'UCT', 'local', 'build)']
    Ignore
    Line: 
    Skip Blank
    Line: ----------------------
    Words ['----------------------']
    Ignore
    Line: This automatic notification message was sent by Sakai Collab (https://collab.sakaiproject.org/portal) from the Source site.
    Words ['This', 'automatic', 'notification', 'message', 'was', 'sent', 'by', 'Sakai', 'Collab', '(https://collab.sakaiproject.org/portal)', 'from', 'the', 'Source', 'site.']
    Ignore
    Line: You can modify how you receive notifications at My Workspace > Preferences.
    Words ['You', 'can', 'modify', 'how', 'you', 'receive', 'notifications', 'at', 'My', 'Workspace', '>', 'Preferences.']
    Ignore
    Line: 
    Skip Blank
    Line: 
    Skip Blank
    Line: 
    Skip Blank
    Line: From louis@media.berkeley.edu Thu Jan  3 19:51:21 2008
    Words ['From', 'louis@media.berkeley.edu', 'Thu', 'Jan', '3', '19:51:21', '2008']
    Thu
    Line: Return-Path: <postmaster@collab.sakaiproject.org>
    Words ['Return-Path:', '<postmaster@collab.sakaiproject.org>']
    Ignore
    Line: Received: from murder (mail.umich.edu [141.211.14.91])
    Words ['Received:', 'from', 'murder', '(mail.umich.edu', '[141.211.14.91])']
    Ignore
    Line: 	 by frankenstein.mail.umich.edu (Cyrus v2.3.8) with LMTPA;
    Words ['by', 'frankenstein.mail.umich.edu', '(Cyrus', 'v2.3.8)', 'with', 'LMTPA;']
    Ignore
    Line: 	 Thu, 03 Jan 2008 19:51:21 -0500
    Words ['Thu,', '03', 'Jan', '2008', '19:51:21', '-0500']
    Ignore
    Line: X-Sieve: CMU Sieve 2.3
    Words ['X-Sieve:', 'CMU', 'Sieve', '2.3']
    Ignore
    Line: Received: from murder ([unix socket])
    Words ['Received:', 'from', 'murder', '([unix', 'socket])']
    Ignore
    Line: 	 by mail.umich.edu (Cyrus v2.2.12) with LMTPA;
    Words ['by', 'mail.umich.edu', '(Cyrus', 'v2.2.12)', 'with', 'LMTPA;']
    Ignore
    Line: 	 Thu, 03 Jan 2008 19:51:21 -0500
    Words ['Thu,', '03', 'Jan', '2008', '19:51:21', '-0500']
    Ignore
    Line: Received: from eyewitness.mr.itd.umich.edu (eyewitness.mr.itd.umich.edu [141.211.93.142])
    Words ['Received:', 'from', 'eyewitness.mr.itd.umich.edu', '(eyewitness.mr.itd.umich.edu', '[141.211.93.142])']
    Ignore
    Line: 	by jacknife.mail.umich.edu () with ESMTP id m040pJHB027171;
    Words ['by', 'jacknife.mail.umich.edu', '()', 'with', 'ESMTP', 'id', 'm040pJHB027171;']
    Ignore
    Line: 	Thu, 3 Jan 2008 19:51:19 -0500
    Words ['Thu,', '3', 'Jan', '2008', '19:51:19', '-0500']
    Ignore
    Line: Received: FROM paploo.uhi.ac.uk (app1.prod.collab.uhi.ac.uk [194.35.219.184])
    Words ['Received:', 'FROM', 'paploo.uhi.ac.uk', '(app1.prod.collab.uhi.ac.uk', '[194.35.219.184])']
    Ignore
    Line: 	BY eyewitness.mr.itd.umich.edu ID 477D8300.AC098.32562 ;
    Words ['BY', 'eyewitness.mr.itd.umich.edu', 'ID', '477D8300.AC098.32562', ';']
    Ignore
    Line: 	 3 Jan 2008 19:51:15 -0500
    Words ['3', 'Jan', '2008', '19:51:15', '-0500']
    Ignore
    Line: Received: from paploo.uhi.ac.uk (localhost [127.0.0.1])
    Words ['Received:', 'from', 'paploo.uhi.ac.uk', '(localhost', '[127.0.0.1])']
    Ignore
    Line: 	by paploo.uhi.ac.uk (Postfix) with ESMTP id E6CC4B9F8A;
    Words ['by', 'paploo.uhi.ac.uk', '(Postfix)', 'with', 'ESMTP', 'id', 'E6CC4B9F8A;']
    Ignore
    Line: 	Fri,  4 Jan 2008 00:36:06 +0000 (GMT)
    Words ['Fri,', '4', 'Jan', '2008', '00:36:06', '+0000', '(GMT)']
    Ignore
    Line: Message-ID: <200801040023.m040NpCc005473@nakamura.uits.iupui.edu>
    Words ['Message-ID:', '<200801040023.m040NpCc005473@nakamura.uits.iupui.edu>']
    Ignore
    Line: Mime-Version: 1.0
    Words ['Mime-Version:', '1.0']
    Ignore
    Line: Content-Transfer-Encoding: 7bit
    Words ['Content-Transfer-Encoding:', '7bit']
    Ignore
    Line: Received: from prod.collab.uhi.ac.uk ([194.35.219.182])
    Words ['Received:', 'from', 'prod.collab.uhi.ac.uk', '([194.35.219.182])']
    Ignore
    Line:           by paploo.uhi.ac.uk (JAMES SMTP Server 2.1.3) with SMTP ID 754
    Words ['by', 'paploo.uhi.ac.uk', '(JAMES', 'SMTP', 'Server', '2.1.3)', 'with', 'SMTP', 'ID', '754']
    Ignore
    Line:           for <source@collab.sakaiproject.org>;
    Words ['for', '<source@collab.sakaiproject.org>;']
    Ignore
    Line:           Fri, 4 Jan 2008 00:35:43 +0000 (GMT)
    Words ['Fri,', '4', 'Jan', '2008', '00:35:43', '+0000', '(GMT)']
    Ignore
    Line: Received: from nakamura.uits.iupui.edu (nakamura.uits.iupui.edu [134.68.220.122])
    Words ['Received:', 'from', 'nakamura.uits.iupui.edu', '(nakamura.uits.iupui.edu', '[134.68.220.122])']
    Ignore
    Line: 	by shmi.uhi.ac.uk (Postfix) with ESMTP id 8889842C49
    Words ['by', 'shmi.uhi.ac.uk', '(Postfix)', 'with', 'ESMTP', 'id', '8889842C49']
    Ignore
    Line: 	for <source@collab.sakaiproject.org>; Fri,  4 Jan 2008 00:25:00 +0000 (GMT)
    Words ['for', '<source@collab.sakaiproject.org>;', 'Fri,', '4', 'Jan', '2008', '00:25:00', '+0000', '(GMT)']
    Ignore
    Line: Received: from nakamura.uits.iupui.edu (localhost [127.0.0.1])
    Words ['Received:', 'from', 'nakamura.uits.iupui.edu', '(localhost', '[127.0.0.1])']
    Ignore
    Line: 	by nakamura.uits.iupui.edu (8.12.11.20060308/8.12.11) with ESMTP id m040NpgM005475
    Words ['by', 'nakamura.uits.iupui.edu', '(8.12.11.20060308/8.12.11)', 'with', 'ESMTP', 'id', 'm040NpgM005475']
    Ignore
    Line: 	for <source@collab.sakaiproject.org>; Thu, 3 Jan 2008 19:23:51 -0500
    Words ['for', '<source@collab.sakaiproject.org>;', 'Thu,', '3', 'Jan', '2008', '19:23:51', '-0500']
    Ignore
    Line: Received: (from apache@localhost)
    Words ['Received:', '(from', 'apache@localhost)']
    Ignore
    Line: 	by nakamura.uits.iupui.edu (8.12.11.20060308/8.12.11/Submit) id m040NpCc005473
    Words ['by', 'nakamura.uits.iupui.edu', '(8.12.11.20060308/8.12.11/Submit)', 'id', 'm040NpCc005473']
    Ignore
    Line: 	for source@collab.sakaiproject.org; Thu, 3 Jan 2008 19:23:51 -0500
    Words ['for', 'source@collab.sakaiproject.org;', 'Thu,', '3', 'Jan', '2008', '19:23:51', '-0500']
    Ignore
    Line: Date: Thu, 3 Jan 2008 19:23:51 -0500
    Words ['Date:', 'Thu,', '3', 'Jan', '2008', '19:23:51', '-0500']
    Ignore
    Line: X-Authentication-Warning: nakamura.uits.iupui.edu: apache set sender to louis@media.berkeley.edu using -f
    Words ['X-Authentication-Warning:', 'nakamura.uits.iupui.edu:', 'apache', 'set', 'sender', 'to', 'louis@media.berkeley.edu', 'using', '-f']
    Ignore
    Line: To: source@collab.sakaiproject.org
    Words ['To:', 'source@collab.sakaiproject.org']
    Ignore
    Line: From: louis@media.berkeley.edu
    Words ['From:', 'louis@media.berkeley.edu']
    Ignore
    Line: Subject: [sakai] svn commit: r39749 - in bspace/site-manage/sakai_2-4-x/site-manage-tool/tool/src: bundle webapp/vm/sitesetup
    Words ['Subject:', '[sakai]', 'svn', 'commit:', 'r39749', '-', 'in', 'bspace/site-manage/sakai_2-4-x/site-manage-tool/tool/src:', 'bundle', 'webapp/vm/sitesetup']
    Ignore
    Line: X-Content-Type-Outer-Envelope: text/plain; charset=UTF-8
    Words ['X-Content-Type-Outer-Envelope:', 'text/plain;', 'charset=UTF-8']
    Ignore
    Line: X-Content-Type-Message-Body: text/plain; charset=UTF-8
    Words ['X-Content-Type-Message-Body:', 'text/plain;', 'charset=UTF-8']
    Ignore
    Line: Content-Type: text/plain; charset=UTF-8
    Words ['Content-Type:', 'text/plain;', 'charset=UTF-8']
    Ignore
    Line: X-DSPAM-Result: Innocent
    Words ['X-DSPAM-Result:', 'Innocent']
    Ignore
    Line: X-DSPAM-Processed: Thu Jan  3 19:51:20 2008
    Words ['X-DSPAM-Processed:', 'Thu', 'Jan', '3', '19:51:20', '2008']
    Ignore
    Line: X-DSPAM-Confidence: 0.6956
    Words ['X-DSPAM-Confidence:', '0.6956']
    Ignore
    Line: X-DSPAM-Probability: 0.0000
    Words ['X-DSPAM-Probability:', '0.0000']
    Ignore
    Line: 
    Skip Blank
    Line: Details: http://source.sakaiproject.org/viewsvn/?view=rev&rev=39749
    Words ['Details:', 'http://source.sakaiproject.org/viewsvn/?view=rev&rev=39749']
    Ignore
    Line: 
    Skip Blank
    Line: Author: louis@media.berkeley.edu
    Words ['Author:', 'louis@media.berkeley.edu']
    Ignore
    Line: Date: 2008-01-03 19:23:46 -0500 (Thu, 03 Jan 2008)
    Words ['Date:', '2008-01-03', '19:23:46', '-0500', '(Thu,', '03', 'Jan', '2008)']
    Ignore
    Line: New Revision: 39749
    Words ['New', 'Revision:', '39749']
    Ignore
    Line: 
    Skip Blank
    Line: Modified:
    Words ['Modified:']
    Ignore
    Line: bspace/site-manage/sakai_2-4-x/site-manage-tool/tool/src/bundle/sitesetupgeneric.properties
    Words ['bspace/site-manage/sakai_2-4-x/site-manage-tool/tool/src/bundle/sitesetupgeneric.properties']
    Ignore
    Line: bspace/site-manage/sakai_2-4-x/site-manage-tool/tool/src/webapp/vm/sitesetup/chef_site-importSites.vm
    Words ['bspace/site-manage/sakai_2-4-x/site-manage-tool/tool/src/webapp/vm/sitesetup/chef_site-importSites.vm']
    Ignore
    Line: Log:
    Words ['Log:']
    Ignore
    Line: BSP-1420 Update text to clarify "Re-Use Materials..." option in WS Setup
    Words ['BSP-1420', 'Update', 'text', 'to', 'clarify', '"Re-Use', 'Materials..."', 'option', 'in', 'WS', 'Setup']
    Ignore
    Line: 
    Skip Blank
    Line: ----------------------
    Words ['----------------------']
    Ignore
    Line: This automatic notification message was sent by Sakai Collab (https://collab.sakaiproject.org/portal) from the Source site.
    Words ['This', 'automatic', 'notification', 'message', 'was', 'sent', 'by', 'Sakai', 'Collab', '(https://collab.sakaiproject.org/portal)', 'from', 'the', 'Source', 'site.']
    Ignore
    Line: You can modify how you receive notifications at My Workspace > Preferences.
    Words ['You', 'can', 'modify', 'how', 'you', 'receive', 'notifications', 'at', 'My', 'Workspace', '>', 'Preferences.']
    Ignore
    Line: 
    Skip Blank
    Line: 
    Skip Blank
    Line: 
    Skip Blank
    Line: From louis@media.berkeley.edu Thu Jan  3 17:18:23 2008
    Words ['From', 'louis@media.berkeley.edu', 'Thu', 'Jan', '3', '17:18:23', '2008']
    Thu
    Line: Return-Path: <postmaster@collab.sakaiproject.org>
    Words ['Return-Path:', '<postmaster@collab.sakaiproject.org>']
    Ignore
    Line: Received: from murder (mail.umich.edu [141.211.14.91])
    Words ['Received:', 'from', 'murder', '(mail.umich.edu', '[141.211.14.91])']
    Ignore
    Line: 	 by frankenstein.mail.umich.edu (Cyrus v2.3.8) with LMTPA;
    Words ['by', 'frankenstein.mail.umich.edu', '(Cyrus', 'v2.3.8)', 'with', 'LMTPA;']
    Ignore
    Line: 	 Thu, 03 Jan 2008 17:18:23 -0500
    Words ['Thu,', '03', 'Jan', '2008', '17:18:23', '-0500']
    Ignore
    Line: X-Sieve: CMU Sieve 2.3
    Words ['X-Sieve:', 'CMU', 'Sieve', '2.3']
    Ignore
    Line: Received: from murder ([unix socket])
    Words ['Received:', 'from', 'murder', '([unix', 'socket])']
    Ignore
    Line: 	 by mail.umich.edu (Cyrus v2.2.12) with LMTPA;
    Words ['by', 'mail.umich.edu', '(Cyrus', 'v2.2.12)', 'with', 'LMTPA;']
    Ignore
    Line: 	 Thu, 03 Jan 2008 17:18:23 -0500
    Words ['Thu,', '03', 'Jan', '2008', '17:18:23', '-0500']
    Ignore
    Line: Received: from salemslot.mr.itd.umich.edu (salemslot.mr.itd.umich.edu [141.211.14.58])
    Words ['Received:', 'from', 'salemslot.mr.itd.umich.edu', '(salemslot.mr.itd.umich.edu', '[141.211.14.58])']
    Ignore
    Line: 	by jacknife.mail.umich.edu () with ESMTP id m03MIMXY027729;
    Words ['by', 'jacknife.mail.umich.edu', '()', 'with', 'ESMTP', 'id', 'm03MIMXY027729;']
    Ignore
    Line: 	Thu, 3 Jan 2008 17:18:22 -0500
    Words ['Thu,', '3', 'Jan', '2008', '17:18:22', '-0500']
    Ignore
    Line: Received: FROM paploo.uhi.ac.uk (app1.prod.collab.uhi.ac.uk [194.35.219.184])
    Words ['Received:', 'FROM', 'paploo.uhi.ac.uk', '(app1.prod.collab.uhi.ac.uk', '[194.35.219.184])']
    Ignore
    Line: 	BY salemslot.mr.itd.umich.edu ID 477D5F23.797F6.16348 ;
    Words ['BY', 'salemslot.mr.itd.umich.edu', 'ID', '477D5F23.797F6.16348', ';']
    Ignore
    Line: 	 3 Jan 2008 17:18:14 -0500
    Words ['3', 'Jan', '2008', '17:18:14', '-0500']
    Ignore
    Line: Received: from paploo.uhi.ac.uk (localhost [127.0.0.1])
    Words ['Received:', 'from', 'paploo.uhi.ac.uk', '(localhost', '[127.0.0.1])']
    Ignore
    Line: 	by paploo.uhi.ac.uk (Postfix) with ESMTP id EF439B98CE;
    Words ['by', 'paploo.uhi.ac.uk', '(Postfix)', 'with', 'ESMTP', 'id', 'EF439B98CE;']
    Ignore
    Line: 	Thu,  3 Jan 2008 22:18:19 +0000 (GMT)
    Words ['Thu,', '3', 'Jan', '2008', '22:18:19', '+0000', '(GMT)']
    Ignore
    Line: Message-ID: <200801032216.m03MGhDa005292@nakamura.uits.iupui.edu>
    Words ['Message-ID:', '<200801032216.m03MGhDa005292@nakamura.uits.iupui.edu>']
    Ignore
    Line: Mime-Version: 1.0
    Words ['Mime-Version:', '1.0']
    Ignore
    Line: Content-Transfer-Encoding: 7bit
    Words ['Content-Transfer-Encoding:', '7bit']
    Ignore
    Line: Received: from prod.collab.uhi.ac.uk ([194.35.219.182])
    Words ['Received:', 'from', 'prod.collab.uhi.ac.uk', '([194.35.219.182])']
    Ignore
    Line:           by paploo.uhi.ac.uk (JAMES SMTP Server 2.1.3) with SMTP ID 236
    Words ['by', 'paploo.uhi.ac.uk', '(JAMES', 'SMTP', 'Server', '2.1.3)', 'with', 'SMTP', 'ID', '236']
    Ignore
    Line:           for <source@collab.sakaiproject.org>;
    Words ['for', '<source@collab.sakaiproject.org>;']
    Ignore
    Line:           Thu, 3 Jan 2008 22:18:04 +0000 (GMT)
    Words ['Thu,', '3', 'Jan', '2008', '22:18:04', '+0000', '(GMT)']
    Ignore
    Line: Received: from nakamura.uits.iupui.edu (nakamura.uits.iupui.edu [134.68.220.122])
    Words ['Received:', 'from', 'nakamura.uits.iupui.edu', '(nakamura.uits.iupui.edu', '[134.68.220.122])']
    Ignore
    Line: 	by shmi.uhi.ac.uk (Postfix) with ESMTP id 905D53C2FD
    Words ['by', 'shmi.uhi.ac.uk', '(Postfix)', 'with', 'ESMTP', 'id', '905D53C2FD']
    Ignore
    Line: 	for <source@collab.sakaiproject.org>; Thu,  3 Jan 2008 22:17:52 +0000 (GMT)
    Words ['for', '<source@collab.sakaiproject.org>;', 'Thu,', '3', 'Jan', '2008', '22:17:52', '+0000', '(GMT)']
    Ignore
    Line: Received: from nakamura.uits.iupui.edu (localhost [127.0.0.1])
    Words ['Received:', 'from', 'nakamura.uits.iupui.edu', '(localhost', '[127.0.0.1])']
    Ignore
    Line: 	by nakamura.uits.iupui.edu (8.12.11.20060308/8.12.11) with ESMTP id m03MGhrs005294
    Words ['by', 'nakamura.uits.iupui.edu', '(8.12.11.20060308/8.12.11)', 'with', 'ESMTP', 'id', 'm03MGhrs005294']
    Ignore
    Line: 	for <source@collab.sakaiproject.org>; Thu, 3 Jan 2008 17:16:43 -0500
    Words ['for', '<source@collab.sakaiproject.org>;', 'Thu,', '3', 'Jan', '2008', '17:16:43', '-0500']
    Ignore
    Line: Received: (from apache@localhost)
    Words ['Received:', '(from', 'apache@localhost)']
    Ignore
    Line: 	by nakamura.uits.iupui.edu (8.12.11.20060308/8.12.11/Submit) id m03MGhDa005292
    Words ['by', 'nakamura.uits.iupui.edu', '(8.12.11.20060308/8.12.11/Submit)', 'id', 'm03MGhDa005292']
    Ignore
    Line: 	for source@collab.sakaiproject.org; Thu, 3 Jan 2008 17:16:43 -0500
    Words ['for', 'source@collab.sakaiproject.org;', 'Thu,', '3', 'Jan', '2008', '17:16:43', '-0500']
    Ignore
    Line: Date: Thu, 3 Jan 2008 17:16:43 -0500
    Words ['Date:', 'Thu,', '3', 'Jan', '2008', '17:16:43', '-0500']
    Ignore
    Line: X-Authentication-Warning: nakamura.uits.iupui.edu: apache set sender to louis@media.berkeley.edu using -f
    Words ['X-Authentication-Warning:', 'nakamura.uits.iupui.edu:', 'apache', 'set', 'sender', 'to', 'louis@media.berkeley.edu', 'using', '-f']
    Ignore
    Line: To: source@collab.sakaiproject.org
    Words ['To:', 'source@collab.sakaiproject.org']
    Ignore
    Line: From: louis@media.berkeley.edu
    Words ['From:', 'louis@media.berkeley.edu']
    Ignore
    Line: Subject: [sakai] svn commit: r39746 - in bspace/site-manage/sakai_2-4-x/site-manage-tool/tool/src: bundle webapp/vm/sitesetup
    Words ['Subject:', '[sakai]', 'svn', 'commit:', 'r39746', '-', 'in', 'bspace/site-manage/sakai_2-4-x/site-manage-tool/tool/src:', 'bundle', 'webapp/vm/sitesetup']
    Ignore
    Line: X-Content-Type-Outer-Envelope: text/plain; charset=UTF-8
    Words ['X-Content-Type-Outer-Envelope:', 'text/plain;', 'charset=UTF-8']
    Ignore
    Line: X-Content-Type-Message-Body: text/plain; charset=UTF-8
    Words ['X-Content-Type-Message-Body:', 'text/plain;', 'charset=UTF-8']
    Ignore
    Line: Content-Type: text/plain; charset=UTF-8
    Words ['Content-Type:', 'text/plain;', 'charset=UTF-8']
    Ignore
    Line: X-DSPAM-Result: Innocent
    Words ['X-DSPAM-Result:', 'Innocent']
    Ignore
    Line: X-DSPAM-Processed: Thu Jan  3 17:18:23 2008
    Words ['X-DSPAM-Processed:', 'Thu', 'Jan', '3', '17:18:23', '2008']
    Ignore
    Line: X-DSPAM-Confidence: 0.6959
    Words ['X-DSPAM-Confidence:', '0.6959']
    Ignore
    Line: X-DSPAM-Probability: 0.0000
    Words ['X-DSPAM-Probability:', '0.0000']
    Ignore
    Line: 
    Skip Blank
    Line: Details: http://source.sakaiproject.org/viewsvn/?view=rev&rev=39746
    Words ['Details:', 'http://source.sakaiproject.org/viewsvn/?view=rev&rev=39746']
    Ignore
    Line: 
    Skip Blank
    Line: Author: louis@media.berkeley.edu
    Words ['Author:', 'louis@media.berkeley.edu']
    Ignore
    Line: Date: 2008-01-03 17:16:39 -0500 (Thu, 03 Jan 2008)
    Words ['Date:', '2008-01-03', '17:16:39', '-0500', '(Thu,', '03', 'Jan', '2008)']
    Ignore
    Line: New Revision: 39746
    Words ['New', 'Revision:', '39746']
    Ignore
    Line: 
    Skip Blank
    Line: Modified:
    Words ['Modified:']
    Ignore
    Line: bspace/site-manage/sakai_2-4-x/site-manage-tool/tool/src/bundle/sitesetupgeneric.properties
    Words ['bspace/site-manage/sakai_2-4-x/site-manage-tool/tool/src/bundle/sitesetupgeneric.properties']
    Ignore
    Line: bspace/site-manage/sakai_2-4-x/site-manage-tool/tool/src/webapp/vm/sitesetup/chef_site-siteInfo-duplicate.vm
    Words ['bspace/site-manage/sakai_2-4-x/site-manage-tool/tool/src/webapp/vm/sitesetup/chef_site-siteInfo-duplicate.vm']
    Ignore
    Line: Log:
    Words ['Log:']
    Ignore
    Line: BSP-1421 Add text to clarify "Duplicate Site" option in Site Info
    Words ['BSP-1421', 'Add', 'text', 'to', 'clarify', '"Duplicate', 'Site"', 'option', 'in', 'Site', 'Info']
    Ignore
    Line: 
    Skip Blank
    Line: ----------------------
    Words ['----------------------']
    Ignore
    Line: This automatic notification message was sent by Sakai Collab (https://collab.sakaiproject.org/portal) from the Source site.
    Words ['This', 'automatic', 'notification', 'message', 'was', 'sent', 'by', 'Sakai', 'Collab', '(https://collab.sakaiproject.org/portal)', 'from', 'the', 'Source', 'site.']
    Ignore
    Line: You can modify how you receive notifications at My Workspace > Preferences.
    Words ['You', 'can', 'modify', 'how', 'you', 'receive', 'notifications', 'at', 'My', 'Workspace', '>', 'Preferences.']
    Ignore
    Line: 
    Skip Blank
    Line: 
    Skip Blank
    Line: 
    Skip Blank
    Line: From ray@media.berkeley.edu Thu Jan  3 17:07:00 2008
    Words ['From', 'ray@media.berkeley.edu', 'Thu', 'Jan', '3', '17:07:00', '2008']
    Thu
    Line: Return-Path: <postmaster@collab.sakaiproject.org>
    Words ['Return-Path:', '<postmaster@collab.sakaiproject.org>']
    Ignore
    Line: Received: from murder (mail.umich.edu [141.211.14.39])
    Words ['Received:', 'from', 'murder', '(mail.umich.edu', '[141.211.14.39])']
    Ignore
    Line: 	 by frankenstein.mail.umich.edu (Cyrus v2.3.8) with LMTPA;
    Words ['by', 'frankenstein.mail.umich.edu', '(Cyrus', 'v2.3.8)', 'with', 'LMTPA;']
    Ignore
    Line: 	 Thu, 03 Jan 2008 17:07:00 -0500
    Words ['Thu,', '03', 'Jan', '2008', '17:07:00', '-0500']
    Ignore
    Line: X-Sieve: CMU Sieve 2.3
    Words ['X-Sieve:', 'CMU', 'Sieve', '2.3']
    Ignore
    Line: Received: from murder ([unix socket])
    Words ['Received:', 'from', 'murder', '([unix', 'socket])']
    Ignore
    Line: 	 by mail.umich.edu (Cyrus v2.2.12) with LMTPA;
    Words ['by', 'mail.umich.edu', '(Cyrus', 'v2.2.12)', 'with', 'LMTPA;']
    Ignore
    Line: 	 Thu, 03 Jan 2008 17:07:00 -0500
    Words ['Thu,', '03', 'Jan', '2008', '17:07:00', '-0500']
    Ignore
    Line: Received: from anniehall.mr.itd.umich.edu (anniehall.mr.itd.umich.edu [141.211.93.141])
    Words ['Received:', 'from', 'anniehall.mr.itd.umich.edu', '(anniehall.mr.itd.umich.edu', '[141.211.93.141])']
    Ignore
    Line: 	by faithful.mail.umich.edu () with ESMTP id m03M6xaq014868;
    Words ['by', 'faithful.mail.umich.edu', '()', 'with', 'ESMTP', 'id', 'm03M6xaq014868;']
    Ignore
    Line: 	Thu, 3 Jan 2008 17:06:59 -0500
    Words ['Thu,', '3', 'Jan', '2008', '17:06:59', '-0500']
    Ignore
    Line: Received: FROM paploo.uhi.ac.uk (app1.prod.collab.uhi.ac.uk [194.35.219.184])
    Words ['Received:', 'FROM', 'paploo.uhi.ac.uk', '(app1.prod.collab.uhi.ac.uk', '[194.35.219.184])']
    Ignore
    Line: 	BY anniehall.mr.itd.umich.edu ID 477D5C7A.4FE1F.22211 ;
    Words ['BY', 'anniehall.mr.itd.umich.edu', 'ID', '477D5C7A.4FE1F.22211', ';']
    Ignore
    Line: 	 3 Jan 2008 17:06:53 -0500
    Words ['3', 'Jan', '2008', '17:06:53', '-0500']
    Ignore
    Line: Received: from paploo.uhi.ac.uk (localhost [127.0.0.1])
    Words ['Received:', 'from', 'paploo.uhi.ac.uk', '(localhost', '[127.0.0.1])']
    Ignore
    Line: 	by paploo.uhi.ac.uk (Postfix) with ESMTP id 0BC8D7225E;
    Words ['by', 'paploo.uhi.ac.uk', '(Postfix)', 'with', 'ESMTP', 'id', '0BC8D7225E;']
    Ignore
    Line: 	Thu,  3 Jan 2008 22:06:57 +0000 (GMT)
    Words ['Thu,', '3', 'Jan', '2008', '22:06:57', '+0000', '(GMT)']
    Ignore
    Line: Message-ID: <200801032205.m03M5Ea7005273@nakamura.uits.iupui.edu>
    Words ['Message-ID:', '<200801032205.m03M5Ea7005273@nakamura.uits.iupui.edu>']
    Ignore
    Line: Mime-Version: 1.0
    Words ['Mime-Version:', '1.0']
    Ignore
    Line: Content-Transfer-Encoding: 7bit
    Words ['Content-Transfer-Encoding:', '7bit']
    Ignore
    Line: Received: from prod.collab.uhi.ac.uk ([194.35.219.182])
    Words ['Received:', 'from', 'prod.collab.uhi.ac.uk', '([194.35.219.182])']
    Ignore
    Line:           by paploo.uhi.ac.uk (JAMES SMTP Server 2.1.3) with SMTP ID 554
    Words ['by', 'paploo.uhi.ac.uk', '(JAMES', 'SMTP', 'Server', '2.1.3)', 'with', 'SMTP', 'ID', '554']
    Ignore
    Line:           for <source@collab.sakaiproject.org>;
    Words ['for', '<source@collab.sakaiproject.org>;']
    Ignore
    Line:           Thu, 3 Jan 2008 22:06:34 +0000 (GMT)
    Words ['Thu,', '3', 'Jan', '2008', '22:06:34', '+0000', '(GMT)']
    Ignore
    Line: Received: from nakamura.uits.iupui.edu (nakamura.uits.iupui.edu [134.68.220.122])
    Words ['Received:', 'from', 'nakamura.uits.iupui.edu', '(nakamura.uits.iupui.edu', '[134.68.220.122])']
    Ignore
    Line: 	by shmi.uhi.ac.uk (Postfix) with ESMTP id 2AB513C2FD
    Words ['by', 'shmi.uhi.ac.uk', '(Postfix)', 'with', 'ESMTP', 'id', '2AB513C2FD']
    Ignore
    Line: 	for <source@collab.sakaiproject.org>; Thu,  3 Jan 2008 22:06:23 +0000 (GMT)
    Words ['for', '<source@collab.sakaiproject.org>;', 'Thu,', '3', 'Jan', '2008', '22:06:23', '+0000', '(GMT)']
    Ignore
    Line: Received: from nakamura.uits.iupui.edu (localhost [127.0.0.1])
    Words ['Received:', 'from', 'nakamura.uits.iupui.edu', '(localhost', '[127.0.0.1])']
    Ignore
    Line: 	by nakamura.uits.iupui.edu (8.12.11.20060308/8.12.11) with ESMTP id m03M5EQa005275
    Words ['by', 'nakamura.uits.iupui.edu', '(8.12.11.20060308/8.12.11)', 'with', 'ESMTP', 'id', 'm03M5EQa005275']
    Ignore
    Line: 	for <source@collab.sakaiproject.org>; Thu, 3 Jan 2008 17:05:14 -0500
    Words ['for', '<source@collab.sakaiproject.org>;', 'Thu,', '3', 'Jan', '2008', '17:05:14', '-0500']
    Ignore
    Line: Received: (from apache@localhost)
    Words ['Received:', '(from', 'apache@localhost)']
    Ignore
    Line: 	by nakamura.uits.iupui.edu (8.12.11.20060308/8.12.11/Submit) id m03M5Ea7005273
    Words ['by', 'nakamura.uits.iupui.edu', '(8.12.11.20060308/8.12.11/Submit)', 'id', 'm03M5Ea7005273']
    Ignore
    Line: 	for source@collab.sakaiproject.org; Thu, 3 Jan 2008 17:05:14 -0500
    Words ['for', 'source@collab.sakaiproject.org;', 'Thu,', '3', 'Jan', '2008', '17:05:14', '-0500']
    Ignore
    Line: Date: Thu, 3 Jan 2008 17:05:14 -0500
    Words ['Date:', 'Thu,', '3', 'Jan', '2008', '17:05:14', '-0500']
    Ignore
    Line: X-Authentication-Warning: nakamura.uits.iupui.edu: apache set sender to ray@media.berkeley.edu using -f
    Words ['X-Authentication-Warning:', 'nakamura.uits.iupui.edu:', 'apache', 'set', 'sender', 'to', 'ray@media.berkeley.edu', 'using', '-f']
    Ignore
    Line: To: source@collab.sakaiproject.org
    Words ['To:', 'source@collab.sakaiproject.org']
    Ignore
    Line: From: ray@media.berkeley.edu
    Words ['From:', 'ray@media.berkeley.edu']
    Ignore
    Line: Subject: [sakai] svn commit: r39745 - providers/trunk/cm/cm-authz-provider/src/java/org/sakaiproject/coursemanagement/impl/provider
    Words ['Subject:', '[sakai]', 'svn', 'commit:', 'r39745', '-', 'providers/trunk/cm/cm-authz-provider/src/java/org/sakaiproject/coursemanagement/impl/provider']
    Ignore
    Line: X-Content-Type-Outer-Envelope: text/plain; charset=UTF-8
    Words ['X-Content-Type-Outer-Envelope:', 'text/plain;', 'charset=UTF-8']
    Ignore
    Line: X-Content-Type-Message-Body: text/plain; charset=UTF-8
    Words ['X-Content-Type-Message-Body:', 'text/plain;', 'charset=UTF-8']
    Ignore
    Line: Content-Type: text/plain; charset=UTF-8
    Words ['Content-Type:', 'text/plain;', 'charset=UTF-8']
    Ignore
    Line: X-DSPAM-Result: Innocent
    Words ['X-DSPAM-Result:', 'Innocent']
    Ignore
    Line: X-DSPAM-Processed: Thu Jan  3 17:07:00 2008
    Words ['X-DSPAM-Processed:', 'Thu', 'Jan', '3', '17:07:00', '2008']
    Ignore
    Line: X-DSPAM-Confidence: 0.7556
    Words ['X-DSPAM-Confidence:', '0.7556']
    Ignore
    Line: X-DSPAM-Probability: 0.0000
    Words ['X-DSPAM-Probability:', '0.0000']
    Ignore
    Line: 
    Skip Blank
    Line: Details: http://source.sakaiproject.org/viewsvn/?view=rev&rev=39745
    Words ['Details:', 'http://source.sakaiproject.org/viewsvn/?view=rev&rev=39745']
    Ignore
    Line: 
    Skip Blank
    Line: Author: ray@media.berkeley.edu
    Words ['Author:', 'ray@media.berkeley.edu']
    Ignore
    Line: Date: 2008-01-03 17:05:11 -0500 (Thu, 03 Jan 2008)
    Words ['Date:', '2008-01-03', '17:05:11', '-0500', '(Thu,', '03', 'Jan', '2008)']
    Ignore
    Line: New Revision: 39745
    Words ['New', 'Revision:', '39745']
    Ignore
    Line: 
    Skip Blank
    Line: Modified:
    Words ['Modified:']
    Ignore
    Line: providers/trunk/cm/cm-authz-provider/src/java/org/sakaiproject/coursemanagement/impl/provider/CourseManagementGroupProvider.java
    Words ['providers/trunk/cm/cm-authz-provider/src/java/org/sakaiproject/coursemanagement/impl/provider/CourseManagementGroupProvider.java']
    Ignore
    Line: Log:
    Words ['Log:']
    Ignore
    Line: SAK-12602 Fix logic when a user has multiple roles in a section
    Words ['SAK-12602', 'Fix', 'logic', 'when', 'a', 'user', 'has', 'multiple', 'roles', 'in', 'a', 'section']
    Ignore
    Line: 
    Skip Blank
    Line: ----------------------
    Words ['----------------------']
    Ignore
    Line: This automatic notification message was sent by Sakai Collab (https://collab.sakaiproject.org/portal) from the Source site.
    Words ['This', 'automatic', 'notification', 'message', 'was', 'sent', 'by', 'Sakai', 'Collab', '(https://collab.sakaiproject.org/portal)', 'from', 'the', 'Source', 'site.']
    Ignore
    Line: You can modify how you receive notifications at My Workspace > Preferences.
    Words ['You', 'can', 'modify', 'how', 'you', 'receive', 'notifications', 'at', 'My', 'Workspace', '>', 'Preferences.']
    Ignore
    Line: 
    Skip Blank
    Line: 
    Skip Blank
    Line: 
    Skip Blank
    Line: From cwen@iupui.edu Thu Jan  3 16:34:40 2008
    Words ['From', 'cwen@iupui.edu', 'Thu', 'Jan', '3', '16:34:40', '2008']
    Thu
    Line: Return-Path: <postmaster@collab.sakaiproject.org>
    Words ['Return-Path:', '<postmaster@collab.sakaiproject.org>']
    Ignore
    Line: Received: from murder (mail.umich.edu [141.211.14.34])
    Words ['Received:', 'from', 'murder', '(mail.umich.edu', '[141.211.14.34])']
    Ignore
    Line: 	 by frankenstein.mail.umich.edu (Cyrus v2.3.8) with LMTPA;
    Words ['by', 'frankenstein.mail.umich.edu', '(Cyrus', 'v2.3.8)', 'with', 'LMTPA;']
    Ignore
    Line: 	 Thu, 03 Jan 2008 16:34:40 -0500
    Words ['Thu,', '03', 'Jan', '2008', '16:34:40', '-0500']
    Ignore
    Line: X-Sieve: CMU Sieve 2.3
    Words ['X-Sieve:', 'CMU', 'Sieve', '2.3']
    Ignore
    Line: Received: from murder ([unix socket])
    Words ['Received:', 'from', 'murder', '([unix', 'socket])']
    Ignore
    Line: 	 by mail.umich.edu (Cyrus v2.2.12) with LMTPA;
    Words ['by', 'mail.umich.edu', '(Cyrus', 'v2.2.12)', 'with', 'LMTPA;']
    Ignore
    Line: 	 Thu, 03 Jan 2008 16:34:40 -0500
    Words ['Thu,', '03', 'Jan', '2008', '16:34:40', '-0500']
    Ignore
    Line: Received: from icestorm.mr.itd.umich.edu (icestorm.mr.itd.umich.edu [141.211.93.149])
    Words ['Received:', 'from', 'icestorm.mr.itd.umich.edu', '(icestorm.mr.itd.umich.edu', '[141.211.93.149])']
    Ignore
    Line: 	by chaos.mail.umich.edu () with ESMTP id m03LYdY1029538;
    Words ['by', 'chaos.mail.umich.edu', '()', 'with', 'ESMTP', 'id', 'm03LYdY1029538;']
    Ignore
    Line: 	Thu, 3 Jan 2008 16:34:39 -0500
    Words ['Thu,', '3', 'Jan', '2008', '16:34:39', '-0500']
    Ignore
    Line: Received: FROM paploo.uhi.ac.uk (app1.prod.collab.uhi.ac.uk [194.35.219.184])
    Words ['Received:', 'FROM', 'paploo.uhi.ac.uk', '(app1.prod.collab.uhi.ac.uk', '[194.35.219.184])']
    Ignore
    Line: 	BY icestorm.mr.itd.umich.edu ID 477D54EA.13F34.26602 ;
    Words ['BY', 'icestorm.mr.itd.umich.edu', 'ID', '477D54EA.13F34.26602', ';']
    Ignore
    Line: 	 3 Jan 2008 16:34:36 -0500
    Words ['3', 'Jan', '2008', '16:34:36', '-0500']
    Ignore
    Line: Received: from paploo.uhi.ac.uk (localhost [127.0.0.1])
    Words ['Received:', 'from', 'paploo.uhi.ac.uk', '(localhost', '[127.0.0.1])']
    Ignore
    Line: 	by paploo.uhi.ac.uk (Postfix) with ESMTP id CC710ADC79;
    Words ['by', 'paploo.uhi.ac.uk', '(Postfix)', 'with', 'ESMTP', 'id', 'CC710ADC79;']
    Ignore
    Line: 	Thu,  3 Jan 2008 21:34:29 +0000 (GMT)
    Words ['Thu,', '3', 'Jan', '2008', '21:34:29', '+0000', '(GMT)']
    Ignore
    Line: Message-ID: <200801032133.m03LX3gG005191@nakamura.uits.iupui.edu>
    Words ['Message-ID:', '<200801032133.m03LX3gG005191@nakamura.uits.iupui.edu>']
    Ignore
    Line: Mime-Version: 1.0
    Words ['Mime-Version:', '1.0']
    Ignore
    Line: Content-Transfer-Encoding: 7bit
    Words ['Content-Transfer-Encoding:', '7bit']
    Ignore
    Line: Received: from prod.collab.uhi.ac.uk ([194.35.219.182])
    Words ['Received:', 'from', 'prod.collab.uhi.ac.uk', '([194.35.219.182])']
    Ignore
    Line:           by paploo.uhi.ac.uk (JAMES SMTP Server 2.1.3) with SMTP ID 611
    Words ['by', 'paploo.uhi.ac.uk', '(JAMES', 'SMTP', 'Server', '2.1.3)', 'with', 'SMTP', 'ID', '611']
    Ignore
    Line:           for <source@collab.sakaiproject.org>;
    Words ['for', '<source@collab.sakaiproject.org>;']
    Ignore
    Line:           Thu, 3 Jan 2008 21:34:08 +0000 (GMT)
    Words ['Thu,', '3', 'Jan', '2008', '21:34:08', '+0000', '(GMT)']
    Ignore
    Line: Received: from nakamura.uits.iupui.edu (nakamura.uits.iupui.edu [134.68.220.122])
    Words ['Received:', 'from', 'nakamura.uits.iupui.edu', '(nakamura.uits.iupui.edu', '[134.68.220.122])']
    Ignore
    Line: 	by shmi.uhi.ac.uk (Postfix) with ESMTP id 43C4242B55
    Words ['by', 'shmi.uhi.ac.uk', '(Postfix)', 'with', 'ESMTP', 'id', '43C4242B55']
    Ignore
    Line: 	for <source@collab.sakaiproject.org>; Thu,  3 Jan 2008 21:34:12 +0000 (GMT)
    Words ['for', '<source@collab.sakaiproject.org>;', 'Thu,', '3', 'Jan', '2008', '21:34:12', '+0000', '(GMT)']
    Ignore
    Line: Received: from nakamura.uits.iupui.edu (localhost [127.0.0.1])
    Words ['Received:', 'from', 'nakamura.uits.iupui.edu', '(localhost', '[127.0.0.1])']
    Ignore
    Line: 	by nakamura.uits.iupui.edu (8.12.11.20060308/8.12.11) with ESMTP id m03LX3Vb005193
    Words ['by', 'nakamura.uits.iupui.edu', '(8.12.11.20060308/8.12.11)', 'with', 'ESMTP', 'id', 'm03LX3Vb005193']
    Ignore
    Line: 	for <source@collab.sakaiproject.org>; Thu, 3 Jan 2008 16:33:03 -0500
    Words ['for', '<source@collab.sakaiproject.org>;', 'Thu,', '3', 'Jan', '2008', '16:33:03', '-0500']
    Ignore
    Line: Received: (from apache@localhost)
    Words ['Received:', '(from', 'apache@localhost)']
    Ignore
    Line: 	by nakamura.uits.iupui.edu (8.12.11.20060308/8.12.11/Submit) id m03LX3gG005191
    Words ['by', 'nakamura.uits.iupui.edu', '(8.12.11.20060308/8.12.11/Submit)', 'id', 'm03LX3gG005191']
    Ignore
    Line: 	for source@collab.sakaiproject.org; Thu, 3 Jan 2008 16:33:03 -0500
    Words ['for', 'source@collab.sakaiproject.org;', 'Thu,', '3', 'Jan', '2008', '16:33:03', '-0500']
    Ignore
    Line: Date: Thu, 3 Jan 2008 16:33:03 -0500
    Words ['Date:', 'Thu,', '3', 'Jan', '2008', '16:33:03', '-0500']
    Ignore
    Line: X-Authentication-Warning: nakamura.uits.iupui.edu: apache set sender to cwen@iupui.edu using -f
    Words ['X-Authentication-Warning:', 'nakamura.uits.iupui.edu:', 'apache', 'set', 'sender', 'to', 'cwen@iupui.edu', 'using', '-f']
    Ignore
    Line: To: source@collab.sakaiproject.org
    Words ['To:', 'source@collab.sakaiproject.org']
    Ignore
    Line: From: cwen@iupui.edu
    Words ['From:', 'cwen@iupui.edu']
    Ignore
    Line: Subject: [sakai] svn commit: r39744 - oncourse/branches/oncourse_OPC_122007
    Words ['Subject:', '[sakai]', 'svn', 'commit:', 'r39744', '-', 'oncourse/branches/oncourse_OPC_122007']
    Ignore
    Line: X-Content-Type-Outer-Envelope: text/plain; charset=UTF-8
    Words ['X-Content-Type-Outer-Envelope:', 'text/plain;', 'charset=UTF-8']
    Ignore
    Line: X-Content-Type-Message-Body: text/plain; charset=UTF-8
    Words ['X-Content-Type-Message-Body:', 'text/plain;', 'charset=UTF-8']
    Ignore
    Line: Content-Type: text/plain; charset=UTF-8
    Words ['Content-Type:', 'text/plain;', 'charset=UTF-8']
    Ignore
    Line: X-DSPAM-Result: Innocent
    Words ['X-DSPAM-Result:', 'Innocent']
    Ignore
    Line: X-DSPAM-Processed: Thu Jan  3 16:34:40 2008
    Words ['X-DSPAM-Processed:', 'Thu', 'Jan', '3', '16:34:40', '2008']
    Ignore
    Line: X-DSPAM-Confidence: 0.9846
    Words ['X-DSPAM-Confidence:', '0.9846']
    Ignore
    Line: X-DSPAM-Probability: 0.0000
    Words ['X-DSPAM-Probability:', '0.0000']
    Ignore
    Line: 
    Skip Blank
    Line: Details: http://source.sakaiproject.org/viewsvn/?view=rev&rev=39744
    Words ['Details:', 'http://source.sakaiproject.org/viewsvn/?view=rev&rev=39744']
    Ignore
    Line: 
    Skip Blank
    Line: Author: cwen@iupui.edu
    Words ['Author:', 'cwen@iupui.edu']
    Ignore
    Line: Date: 2008-01-03 16:33:02 -0500 (Thu, 03 Jan 2008)
    Words ['Date:', '2008-01-03', '16:33:02', '-0500', '(Thu,', '03', 'Jan', '2008)']
    Ignore
    Line: New Revision: 39744
    Words ['New', 'Revision:', '39744']
    Ignore
    Line: 
    Skip Blank
    Line: Modified:
    Words ['Modified:']
    Ignore
    Line: oncourse/branches/oncourse_OPC_122007/
    Words ['oncourse/branches/oncourse_OPC_122007/']
    Ignore
    Line: oncourse/branches/oncourse_OPC_122007/.externals
    Words ['oncourse/branches/oncourse_OPC_122007/.externals']
    Ignore
    Line: Log:
    Words ['Log:']
    Ignore
    Line: update external for GB.
    Words ['update', 'external', 'for', 'GB.']
    Ignore
    Line: 
    Skip Blank
    Line: ----------------------
    Words ['----------------------']
    Ignore
    Line: This automatic notification message was sent by Sakai Collab (https://collab.sakaiproject.org/portal) from the Source site.
    Words ['This', 'automatic', 'notification', 'message', 'was', 'sent', 'by', 'Sakai', 'Collab', '(https://collab.sakaiproject.org/portal)', 'from', 'the', 'Source', 'site.']
    Ignore
    Line: You can modify how you receive notifications at My Workspace > Preferences.
    Words ['You', 'can', 'modify', 'how', 'you', 'receive', 'notifications', 'at', 'My', 'Workspace', '>', 'Preferences.']
    Ignore
    Line: 
    Skip Blank
    Line: 
    Skip Blank
    Line: 
    Skip Blank
    Line: From cwen@iupui.edu Thu Jan  3 16:29:07 2008
    Words ['From', 'cwen@iupui.edu', 'Thu', 'Jan', '3', '16:29:07', '2008']
    Thu
    Line: Return-Path: <postmaster@collab.sakaiproject.org>
    Words ['Return-Path:', '<postmaster@collab.sakaiproject.org>']
    Ignore
    Line: Received: from murder (mail.umich.edu [141.211.14.46])
    Words ['Received:', 'from', 'murder', '(mail.umich.edu', '[141.211.14.46])']
    Ignore
    Line: 	 by frankenstein.mail.umich.edu (Cyrus v2.3.8) with LMTPA;
    Words ['by', 'frankenstein.mail.umich.edu', '(Cyrus', 'v2.3.8)', 'with', 'LMTPA;']
    Ignore
    Line: 	 Thu, 03 Jan 2008 16:29:07 -0500
    Words ['Thu,', '03', 'Jan', '2008', '16:29:07', '-0500']
    Ignore
    Line: X-Sieve: CMU Sieve 2.3
    Words ['X-Sieve:', 'CMU', 'Sieve', '2.3']
    Ignore
    Line: Received: from murder ([unix socket])
    Words ['Received:', 'from', 'murder', '([unix', 'socket])']
    Ignore
    Line: 	 by mail.umich.edu (Cyrus v2.2.12) with LMTPA;
    Words ['by', 'mail.umich.edu', '(Cyrus', 'v2.2.12)', 'with', 'LMTPA;']
    Ignore
    Line: 	 Thu, 03 Jan 2008 16:29:07 -0500
    Words ['Thu,', '03', 'Jan', '2008', '16:29:07', '-0500']
    Ignore
    Line: Received: from galaxyquest.mr.itd.umich.edu (galaxyquest.mr.itd.umich.edu [141.211.93.145])
    Words ['Received:', 'from', 'galaxyquest.mr.itd.umich.edu', '(galaxyquest.mr.itd.umich.edu', '[141.211.93.145])']
    Ignore
    Line: 	by fan.mail.umich.edu () with ESMTP id m03LT6uw027749;
    Words ['by', 'fan.mail.umich.edu', '()', 'with', 'ESMTP', 'id', 'm03LT6uw027749;']
    Ignore
    Line: 	Thu, 3 Jan 2008 16:29:06 -0500
    Words ['Thu,', '3', 'Jan', '2008', '16:29:06', '-0500']
    Ignore
    Line: Received: FROM paploo.uhi.ac.uk (app1.prod.collab.uhi.ac.uk [194.35.219.184])
    Words ['Received:', 'FROM', 'paploo.uhi.ac.uk', '(app1.prod.collab.uhi.ac.uk', '[194.35.219.184])']
    Ignore
    Line: 	BY galaxyquest.mr.itd.umich.edu ID 477D5397.E161D.20326 ;
    Words ['BY', 'galaxyquest.mr.itd.umich.edu', 'ID', '477D5397.E161D.20326', ';']
    Ignore
    Line: 	 3 Jan 2008 16:28:58 -0500
    Words ['3', 'Jan', '2008', '16:28:58', '-0500']
    Ignore
    Line: Received: from paploo.uhi.ac.uk (localhost [127.0.0.1])
    Words ['Received:', 'from', 'paploo.uhi.ac.uk', '(localhost', '[127.0.0.1])']
    Ignore
    Line: 	by paploo.uhi.ac.uk (Postfix) with ESMTP id DEC65ADC79;
    Words ['by', 'paploo.uhi.ac.uk', '(Postfix)', 'with', 'ESMTP', 'id', 'DEC65ADC79;']
    Ignore
    Line: 	Thu,  3 Jan 2008 21:28:52 +0000 (GMT)
    Words ['Thu,', '3', 'Jan', '2008', '21:28:52', '+0000', '(GMT)']
    Ignore
    Line: Message-ID: <200801032127.m03LRUqH005177@nakamura.uits.iupui.edu>
    Words ['Message-ID:', '<200801032127.m03LRUqH005177@nakamura.uits.iupui.edu>']
    Ignore
    Line: Mime-Version: 1.0
    Words ['Mime-Version:', '1.0']
    Ignore
    Line: Content-Transfer-Encoding: 7bit
    Words ['Content-Transfer-Encoding:', '7bit']
    Ignore
    Line: Received: from prod.collab.uhi.ac.uk ([194.35.219.182])
    Words ['Received:', 'from', 'prod.collab.uhi.ac.uk', '([194.35.219.182])']
    Ignore
    Line:           by paploo.uhi.ac.uk (JAMES SMTP Server 2.1.3) with SMTP ID 917
    Words ['by', 'paploo.uhi.ac.uk', '(JAMES', 'SMTP', 'Server', '2.1.3)', 'with', 'SMTP', 'ID', '917']
    Ignore
    Line:           for <source@collab.sakaiproject.org>;
    Words ['for', '<source@collab.sakaiproject.org>;']
    Ignore
    Line:           Thu, 3 Jan 2008 21:28:39 +0000 (GMT)
    Words ['Thu,', '3', 'Jan', '2008', '21:28:39', '+0000', '(GMT)']
    Ignore
    Line: Received: from nakamura.uits.iupui.edu (nakamura.uits.iupui.edu [134.68.220.122])
    Words ['Received:', 'from', 'nakamura.uits.iupui.edu', '(nakamura.uits.iupui.edu', '[134.68.220.122])']
    Ignore
    Line: 	by shmi.uhi.ac.uk (Postfix) with ESMTP id 1FBB042B30
    Words ['by', 'shmi.uhi.ac.uk', '(Postfix)', 'with', 'ESMTP', 'id', '1FBB042B30']
    Ignore
    Line: 	for <source@collab.sakaiproject.org>; Thu,  3 Jan 2008 21:28:38 +0000 (GMT)
    Words ['for', '<source@collab.sakaiproject.org>;', 'Thu,', '3', 'Jan', '2008', '21:28:38', '+0000', '(GMT)']
    Ignore
    Line: Received: from nakamura.uits.iupui.edu (localhost [127.0.0.1])
    Words ['Received:', 'from', 'nakamura.uits.iupui.edu', '(localhost', '[127.0.0.1])']
    Ignore
    Line: 	by nakamura.uits.iupui.edu (8.12.11.20060308/8.12.11) with ESMTP id m03LRUk4005179
    Words ['by', 'nakamura.uits.iupui.edu', '(8.12.11.20060308/8.12.11)', 'with', 'ESMTP', 'id', 'm03LRUk4005179']
    Ignore
    Line: 	for <source@collab.sakaiproject.org>; Thu, 3 Jan 2008 16:27:30 -0500
    Words ['for', '<source@collab.sakaiproject.org>;', 'Thu,', '3', 'Jan', '2008', '16:27:30', '-0500']
    Ignore
    Line: Received: (from apache@localhost)
    Words ['Received:', '(from', 'apache@localhost)']
    Ignore
    Line: 	by nakamura.uits.iupui.edu (8.12.11.20060308/8.12.11/Submit) id m03LRUqH005177
    Words ['by', 'nakamura.uits.iupui.edu', '(8.12.11.20060308/8.12.11/Submit)', 'id', 'm03LRUqH005177']
    Ignore
    Line: 	for source@collab.sakaiproject.org; Thu, 3 Jan 2008 16:27:30 -0500
    Words ['for', 'source@collab.sakaiproject.org;', 'Thu,', '3', 'Jan', '2008', '16:27:30', '-0500']
    Ignore
    Line: Date: Thu, 3 Jan 2008 16:27:30 -0500
    Words ['Date:', 'Thu,', '3', 'Jan', '2008', '16:27:30', '-0500']
    Ignore
    Line: X-Authentication-Warning: nakamura.uits.iupui.edu: apache set sender to cwen@iupui.edu using -f
    Words ['X-Authentication-Warning:', 'nakamura.uits.iupui.edu:', 'apache', 'set', 'sender', 'to', 'cwen@iupui.edu', 'using', '-f']
    Ignore
    Line: To: source@collab.sakaiproject.org
    Words ['To:', 'source@collab.sakaiproject.org']
    Ignore
    Line: From: cwen@iupui.edu
    Words ['From:', 'cwen@iupui.edu']
    Ignore
    Line: Subject: [sakai] svn commit: r39743 - gradebook/branches/oncourse_2-4-2/app/ui/src/java/org/sakaiproject/tool/gradebook/ui
    Words ['Subject:', '[sakai]', 'svn', 'commit:', 'r39743', '-', 'gradebook/branches/oncourse_2-4-2/app/ui/src/java/org/sakaiproject/tool/gradebook/ui']
    Ignore
    Line: X-Content-Type-Outer-Envelope: text/plain; charset=UTF-8
    Words ['X-Content-Type-Outer-Envelope:', 'text/plain;', 'charset=UTF-8']
    Ignore
    Line: X-Content-Type-Message-Body: text/plain; charset=UTF-8
    Words ['X-Content-Type-Message-Body:', 'text/plain;', 'charset=UTF-8']
    Ignore
    Line: Content-Type: text/plain; charset=UTF-8
    Words ['Content-Type:', 'text/plain;', 'charset=UTF-8']
    Ignore
    Line: X-DSPAM-Result: Innocent
    Words ['X-DSPAM-Result:', 'Innocent']
    Ignore
    Line: X-DSPAM-Processed: Thu Jan  3 16:29:07 2008
    Words ['X-DSPAM-Processed:', 'Thu', 'Jan', '3', '16:29:07', '2008']
    Ignore
    Line: X-DSPAM-Confidence: 0.8509
    Words ['X-DSPAM-Confidence:', '0.8509']
    Ignore
    Line: X-DSPAM-Probability: 0.0000
    Words ['X-DSPAM-Probability:', '0.0000']
    Ignore
    Line: 
    Skip Blank
    Line: Details: http://source.sakaiproject.org/viewsvn/?view=rev&rev=39743
    Words ['Details:', 'http://source.sakaiproject.org/viewsvn/?view=rev&rev=39743']
    Ignore
    Line: 
    Skip Blank
    Line: Author: cwen@iupui.edu
    Words ['Author:', 'cwen@iupui.edu']
    Ignore
    Line: Date: 2008-01-03 16:27:29 -0500 (Thu, 03 Jan 2008)
    Words ['Date:', '2008-01-03', '16:27:29', '-0500', '(Thu,', '03', 'Jan', '2008)']
    Ignore
    Line: New Revision: 39743
    Words ['New', 'Revision:', '39743']
    Ignore
    Line: 
    Skip Blank
    Line: Modified:
    Words ['Modified:']
    Ignore
    Line: gradebook/branches/oncourse_2-4-2/app/ui/src/java/org/sakaiproject/tool/gradebook/ui/RosterBean.java
    Words ['gradebook/branches/oncourse_2-4-2/app/ui/src/java/org/sakaiproject/tool/gradebook/ui/RosterBean.java']
    Ignore
    Line: Log:
    Words ['Log:']
    Ignore
    Line: svn merge -c 39403 https://source.sakaiproject.org/svn/gradebook/trunk
    Words ['svn', 'merge', '-c', '39403', 'https://source.sakaiproject.org/svn/gradebook/trunk']
    Ignore
    Line: U    app/ui/src/java/org/sakaiproject/tool/gradebook/ui/RosterBean.java
    Words ['U', 'app/ui/src/java/org/sakaiproject/tool/gradebook/ui/RosterBean.java']
    Ignore
    Line: 
    Skip Blank
    Line: svn log -r 39403 https://source.sakaiproject.org/svn/gradebook/trunk
    Words ['svn', 'log', '-r', '39403', 'https://source.sakaiproject.org/svn/gradebook/trunk']
    Ignore
    Line: ------------------------------------------------------------------------
    Words ['------------------------------------------------------------------------']
    Ignore
    Line: r39403 | wagnermr@iupui.edu | 2007-12-17 17:11:08 -0500 (Mon, 17 Dec 2007) | 3 lines
    Words ['r39403', '|', 'wagnermr@iupui.edu', '|', '2007-12-17', '17:11:08', '-0500', '(Mon,', '17', 'Dec', '2007)', '|', '3', 'lines']
    Ignore
    Line: 
    Skip Blank
    Line: SAK-12504
    Words ['SAK-12504']
    Ignore
    Line: http://jira.sakaiproject.org/jira/browse/SAK-12504
    Words ['http://jira.sakaiproject.org/jira/browse/SAK-12504']
    Ignore
    Line: Viewing "All Grades" page as a TA with grader permissions causes stack trace
    Words ['Viewing', '"All', 'Grades"', 'page', 'as', 'a', 'TA', 'with', 'grader', 'permissions', 'causes', 'stack', 'trace']
    Ignore
    Line: ------------------------------------------------------------------------
    Words ['------------------------------------------------------------------------']
    Ignore
    Line: 
    Skip Blank
    Line: 
    Skip Blank
    Line: ----------------------
    Words ['----------------------']
    Ignore
    Line: This automatic notification message was sent by Sakai Collab (https://collab.sakaiproject.org/portal) from the Source site.
    Words ['This', 'automatic', 'notification', 'message', 'was', 'sent', 'by', 'Sakai', 'Collab', '(https://collab.sakaiproject.org/portal)', 'from', 'the', 'Source', 'site.']
    Ignore
    Line: You can modify how you receive notifications at My Workspace > Preferences.
    Words ['You', 'can', 'modify', 'how', 'you', 'receive', 'notifications', 'at', 'My', 'Workspace', '>', 'Preferences.']
    Ignore
    Line: 
    Skip Blank
    Line: 
    Skip Blank
    Line: 
    Skip Blank
    Line: From cwen@iupui.edu Thu Jan  3 16:23:48 2008
    Words ['From', 'cwen@iupui.edu', 'Thu', 'Jan', '3', '16:23:48', '2008']
    Thu
    Line: Return-Path: <postmaster@collab.sakaiproject.org>
    Words ['Return-Path:', '<postmaster@collab.sakaiproject.org>']
    Ignore
    Line: Received: from murder (mail.umich.edu [141.211.14.91])
    Words ['Received:', 'from', 'murder', '(mail.umich.edu', '[141.211.14.91])']
    Ignore
    Line: 	 by frankenstein.mail.umich.edu (Cyrus v2.3.8) with LMTPA;
    Words ['by', 'frankenstein.mail.umich.edu', '(Cyrus', 'v2.3.8)', 'with', 'LMTPA;']
    Ignore
    Line: 	 Thu, 03 Jan 2008 16:23:48 -0500
    Words ['Thu,', '03', 'Jan', '2008', '16:23:48', '-0500']
    Ignore
    Line: X-Sieve: CMU Sieve 2.3
    Words ['X-Sieve:', 'CMU', 'Sieve', '2.3']
    Ignore
    Line: Received: from murder ([unix socket])
    Words ['Received:', 'from', 'murder', '([unix', 'socket])']
    Ignore
    Line: 	 by mail.umich.edu (Cyrus v2.2.12) with LMTPA;
    Words ['by', 'mail.umich.edu', '(Cyrus', 'v2.2.12)', 'with', 'LMTPA;']
    Ignore
    Line: 	 Thu, 03 Jan 2008 16:23:48 -0500
    Words ['Thu,', '03', 'Jan', '2008', '16:23:48', '-0500']
    Ignore
    Line: Received: from salemslot.mr.itd.umich.edu (salemslot.mr.itd.umich.edu [141.211.14.58])
    Words ['Received:', 'from', 'salemslot.mr.itd.umich.edu', '(salemslot.mr.itd.umich.edu', '[141.211.14.58])']
    Ignore
    Line: 	by jacknife.mail.umich.edu () with ESMTP id m03LNlf0002115;
    Words ['by', 'jacknife.mail.umich.edu', '()', 'with', 'ESMTP', 'id', 'm03LNlf0002115;']
    Ignore
    Line: 	Thu, 3 Jan 2008 16:23:47 -0500
    Words ['Thu,', '3', 'Jan', '2008', '16:23:47', '-0500']
    Ignore
    Line: Received: FROM paploo.uhi.ac.uk (app1.prod.collab.uhi.ac.uk [194.35.219.184])
    Words ['Received:', 'FROM', 'paploo.uhi.ac.uk', '(app1.prod.collab.uhi.ac.uk', '[194.35.219.184])']
    Ignore
    Line: 	BY salemslot.mr.itd.umich.edu ID 477D525E.1448.30389 ;
    Words ['BY', 'salemslot.mr.itd.umich.edu', 'ID', '477D525E.1448.30389', ';']
    Ignore
    Line: 	 3 Jan 2008 16:23:44 -0500
    Words ['3', 'Jan', '2008', '16:23:44', '-0500']
    Ignore
    Line: Received: from paploo.uhi.ac.uk (localhost [127.0.0.1])
    Words ['Received:', 'from', 'paploo.uhi.ac.uk', '(localhost', '[127.0.0.1])']
    Ignore
    Line: 	by paploo.uhi.ac.uk (Postfix) with ESMTP id 9D005B9D06;
    Words ['by', 'paploo.uhi.ac.uk', '(Postfix)', 'with', 'ESMTP', 'id', '9D005B9D06;']
    Ignore
    Line: 	Thu,  3 Jan 2008 21:23:38 +0000 (GMT)
    Words ['Thu,', '3', 'Jan', '2008', '21:23:38', '+0000', '(GMT)']
    Ignore
    Line: Message-ID: <200801032122.m03LMFo4005148@nakamura.uits.iupui.edu>
    Words ['Message-ID:', '<200801032122.m03LMFo4005148@nakamura.uits.iupui.edu>']
    Ignore
    Line: Mime-Version: 1.0
    Words ['Mime-Version:', '1.0']
    Ignore
    Line: Content-Transfer-Encoding: 7bit
    Words ['Content-Transfer-Encoding:', '7bit']
    Ignore
    Line: Received: from prod.collab.uhi.ac.uk ([194.35.219.182])
    Words ['Received:', 'from', 'prod.collab.uhi.ac.uk', '([194.35.219.182])']
    Ignore
    Line:           by paploo.uhi.ac.uk (JAMES SMTP Server 2.1.3) with SMTP ID 6
    Words ['by', 'paploo.uhi.ac.uk', '(JAMES', 'SMTP', 'Server', '2.1.3)', 'with', 'SMTP', 'ID', '6']
    Ignore
    Line:           for <source@collab.sakaiproject.org>;
    Words ['for', '<source@collab.sakaiproject.org>;']
    Ignore
    Line:           Thu, 3 Jan 2008 21:23:24 +0000 (GMT)
    Words ['Thu,', '3', 'Jan', '2008', '21:23:24', '+0000', '(GMT)']
    Ignore
    Line: Received: from nakamura.uits.iupui.edu (nakamura.uits.iupui.edu [134.68.220.122])
    Words ['Received:', 'from', 'nakamura.uits.iupui.edu', '(nakamura.uits.iupui.edu', '[134.68.220.122])']
    Ignore
    Line: 	by shmi.uhi.ac.uk (Postfix) with ESMTP id 3535542B69
    Words ['by', 'shmi.uhi.ac.uk', '(Postfix)', 'with', 'ESMTP', 'id', '3535542B69']
    Ignore
    Line: 	for <source@collab.sakaiproject.org>; Thu,  3 Jan 2008 21:23:24 +0000 (GMT)
    Words ['for', '<source@collab.sakaiproject.org>;', 'Thu,', '3', 'Jan', '2008', '21:23:24', '+0000', '(GMT)']
    Ignore
    Line: Received: from nakamura.uits.iupui.edu (localhost [127.0.0.1])
    Words ['Received:', 'from', 'nakamura.uits.iupui.edu', '(localhost', '[127.0.0.1])']
    Ignore
    Line: 	by nakamura.uits.iupui.edu (8.12.11.20060308/8.12.11) with ESMTP id m03LMFtT005150
    Words ['by', 'nakamura.uits.iupui.edu', '(8.12.11.20060308/8.12.11)', 'with', 'ESMTP', 'id', 'm03LMFtT005150']
    Ignore
    Line: 	for <source@collab.sakaiproject.org>; Thu, 3 Jan 2008 16:22:15 -0500
    Words ['for', '<source@collab.sakaiproject.org>;', 'Thu,', '3', 'Jan', '2008', '16:22:15', '-0500']
    Ignore
    Line: Received: (from apache@localhost)
    Words ['Received:', '(from', 'apache@localhost)']
    Ignore
    Line: 	by nakamura.uits.iupui.edu (8.12.11.20060308/8.12.11/Submit) id m03LMFo4005148
    Words ['by', 'nakamura.uits.iupui.edu', '(8.12.11.20060308/8.12.11/Submit)', 'id', 'm03LMFo4005148']
    Ignore
    Line: 	for source@collab.sakaiproject.org; Thu, 3 Jan 2008 16:22:15 -0500
    Words ['for', 'source@collab.sakaiproject.org;', 'Thu,', '3', 'Jan', '2008', '16:22:15', '-0500']
    Ignore
    Line: Date: Thu, 3 Jan 2008 16:22:15 -0500
    Words ['Date:', 'Thu,', '3', 'Jan', '2008', '16:22:15', '-0500']
    Ignore
    Line: X-Authentication-Warning: nakamura.uits.iupui.edu: apache set sender to cwen@iupui.edu using -f
    Words ['X-Authentication-Warning:', 'nakamura.uits.iupui.edu:', 'apache', 'set', 'sender', 'to', 'cwen@iupui.edu', 'using', '-f']
    Ignore
    Line: To: source@collab.sakaiproject.org
    Words ['To:', 'source@collab.sakaiproject.org']
    Ignore
    Line: From: cwen@iupui.edu
    Words ['From:', 'cwen@iupui.edu']
    Ignore
    Line: Subject: [sakai] svn commit: r39742 - gradebook/branches/oncourse_2-4-2/app/ui/src/java/org/sakaiproject/tool/gradebook/ui
    Words ['Subject:', '[sakai]', 'svn', 'commit:', 'r39742', '-', 'gradebook/branches/oncourse_2-4-2/app/ui/src/java/org/sakaiproject/tool/gradebook/ui']
    Ignore
    Line: X-Content-Type-Outer-Envelope: text/plain; charset=UTF-8
    Words ['X-Content-Type-Outer-Envelope:', 'text/plain;', 'charset=UTF-8']
    Ignore
    Line: X-Content-Type-Message-Body: text/plain; charset=UTF-8
    Words ['X-Content-Type-Message-Body:', 'text/plain;', 'charset=UTF-8']
    Ignore
    Line: Content-Type: text/plain; charset=UTF-8
    Words ['Content-Type:', 'text/plain;', 'charset=UTF-8']
    Ignore
    Line: X-DSPAM-Result: Innocent
    Words ['X-DSPAM-Result:', 'Innocent']
    Ignore
    Line: X-DSPAM-Processed: Thu Jan  3 16:23:48 2008
    Words ['X-DSPAM-Processed:', 'Thu', 'Jan', '3', '16:23:48', '2008']
    Ignore
    Line: X-DSPAM-Confidence: 0.9907
    Words ['X-DSPAM-Confidence:', '0.9907']
    Ignore
    Line: X-DSPAM-Probability: 0.0000
    Words ['X-DSPAM-Probability:', '0.0000']
    Ignore
    Line: 
    Skip Blank
    Line: Details: http://source.sakaiproject.org/viewsvn/?view=rev&rev=39742
    Words ['Details:', 'http://source.sakaiproject.org/viewsvn/?view=rev&rev=39742']
    Ignore
    Line: 
    Skip Blank
    Line: Author: cwen@iupui.edu
    Words ['Author:', 'cwen@iupui.edu']
    Ignore
    Line: Date: 2008-01-03 16:22:14 -0500 (Thu, 03 Jan 2008)
    Words ['Date:', '2008-01-03', '16:22:14', '-0500', '(Thu,', '03', 'Jan', '2008)']
    Ignore
    Line: New Revision: 39742
    Words ['New', 'Revision:', '39742']
    Ignore
    Line: 
    Skip Blank
    Line: Modified:
    Words ['Modified:']
    Ignore
    Line: gradebook/branches/oncourse_2-4-2/app/ui/src/java/org/sakaiproject/tool/gradebook/ui/RosterBean.java
    Words ['gradebook/branches/oncourse_2-4-2/app/ui/src/java/org/sakaiproject/tool/gradebook/ui/RosterBean.java']
    Ignore
    Line: Log:
    Words ['Log:']
    Ignore
    Line: svn merge -c 35014 https://source.sakaiproject.org/svn/gradebook/trunk
    Words ['svn', 'merge', '-c', '35014', 'https://source.sakaiproject.org/svn/gradebook/trunk']
    Ignore
    Line: U    app/ui/src/java/org/sakaiproject/tool/gradebook/ui/RosterBean.java
    Words ['U', 'app/ui/src/java/org/sakaiproject/tool/gradebook/ui/RosterBean.java']
    Ignore
    Line: 
    Skip Blank
    Line: svn log -r 35014 https://source.sakaiproject.org/svn/gradebook/trunk
    Words ['svn', 'log', '-r', '35014', 'https://source.sakaiproject.org/svn/gradebook/trunk']
    Ignore
    Line: ------------------------------------------------------------------------
    Words ['------------------------------------------------------------------------']
    Ignore
    Line: r35014 | wagnermr@iupui.edu | 2007-09-12 16:17:59 -0400 (Wed, 12 Sep 2007) | 3 lines
    Words ['r35014', '|', 'wagnermr@iupui.edu', '|', '2007-09-12', '16:17:59', '-0400', '(Wed,', '12', 'Sep', '2007)', '|', '3', 'lines']
    Ignore
    Line: 
    Skip Blank
    Line: SAK-11458
    Words ['SAK-11458']
    Ignore
    Line: http://bugs.sakaiproject.org/jira/browse/SAK-11458
    Words ['http://bugs.sakaiproject.org/jira/browse/SAK-11458']
    Ignore
    Line: Course grade does not appear on "All Grades" page if no categories in gb
    Words ['Course', 'grade', 'does', 'not', 'appear', 'on', '"All', 'Grades"', 'page', 'if', 'no', 'categories', 'in', 'gb']
    Ignore
    Line: ------------------------------------------------------------------------
    Words ['------------------------------------------------------------------------']
    Ignore
    Line: 
    Skip Blank
    Line: 
    Skip Blank
    Line: ----------------------
    Words ['----------------------']
    Ignore
    Line: This automatic notification message was sent by Sakai Collab (https://collab.sakaiproject.org/portal) from the Source site.
    Words ['This', 'automatic', 'notification', 'message', 'was', 'sent', 'by', 'Sakai', 'Collab', '(https://collab.sakaiproject.org/portal)', 'from', 'the', 'Source', 'site.']
    Ignore
    Line: You can modify how you receive notifications at My Workspace > Preferences.
    Words ['You', 'can', 'modify', 'how', 'you', 'receive', 'notifications', 'at', 'My', 'Workspace', '>', 'Preferences.']
    Ignore
    Line: 
    Skip Blank


  **Guardian Pattern**
  
    if len(wds) < 1:
    
        continue
        
     
     A stronger guardian:


```python
han = open('mbox-short.txt')
for line in han:
    line = line.rstrip()
    wds = line.split()
    #Stronger Guardian Pattern
    if len(wds) < 3:
        continue
    if wds[0] != 'From':
        continue
    print(wds[2])
```

    Sat
    Fri
    Fri
    Fri
    Fri
    Fri
    Fri
    Fri
    Fri
    Fri
    Fri
    Fri
    Fri
    Fri
    Fri
    Fri
    Fri
    Fri
    Fri
    Fri
    Fri
    Thu
    Thu
    Thu
    Thu
    Thu
    Thu



# 11. Optimazation:Guardian in a compound statement

# 12. Optimazation:Guardian in a compound statement
han = open('mbox-short.txt')
for line in han:
    line = line.rstrip()
    wds = line.split()
    #Guardian Pattern
    if len(wds) < 3 or wds[0] != 'From':
        continue
    print(wds[2])
```

    Sat
    Fri
    Fri
    Fri
    Fri
    Fri
    Fri
    Fri
    Fri
    Fri
    Fri
    Fri
    Fri
    Fri
    Fri
    Fri
    Fri
    Fri
    Fri
    Fri
    Fri
    Thu
    Thu
    Thu
    Thu
    Thu
    Thu



# 13. Exchange the guardian order:

# 14. Exchange the guardian order:
han = open('mbox-short.txt')
for line in han:
    line = line.rstrip()
    wds = line.split()
    #Guardian Pattern
    if wds[0] != 'From' or len(wds) < 3:
        continue
    print(wds[2])

```

    Sat



    ---------------------------------------------------------------------------

    IndexError                                Traceback (most recent call last)

    <ipython-input-122-481ccb7d12da> in <module>
          5     wds = line.split()
          6     #Guardian Pattern
    ----> 7     if wds[0] != 'From' or len(wds) < 3:
          8         continue
          9     print(wds[2])


    IndexError: list index out of range


## 14.1. Chap 9 Dictionaries

### 14.1.1. What is a Collection?

A collection is nice because we can put more than one value in it 
and carry them all around in one convenient package.



We have a bunch of values in a single **variable**

We do this by having more than one place “in" the variable

We have ways of finding the different places in the variable

### 14.1.2. Dictionaries

Dictionaries are Python's most powerful data collection

Dictionaries allow us to do fast database-like operations in Python

Dictionaries have **different names** in different languages：

    Associative Arrays - Perl/ PHP

    Properties or Map or HashMap - Java

    Property Bag - C#/.Net

Lists **index** their entries

based on the position in thelist

**Dictionaries** are like bags—— `no order`

So we **index** the things weput in the dictionary with a **"lookup tag"**


# 2. I like tag, and it makes makesy life easier:

# 3. I like tag, and it makes makesy life easier:
purse = dict()
purse['money'] = 12
purse['candy'] = 3
purse['tissues'] = 75
print(purse)
```

    {'money': 12, 'candy': 3, 'tissues': 75}



# 4. label and tags, without oredr

# 5. label and tags, without oredr
purse.sort()
```


    ---------------------------------------------------------------------------

    AttributeError                            Traceback (most recent call last)

    <ipython-input-2-68f23e7946ed> in <module>
          1 # label and tags, without oredr
    ----> 2 purse.sort()
    

    AttributeError: 'dict' object has no attribute 'sort'



# 6. we can modify each item value:

# 7. we can modify each item value:
purse['candy'] = purse['candy'] + 2
print(purse) #candy :5
```

    {'money': 12, 'candy': 5, 'tissues': 75}


### 7.1. Comparing Lists and Dictionaries

Dictionaries are like lists `except` that they use `keys` instead of `numbers` to look up values


# 2. Listson

# 3. Lists
lst = list()
lst.append(21)
lst.append(183)
print(lst)
```

    [21, 183]



```python
lst[0]
```




    21




```python
lst[0]=223
print(lst)
```

    [223, 183]



```python
lst.sort()
lst
```




    [183, 223]




# 4. Dictionaries

# 5. Dictionaries
dct = dict() # this is the very beginning of the dictionary: create the dict function
dct['age'] = 21
dct['course'] = 182
print(dct)
```

    {'age': 21, 'course': 182}



```python
dct['age'] = 23
print(dct)
```

    {'age': 23, 'course': 182}



```python
dct.sort() # can not sort:
```


    ---------------------------------------------------------------------------

    AttributeError                            Traceback (most recent call last)

    <ipython-input-19-7924cb32a335> in <module>
    ----> 1 dct.sort() # can not sort:
    

    AttributeError: 'dict' object has no attribute 'sort'


### 5.1. Dictionary Literals (Constants)

Dictionary literals use `curly braces` and have `a list of key` : **value pairs**

You can make an `empty dictionary` using empty curly braces:

dictionary = {'label' : value........}


# 2. dcts:{}

# 3. dcts:{}
jjj = {'chuck' : 1,'fred' : 42,'jan':100}
print(jjj)
```

    {'chuck': 1, 'fred': 42, 'jan': 100}



```python
eee = {             } 
print(eee)
```

    {}


### 3.1. Merge dicts:


```python
profile = {"name": "xiaoming", "age": 27}
ext_info = {"gender": "male"}

full_profile = {**profile,**ext_info}
full_profile
```




    {'name': 'xiaoming', 'age': 27, 'gender': 'male'}



### 3.2. Handle Missing Dictionary Keys

What if the values of the dictionary are a more complex type, like a list? 

For example, say that instead of only counting votes, I also want to know who voted for each type of bread. 

Here, I do this by associating a list of names with each key:


```python
votes = {
    "baguette": ["Bob", "Alice"], 
    "ciabatta": ["Coco", "Deb"],
}

key = 'brioche'
who = 'Elmer'

if key in votes:
    names = votes[key]
else:
    votes[key] = names =[]
names.append(who)
print(votes)
```

    {'baguette': ['Bob', 'Alice'], 'ciabatta': ['Coco', 'Deb'], 'brioche': ['Elmer']}


### 3.3. Prefer default dict Over setdefault to Handle Missing Items in Internal State


Although using the get method is a better approach than using in expressions and KeyError exceptions, for some use cases setdefault appears to be the shortest option.

For example, say that I want to keep track of the cities I’ve visited in countries around the world. 

Here, I do this by using a dictionary that maps country names to a set instance containing corresponding city names:


```python
visits = {
    'Mexico': {'Tulum', 'Puerto Vallarta'}, 
    'Japan': {'Hakone'},
}


visits.setdefault('France',set()).add('Arles') #short

if (japan := visits.get('Japan')) is None: #long
    visits['japan'] = japan = set()
japan.add('Kyoto')

print(visits)
```

    {'Mexico': {'Puerto Vallarta', 'Tulum'}, 'Japan': {'Hakone', 'Kyoto'}, 'France': {'Arles'}}


What about the situation when you do control creation of the dictionary being accessed?

This is **generally the case when you’re using a dictionary instance to keep track of the internal state of a class**, for example.

Here, I wrap the example above in a class with helper methods to access the dynamic inner state stored in a dictionary:


```python
class Visits:
    def __init__(self):
        self.data = {}
        
    def add(self,country,city):
        city_set = self.data.setdefault(country,set())
        city_set.add(city)
```

This new class **hides the complexity of calling setdefault correctly**,

and it provides a **nicer interface for the programmer**:


```python
visits = Visits()
visits.add('Russia','Moscow')
visits.add('Tanzania','Zanzibar')

# 2. print(visits)
print(visits.data)
```

    {'Russia': {'Moscow'}, 'Tanzania': {'Zanzibar'}}



# 3. Construct Key-Dependent Default Values with __missing__ p73

# 4. Construct Key-Dependent Default Values with __missing__ p73

# 5. class Pictures(dict):

# 6. def __missing__(self, key):

# 7. value = open_picture(key)

# 8. self[key] = value

# 9. return value

# 10. pictures = Pictures()

# 11. handle = pictures[path]

# 12. handle.seek(0)

# 13. image_data = handle.read()
```

### 13.1. Counting

One common use of dictionaries is
counting how often we "see" something


```python
ccc = dict()
ccc['csev'] = 1
ccc['cwen'] = 1
print(ccc)
```

    {'csev': 1, 'cwen': 1}



```python
ccc['cwen'] =  ccc['cwen'] + 1 
print(ccc)
```

    {'csev': 1, 'cwen': 4}


#### 13.1.1. Dictionary Tracebacks

It is an error to reference a key which is not in the dictionary

We can use the in operator to see i fa key is in the dictionary


```python
ccc = dict()
print(ccc['csev'])
```


    ---------------------------------------------------------------------------

    KeyError                                  Traceback (most recent call last)

    <ipython-input-26-21f4feaeacbb> in <module>
          1 ccc = dict()
    ----> 2 print(ccc['csev'])
    

    KeyError: 'csev'



```python
'csev' in ccc
```




    False



#### 13.1.2. Follow me

When we see a new name

When we encounter a new name, we need to add a new entry in the dictionary 

and if this the second or later time we have seen the name,

we simply add one to the count in the dictionary under that name


```python
counts = dict()
names = ['csev','cwen','csev','zqian','cwen']
for name in names:
    if name not in counts:
        counts[name] = 1
    else:
        counts[name] = counts[name] + 1
print(counts)
```

    {'csev': 2, 'cwen': 2, 'zqian': 1}


The name list is a simple list ,think about if you got millions of names

#### 13.1.3. The get method for dictionaries

The pattern of checking to see if a key is already in a dictionary 

and assuming a default value if the keyis not there is so common that there is 

a method called get() that doesthis for us

Default value if key does not exist(and no Traceback)


```python
if name in counts:
    x = counts[name]
else:
    x = 0
x = counts.get(name,0)
print(x)
```

#### 13.1.4. Simplified counting with get()

We can use get() and provide a default value of zero when the key

is not yet in the dictionary - and then just add one


```python
counts = dict()
names = ['csev','cwen','csev','zqian','cwen']
for name in names:
    counts[name] = counts.get(name,0) + 1
print(counts)
```

#### 13.1.5. Counting Words in Text

##### 13.1.5.1. Counting pattern

The general pattern to count the words in a line of text is 

to `split` the line into words, then `loop through` the words 

and use a `dictionary` to `track the count of each word independently`.

**Just try this:**
    
With this hand, I will lift your sorrows

Your cup will never be empty, for I will be your wine

With this candle, I will light your way into darkness

With this ring, I ask you to be mine

$ \\\\\\\\\\\\—\ Victor\ Van\ Dort [Corpse\ Bride\, 2005]$



```python
counts = dict()
print('Enter a line of text:')
line = input('')

words = line.split()

print('Words: ',words)

print('Counting...')
for word in words:
    counts[word] = counts.get(word, 0) + 1
    
print('Counts',counts)
```

    Enter a line of text:
    With this hand, I will lift your sorrows  Your cup will never be empty, for I will be your wine  With this candle, I will light your way into darkness  With this ring, I ask you to be mine
    Words:  ['With', 'this', 'hand,', 'I', 'will', 'lift', 'your', 'sorrows', 'Your', 'cup', 'will', 'never', 'be', 'empty,', 'for', 'I', 'will', 'be', 'your', 'wine', 'With', 'this', 'candle,', 'I', 'will', 'light', 'your', 'way', 'into', 'darkness', 'With', 'this', 'ring,', 'I', 'ask', 'you', 'to', 'be', 'mine']
    Counting...
    Counts {'With': 3, 'this': 3, 'hand,': 1, 'I': 4, 'will': 4, 'lift': 1, 'your': 3, 'sorrows': 1, 'Your': 1, 'cup': 1, 'never': 1, 'be': 3, 'empty,': 1, 'for': 1, 'wine': 1, 'candle,': 1, 'light': 1, 'way': 1, 'into': 1, 'darkness': 1, 'ring,': 1, 'ask': 1, 'you': 1, 'to': 1, 'mine': 1}


#### 3.2.2. Definite Loops and Dictionaries

Even though dictionaries are not stored in order,

we can write a for loop that goes through all the entries in a dictionary 

actually it goes through all of the keys in the dictionary 

and looks up the values


```python
counts = {'chuck':1,'fred':42,'jan':100}
for key in counts:
    print(key,counts[key])
```

    chuck 1
    fred 42
    jan 100


#### 3.2.3. Retrieving lists of Keys and Values

You can get a list of `keys, values, or items (both)` from a dictionary


```python
jjj = {'chuck':1,'fred':42,'jan':100}
print(list(jjj))
```

    ['chuck', 'fred', 'jan']



```python
jjj['jan']
```




    100




```python
print(jjj.keys())
```

    dict_keys(['chuck', 'fred', 'jan'])



```python
print(jjj.values())
```

    dict_values([1, 42, 100])



```python
print(jjj.items())
```

    dict_items([('chuck', 1), ('fred', 42), ('jan', 100)])



# 2. look at the items,let's use them below:

# 3. look at the items,let's use them below:
```

#### 3.1. Bonus: Two iteration Variables

- We loop through the **key-value** pairs in a dictionary 

using **two** iteration variables;



- Each iteration, the first variable is the key 

and the second variable is the corresponding value for the key.


```python
jjj = {'chuck':1,'fred':42,'jan':100}
for aaa,bbb in jjj.items():
    print(aaa,bbb)
```

    chuck 1
    fred 42
    jan 100


#### 3.2. Application of dicts: big word count


```python
name = input('Enter file:')
handle = open(name)

counts = dict()
for line in handle:
    words = line.split()
    for word in words:
        counts[word] = counts.get(word,0) + 1 #add the words into the dict()
        
bigcount = None
bigword = None

for word,count in counts.items():
    if bigcount is None or count > bigcount:
        bigword = word
        bigcount = count

print(bigword,bigcount)
```

    Enter file:



    ---------------------------------------------------------------------------

    FileNotFoundError                         Traceback (most recent call last)

    <ipython-input-132-1e9d96f61bff> in <module>
          1 name = input('Enter file:')
    ----> 2 handle = open(name)
          3 
          4 counts = dict()
          5 for line in handle:


    FileNotFoundError: [Errno 2] No such file or directory: ''


#### 3.3. Ex 09 most common word


# 2. ex_09-1.py

# 3. ex_09-1.py
fname = input('Enter File:')
if len(fname) < 1 : fname = 'clown.txt'

# 4. then what's next? open the fname:
hand = open(fname)

## 4.1. make a dictionary:
di = dict() 

## 4.2. corresponds the if w in di inner loop below:

for lin in hand:
	lin = lin.rstrip()
	## show the tripped txt:
	# print(lin)
	##split the words:
	wds = lin.split()
	## print the splitted words:
	# print(wds)
	##print every word:
	for w in wds:
		# print(w)
		# print('***************',w,di.get(w,-99))
		if w in di:
			di[w] = di[w] + 1
			print('~~~~~Existing~~~~~')
		else:
			di[w] = 1
            
			print('______New______')
		print(w,di[w])
print(di)
```

    Enter File:mbox-short.txt
    {}



# 2. ex_09-2.py

# 3. ex_09-2.py
fname = input('Enter File:')
if len(fname) < 1 : fname = 'clown.txt'

# 4. then what's next? open the fname:
hand = open(fname)

## 4.1. make a dictionary:
di = dict() 

## 4.2. corresponds the if w in di inner loop below:

for lin in hand:
	lin = lin.rstrip()

	wds = lin.split()

	for w in wds:

		print('***************',w,di.get(w,0))
        #-99 in the video, but you can try more
		if w in di: 
			di[w] = di[w] + 1

		else:
			di[w] = 1

		# print(w,di[w])
print(di)

```

    Enter File:mbox-short.txt
    {}



# 2. ex_09-2.py

# 3. ex_09-2.py
fname = input('Enter File:')
if len(fname) < 1 : fname = 'clown.txt'

# 4. then what's next? open the fname:
hand = open(fname)

## 4.1. make a dictionary:
di = dict() 

## 4.2. corresponds the if w in di inner loop below:

for lin in hand:
	lin = lin.rstrip()
	wds = lin.split()

	for w in wds:
		# if the key is not there the count is Zero
		oldcount = di.get(w,0) 
		# get the value under the key be social with a key 
		# or give me zero back
		print(w,'~~old~~',oldcount)
		newcount = oldcount + 1 
		di[w] = newcount

		print(w,'--new--',newcount)

print(di)

```

    Enter File:a



    ---------------------------------------------------------------------------

    FileNotFoundError                         Traceback (most recent call last)

    <ipython-input-39-a3b6476b9f59> in <module>
          3 if len(fname) < 1 : fname = 'clown.txt'
          4 #then what's next? open the fname:
    ----> 5 hand = open(fname)
          6 
          7 ## make a dictionary:


    FileNotFoundError: [Errno 2] No such file or directory: 'a'



# 2. ex_09-2.py

# 3. ex_09-2.py
fname = input('Enter File:')
if len(fname) < 1 : fname = 'clown.txt'

# 4. then what's next? open the fname:
hand = open(fname)

## 4.1. make a dictionary:
di = dict() 

## 4.2. corresponds the if w in di inner loop below:

for lin in hand:
	lin = lin.rstrip()
	wds = lin.split()

	for w in wds:
		# if the key is not there the count is Zero
		# oldcount = di.get(w,0) 
		# # get the value under the key be social with a key 
		# # or give me zero back
		# print(w,'~~old~~',oldcount)
		# newcount = oldcount + 1 
		# di[w] = newcount
 
	## all above in one line:
		#idiom :retrive/create/update counter

		di[w] = di.get(w,0) + 1
		print(w,'--new--',di[w])

print(di)

```


    ---------------------------------------------------------------------------

    KeyboardInterrupt                         Traceback (most recent call last)

    <ipython-input-40-96569298da35> in <module>
          1 # ex_09-2.py
    ----> 2 fname = input('Enter File:')
          3 if len(fname) < 1 : fname = 'clown.txt'
          4 #then what's next? open the fname:
          5 hand = open(fname)


    /opt/homebrew/Caskroom/miniconda/base/envs/p39/lib/python3.9/site-packages/ipykernel/kernelbase.py in raw_input(self, prompt)
        846                 "raw_input was called, but this frontend does not support input requests."
        847             )
    --> 848         return self._input_request(str(prompt),
        849             self._parent_ident,
        850             self._parent_header,


    /opt/homebrew/Caskroom/miniconda/base/envs/p39/lib/python3.9/site-packages/ipykernel/kernelbase.py in _input_request(self, prompt, ident, parent, password)
        890             except KeyboardInterrupt:
        891                 # re-raise KeyboardInterrupt, to truncate traceback
    --> 892                 raise KeyboardInterrupt("Interrupted by user") from None
        893             except Exception as e:
        894                 self.log.warning("Invalid Message:", exc_info=True)


    KeyboardInterrupt: Interrupted by user



# 2. ex_09-3_most_common.py

# 3. ex_09-3_most_common.py
fname = input('Enter File:')
if len(fname) < 1 : fname = 'clown.txt'

# 4. then what's next? open the fname:
hand = open(fname)

## 4.1. make a dictionary:
di = dict() 

## 4.2. corresponds the if w in di inner loop below:

for lin in hand:
	lin = lin.rstrip()
	wds = lin.split()

	for w in wds:

		di[w] = di.get(w,0) + 1
		print(w,'--new--',di[w])

# 2. now we want to find the most commmon word


maxs = -1  #quick maximun loop with the largest equals -1
theword = None

for k,v in di.items():
	print(k,v)
	if v > maxs:
		maxs = v
		theword = k #capture/remember the most common word

print('Done',maxs,theword )
```


```python

```


# 3. fname = input('Enter the file name: ')

# 4. fname = input('Enter the file name: ')

# 5. try:

# 6. fhand = open(fname)

# 7. except:

# 8. print('File cannot be opened:', fname)

# 9. exit()

# 10. counts = dict()

# 11. for line in fhand:

# 12. words = line.split()

# 13. for word in words:

# 14. if word not in counts:

# 15. counts[word] = 1

# 16. else:

# 17. counts[word] += 1

# 18. print(counts)

## 18.1. dies alot?
```

### 18.1.1. Looping and dictionaries

If you use a dictionary as the sequence in a for statement, it traverses the keys of the dictionary. This loop prints each key and the corresponding value:


```python
counts = {'chuck' : 1 , 'annie' : 42, 'jan': 100}
for key in counts:
    print(key,counts[key])
```

    chuck 1
    annie 42
    jan 100


### 18.1.2. Advanced text parsing




```python
import string

fname = input('Enter a flie name:')  #romeo.txt

try:
    fhand = open(fname)
except:
    print('file can not be opened ',fname)
    exit()

counts = dict()

for line in fhand:
    line = line.rstrip()
    line = line.translate(line.maketrans('','',string.punctuation))
    line = line.lower()
    
    words = line.split()
    
    for word in words:
        if word not in counts:
            counts[word] = 1 #initialize: {'word',1}
        
        else:
            counts[word] += 1
            
print(counts)
```

    Enter a flie name:dd.yxy
    file can not be opened  dd.yxy
    {}



```python

```

## 1.2. Chap 10 Tuples

Tuples are another kind of sequence that functions `much like a list`:

They have `elements` which are `indexed starting at O`


```python
x = ('Glenn','Sally','Joseph')
print(x[2])
```

    Joseph



```python
type(x)
```




    tuple



### 1.2.1. Tuples are "Immutable" ----for **`Efficiency`**

Unlike a list, once you create a tuple, you `can not` alter its contents 

similar to a string


```python
x = [9,8,7] # lists are changable
x[2] = 6 
print(x)
```

    [9, 8, 6]



```python
y = 'abc'
y[2]
```




    'c'




```python
y[2] = 'c'
```


    ---------------------------------------------------------------------------

    TypeError                                 Traceback (most recent call last)

    <ipython-input-3-fc380bb33a91> in <module>
    ----> 1 y[2] = 'c'
    

    TypeError: 'str' object does not support item assignment



```python
z = (5,4,3)
z[2] = 0
```


    ---------------------------------------------------------------------------

    TypeError                                 Traceback (most recent call last)

    <ipython-input-4-cee43b6bb4d2> in <module>
          1 z = (5,4,3)
    ----> 2 z[2] = 0
    

    TypeError: 'tuple' object does not support item assignment



```python
type(z)
```




    tuple



Things not to do with tuples:


```python
x = (3,2,1)
```


```python
x.sort()
```


    ---------------------------------------------------------------------------

    AttributeError                            Traceback (most recent call last)

    <ipython-input-7-5edff3203de0> in <module>
    ----> 1 x.sort()
    

    AttributeError: 'tuple' object has no attribute 'sort'



```python
x.append()
```


    ---------------------------------------------------------------------------

    AttributeError                            Traceback (most recent call last)

    <ipython-input-8-e10906a455ed> in <module>
    ----> 1 x.append()
    

    AttributeError: 'tuple' object has no attribute 'append'



```python
x.reverse()
```


    ---------------------------------------------------------------------------

    AttributeError                            Traceback (most recent call last)

    <ipython-input-9-1cc9031a0932> in <module>
    ----> 1 x.reverse()
    

    AttributeError: 'tuple' object has no attribute 'reverse'


### 1.2.2. A Tale of Two Sequences


```python
l = list()
dir(l)
```




    ['__add__',
     '__class__',
     '__class_getitem__',
     '__contains__',
     '__delattr__',
     '__delitem__',
     '__dir__',
     '__doc__',
     '__eq__',
     '__format__',
     '__ge__',
     '__getattribute__',
     '__getitem__',
     '__gt__',
     '__hash__',
     '__iadd__',
     '__imul__',
     '__init__',
     '__init_subclass__',
     '__iter__',
     '__le__',
     '__len__',
     '__lt__',
     '__mul__',
     '__ne__',
     '__new__',
     '__reduce__',
     '__reduce_ex__',
     '__repr__',
     '__reversed__',
     '__rmul__',
     '__setattr__',
     '__setitem__',
     '__sizeof__',
     '__str__',
     '__subclasshook__',
     'append',
     'clear',
     'copy',
     'count',
     'extend',
     'index',
     'insert',
     'pop',
     'remove',
     'reverse',
     'sort']




# 2. 'append',

# 3. 'append',

# 4. 'clear',

# 5. 'copy',

# 6. 'count',

# 7. 'extend',

# 8. 'index',

# 9. 'insert',

# 10. 'pop',

# 11. 'remove',

# 12. 'reverse',

# 13. 'sort'
```


```python
t = tuple()
dir(t)
```




    ['__add__',
     '__class__',
     '__class_getitem__',
     '__contains__',
     '__delattr__',
     '__dir__',
     '__doc__',
     '__eq__',
     '__format__',
     '__ge__',
     '__getattribute__',
     '__getitem__',
     '__getnewargs__',
     '__gt__',
     '__hash__',
     '__init__',
     '__init_subclass__',
     '__iter__',
     '__le__',
     '__len__',
     '__lt__',
     '__mul__',
     '__ne__',
     '__new__',
     '__reduce__',
     '__reduce_ex__',
     '__repr__',
     '__rmul__',
     '__setattr__',
     '__sizeof__',
     '__str__',
     '__subclasshook__',
     'count',
     'index']




# 14. just :'count','index'

# 15. just :'count','index'
```

### 15.1. Tuples are more efficient,compared with lists

Since Python does not have to build tuple structures to be modifiable, 

they are `simpler` and more `efficient` in terms of memory use and `performance` than lists

So in our program when we are making **“temporary variables"** we prefer tuples over lists.

### 15.2. Tuples and Assignment

We can also put a tuple on the left-hand side of an assignment statement

We can even `omit` the parentheses


```python
(x,y) = (4, 'fred')
print(y)
```

    fred



```python
type((x,y))
```




    tuple




```python
type(y)
```




    str




```python
y
```




    'fred'




```python
(a,b) = (99,98)
print(a)
```

    99


### 15.3. Tuples and Dictionaries(transfer)

The items() method in dictionaries returns a list of (key,value) tuples




```python
d = dict()
d['csev']=2
d['cwen']=4

for k,v in d.items():
    print(k,v)

# 2. actually ,the k means the key, v is value
```

    csev 2
    cwen 4



```python
tups = d.items()
print(tups)
```

    dict_items([('csev', 2), ('cwen', 4)])


### 2.1. Tuples are Comparable

The `comparison operators work with tuples` and other sequences. 

If the **first** item is equal, Python goes on to the next element, 

and so on, until it **finds** elements that differ.


```python
(0,1,2) < (5,1,2)
```




    True




```python
(0,1,200000000) < (0,3,4)
```




    True




```python
('Jones','Sally') < ('Jones','Sam')

# 2. Joneses are euqal, while compare Sally and Sam, the l in the Sally is less than M in the Sam
```




    True




```python
('Jones','Sally') > ('Adams','Sam')

# 3. J in Jones is greater than Adams
```




    True



When comparing, the tuples scan until it has a definitive answer,then stop.



### 3.1. Sorting Lists of Tuples

We can take advantage of the ability to sort a list of tuples to get a sorted version of a dictionary


First we sort the dictionary by the key using the items() method and sorted() function.


```python
d = {'a':10,'b':1,"c":22}
d.items()
```




    dict_items([('a', 10), ('b', 1), ('c', 22)])




```python
sorted(d.items())

# 2. sort the tuple with ascending order based on keys
```




    [('a', 10), ('b', 1), ('c', 22)]



**Using sorted()**

We can do this even more directly using the built-in function sorted 

that takes a sequence as a parameter and returns a sorted sequence.


```python
d = {'a':10,'b':1,"c":22}
t = d.items()
t
```




    dict_items([('a', 10), ('b', 1), ('c', 22)])




```python
for k,v in sorted(d.items()):
    print(k,v)
```

    a 10
    b 1
    c 22


**Sort by values instead of key Sort by values instead of key**

If we could construct a list of tuples of the form (value, key),

we could sort by value;

We do this with a for loop that creates a list of tuples.



```python
c = {'a':10,'b':1,"c":22}
c.items()
```




    dict_items([('a', 10), ('b', 1), ('c', 22)])




```python

tmp = list()
for k,v in c.items():
    # flip the key value order.
    tmp.append((v,k))
print(tmp)
```

    [(10, 'a'), (1, 'b'), (22, 'c')]



```python
tmp = sorted(tmp,reverse=True)
print(tmp)
```

    [(22, 'c'), (10, 'a'), (1, 'b')]



```python
type(tmp) 
```




    list




```python

```

### 2.1. Sequences: strings, lists, and tuples,how to choose??

Almost all of the examples in this chapter also work with lists of lists, tuples of tuples, and tuples of lists.

**sequences of sequences**

In many contexts, the different kinds of sequences (strings, lists, and tuples) can be used interchangeably. So how and why do you choose one over the others?

- To start with the obvious, **strings are more limited than other sequences** because the elements have to be characters,which are also immutable. 


- If you need the ability to change the characters in a string (as opposed to creating a new string), you might want to use a list of characters instead.Lists are more common than tuples, mostly because they are mutable. 

- There are a few cases where you might prefer tuples:
    
    1.In some contexts, like a return statement, it is syntactically simpler to create a tuple than a list. In other contexts, you might prefer a list.

    2.If you want to use a sequence as a dictionary key, you have to use an immutable type like a tuple or string.

    3.If you are passing a sequence as an argument to a function, using tuples reduces the potential for unexpected behavior due to aliasing.


Because tuples are immutable, they don't provide methods like sort and reverse, which modify existing lists. 
However Python provides the built-in functions sorted and reversed, which take any sequence as a parameter and return a new sequence with the same elements in a different order.



### 2.2. EX The top 10 most common words


# 2. open the txt and creat the empty dictionary for the txt

# 3. open the txt and creat the empty dictionary for the txt
fhand = open('romeo.txt')
counts = dict()
```


# 4. split the txt,count the words, put them in the count dictionary

# 5. split the txt,count the words, put them in the count dictionary
for line in fhand:
    words = line.split()
    for word in words:
        counts[word] = counts.get(word,0) + 1
```


# 6. print(counts)

# 7. print(counts)
```


# 8. now we have the dictionary then we read the key and value, put them into the new list

# 9. now we have the dictionary then we read the key and value, put them into the new list
lst = list()
for key,val in counts.items():
    newtup = (val,key)
    lst.append(newtup)
```


# 10. print(lst)

# 11. print(lst)
```


# 12. sort the list with ascending order

# 13. sort the list with ascending order
lst = sorted(lst,reverse=True)
```


# 14. funny:just top 10 showed up

# 15. funny:just top 10 showed up
for val,key in lst[:10]:
    print(key,val)
```

    the 3
    is 3
    and 3
    sun 2
    yonder 1
    with 1
    window 1
    what 1
    through 1
    soft 1


#### 15.1. Even shorter version


# 2. we code like this to see how the list tuple and dictionary works:

# 3. we code like this to see how the list tuple and dictionary works:
c = {'a':10,'b':1,"c":22}
print(sorted([(v,k) for k,v in c.items()]))
```

    [(1, 'b'), (10, 'a'), (22, 'c')]


List comprehension creates a `dynamic list`. 

In this case, we make a list of reversed tuples and then [`sort it`](http://wiki.python.org/moin/HowTo/Sorting).

### 3.1. Ex 10 most common word with dictionary


# 2. original: ex_09-2.py

# 3. original: ex_09-2.py
fname = input('Enter File:')
if len(fname) < 1 : fname = 'clown.txt'

# 4. then what's next? open the fname:
hand = open(fname)

## 4.1. make a dictionary:
di = dict() 

## 4.2. corresponds the if w in di inner loop below:

for lin in hand:
	lin = lin.rstrip()
	wds = lin.split()

	for w in wds:

		#idiom :retrive/create/update counter

		di[w] = di.get(w,0) + 1
		print(w,'--new--',di[w])
    
    
print(di)

x = sorted(di.items())
print(x[:5]) # not work well,the order is not what we want:
```


```python

```


```python

```


# 2. optimize the code

# 3. optimize the code
fname = input('Enter File:')
if len(fname) < 1 : fname = 'clown.txt'
hand = open(fname)
di = dict() 

## 3.1. corresponds the if w in di inner loop below:
for lin in hand:
	lin = lin.rstrip()
	wds = lin.split()
	for w in wds:
		#idiom :retrive/create/update counter
		di[w] = di.get(w,0) + 1

# 2. print(w,'--new--',di[w])
    
# 3. print(di)

tmp = list()
for k,v in di.items():

# 4. print(k,v)
    newtup = (v,k)
    tmp.append(newtup)

tmp= sorted(tmp,reverse=True)

print('Flipped',tmp) # yeah,works well.
```

    Enter File:intro.txt
    Flipped [(226, 'the'), (204, 'to'), (165, 'a'), (160, 'and'), (130, 'you'), (112, 'is'), (103, 'of'), (85, 'Python'), (68, 'that'), (66, 'in'), (57, 'it'), (51, 'we'), (46, 'for'), (43, 'are'), (40, 'be'), (37, 'your'), (37, 'with'), (34, 'will'), (29, 'program'), (29, 'language'), (28, 'at'), (27, 'have'), (25, 'or'), (25, 'as'), (23, 'on'), (22, 'write'), (22, 'our'), (22, 'can'), (21, 'but'), (20, 'very'), (20, 'how'), (20, 'The'), (19, 'use'), (19, 'this'), (19, 'You'), (18, 'not'), (17, 'more'), (17, 'from'), (16, 'need'), (16, 'We'), (14, 'words'), (14, 'what'), (14, 'these'), (14, 'some'), (14, 'programs'), (14, 'programming'), (14, 'machine'), (14, 'learn'), (14, 'do'), (14, 'computer'), (13, 'word'), (13, 'when'), (13, 'first'), (13, 'In'), (12, 'would'), (12, 'simple'), (12, 'like'), (12, 'know'), (12, 'interpreter'), (12, 'by'), (11, 'so'), (11, 'say'), (11, 'just'), (11, 'instructions'), (11, 'computers'), (11, 'When'), (11, 'I'), (10, 'written'), (10, 'used'), (10, 'us'), (10, 'up'), (10, 'they'), (10, 'reserved'), (10, 'problem'), (10, 'one'), (10, 'most'), (10, 'many'), (10, 'look'), (10, 'into'), (10, 'even'), (10, 'different'), (10, 'code'), (10, 'an'), (10, 'It'), (9, 'value'), (9, 'then'), (9, 'tell'), (9, 'its'), (9, 'if'), (9, 'high-level'), (9, 'few'), (9, 'end'), (9, 'about'), (8, 'were'), (8, 'was'), (8, 'times'), (8, 'there'), (8, 'them'), (8, 'text'), (8, 'take'), (8, 'source'), (8, 'simply'), (8, 'program.'), (8, 'new'), (8, 'error'), (8, 'data'), (8, 'all'), (8, 'Python.'), (7, 'vocabulary'), (7, 'understand'), (7, 'three'), (7, 'syntax'), (7, 'statements'), (7, 'speak'), (7, 'something'), (7, 'solve'), (7, 'sentences'), (7, 'no'), (7, 'much'), (7, 'conversation'), (7, 'What'), (6, 'writing'), (6, 'way'), (6, 'want'), (6, 'type'), (6, 'try'), (6, 'time'), (6, 'their'), (6, 'start'), (6, 'read'), (6, 'programmers'), (6, 'over'), (6, 'mistake'), (6, 'might'), (6, 'memory'), (6, 'line'), (6, 'language.'), (6, 'information'), (6, 'get'), (6, 'file'), (6, "don't"), (6, 'blah'), (6, 'because'), (6, 'able'), (6, 'So'), (6, 'If'), (6, 'As'), (6, 'A'), (5, 'where'), (5, 'turn'), (5, 'those'), (5, 'things'), (5, 'than'), (5, 'talk'), (5, 'store'), (5, 'see'), (5, 'retrieve'), (5, 'reading'), (5, 'programs.'), (5, 'problem.'), (5, 'perhaps'), (5, 'next?'), (5, 'needs'), (5, 'name'), (5, 'me'), (5, 'make'), (5, 'looking'), (5, 'learning'), (5, 'has'), (5, 'good'), (5, 'file.'), (5, 'description'), (5, 'creative'), (5, 'could'), (5, 'call'), (5, 'book'), (5, 'While'), (5, 'This'), (5, 'These'), (5, 'That'), (5, 'Python,'), (5, 'For'), (5, 'CPU'), (4, 'who'), (4, 'while'), (4, 'walk'), (4, 'using'), (4, 'time.'), (4, 'think'), (4, 'talking'), (4, 'story'), (4, 'should'), (4, 'sentence'), (4, 'seems'), (4, 'right'), (4, 'put'), (4, 'programs,'), (4, 'programmer,'), (4, 'programmer'), (4, 'print'), (4, 'point'), (4, 'out'), (4, 'only'), (4, 'once'), (4, 'material'), (4, 'main'), (4, 'left'), (4, 'languages'), (4, 'language,'), (4, 'it.'), (4, 'it,'), (4, 'humans'), (4, 'having'), (4, 'hardware'), (4, 'give'), (4, 'file,'), (4, 'executable'), (4, 'example,'), (4, 'example'), (4, 'doing'), (4, 'computer.'), (4, 'complex'), (4, 'common'), (4, 'called'), (4, 'bit'), (4, 'best'), (4, 'ask'), (4, 'actually'), (4, 'Then'), (4, 'And'), (4, '(or'), (3, 'years'), (3, 'usually'), (3, 'user'), (3, 'useful'), (3, 'understanding'), (3, 'types'), (3, 'two'), (3, 'trying'), (3, 'translators'), (3, 'took'), (3, 'together'), (3, 'through'), (3, 'telling'), (3, 'teach'), (3, 'syntactically'), (3, 'stored'), (3, 'someone'), (3, 'solving'), (3, 'skills'), (3, 'skill'), (3, 'six'), (3, 'set'), (3, 'sequence'), (3, 'sense,'), (3, 'secondary'), (3, 'say,'), (3, 'really'), (3, 'ready'), (3, 'programming.'), (3, 'programmers,'), (3, 'program,'), (3, 'professional'), (3, 'process.'), (3, 'point,'), (3, 'person'), (3, 'patterns'), (3, 'often'), (3, 'must'), (3, 'meaning'), (3, 'lines'), (3, 'likely'), (3, 'later.'), (3, 'languages.'), (3, 'interactive'), (3, 'intended'), (3, 'instead'), (3, 'inhabitants'), (3, 'hello.py'), (3, 'great'), (3, 'going'), (3, 'go'), (3, 'giving'), (3, 'gas'), (3, 'find'), (3, 'figure'), (3, 'fast'), (3, 'errors'), (3, 'else'), (3, 'easy'), (3, 'earlier'), (3, 'each'), (3, 'down'), (3, 'dog,'), (3, 'does'), (3, 'counting'), (3, 'correct'), (3, 'compiler'), (3, 'command'), (3, 'code.'), (3, 'built'), (3, 'building'), (3, 'between'), (3, 'back'), (3, 'art'), (3, 'any'), (3, 'analysis'), (3, 'also'), (3, 'actual'), (3, 'Windows'), (3, 'There'), (3, "Python's"), (3, 'Our'), (3, 'CPU.'), (3, 'By'), (3, 'But'), (3, 'Before'), (3, 'At'), (3, '(the'), (2, 'zeros'), (2, 'you,'), (2, 'y.'), (2, 'x'), (2, 'words.'), (2, 'without'), (2, 'which'), (2, 'walking'), (2, 'version'), (2, 'useful,'), (2, 'uniquely'), (2, 'typing'), (2, 'true,'), (2, 'too'), (2, 'time,'), (2, 'text.'), (2, 'tasks'), (2, 'task'), (2, 'takes'), (2, 'suffix'), (2, 'such'), (2, 'structure,'), (2, 'structure'), (2, 'story,'), (2, 'statements.'), (2, 'starting'), (2, 'staring'), (2, 'special'), (2, 'sometimes'), (2, 'software,'), (2, 'small'), (2, 'slower'), (2, 'skills.'), (2, 'skilled'), (2, 'semantic'), (2, 'second.'), (2, 'second'), (2, 'script.'), (2, 'script'), (2, 'says'), (2, 'saw'), (2, 'same'), (2, 'run'), (2, 'rewarding'), (2, 'restaurant'), (2, 'rest'), (2, 'remembered'), (2, 'remember'), (2, 'refer'), (2, 'realize'), (2, 'ranging'), (2, 'quite'), (2, 'quickly'), (2, 'python'), (2, 'proper'), (2, 'progress'), (2, 'pretty'), (2, 'powerful'), (2, 'posts'), (2, 'portable'), (2, 'please'), (2, 'planet'), (2, 'piece'), (2, 'personal'), (2, 'perfectly'), (2, 'per'), (2, 'particularly'), (2, 'part'), (2, 'paragraphs'), (2, 'paragraph'), (2, 'own'), (2, 'other'), (2, 'order'), (2, 'now'), (2, 'noticed'), (2, 'notice'), (2, 'nice'), (2, 'next.'), (2, 'next'), (2, 'network'), (2, 'names'), (2, 'music'), (2, 'move'), (2, 'motivation'), (2, 'mode'), (2, 'mile'), (2, 'memory,'), (2, 'means'), (2, 'may'), (2, 'logic'), (2, 'little'), (2, 'later'), (2, 'knows'), (2, 'knew'), (2, 'kinds'), (2, 'kind'), (2, 'keep'), (2, 'job'), (2, 'itself'), (2, 'installed'), (2, 'increasingly'), (2, 'include'), (2, 'human'), (2, 'helping'), (2, 'helpful'), (2, 'groups'), (2, 'grammar'), (2, 'getting'), (2, 'general'), (2, 'fully'), (2, 'follows:'), (2, 'following'), (2, 'followed'), (2, 'five'), (2, 'feels'), (2, 'fact'), (2, 'face'), (2, 'explain'), (2, 'execute'), (2, 'except'), (2, 'exactly'), (2, 'everyone'), (2, 'every'), (2, 'encounter'), (2, 'easiest'), (2, 'dog'), (2, 'directly'), (2, 'directions'), (2, 'did'), (2, 'develop'), (2, 'detail'), (2, 'currently'), (2, 'create'), (2, 'course'), (2, 'construct'), (2, 'confused.'), (2, 'concepts'), (2, 'completely'), (2, 'compilers'), (2, 'compiled'), (2, 'communicate'), (2, 'commands'), (2, 'come'), (2, 'choosing'), (2, 'character'), (2, 'chapters,'), (2, 'chapter'), (2, 'capabilities'), (2, 'cannot'), (2, 'both'), (2, 'book,'), (2, 'billion'), (2, 'big'), (2, 'better'), (2, 'become'), (2, 'basic'), (2, 'away'), (2, 'another'), (2, 'am'), (2, 'already'), (2, 'almost'), (2, 'allow'), (2, 'activity.'), (2, 'acting'), (2, 'across'), (2, 'absorb'), (2, 'Your'), (2, 'Writing'), (2, 'Unit'), (2, 'They'), (2, 'Secondary'), (2, 'Processing'), (2, 'Personal'), (2, 'Perform'), (2, 'Once'), (2, 'Now'), (2, 'Memory'), (2, 'Machine'), (2, 'Look'), (2, 'JavaScript'), (2, 'Facebook'), (2, 'Even'), (2, 'Digital'), (2, 'Central'), (2, 'C.'), (2, 'Assistant'), (1, 'yourself,'), (1, 'you.'), (1, 'yield'), (1, 'www.python.org'), (1, 'www.py4e.com'), (1, 'wrote'), (1, 'wrong?'), (1, 'wrong.'), (1, 'writing.'), (1, 'world.'), (1, 'working'), (1, 'work'), (1, 'words.py'), (1, 'words,'), (1, 'word.'), (1, 'word,'), (1, 'wondering'), (1, 'wonderful'), (1, 'wish'), (1, 'window,'), (1, 'window'), (1, 'why?'), (1, 'why'), (1, 'whenever'), (1, 'well.'), (1, 'well-formed'), (1, 'well'), (1, 'weekend'), (1, 'weaving'), (1, 'ways'), (1, 'water'), (1, 'waiting'), (1, 'wagging'), (1, 'vocabulary,'), (1, 'visit'), (1, 'violated'), (1, 'verify'), (1, 'vendor'), (1, 'vast'), (1, 'various'), (1, 'variation.'), (1, 'variables.'), (1, 'variables,'), (1, 'variable.'), (1, 'variable'), (1, 'vanishes'), (1, 'uses'), (1, 'users.'), (1, 'users,'), (1, 'users'), (1, 'user,'), (1, 'user)'), (1, 'used.'), (1, 'us.'), (1, 'up.'), (1, 'until'), (1, 'unreliable'), (1, 'unreadable:'), (1, 'unlike'), (1, 'unfit'), (1, 'undetected'), (1, 'understands.'), (1, 'understands,'), (1, 'understands'), (1, 'unconditionally,'), (1, 'uncomfortable'), (1, 'typed,'), (1, 'turned'), (1, 'try,'), (1, 'tricky'), (1, 'treating'), (1, 'translated'), (1, 'translate'), (1, 'trained.'), (1, 'train'), (1, 'toward'), (1, 'touchpad,'), (1, 'touch.'), (1, 'torment'), (1, 'topics'), (1, 'top'), (1, 'tool.'), (1, 'told'), (1, 'tiresome'), (1, 'tiny'), (1, 'tied'), (1, 'throughout'), (1, 'thoughts'), (1, 'thought'), (1, 'though'), (1, 'thinking'), (1, 'things.'), (1, 'thing'), (1, 'them.'), (1, 'tested'), (1, 'test'), (1, 'terminology'), (1, 'terminal'), (1, 'term'), (1, 'ten'), (1, 'techniques'), (1, 'tall'), (1, 'taking'), (1, 'tail'), (1, 'systems.'), (1, 'system.'), (1, 'system,'), (1, 'system'), (1, 'syntax.'), (1, 'syntax,'), (1, 'symbolic'), (1, 'sweet'), (1, 'surrounded'), (1, 'surface,'), (1, 'supposed'), (1, 'suited'), (1, 'suggest'), (1, 'string'), (1, 'strictest'), (1, 'stream'), (1, 'straightforward'), (1, 'story.'), (1, 'stop'), (1, 'sticks'), (1, 'steps'), (1, 'step'), (1, 'staying'), (1, 'stay,'), (1, 'station?'), (1, 'station.'), (1, 'station,'), (1, 'starts'), (1, 'started'), (1, 'start,'), (1, 'standard'), (1, 'stand'), (1, 'stab'), (1, 'spit,'), (1, 'spend'), (1, 'spell'), (1, 'spears,'), (1, 'speaker,'), (1, 'speaker'), (1, 'speak,'), (1, 'sounds'), (1, 'sound'), (1, 'sorry,'), (1, 'sophisticated,'), (1, 'somewhat'), (1, 'something.'), (1, 'solves'), (1, 'solve.'), (1, 'solve,'), (1, 'solution.'), (1, 'software'), (1, 'snack,'), (1, 'smart'), (1, 'smallest'), (1, 'small.'), (1, 'slow'), (1, 'skip'), (1, 'skimming'), (1, 'sixteen'), (1, 'situations,'), (1, 'sit,'), (1, 'single'), (1, 'simplest'), (1, 'simple.'), (1, 'sign'), (1, 'shrink'), (1, 'shown'), (1, 'short'), (1, 'seven'), (1, 'setting'), (1, 'serve'), (1, 'series'), (1, 'sequences'), (1, 'sentences.'), (1, 'sentence.'), (1, 'sentence)'), (1, 'sensor'), (1, 'sensible'), (1, 'sees'), (1, 'seemed'), (1, 'seem'), (1, 'seconds,'), (1, 'sculpture.'), (1, 'scripts'), (1, 'script,'), (1, 'screencasts'), (1, 'screen,'), (1, 'screen'), (1, 'scan'), (1, 'saying,'), (1, 'saying'), (1, 'saved'), (1, 'save'), (1, 'said,'), (1, 'sadly'), (1, 'runs'), (1, 'running'), (1, 'rules'), (1, 'room'), (1, 'rock'), (1, 'roast'), (1, 'revisit'), (1, 'reviewing'), (1, 'reuse'), (1, 'return'), (1, 'results'), (1, 'resulting'), (1, 'restaurant.'), (1, 'respectively.'), (1, 'resources'), (1, 'research'), (1, 'represented'), (1, 'repetitive.'), (1, 'repeatedly,'), (1, 'remind'), (1, 'relatively'), (1, 'relate'), (1, 'rejects'), (1, 'redoing'), (1, 'red'), (1, 'recompiling'), (1, 'recommended'), (1, 'reasons,'), (1, 'reads'), (1, 'reader.'), (1, 'reaches'), (1, 'reach'), (1, 'rated'), (1, 'rapidly,'), (1, 'raise'), (1, 'quotes:'), (1, 'quotes.'), (1, 'quizzical'), (1, 'quit()'), (1, 'quickly.'), (1, 'quickly,'), (1, 'quicker'), (1, 'questions'), (1, 'question.'), (1, 'question,'), (1, 'python,'), (1, 'putting'), (1, 'puts'), (1, 'properly'), (1, 'prone.'), (1, 'prompting'), (1, 'prompt'), (1, 'programs?'), (1, 'programs)'), (1, 'programming,'), (1, 'programming)'), (1, 'programmer:'), (1, 'programmer).'), (1, 'program?'), (1, 'productive'), (1, 'produce'), (1, 'processes'), (1, 'process'), (1, 'proceed.'), (1, 'problems.'), (1, 'problem-solving'), (1, 'probably'), (1, 'primary'), (1, 'previous'), (1, 'precisely'), (1, 'power'), (1, 'pounding'), (1, 'posts.'), (1, 'possibly'), (1, 'pore'), (1, 'pleasant'), (1, 'players).'), (1, 'play'), (1, 'planet:'), (1, 'place'), (1, 'picture.'), (1, 'picture'), (1, 'picky'), (1, 'pick'), (1, 'phones.'), (1, 'personally.'), (1, 'personally'), (1, 'perfectly,'), (1, 'perfect'), (1, 'people'), (1, 'pays'), (1, 'patient'), (1, 'pass'), (1, 'parts'), (1, 'partnership.'), (1, 'partner'), (1, 'parses'), (1, 'paragraphs,'), (1, 'paper'), (1, 'painful'), (1, 'own.'), (1, 'overall'), (1, 'outside'), (1, 'output'), (1, 'others.'), (1, 'others'), (1, 'other.'), (1, 'ordered'), (1, 'order.'), (1, 'order,'), (1, 'orchestrate'), (1, 'opposite'), (1, 'operating'), (1, 'open'), (1, 'onto'), (1, 'ones.'), (1, 'ones,'), (1, 'one.'), (1, 'one-line'), (1, 'off.'), (1, 'occurs.'), (1, 'obsessed'), (1, 'now,'), (1, 'nonlinear'), (1, 'noises.'), (1, 'night'), (1, 'news'), (1, 'newly'), (1, 'newfound'), (1, 'never'), (1, 'network.'), (1, 'network,'), (1, 'neither'), (1, 'needed'), (1, 'nearly'), (1, 'nature'), (1, 'naturally'), (1, 'natural.'), (1, 'nap,'), (1, 'nagging'), (1, 'my'), (1, 'muse'), (1, 'mundane'), (1, 'multiply'), (1, 'moved'), (1, 'mouse,'), (1, 'mostly'), (1, 'more.'), (1, 'months'), (1, 'money'), (1, 'moments'), (1, 'mm'), (1, 'minds'), (1, 'mind-numbing.'), (1, 'millions'), (1, 'microphone,'), (1, 'microphone'), (1, 'messages'), (1, 'message'), (1, 'merely'), (1, 'memory.'), (1, 'meet'), (1, 'meant,'), (1, 'meaningful'), (1, 'mean,'), (1, 'material.'), (1, 'marvel'), (1, 'marks'), (1, 'manually'), (1, 'manual'), (1, 'making'), (1, 'made'), (1, 'machine.'), (1, 'machine-code'), (1, 'low-level'), (1, 'loving'), (1, 'lot'), (1, 'looked'), (1, 'longer'), (1, 'long'), (1, 'logical'), (1, 'living'), (1, 'lives.'), (1, 'lives'), (1, 'link'), (1, 'linearly,'), (1, 'linear'), (1, 'light'), (1, 'library,'), (1, 'library'), (1, 'left.'), (1, 'leaving'), (1, 'leaves'), (1, 'leave'), (1, 'least'), (1, 'learned'), (1, 'leads'), (1, 'latitude'), (1, 'late'), (1, 'laptops'), (1, 'languages,'), (1, 'language?'), (1, 'language).'), (1, 'land'), (1, 'lambda'), (1, 'labels'), (1, 'label'), (1, 'keyboard.'), (1, 'keyboard,'), (1, 'key'), (1, 'journey'), (1, 'itself.'), (1, 'itemize'), (1, 'it),'), (1, 'issue'), (1, 'is,'), (1, 'investigation.'), (1, 'inventiveness'), (1, 'invalid'), (1, 'intuition,'), (1, 'intricate'), (1, 'intersection'), (1, 'interprets'), (1, 'interpreters,'), (1, 'interpreters'), (1, 'interpreter,'), (1, "interpreter's"), (1, 'intermediary.'), (1, 'intermediary'), (1, 'interesting'), (1, 'interested'), (1, 'interest.'), (1, 'interactively.'), (1, 'interactively,'), (1, 'interacting'), (1, 'interact'), (1, 'intelligent.'), (1, 'instruction'), (1, 'instead,'), (1, 'installs'), (1, 'install'), (1, 'inside'), (1, 'insert'), (1, 'input/output'), (1, 'input'), (1, 'initial'), (1, 'information,'), (1, 'indicates'), (1, 'indeed'), (1, 'incorrect'), (1, 'in?'), (1, 'improved'), (1, 'improve'), (1, 'import'), (1, 'impenetrable.'), (1, 'immediately'), (1, 'imagine'), (1, 'idea.'), (1, 'idea'), (1, 'hurry.'), (1, 'human-to-dog'), (1, 'http://www.py4e.com/code/'), (1, 'holds'), (1, 'hesitate'), (1, 'helps'), (1, 'help.'), (1, 'hear'), (1, 'health,'), (1, 'hateful,'), (1, 'harsh,'), (1, 'hardware.'), (1, 'hardware,'), (1, 'hardest'), (1, 'hard,'), (1, 'hard'), (1, 'happy'), (1, 'happening?'), (1, 'handling'), (1, 'handle'), (1, 'handed'), (1, 'hammer'), (1, 'gurgling'), (1, 'grudge,'), (1, 'grudge'), (1, 'grammar.'), (1, 'got'), (1, 'good-bye'), (1, 'global'), (1, 'given'), (1, 'gained'), (1, 'gain'), (1, 'fun.'), (1, 'fun'), (1, 'front'), (1, 'friend'), (1, 'fresh'), (1, 'frequently'), (1, 'frankly'), (1, 'fragments'), (1, 'four'), (1, 'found'), (1, 'forwards'), (1, 'form'), (1, 'for.'), (1, 'foot'), (1, 'following:'), (1, 'focus'), (1, 'fly.'), (1, 'flash'), (1, 'fixing'), (1, 'fix.'), (1, 'fit'), (1, 'fire,'), (1, 'financially'), (1, 'finally'), (1, 'fetch.'), (1, 'feedback.'), (1, 'features,'), (1, 'fashion,'), (1, 'farm'), (1, 'faraway'), (1, 'far'), (1, 'fall'), (1, 'fail.'), (1, 'eyes.'), (1, 'express'), (1, 'explaining'), (1, 'experiment'), (1, 'experience'), (1, 'exercises,'), (1, 'execution.'), (1, 'execution'), (1, 'executing'), (1, 'executable.'), (1, 'exec'), (1, 'exchange'), (1, 'examples'), (1, 'evidence'), (1, 'ever'), (1, 'etc.'), (1, 'essentially'), (1, 'errors:'), (1, 'errors,'), (1, 'error..'), (1, 'equivalent'), (1, 'entire'), (1, 'entered.'), (1, 'encountered'), (1, 'enclosed'), (1, 'emotions'), (1, 'else,'), (1, 'elif'), (1, 'elements'), (1, 'elegant,'), (1, 'elegant'), (1, 'effort.'), (1, 'editor,'), (1, 'editor'), (1, 'eat'), (1, 'easier'), (1, 'earliest'), (1, 'dynamic'), (1, 'drives'), (1, 'drink'), (1, 'download'), (1, 'down,'), (1, 'dogs'), (1, 'dog),'), (1, 'do.'), (1, 'disk'), (1, 'discussion'), (1, 'dinner.'), (1, 'difficult'), (1, 'devices.'), (1, 'device'), (1, 'deviation'), (1, 'developing'), (1, 'details,'), (1, 'detailed'), (1, 'designed'), (1, 'delegate'), (1, 'del'), (1, 'definition,'), (1, 'definition'), (1, 'defining'), (1, 'def'), (1, 'days,'), (1, 'data/information'), (1, 'data.'), (1, 'daily'), (1, 'cute'), (1, 'current-day'), (1, 'cruel.'), (1, 'creators'), (1, 'creativity,'), (1, 'created'), (1, 'crazy'), (1, 'crafted'), (1, 'count'), (1, 'correct,'), (1, 'copy'), (1, 'copied'), (1, 'convey'), (1, 'convert'), (1, 'converse'), (1, 'conversations'), (1, 'convention,'), (1, 'continuously'), (1, 'continue'), (1, 'contains'), (1, 'contained'), (1, 'consult'), (1, 'constructs'), (1, 'constructing'), (1, 'confusion'), (1, 'conditions'), (1, 'conceptual'), (1, 'computer:'), (1, 'computer),'), (1, 'computed'), (1, 'composing'), (1, 'compose'), (1, 'components'), (1, 'complete'), (1, 'compilers.'), (1, 'competing'), (1, 'compensated'), (1, 'communicating'), (1, 'commonly'), (1, 'combine'), (1, 'coherent'), (1, 'code,'), (1, 'clown'), (1, 'cleverness'), (1, 'clever'), (1, 'class'), (1, 'choose'), (1, 'choice.'), (1, 'chisel'), (1, 'chapters.'), (1, 'chapter.'), (1, 'certain'), (1, 'cell'), (1, 'cause'), (1, 'categories:'), (1, 'care'), (1, 'car.'), (1, 'capable'), (1, 'came'), (1, 'calls'), (1, 'built.'), (1, 'builders,'), (1, 'build'), (1, 'bring'), (1, 'break,'), (1, 'break'), (1, 'brand-new'), (1, 'bottle.'), (1, 'bottle,'), (1, 'boring'), (1, 'blocks'), (1, 'blah.'), (1, 'behind'), (1, 'behalf.'), (1, 'behalf'), (1, 'beginning.'), (1, 'before'), (1, 'been'), (1, 'becomes'), (1, 'beautiful'), (1, 'be,'), (1, 'barn,'), (1, 'backwards'), (1, 'backpack,'), (1, 'awesome'), (1, 'attention'), (1, 'attempts.'), (1, 'astronauts'), (1, 'assure'), (1, 'assumes'), (1, 'assistants'), (1, 'assistant'), (1, 'assert'), (1, 'asking'), (1, 'asked.'), (1, 'around'), (1, 'arguing'), (1, 'architecture'), (1, 'approach'), (1, 'applications'), (1, 'appear'), (1, 'anyone'), (1, 'answers'), (1, 'answer'), (1, 'another.'), (1, 'analyze'), (1, 'amounts'), (1, 'amount'), (1, 'amazingly'), (1, 'always'), (1, 'against'), (1, 'after'), (1, 'afraid'), (1, 'advantage'), (1, 'advanced'), (1, 'advance.'), (1, 'add'), (1, 'act'), (1, 'accurately'), (1, 'above.'), (1, 'above'), (1, 'Write'), (1, 'Words'), (1, 'Windows,'), (1, 'Why'), (1, 'Usually'), (1, 'Unlike'), (1, 'Unless'), (1, 'Unix'), (1, 'Understanding'), (1, 'USB'), (1, 'Typing'), (1, 'To'), (1, 'Terminology:'), (1, 'Take'), (1, 'SyntaxError:'), (1, 'Sometimes'), (1, 'Some'), (1, 'Social'), (1, 'Since'), (1, 'Second,'), (1, 'Ruby,'), (1, 'Python:'), (1, 'Programs'), (1, 'Programmers'), (1, 'Planet'), (1, 'Perl,'), (1, 'PHP,'), (1, 'PDA:'), (1, 'Output'), (1, 'Other'), (1, 'OK'), (1, 'Network'), (1, 'Memory.'), (1, 'Main'), (1, 'Macintosh,'), (1, 'Macintosh'), (1, 'Linux'), (1, 'Lets'), (1, "Let's"), (1, 'Later'), (1, 'JavaScript,'), (1, 'Java,'), (1, 'Its'), (1, 'Is'), (1, 'Interestingly,'), (1, 'Instead'), (1, 'Input'), (1, 'Hah!'), (1, 'Gigahertz,'), (1, 'Get'), (1, 'GPS.'), (1, 'Frankly'), (1, 'First,'), (1, 'Examples'), (1, 'Display'), (1, 'Devices'), (1, 'Creativity'), (1, 'Conversing'), (1, 'Connection'), (1, 'Computing'), (1, 'Computer'), (1, 'Check'), (1, 'Chapter'), (1, 'CPU)'), (1, "CPU's"), (1, 'C++.'), (1, 'C++,'), (1, 'Building'), (1, 'Beginning'), (1, 'Because'), (1, 'Be'), (1, 'Basic,'), (1, 'An'), (1, 'All'), (1, 'Ah'), (1, 'Again'), (1, '>>>'), (1, '.py.'), (1, '.exe'), (1, '.dll'), (1, '...when'), (1, '---'), (1, '-'), (1, '(typically'), (1, '(two)'), (1, '(one)'), (1, '(in'), (1, '(i.e.,'), (1, '(a'), (1, '(Python)'), (1, '(PDA)'), (1, '(CPU)'), (1, '(>>>).'), (1, '(>>>),')]



# 5. see the top five words with the flipped list:

# 6. see the top five words with the flipped list:
for v,k in tmp[:5]:
    #Flip k and v here:
    print(k,v)
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


```python

```


```python

```


```python

```
