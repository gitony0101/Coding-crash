#ifndef LINKLIST_H
#define LINKLIST_H

//链表小结点
typedef struct LINKNODE {
  struct LINKNODE *next;
} LinkNode;

//链表结点
typedef struct LINKLIST {
  LinkNode head;
  int size;
} LinkList;

//初始化链表
LinkList *Init_LinkList();
/*插入
和之前的单向链表不同了，插入的不是void*data，而是LinkNode* data */
void Insert_LinkList(LinkList *list, int pos, LinkNode *data);
//删除
void Remove_LinkList(LinkList *list, int pos);
//返回链表大小
int Size_LinkList(LinkList *list);

#endif
