## 范型和模板 Generic and Template

### 范型编程

Generic programming is writing code once that works with different types rather than having to repeat the same code multiple times by copying and pasting each type you want to support. In C++, you use templates to produce generic code. Templates are a special kind of parameter that tells the compiler to represent a wide range of possible types.

In this chapter we just introduce these concepts，since Generic and Template is more than this.

```c++
#include <iostream>
    using namespace std;

    template <typename T> // declare the template "args" as T,  typename is the
                          // kyeword you can use class (ANOTHER TYPTE) etc.

                          void Swap(T &a, T &b) { // & as reference, we will go
                                                  // througt it later.
      T temp = a;
      a = b;
      b = temp;
    }

    int main() {
      int a = 5, b = 7;
      cout << "Initially, a = " << a << "and b = " << b << endl;
      Swap(a, b);
      cout << "Now, a = " << a << "and b = " << b << endl;

      char c = 'c', d = 'd';
      cout << "Initially, c = " << c << "and d = " << d << endl;
      Swap(c, d);
      cout << "Now, c = " << c << "and d = " << d << endl;
    }


```

代码先放这里

```c++
//
#include <iostream>
using namespace std;

template <typename T> // declare the template "args" as T,  typename is the
                      // kyeword you can use class (ANOTHER TYPTE) etc.

void Swap(T &a, T &b) { // & as reference, we will go
                        // througt it later.
  T temp = a;
  a = b;
  b = temp;
}

int main() {
  int a = 5, b = 7;
  cout << "Initially, a = " << a << "and b = " << b << endl;
  Swap(a, b);
  cout << "Now, a = " << a << "and b = " << b << endl;

  char c = 'c', d = 'd';
  cout << "Initially, c = " << c << "and d = " << d << endl;
  Swap(c, d);
  cout << "Now, c = " << c << "and d = " << d << endl;
}
```
