#include<stdio.h> 
#include<stdlib.h> 

struct node{
    int coeff; 
    int pow; 
    struct node *next;
}; 
struct node head1=NULL; 
struct node head2=NULL; 
struct node head2=NULL; 
void addPloy(struct node *ptr1,struct node *ptr2){
    struct node *head3,*ptr3,*temp3;
    head3=NULL; 
    if(ptr1==NULL && ptr2==NULL)
    return head3;  
    while(ptr1!=NULL && ptr2!=NULL){
        temp=(struct node *)malloc(sizeof(struct node)); 
        if(head3==NULL){
            head3=temp; 
            ptr3=head3;
        } 
        else{
            ptr3->next=temp; 
            ptr3=ptr3->next;   
        } 
        if(ptr1->pow == ptr2->pow){
            temp->ceff= ptr1->coeff + ptr2->coeff; 
            temp->pow=ptr1->pow; 
            ptr1=ptr1->next; 
            ptr2=ptr2->next;
        } 
        if(ptr1->pow > ptr2->pow){
            temp->coeff = ptr1->coeff; 
            temp->pow = ptr1->pow;
            ptr1=ptr1->next;
        } 
        if(ptr1->pow < ptr2->pow){
            temp->coeff = ptr2->coeff; 
            temp->pow = ptr2->pow;
            ptr2=ptr2->next;
        } 
    } 
        while(ptr1 != NULL){
            temp=(struct node *)malloc(sizeof(struct node)); 
            temp->coeff=ptr1->coeff;
            temp->pow=ptr1->pow;
            if(head3=NULL){
                head3=temp; 
                ptr3=head3;
            } 
            else{
                ptr3->next=temp; 
                ptr3=ptr3->next;
            } 
            ptr1=ptr2->next;
        } 
         while(ptr2 != NULL){
            temp=(struct node *)malloc(sizeof(struct node)); 
            temp->coeff=ptr2->coeff;
            temp->pow=ptr2->pow;
            if(head3=NULL){
                head3=temp; 
                ptr3=head3;
            } 
            else{
                ptr3->next=temp; 
                ptr3=ptr3->next;
            } 
            ptr1=ptr2->next;
        }
    }