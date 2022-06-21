#include <iostream>
using namespace std;

#include "LinkList.h"

//初始化链表
LinkList *Init_LinkList(){

};
//指定位置插入数据
void Insert_LinkList(LinkList *list, int pos, void *data);
//删除指定位置的值
void Remove_LinkList(LinkList *list, int pos);
//获得链表长度
int Size__LinkList(LinkList *list);
//查找（根据指针查找） 不一定要放到这里，看看能否跟其他功能结合
int Find_linkList(LinkList *list, void *data);

//返回第一个结点
void *Front_LinkList(LinkList *list);
//打印链表结点
void Print_LinkList(LinkList *list, PRINTLINKNODE print);
//释放链表内存
void FreeSpace_LinkList(LinkList *list);
