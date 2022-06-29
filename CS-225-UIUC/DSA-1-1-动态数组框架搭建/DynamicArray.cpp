#include "DynamicArray.h" // 把对应头文件引入进来
#include <stdio.h>
#include <stdlib.h>
#include <string.h> // memcpy

Dynamic_Array *Init_Array() { //动态数组初始化
  //申请内存 malloc开辟
  Dynamic_Array *myArray = (Dynamic_Array *)malloc(sizeof(Dynamic_Array));
  //初始化 地址addr、元素个数size、容量capacity
  myArray->capacity = 20; //初始化容量，给20个空间
  myArray->size = 0;      //初始化元素个数为零
  myArray->pAddr = (int *)malloc(
      sizeof(int) * myArray->capacity); //开辟内存空间，用整型大小乘以capacity
  return myArray; //一开始没写好的时候这里先默认NULL
}

// 先把5 - 10功能写完，再写2-5增删改

// 2、插入
void PushBack_Array(Dynamic_Array *arr, int value) {
  if (arr == NULL) { //首先判断是否指针为空
    return;
  }
  //判断空间是否足够
  if (arr->size == arr->capacity) { //判断是否空间已经满了
                                    //第一步 申请一块更大的空间
    int *newSpace = (int *)malloc(sizeof(int) * arr->capacity *
                                  2); //默认新空间是旧空间的两倍
    //第二步 拷贝数据到新的空间
    // memcpy(),目标空间，原空间，空间大小为新的空间大小，注意乘以sizeof
    memcpy(newSpace, arr->pAddr, arr->capacity * sizeof(int));
    //第三步，释放旧空间的内存
    free(arr->pAddr);
    //第四步 更新容量和指针指向
    arr->capacity = arr->capacity * 2;
    arr->pAddr = newSpace; //内存指向新空间，至此新空间开辟完成
  }
  //插入新元素 从尾部插入
  arr->pAddr[arr->size] = value; //最后一位就是pos[arr->size],赋值value
  arr->size++;                   //记得要累加这个size
};

// 4、查找 int类型
int Find_Array(Dynamic_Array *arr, int value) {
  if (arr == NULL) {
    return -1; //返回-1说明出错
  }
  //找到值的位置
  int pos = -1; //初始化位置值为-1防止误操作
  for (int i = 0; i < arr->size; i++) {
    if (arr->pAddr[i] == value) {
      pos = i; //找到了这个位置，赋值给pos
      break;   //停止查找了
    }
  }
  return pos;
};

// 3、删除 情况：根据位置删除和根据值删除
// 3.1、根据位置删除
void RemoveByPos_Array(Dynamic_Array *arr, int pos) {
  if (arr == NULL) { //首先判断是否指针为空
    return;
  }
  //其次判断位置是否有效
  if (pos < 0 || pos >= arr->size) {
    return;
  }
  //删除元素的指令
  for (int i = pos; i < arr->size - 1; i++) {
    arr->pAddr[i] = arr->pAddr[i + 1]; //向前覆盖了
  }
  arr->size--; //往前缩进一位
};
// 3.2、 根据值删除
// 注意；这只是删除的value第一次出现的那个位置上的值
void RemoveByValue_Array(Dynamic_Array *arr, int value) {
  if (arr == NULL) {
    return;
  }
  int pos = Find_Array(arr, value); //嵌套上面的查找函数
  //嵌套根据位置删除
  RemoveByPos_Array(arr, pos); //这里的嵌套有意思
};

// 5、 打印
void Print_Array(Dynamic_Array *arr) {
  for (int i = 0; i < arr->size; i++) {
    printf("%d ", arr->pAddr[i]);
  }
  printf("\n");
};
// 6、 释放动态数组的内存
void FreeSpace_Array(Dynamic_Array *arr) { //先释放内部内存，再释放外面的
  if (arr == NULL) {                       //首先判断是否指针为空
    return;
  }
  if (arr->pAddr != NULL) {
    free(arr->pAddr);
  }
  free(arr);
};

//再有新的功能可以继续增加
// 7、 清空数组
void Clear_Array(Dynamic_Array *arr) {
  if (arr == NULL) { //首先判断是否指针为空
    return;
  }
  // pAddr -> 空间
  arr->size = 0; //直接等于0即可清空
};
// 8、获得动态数组容量
int Capacity_Array(Dynamic_Array *arr) {
  if (arr->capacity == 0) { //首先判断是否指针为空
    return 0;
  }
  return arr->capacity; //一开始需要写默认值返回0
};
// 9、 获得动态数组当前元素个数
int Size_Array(Dynamic_Array *arr) {
  if (arr == NULL) {
    return 0;
  } //需要写默认值返回0
  return arr->size;
};
// 10、根据位置获得某个元素位置
int At_Array(Dynamic_Array *arr, int pos) {
  return arr->pAddr[pos]; //一开始需要写默认值返回0
  //此处不用再判断报错，如果返回值无效直接越界
};
