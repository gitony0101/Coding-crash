#include "DynamicArray.h" // 把对应头文件引入进来
#include <stdlib.h>

Dynamic_Array *Init_Array() { //初始化，需要默认返回NULL
  //申请内存 malloc开辟
  Dynamic_Array *myArray = (Dynamic_Array *)malloc(sizeof(Dynamic_Array));
  //初始化 地址addr、元素个数size、容量capacity
  return NULL;
}

// 2、插入
void PushBack_Array(Dynamic_Array *arr, int value){

};
// 3、删除 情况：根据值删除和根据位置删除
void RemoveByPos_Array(Dynamic_Array *arr, int pos){

};
void RemoveByValue_Array(Dynamic_Array *arr, int value){

};

// 4、查找 int类型
int Find_Array(Dynamic_Array *arr, int value) {
  return 0; //需要写默认值返回0
};
// 5、 打印
void Print_Array(Dynamic_Array *arr){

};
// 6、 释放动态数组的内存
void FreeSpace_Array(Dynamic_Array *arr){

};

//再有新的功能可以继续增加
// 7、 清空数组
void Clear_Array(Dynamic_Array *arr){

};
// 8、获得动态数组容量
int Capacity_Array(Dynamic_Array *arr) {
  return 0; //需要写默认值返回0
};
// 9、 获得动态数组当前元素个数
int Size_Array(Dynamic_Array *arr) {
  return 0; //需要写默认值返回0
};
//根据位置获得某个位置元素
int At_Array(Dynamic_Array *arr, int pos) {
  return 0; //需要写默认值返回0
};
