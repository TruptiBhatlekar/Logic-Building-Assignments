///////////////////////////////////////////////////////
//
//  File name :     SinglyLLL_2
//  Description:    Display all palindrome elements from singly linear linked list.
//  Author :        Trupti Bhatlekar
//  Date :          29/06/2025
//
///////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////
//Input: | 11 | -> | 28 | -> | 17 | -> | 414 | -> | 6 | -> | 89 | 
//Output: 11 414 6
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
int Palindrome(int no)
{
    int rev = 0, temp = no;
    while (no > 0)
    {
        rev = rev * 10 + (no % 10);
        no /= 10;
    }
    return (rev == temp);
}

void DisplayPalindrome(PNODE head)
{
  while (head != NULL)
  {
    if (Palindrome(head->Data))
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
    InsertFirst(&First, 6);
    InsertFirst(&First, 414);
    InsertFirst(&First, 17);
    InsertFirst(&First, 28);
    InsertFirst(&First, 11);

    Display(First);

    printf("Palindrome Elements in the Linked List are: \n");
    DisplayPalindrome(First);

    return 0;
}