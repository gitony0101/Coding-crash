# 队列 双端队列 优先队列（堆）

- [queue 队列](https://zh.cppreference.com/w/cpp/container/queue)
- [dequeue 双端队列](https://zh.cppreference.com/w/cpp/container/deque)
- [priority_queue 优先队列](https://zh.cppreference.com/w/cpp/container/priority_queue)

## 1 队列 queue

**概念：**Queue 是一种**先进先出**(First In First Out,FIFO)的数据结构，它有两个出口

队列容器允许从一端新增元素，从另一端移除元素

队列中只有队头和队尾才可以被外界使用，因此队列不允许有遍历行为

队列中进数据称为 --- **入队** `push`

队列中出数据称为 --- **出队** `pop`

### 常用接口

总结：

- 入队 --- push
- 出队 --- pop
- 返回队头元素 --- front
- 返回队尾元素 --- back
- 判断队是否为空 --- empty
- 返回队列大小 --- size

## 2 deque 双端队列

**功能：**

- 双端队列(数组)，可以对头端进行插入删除操作

**deque 与 vector 区别：**

- vector 对于头部的插入删除效率低，数据量越大，效率越低
- deque 相对而言，对头部的插入删除速度回比 vector 快
- vector 访问元素时的速度会比 deque 快,这和两者内部实现有关

deque 内部工作原理:

deque 内部有个**中控器**，维护每段缓冲区中的内容，缓冲区中存放真实数据

中控器维护的是每个缓冲区的地址，使得使用 deque 时像一片连续的内存空间

- deque 容器的迭代器也是支持随机访问的

**总结** deque 容器和 vector 容器的构造方式几乎一致，灵活使用即可

## 3 优先队列 priority_queue

- 数据结构中的堆（heap）也称作优先队列（priority_queue），其内部可以看作是一棵完全二叉树，对于这棵树中的每一个结点来说，自身的优先级不低于左右孩子的优先级。
- 使用了大顶堆小顶堆的思想
- 适合动态调整求极值

这个容器很厉害，一个动态增长数组求中位数，可以用优先队列劈成两个数组，往中间挤

```c++
1 //升序队列，小顶堆
2 priority_queue <int,vector<int>,greater<int> > q;
3 //降序队列，大顶堆
4 priority_queue <int,vector<int>,less<int> >q;
//参数是反着的

```

