#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node * next;
};

void traversal(struct node * head){
    while (head != NULL)
    {
        printf("%d ", head->data);
        head = head->next;
    }
}

struct node * mergebwlist(struct node* list1, int a, int b, struct node* list2){
    struct node * ptr = list1;
    struct node * temp = list1;
    while(ptr->next->data != a){
        ptr = ptr->next;
        temp = temp->next;
    }
    while(temp->data != b){
        temp = temp->next;
    }

    ptr->next = list2;
    while(list2->next != NULL){
        list2 = list2->next;
    }
    list2->next = temp->next;
    return list1;
}

int main(){
    struct node * head1 = (struct node *)malloc(sizeof(struct node));
    struct node * sec1 = (struct node *)malloc(sizeof(struct node));
    struct node * thi1 = (struct node *)malloc(sizeof(struct node));
    // struct node * fou1 = (struct node *)malloc(sizeof(struct node));
    // struct node * fif1 = (struct node *)malloc(sizeof(struct node));
    // struct node * six1 = (struct node *)malloc(sizeof(struct node));
    head1->data = 0;
    sec1->data = 1;
    thi1->data = 2;
    // fou1->data = 3;
    // fif1->data = 5;
    // six1->data = 9;
    head1->next = sec1;
    sec1->next = thi1;
    thi1->next = NULL;
    // fou1->next = fif1;
    // fif1->next = six1;
    // six1->next = NULL;
    
    struct node * head2 = (struct node *)malloc(sizeof(struct node));
    struct node * sec2 = (struct node *)malloc(sizeof(struct node));
    struct node * thi2 = (struct node *)malloc(sizeof(struct node));
    struct node * fou2 = (struct node *)malloc(sizeof(struct node));
    head2->data = 100000;
    sec2->data =  100001;
    thi2->data =  100002;
    fou2->data =  100003;
    head2->next = sec2;
    sec2->next = thi2;
    thi2->next = fou2;
    fou2->next = NULL;
    traversal(head1);
    head1 = mergebwlist(head1, 1, 1, head2);
    printf("\n");
    traversal(head1);
}