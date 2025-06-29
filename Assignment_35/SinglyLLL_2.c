///////////////////////////////////////////////////////
//
//  File name :     SinglyLLL_2
//  Description:    Display all prime elements from singly linear linked list.
//  Author :        Trupti Bhatlekar
//  Date :          29/06/2025
//
///////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////
//Input: | 11 | -> | 20 | -> | 17 | -> | 41 | -> | 22 | -> | 89 | 
//Output: 11 17 41 89
//////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int Data;
    struct node *Next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE head, int no)  
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->Data = no;
    newn->Next = *head;
    *head = newn;
}
int Prime(int no)
{
    if (no < 2)
    {
        return 0;
    }
    for (int i = 2; i <= no / 2; i++)
    {
        if (no % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

void DisplayPrime(PNODE head)
{
  while (head != NULL)
  {
    if (Prime(head->Data))
    {
      printf("%d ", head->Data);
    }
    head = head->Next;
  }
  printf("\n");
}

void Display(PNODE head)
{
    while (head != NULL)
    {
        printf("| %d | -> ", head->Data);
        head = head->Next;
    }
    printf("NULL\n");
}

int main()
{
    PNODE First = NULL;
    
    InsertFirst(&First, 89);
    InsertFirst(&First, 22);
    InsertFirst(&First, 41);
    InsertFirst(&First, 17);
    InsertFirst(&First, 20);
    InsertFirst(&First, 11);

    Display(First);

    printf("Perfect Elements in the Linked List are: \n");
    DisplayPrime(First);

    return 0;
}