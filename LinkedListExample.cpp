// LinkedList Example : Console Application
#include "stdafx.h"
#include "MyList.h" 
#include <iostream>
using namespace std;


int _tmain(int argc, _TCHAR* argv[]){

	List L;
	Init (L);
	//inserts elements into the list
	Insert ("musa", L); Insert ("jane", L); Insert ("smile", L); 
	//displays data in the list 
	ShowData (L);
	//removes an entry from the list 
	Delete ("jane",L);
	//displays the remaining data in the list
	ShowData (L); 
	
	
	system("pause");
	return 0;
}

