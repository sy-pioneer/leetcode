#include <stdio.h>
#include <stdlib.h>

// 定义结构体
struct ListNode{
    int val;
    struct ListNode* next;
};
// 打印函数
void printf_list (struct ListNode* head)
{
    struct ListNode* tmp = head;
    while(tmp != NULL)
    {
        printf("%d ->",tmp->val);
        tmp = tmp->next;
    }
    printf("NULL\n");
}
// 新建节点
struct ListNode* new_node(int value)
{
    struct ListNode* node = (struct ListNode*)malloc(sizeof(struct ListNode));
    node->val = value;
    node->next = NULL;
    return node;
}
// 新建链表
struct ListNode* creat_list(int arr[],int len)
{
    struct ListNode* head = new_node(arr[0]);
    struct ListNode*tmp = head;
    for(int i = 1;i < len;i++){
        tmp->next = new_node(arr[i]);
        tmp = tmp->next;
    }
    return head;
}
// 打印lists数组
void printf_lists(struct ListNode** lists, int listSize){
    printf("[\n");
    for(int i=0;i<listSize;i++)
    {
        printf("   ");
        printf_list(lists[i]);
        if(i<listSize-1) printf(",");
        printf("\n");
    }
    printf("]\n");    
}
// 合并K个升序链表
struct ListNode* mergeList(struct ListNode** lists, int listSize)
{
    struct ListNode* min_node = NULL;
    int min_index = -1;
    int min_val = INT_MAX;
    for(int i=0;i<listSize;i++)
    {
        if (lists[i])
        {
            if (lists[i]->val<min_val)
            {
                min_val = lists[i]->val;
                min_index = i;
            }
        }
    }
    if(min_index!=-1)
    {
        min_node = (struct ListNode*)malloc(sizeof(struct ListNode));
        min_node->val = min_val;
        lists[min_index] = lists[min_index]->next;
        min_node->next = mergeList(lists,listSize);
    }
    return min_node;
}
int main()
{
    int arr1[] = {1,2,3,4,5};
    int arr2[] = {2,3,4,5,6};
    int arr3[] = {3,4,5,6,7};

    int len = sizeof(arr1)/sizeof(arr1[0]);
    struct ListNode* list1 = creat_list(arr1,len);
    struct ListNode* list2 = creat_list(arr2,len);
    struct ListNode* list3 = creat_list(arr3,len);
    printf_list(list1);
    printf_list(list2);
    printf_list(list3);

    struct ListNode* lists[] = {list1,list2,list3};
    printf_lists(lists,3);
    struct ListNode* newlist = mergeList(lists,3);
    printf_list(newlist);
    return 0;
    
}