#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node*next;
};
print(){
    struct Node*temp=head;
    while(temp!=NULL){
        printf("%d->",temp->data);
        temp=temp->next;
    }
}
struct Node*head=NULL;
int main(){
    int n;
    printf("enter the number of nodes;");
    sacnf("%d",&n);
    for(int i=0;i<n;i++){
        struct Node*newnode=(struct Node*)malloc(sizeof(struct Node));
        printf("enter the data for node %d:",i+1);
        scanf("%d",newnode->data);
        newnode->next=head;
        head=newnode;
    }
    print();
}
