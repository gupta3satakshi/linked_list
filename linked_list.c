#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node *next;
}link;
void traverse(link *start)
{
    if(start==NULL)
    printf("the list is empty");
    link* ptr=start;
    int count=0;
     printf("\n\n\nThe linked list is: ");
    while (ptr!=NULL)
    {
        count++;
        
        printf("%d->",ptr->data);
        ptr=ptr->next;
    }
    printf("NULL");
    printf("\n\nThe no. of nodes in linked list are %d",count);
    
}
link* insert_at_begin(link*start,int data)
{
    link* temp=malloc(sizeof(link));
    temp->data=data;
    temp->next=start;
    start = temp;
    return start;

}
link* insert_at_end(link* ptr,int data)
{
    link *temp;
    temp=malloc(sizeof(link));
    temp->data=data;
    temp->next=NULL;
    ptr->next=temp;
    return temp;
   
}
int main(){
    int n,data ;
    printf("enter the no of nodes in linked list:\n");
    scanf("%d",&n);
    printf("enter the data for first node:\n");
    scanf("%d",&data);
    link *start=NULL;
    start=(link*)malloc(sizeof(link));
    start->data=data;
    start->next=NULL;
    
    
    link* ptr =start;
    for(int i=2; i<=n;i++)
    {int num;
    printf("enter data for node %d\n",i);
    scanf("%d",&num);
    ptr= insert_at_end(ptr,num);
    }
    
int opt;
    do{ 
         printf("\n\n\033[4m                                                                               . \033[24m");
        printf("\n\n**************\033[4mMENU FOR LINKED LIST OPERATIONS\033[24m**************");
    
        printf("\n\n1. Traverse the Linked list.");
        printf("\n2. Insert the node in linked list at begining.");
        printf("\n3. Insert the node in linked list at ending.");
        printf("\n4. Insert the node in linked list at any position.");
        printf("\n5. Delete the node from linked list at begining");
        printf("\n6. Delete the node from linked list at ending");
        printf("\n7. Delete the node from linked list at any position.");
        printf("\n8. Search a node in linked list.");
        printf("\n9. Sort the element of linked list by bubble sort");
        printf("\n10. EXIT");
       
        printf("\n\nSelect an operation to be performed on linked list: ");
        scanf("%d",&opt);
         printf("\033[4m                                                                               . \033[24m");
    switch (opt)
    {
    case 1:
        traverse(start);
        break;
    case 2:
        printf("\n\nenter data to be inserted;\n");
        scanf("%d",&data);
        start=insert_at_begin(start,data);
        traverse(start);
        break;
    case 3:
        printf("\n\nenter data to be inserted;\n");
        scanf("%d",&data);
        ptr=insert_at_end(ptr,data);
        traverse(start);
    /*case 3:
        delete(arry,n);
        break;
    case 4:
        linearsrch(arry,n);
        break;
    case 5:
        binarysrch(arry,n);
        break;
    case 6:
        bubblesort(arry,n);
        break;*/
    default:
        printf("\nPlease select a valid opration to perform");
    }
    }while (opt!=10);
    
    return 0;
}