#include <stdio.h>
#include <stdlib.h>
int main(){


  struct node{
    int data;
    struct node* next;
  };


  int el=0;
  struct node *head,*newnode,*temp,*temp1;
  head=0;
  while(el<4)
 { newnode=(struct node *)malloc(sizeof(struct node));
  scanf("%d",&newnode->data);
  newnode->next=0;
  if(head==0)
  {
    head=temp=newnode;
  }
  else{
    temp->next=newnode;
    temp=newnode;
  }
  el++;
  
  
  }
  


  
int choice;

scanf("%d",&choice);

 

  if(choice == 1){
    
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    scanf("%d",&newnode->data);
    newnode->next=head;
    head=newnode;

    temp = head;
    while(temp!=0){
      if(temp->next!=0)
      printf("%d ",temp->data);
      else
      printf("%d",temp->data);
      
      temp=temp->next;
    }


  }

 else if(choice == 2){
    
    
    newnode=(struct node *)malloc(sizeof(struct node));
    scanf("%d",&newnode->data);
    newnode->next=0;

    temp = head->next;
    while(temp->next!=0){
      temp=temp->next;
    }

    temp->next=newnode;

        temp = head;
    while(temp!=0){
      printf("%d ",temp->data);
      temp=temp->next;
    }

  }

  if (choice != 1 && choice != 2)
  {
    
    
    temp = head->next;
    for(int i=0;i<choice-2;i++)
    {
      temp=temp->next;
     
      
    }
newnode=(struct node *)malloc(sizeof(struct node));
scanf("%d",&newnode->data);
temp1=temp->next;
temp->next=newnode;
newnode->next=temp1;


    
    
    temp = head;
    while(temp!=0){
      printf("%d ",temp->data);
      temp=temp->next;
    }
  }



  
}
