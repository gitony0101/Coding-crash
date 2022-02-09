# py-notes

## Skills

### `-＞ List[int]` 的含义

**Python 函数声明中-＞ List[int]的含义**

    Solution:
        def twoSum(self, nums: List[int], target: int) -> List[int]:

这是 3.5 版中的新功能。您可以查看[文档](https://docs.python.org/3.5/library/typing.html)。

这就是所谓的“类型提示”（或“功能注释”；这些功能自 Python 3.0 起可用）。

    -> List[int] 表示该函数应返回一个整数列表。
    nums: List[int], target: int表示应该nums是整数列表，并且应该target是整数。

但是，这并不是硬性要求，即您仍然可以使用传递给这些参数的不同类型的对象来调用该函数，并且该函数还可以返回不同于整数列表的某些内容（与 Java 等其他语言中提供错误类型的情况不同）会导致编译错误）。换句话说：类型提示与程序执行无关，它们在运行时会被忽略（忽略类型提示只是默认行为，但可以在运行时通过来使用它们**annotations**，因此您可以对它们进行处理）。

类型提示可以表达作者的意图，并且可以在程序执行之前通过 mypy 之类的工具进行检查（这些提示可以检查，例如，仅使用正确类型的参数调用函数并返回正确类型的东西）。

请注意，List 它在标准名称空间中不可用（不同于 list），而是需要从中导入 typing，

    提供其它类型的标准类型，例如Set，Dict，Tuple，Callable等。
    允许定义自己的类型
    提供其他类型的类型化版本，例如NamedTuple代替namedtuple


