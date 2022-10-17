#include<stdio.h> 
#include<stdlib.h>
struct node{
    int info; 
    struct node *next;
}; 

struct node *head = NULL; 

void create(){
    struct node *ptr,*temp; 
    int data; 
    temp =(struct node *)malloc(sizeof(struct node) ); 
    printf("\nEnter the value of information part : ");
    scanf("%d",&data); 
    temp->info=data; 
    temp->next=NULL;
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
    struct node  *ptr; 
    ptr = head;
    while(ptr!=NULL){
        printf("%d \n",ptr->info); 
        ptr=ptr->next;
    }
} 

void insertAtBeg(){
    struct node *ptr,*temp; 
    int data;
    temp =(struct node *)malloc(sizeof(struct node) ); 
    printf("\nEnter the value to be inserted at begening : ");
    scanf("%d",&data); 
    temp->info=data; 
    temp->next=NULL; 
    // ynha pe add kar rhe hai 
    ptr=head; 
    temp->next=ptr;
    head=temp; 

} 

void insertAtEnd(){
    struct node *ptr,*temp; 
    int data;
    temp =(struct node *)malloc(sizeof(struct node) ); 
    printf("\nEnter the data to insert at the end position :  "); 
    scanf("%d",&data); 
    temp->info=data; 
    temp->next=NULL; 
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

void insertAtKthPosition(){
    struct node *ptr,*temp; 
    int data,k,i;
    temp =(struct node *)malloc(sizeof(struct node) ); 
    printf("\nEnter the information part : ");
    scanf("%d",&data); 
    temp->info=data; 
    temp->next=NULL; 

    printf("\nEnter the position to insert a node : ");
    scanf("%d",&k);
    i=1; 
    while(i<k-1){
        ptr=ptr->next;
        ++i;
    } 
    temp->next=ptr->next; 
    ptr->next=temp;
} 

void deleteAtBeg(){
    struct node *ptr; 
    ptr=head; 
    if(ptr==NULL){
        printf("\nUnderflow condition .... "); 
    } 
    else{
        head=ptr->next; 
        free(ptr); 
        printf("\nNode deleted at beginning successfully....\n");
    }
} 

void deletenodeAtEnd(){
    struct node *ptr,*preptr; 
    ptr=head; 
    if(ptr==NULL){
        printf("\nUnder flow problem.......\n");
    } 
    else if(ptr->next=NULL){
        head=NULL; 
        printf("\ndeleted successfully..\n"); 
        free(ptr);
    } 
    else{
        while(ptr->next!=NULL){
            preptr=ptr; 
            ptr=ptr->next;
        } 
        preptr->next=NULL; 
        printf("Deleted successfully...\n");
        free(ptr);
    }
} 

void deletenodeAtkthPos(){
    struct node *preptr , *ptr; 
    int i,x,pos;
    ptr=head; 
    if(ptr==head){
        printf("Underflow condition...\n");
    } 
    else{ 
        printf("\nEnter the pos to delete :  "); 
        scanf("%d",&pos);
        if(pos==1){
            head=ptr->next;
            free(ptr);
        } 
        else{
            i=1; 
            while(i<pos){
                preptr=ptr; 
                ptr=ptr->next;
                ++i;
            } 
            preptr->next=ptr->next; 
            printf("Deleted successfully...\n"); 
            free(ptr);
        }

    }
}

int main(){ 
    int ch; 
    while(1){
        printf("(1:create)  (2:display ) (0:exit)  (3:insertAtBeg)  (4:insertAtEnd)  (5:insertAtKthPosition) (6:deleteAtBeg) (7:deletenodeAtEnd)  (8:deletenodeAtkthPos) \n"); 
        printf("Enter your choice "); 
        scanf("%d",&ch); 
        switch(ch){
            case 1: create();break;
            case 2: display();break;
            case 3: insertAtBeg();break;
            case 4:  insertAtEnd();break;
            case 5: insertAtKthPosition();break; 
            case 6: deleteAtBeg();break;
            case 7: deletenodeAtEnd();break;
            case 8: deletenodeAtkthPos();break;
            case 0: exit(1);break; 
            default : printf("WA..");
        }
    } 
    return 0;

}