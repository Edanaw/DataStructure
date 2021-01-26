#include "DataSturucture.h"

void SingleLinklistTest()
{
    LinkList *head = initlinklist(4);
    display(head);
    
    insertElem(head, 9, 3);
    display(head);

    deleteElem(head, 4);
    display(head);

    // int x;
    // printf("please input search elem: \n");
    // scanf("%d", &x);
    // int pos = selectElem(head, x);
    // printf("elem is pos: %d\n", pos);

    // updateLinklist(head, 4, 112);
    // display(head);

    printf("iterator_reverse linklist: \n");
    // LinkList *new_head = itertrator_reverse(head);
    // display(new_head);

    LinkList *new_head2 = recurise_reverse(head);
    display(new_head2);


}

int main(void)
{
    // 1. singleLinkList
    SingleLinklistTest();

    return 0;
}