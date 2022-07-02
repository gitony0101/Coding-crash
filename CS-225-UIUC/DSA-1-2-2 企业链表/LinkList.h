#ifndef LINKLIST_H
#define LINKLIST_H

//链表小结点
typedef struct LINKNODE {
  struct LINKNODE *next;
} LinkNode;
//链表结构体
typedef struct LINKLIST {
  LinkNode head; //内存首地址
  int size;
} LinkList;
//遍历函数指针函数指针(打印企业链表结点指针)
typedef void (*PRINTNODE)(LinkNode *); // 与单向链表不同，这也是企业链表的特点
//比较函数指针
typedef int (*COMPARENODE)(LinkNode *, LinkNode *); //单向链表没有
//结构体定义完成

//初始化链表
LinkList *Init_LinkList();
/*插入和之前的单向链表不同了，插入的不是void*data，而是LinkNode* data */
void Insert_LinkList(LinkList *list, int pos, LinkNode *data);
//删除
void Remove_LinkList(LinkList *list, int pos);
//查找
int Find_LinkList(LinkList *list, LinkNode *data, COMPARENODE compare);
//返回链表大小
int Size_LinkList(LinkList *list);
//打印print是main函数里面的打印函数MyPrint
void Print_LinkList(LinkList *list, PRINTNODE print);
//释放链表内存
void FreeSpace_LinkList(LinkList *list);
#endif
