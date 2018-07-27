/*                                    rabby.code
                                    Md.Golam Rabbani
                             Repeated K Times - https://www.hackerearth.com/rabby.code/
                                         2018
                                    */

#include<stdio.h>
#include<stdlib.h>
struct node
{
    long int data;
    long int k;
    struct node *next;
};
struct node *head,*temp,*temp1,*tail,*temp2;
main()
{
    long int n,i,j,k,m;
    scanf("%ld",&n);
    head=NULL;
    temp=(struct node*)malloc(sizeof(struct node));
    scanf("%ld",&temp->data);
    temp->k=1;
    temp->next=NULL;
    head=temp;
    tail=temp;
    temp=head;
    for(i=1; i<n; i++)
    {
        scanf("%ld",&m);
        if(m<(head->data))
        {
            temp=(struct node*)malloc(sizeof(struct node));
            temp->k=1;
            temp->data=m;
            temp->next=head;
            head=temp;
        }
        else if(m>=(tail->data))
        {
            if(m==tail->data)
            {
                tail->k++;
            }
            else
            {
                temp=(struct node*)malloc(sizeof(struct node));
                temp->k=1;
                temp->data=m;
                temp->next=NULL;
                tail->next=temp;
                tail=temp;
            }

        }
        else
        {
            temp1=head;
            while((temp1->data)<=m)
            {
                temp2=temp1;
                temp1=temp1->next;
            }
            if((temp2->data)==m)
            {
                temp2->k++;
            }
            else
            {
                temp=(struct node*)malloc(sizeof(struct node));
                temp->k=1;
                temp->data=m;
                temp->next=temp2->next;
                temp2->next=temp;
            }
        }
    }
    scanf("%ld",&m);
    temp=head;
    while((temp)!=NULL)
    {
        if(temp->k==m)
        {
            printf("%ld",temp->data);
            break;
        }
        temp=temp->next;
    }
}
