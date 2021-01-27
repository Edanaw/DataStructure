#include "DataSturucture.h"

void SingleLinklistTest()
{
    LinkList *head = initlinklist(4);
    display(head, 1);
    
    insertElem(head, 9, 3);
    display(head, 1);

    deleteElem(head, 4);
    display(head, 1);

    updateLinklist(head, 1, 112);
    display(head, 1);

    // int x;
    // printf("please input search elem: \n");
    // scanf("%d", &x);
    // int pos = selectElem(head, x);
    // printf("elem is pos: %d\n", pos);

    printf("iterator_reverse linklist: \n");
    LinkList *new_head = itertrator_reverse(head->next);
    display(new_head, 0);

    // 在前面的基础上进行的反转
    printf("recurise_reverse linklist: \n");
    LinkList *new_head2 = recurise_reverse(new_head);
    display(new_head2, 0);

    printf("head_reverse linklist: \n");
    LinkList *new_head3 = head_reverse(new_head2);
    display(new_head3, 0);

    printf("local_reverse linklist: \n");
    LinkList *new_head4 = local_reverse(new_head3);
    display(new_head4, 0);

}

int main(void)
{
    // 1. singleLinkList
    SingleLinklistTest();

    return 0;
}
