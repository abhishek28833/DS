#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};
typedef struct node node;

node *head=NULL;
node *end=NULL;

void create(){
    node *ptr,*temp;
    temp=(node*)malloc(sizeof(node)); 
    printf("\nEnter Information: ");
    scanf("%d",&temp->data);
    temp->next=NULL;
    end=temp;
    if(head==NULL){
        head=temp;
    }
    else{
        ptr=head;
        while(ptr->next!=NULL){
            ptr=ptr->next;
        }
        ptr->next=temp;
    }
}

void display(){
    node *ptr;
    ptr=head;
    while(ptr!=NULL){
        printf("%d",ptr->data);
        printf("\n");
        ptr=ptr->next;
    }
}

void traverse(){
    int count=0;
    node *ptr;
    ptr=head;
    while(ptr!=NULL){
        ptr=ptr->next;
        ++count;
    }
    cout<<count;
}
void insertAtbegin(){
    printf("Enter the element to be inserted: ");
    node *ptr=(node*)malloc(sizeof(node));
    scanf("%d",&ptr->data);
    ptr->next=head;
    head=ptr;
}

void insertAtend(){
    printf("Enter the element to be inserted: ");
    node *ptr=(node*)malloc(sizeof(node));
    scanf("%d",&ptr->data);
    ptr->next=NULL;
    end->next=ptr;
}

void insertAtnode(){
}
int main(){
    int ch;
    printf("(1:create)(2:display)(3:insertAtbegin)(4:insertAtend)(6:exit)(5:traverse)\n");
    while(1){
        printf("\nEnter the choice you want to do:");
        scanf("%d",&ch);
        switch(ch){
            case 1: create();break;
            case 2: display();break;
            case 3: insertAtbegin();break;
            case 4: insertAtend();break;
            case 6: exit(1);break;
            case 5: traverse();break;
            default: printf("Wrong choice");break;
        }
    }
}
