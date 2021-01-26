#ifndef __DATASTURUCTURE__H__
#define __DATASTURUCTURE__H__
/**
 * @file DataSturucture.h
 * @author wpb (19963435176@163.com)
 * @brief DataStructure achieve
 * @version 0.1
 * @date 2021-01-26
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <stdio.h>
#include <stdlib.h>

// single linklist achieve
typedef struct LinkList
{
    /* data */
    int elem;
    struct LinkList *next;
}LinkList, *List;

// 链表初始化
LinkList *initlinklist(int count);
// 插入链表元素  根据插入位置的不同 可以分为头插、尾插、中间插入
LinkList *insertElem(LinkList *head, int elem, int pos);
// 链表删除元素
LinkList *deleteElem(LinkList *head, int pos);
// 链表查找元素
int selectElem(LinkList *head, int elem);
// 链表更新元素
LinkList *updateLinklist(LinkList *head, int pos, int newElem);
// 打印链表
void display(LinkList *head);


// 单链表的反转
// (1) 迭代反转法
LinkList *itertrator_reverse(LinkList *head);
// (2) 递归反转法
LinkList *recurise_reverse(LinkList *head);

// test funciton
// void SingleLinklistTest();

#endif  //!__DATASTURUCTURE__H__