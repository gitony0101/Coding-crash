# 指针 引用


## **指针\*是地址，引用&是别名**

- `*`又叫间接符号


## 引用 reference


引用为对象起了另外一个名字，**指向的是对象的地址，而不是对象本身**,同时，`&`被叫做取地址运算符


### 引用变量


- 它是引用的那个变量的 alias 简写，**改变这个引用变量会同时改变它引用的那个变量**
- 不会分配内存
- 在声明前必须被初始化
- 不需要解引用，比指针更好理解
- 工作起来就像是变量


坏处：


- 不如指针强大灵活


## 指针 pointer


指针(pointer)是“指向(point to)”另外一种类型的复合类型。


- **指针实现了对其他对象的间接访问**


- 指针本身就是一个对象，允许对指针赋值和拷贝，而且**在指针的生命周期内它可以先后指向几个不同的对象**。
- 指针无须在定义时赋初值。和其他内置类型一样，在块作用域内定义的指针如果没有被初始化，也将拥有一个不确定的值。
- 指针可以被赋值为 NULL，表示指向一个空指针。
- 指针既包含了一个地址，也包含了一个类型。


关于指针：


1. 存储的是变量的内存地址
2. 为了访问数据必须先解决内存地址
3. 指针很有用，使用时注意也会引发危险
4. 指针的本质也是局部变量，放在栈上，指针保存的数据是放在堆区


## 想清楚： `*(&val) = ?`


是的，`*(&val) = val`，val 是一个变量，目前你这么理解是对的。


- `*`被叫做取值运算符，首先我们用了`&`去访问 val 的内存地址，然后用了`*`取到了这个内存地址的值，所以`*(&val)`是`val`的值。


## 空指针和野指针


空指针和野指针都不是我们随意申请的空间，因此请不要访问。


### 空指针用于初始化指针变量


空指针指向内存变量 0，且不可被访问


```c++
int * p = NULL;
```

### 野指针指向非法内存空间


程序中避免出现


## const 引用与指针


### Const-冻结： 可以冻结它后面的的指令所代表的含义


指针与 const


- 指针两大操作空间：一个是重新指向，一个是变换当前值
  - `double const*`指向不可动,不能够变换指向
  - `const double*`指向的值不可以修改
  - `const double const*`也不能动，也不能变


引用与 const


- 引用只有`const double&`相当于指针的`const double const*`，也不能动，也不能变


### 无类型指针`void *ptr`


`void *ptr`为无类型指针，指向任何类型的数据。


```c++
typedef struct LINKNODE {
  void *data; //数据域,void*为无类型指针，指向任何类型的数据
  struct LINKNODE *next; //指针域
} LinkNode;
```

### 回调函数与指针


- C++ 指针应用的精髓


```c++
int Find_LinkList(LinkList *list, LinkNode *data, COMPARENODE compare) {
  if (list == NULL) {
    return -1;
  }
  if (data == NULL) {
    return -1;
  }
  //创建辅助指针变量便利查找，头节点不看，直接next
  LinkNode *pCurrent = list->head.next;
  int index = 0; //初始化索引为0
  while (pCurrent != NULL) {
    //查找功能什么时候找到呢：需要做一个判断，引入比较函数指针
    if (compare(pCurrent, data) == 0) {
        break;

    }
    pCurrent = pCurrent->next;
    index++;
  }

  return index; //找到了就返回index的值，找不到就返回-1
};

```

## 引用指针小结


> C++ 提供了两种指针运算符，一种是取地址运算符 `&`，一种是间接寻址运算符 `*`。


指针是一个包含了另一个变量地址的变量，您可以把一个包含了另一个变量地址的变量说成是"指向"另一个变量。变量可以是任意的数据类型，包括对象、结构或者指针。


- 取地址运算符 `&`


`&` 是一元运算符，返回操作数的内存地址。例如，如果 `var` 是一个整型变量，则 `&var` 是它的地址。该运算符与其他一元运算符具有相同的优先级，在运算时它是从右向左顺序进行的。您可以把 `&` 运算符读作"取地址运算符"，这意味着，`&var` 读作"var 的地址"。


- 间接寻址运算符 `*`


第二个运算符是间接寻址运算符，它是 `&` 运算符的补充。`*`是一元运算符，返回操作数所指定地址的变量的值。


> 从某种角度看，引用就是固定指向的指针
>
> (可以认为 引用就是`double *const`)


```c++

#include <iostream>
using namespace std;

int luckyNumbers[5] = {2, 3, 4, 5, 6};

int main() {
  printf("%p\n", luckyNumbers); // cout << luckyNumbers << endl; memory addres
                                // of luckyNumbers
  printf("'&luckynumbers[0]': %p\n",
         &luckyNumbers[0]); // memory address of luckyNumbers[0]
  printf("'&luckynumbers[1]': %p\n",
         &luckyNumbers[1]); // memory address of luckyNumbers[1]
  printf("'luckynumbers[2]': %d\n", luckyNumbers[2]); // deferencing
  printf("'*(luckynumbers)': %d\n", *luckyNumbers);   // deferencing
  printf("'*(luckynumbers+2)': %d\n",
         *(luckyNumbers +
           2)); // equivalent to luckyNumbers[2], which is
                // accessing the 3rd element of the array,deferencing.

  int numslist[5];
  for (int i = 0; i <= 4; i++) {
    printf("Please enter a number(5 in total) :");
    cin >> numslist[i];
  }
  for (int i = 0; i <= 4; i++) {
    printf("The number array is: %d\n", *(numslist + i)); // * get the value
                                                          // of the array
  }
}


```


```c++
#include <iostream>
using namespace std;
int getMin(int numbers[], int size) {
  int min = numbers[0];
  for (int i = 1; i < size; i++) {
    if (numbers[i] < min)
      min = numbers[i];
  }
  return min;
}

int getMax(int numbers[], int size) {
  int max = numbers[0];
  for (int i = 1; i < size; i++) {
    if (numbers[i] > max)
      max = numbers[i];
  }
  return max;
}

int main() {

  int numArr[5] = {1, 3, -4, 5, 7};
  printf("The min number is: %d\n", getMin(numArr, 5));
  printf("The max numbers is: %d\n", getMax(numArr, 5));
}


```


```c++
#include <iostream>
using namespace std;

int main() {
  int x = 10;

  // ref is a reference to X.
  int &ref = x;
  cout << ref << endl;

  // Value of x is now changed to 20
  ref = 20;
  cout << "x = " << x << endl;

  // Value of x is now changed to 30
  x = 30;
  cout << "ref = " << ref << endl;
}


```

