#include "DataSturucture.h"
// 链表初始化 (尾插方法初始化)
LinkList *initlinklist(int count)
{
    LinkList *head = (LinkList*)malloc(sizeof(LinkList));
    head->elem = -1;
    if (!head) {
        printf("MEMORY APPLY FAILED!!!\n");
        return NULL;
    }

    // temp 的作用让head指针在下面的过程中保持不变 一直指向第一个节点
    LinkList *temp = head;
    int i = 0;
    for (i = 1; i < count; ++i) {
        /* code */
        LinkList *new = (LinkList*)malloc(sizeof(LinkList));
        new->elem = i;
        new->next = NULL;

        temp->next = new;
        temp = temp->next;
    }

    return head;
}
// 插入链表元素  根据插入位置的不同 可以分为头插、尾插、中间插入
LinkList *insertElem(LinkList *head, int elem, int pos)
{
    LinkList *temp = head;
    LinkList *newNode = NULL;

    int i = 0;
    if (pos == 0 || pos == 1) {
        printf("0 or 1 is not insert position!!!!\n");
        return NULL;
    }

    for (i = 1; i < pos; i++) {
        if (temp == NULL) {
            printf("insert pos is valid!!!\n");
            return head;
        }
        temp = temp->next;
    }

    newNode = (LinkList*)malloc(sizeof(LinkList));
    newNode->elem = elem;
    newNode->next = temp->next;
    temp->next = newNode;
    return head;
}
// 链表删除元素
LinkList *deleteElem(LinkList *head, int pos)
{
    LinkList *temp = head;
    if (temp == NULL) {
        printf("LinkList is null!!!!\n");
        return NULL;
    }

    if (pos == 0 || pos == 1) {
        printf("0 or 1 is not delete position!!!!\n");
        return NULL;
    }
    LinkList *del = NULL;
    int i = 0;
    for (i = 1; i < pos; i++) {
        temp = temp->next;
    }
    del = temp->next;
    temp->next = temp->next->next;
    free(del);
    return head;
}
// 链表查找元素 (根据值查找)
int selectElem(LinkList *head, int elem)
{
    LinkList *temp = head;

    if (temp == NULL) {
        printf("LinkList is null!!!!\n");
        return -1;
    }
    int pos = 1;
    while (temp->next)
    {
        temp = temp->next;
        if (temp->elem == elem) return pos;
        pos++;
    }
    return pos;
}
// 链表更新元素
LinkList *updateLinklist(LinkList *head, int pos, int newElem)
{
    int i = 0;
    LinkList *temp = head;
    temp = temp->next; // temp指向的是首元节点

    for (i = 1; i < pos; ++i) {
        temp = temp->next;
    }

    temp->elem = newElem;
    return head;
}
// 打印链表
void display(LinkList *head)
{
    LinkList *temp = head;
    while (temp) {
        printf("%d\t", temp->elem);
        temp = temp->next;
    }
    printf("\n");
}

// 单链表的反转
// (1) 迭代反转法
LinkList *itertrator_reverse(LinkList *head)
{
    if (head == NULL || head->next == NULL) {
        printf("LinkList is NULL!!!\n");
        return head;
    } else {
        LinkList *beg = NULL;
        LinkList *mid = head;
        LinkList *end = head->next;

        while (1) {
            // 修改mid 节点的指向
            mid->next = beg;
            // mid 走到最后一个节点，end为NULL
            if (end == NULL) {
                break;
            }
            beg = mid;
            mid = end;
            end = end->next;
        }

        head = mid;
        return head;
    }
}

// (2) 递归反转法
LinkList *recurise_reverse(LinkList *head)
{
    if (head == NULL || head->next == NULL) {
        // printf("LinkList is NULL or only onde node!!!\n");
        return head;
    } else {
        LinkList *new_head = recurise_reverse(head->next);
        head->next->next = head;
        head->next = NULL;
        return new_head;
    }
}