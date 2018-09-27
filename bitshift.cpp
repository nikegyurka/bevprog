#include "std_lib_facilities.h"
int main()
{
	int a=1;
	int i=0;
	
	do
	{
		a<<=1;
		i++;
	}	
	while(a!=0);
	cout << i << " ";
}