#include <stdio.h>
#include <stdlib.h>

struct ListNode{
    int val;
    struct ListNode* next;
};

// 创建节点
struct ListNode* creat_new_node(int value)
{
    struct ListNode* node  = (struct ListNode*)malloc(sizeof(struct ListNode));
    node->val = value;
    node->next  =NULL;
    return node;
}
// 打印函数
void print_list(struct ListNode* head)
{
    struct ListNode* tmp = head;
    while(tmp!=NULL)
    {
        printf("%d->",tmp->val );
        tmp = tmp->next;
    }
    printf("NULL\n");
}
// 合并两个有序的链表
struct ListNode* megreTwoLists(struct ListNode* list1, struct ListNode* list2){
    struct ListNode* dummy = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* p1 = list1;
    struct ListNode* p2 = list2;
    struct ListNode* p3 = dummy;
    if (p1 ==NULL){
        return p2;
    }
    if (p2 == NULL){
        return p1;
    }
    while(p1 && p2)
    {
        if (p1->val >= p2->val)
        {
            p3->next = p2;
            p3 = p3->next;
            p2 = p2->next;
        }
        else
        {
            p3->next = p1;
            p3 = p3->next;
            p1 = p1->next;
        }
    }
    // if (p1)
    // {
    //     p3->next = p1;
    // }
    // else{
    //     p3->next = p2;
    // }
    p3->next = p1? p1 : p2;// 
    struct ListNode* res = dummy->next;
    free(dummy);
    return res;
}

int main()
{
    // 创建两个链表
    struct ListNode* List1 = creat_new_node(1);
    List1->next = creat_new_node(3);
    List1->next->next = creat_new_node(5);
    struct ListNode* List2 = creat_new_node(2);
    List2->next = creat_new_node(4);
    List2->next->next = creat_new_node(6);
    struct ListNode* res = megreTwoLists(List1, List2);
    print_list(res);
    struct ListNode* tmp;
    while(res!=NULL)
    {
        tmp = res;
        res = res->next;
        free(tmp);
    }
    return 0;

}