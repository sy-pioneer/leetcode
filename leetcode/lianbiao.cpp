#include <stdio.h>
#include <stdlib.h>

// 定义一个节点
struct Node {
    int data;           // 数据域
    struct Node* next;  // 指针域，指向下一个节点
};
// 循环遍历连表
void printflist(struct Node* head) {
    struct Node* current = head; // 从头节点开始遍历链表
    while (current != NULL) {
        printf("%d ", current->data); // 打印当前节点的数据
        current = current->next; // 移动到下一个节点
    }
    printf("\n");
}
// 递归遍历链表
void printflist_recursive(struct Node* head) {
    if (head == NULL) { // 递归终止条件：当节点为NULL时返回
        return;
    }
    printf("%d \n", head->data); // 打印当前节点的数据
    printflist_recursive(head->next); // 递归调用，处理下一个节点
}

int main() {
    // 创建一个链表
    struct Node node01 = {11, NULL}; // 创建第一个节点，数据为1，指针域初始化为NULL
    struct Node node02 = {22, NULL}; // 
    struct Node node03 = {33, NULL}; // 
    node01.next = &node02; // 将第一个节点的指针域指向第二个节点
    node02.next = &node03; // 将第二个节点的指针域指向第三个节点
    // printf("node01.data = %d\n", node01.data); // 输出第一个节点的数据
    // printf("node02.data = %d\n", node01.next->data); 
    // printf("node03.data = %d\n", node01.next->next->data); 

    // struct Node* point = &node01; // 定义一个指针，指向第一个节点
    // while (point != NULL) { // 遍历链表，直到指针为NULL
    //     printf("%d \n", point->data); // 输出当前节点的数据
    //     point = point->next; // 将指针移动到下一个节点
    // }

    // printflist(&node01); // 打印链表中的数据
    printflist_recursive(&node01); // 递归打印链表中的数据

    // struct Node* head = (struct Node*)malloc(sizeof(struct Node)); // 创建头节点
    // head->data = 1; // 给头节点赋值
    // head->next = NULL; // 头节点的下一个节点指针初始化为NULL

    // // 添加更多节点
    // struct Node* second = (struct Node*)malloc(sizeof(struct Node)); // 创建第二个节点
    // second->data = 2; // 给第二个节点赋值
    // second->next = NULL; // 第二个节点的下一个节点指针初始化为NULL

    // head->next = second; // 将头节点的下一个节点指向第二个节点

    // struct Node* third = (struct Node*)malloc(sizeof(struct Node)); // 创建第三个节点
    // third->data = 3; // 给第三个节点赋值
    // third->next = NULL; // 第三个节点的下一个节点指针初始化为NULL

    // second->next = third; // 将第二个节点的下一个节点指向第三个节点

    // // 打印链表中的数据
    // struct Node* current = head; // 从头节点开始遍历链表
    // while (current != NULL) {
    //     printf("%d ", current->data); // 打印当前节点的数据
    //     current = current->next; // 移动到下一个节点
    // }
    // printf("\n");

    // // 释放内存
    // free(third); // 释放第三个节点的内存
    // free(second); // 释放第二个节点的内存
    // free(head);   // 释放头节点的内存

    return 0;
}