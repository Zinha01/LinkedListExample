#include "StdAfx.h"
#include <iostream>
#include "MyList.h"

using namespace std;

void Init (List& L)
{ L = NULL; } // L points to  nothing;}

bool IsEmpty (List L)
{return (L == NULL); }


//function to add an entry into a list  
void Insert (DataType e, List& L)
{List NewNode = new node;
  NewNode->data = e;
  NewNode->next = L; 
  L = NewNode;
}   

//function to remove an entry from a list
void Delete (DataType e, List& L)
{List CurrNode = L;
    List PrevNode = NULL;
 
    while ((CurrNode != NULL) && (CurrNode->data != e) )
    { // searching for node to delete 
     PrevNode = CurrNode;
     CurrNode = CurrNode->next;  
    }  
     if ((CurrNode != NULL) && (CurrNode->data == e ))
     { 
          if  (PrevNode == NULL)  // deleting first node
              L = CurrNode->next;
         else
              PrevNode->next = CurrNode->next;
     }
}

//function to display an entry
void ShowData (List  L)
{ while ( L != NULL)                   
 {  cout << L->data <<endl;                                 
    L = L->next;
 }
 cout << endl;
}
