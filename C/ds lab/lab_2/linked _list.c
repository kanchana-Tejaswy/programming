// single linked list 


#include<stdio.h>
#include<stdlib.h>
struct node* create(int ele);
void  insert_beg(int ele);
void  insert_end(int ele);
void delete_beg();
void delete_end();
void delete_pos();
void display();
struct node
{                                          
    int data;
    struct node *next;    
};                                           
struct node *head=NULL;
int main()                                       
{                                        
    int ch;                                          
    do                                         
    {                                               
        printf("MENU\n1.insert_beg\n2.insert_end\n3.insert_pos\n4.delete_beg\n5.delete_end\n7.display\n");
        printf("enter your choice");
        scanf("%d",&ch);
        switch(ch)
        {
            // case 1
            // insert
            case 1:
            printf("enter the value to be inserted");
            scanf("%d",&ele);
            insert_beg(ele);
            break;
            //case 2 
            case 2:
            printf("enter the value to be inserted");
            scanf("%d",&ele);
            insert_end(ele);
            break;
            // case 3
             case 3:
            printf("enter the value to be inserted");
            scanf("%d",&ele);
            insert_pos(ele);
            break;
            //  case 4
            // delete
           case 4:
           delete_beg();
           break;
           // case 5
           case 5:
           delete_end();
           break;
           // case 6
           case 6:
           delete_pos();
           break;
           // case 7
           case 7:
           display();
           break;
           printf("wroing choice");
           break;
        }
    } while(ch<=7);
    return 0;
}
// node is created 
struct node*creat(int ele)
{
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=ele;
    newnode->next=NULL;
    return newnode;
}
void insert_beg(int ele)
{
    // creaed new node
    struct node *newnode=creat(ele);
    if(head==NULL)
    head=newnode;
    else
    {
        // given new head to new node 
        newnode->next=head;
        head=newnode;
    }
}
void insert_end( int ele)
{
    struct node *newnode=create(ele);
    if(head==NULL)
    head=newnode;
    else
    {
        struct node *temp=head;
        while(temp->next!=NULL)
        temp=temp->next;
        temp->next=newnode;
    }
} 
void insert_pos(int ele)
{
    int pos;
    struct node *newnode=create(ele);
    printf("enter the position ");
    scanf("%d",&pos);
    if(pos==0&&head==NULL)
    head=newnode;
    else{

        struct node *temp=head;
        int count=0;
        while(count<pos-1&&temp->next!=NULL)
        temp=temp->next;
        if(temp->next!=NULL)
        {
            newnode->next=temp->next;
            temp->next=newnode;

        }
    }
}