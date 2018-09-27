#include "std_lib_facilities.h"

int main()
{
	int a=7;
	int b=1;
  
  	b=b+a;
  	a=b-a;
  	b=b-a;

	cout << a << " " << b << "\n";
}