#include "std_lib_facilities.h"

int main()         
{
	cout<<"Recipient's name: ";
	string r;
	cin>>r;

	cout<<"Recipient's age: ";
	int ra=0;
	cin>>ra;
		if(ra<0 || ra>100)
			cout<<"What a surprise!" <<"\n";

	cout<<"Recipient's sex(m:male/f:female): ";
	char rs;
	cin>>rs;

	cout<<"Friend's name: ";
	string f;
	cin>>f;

	cout<<"Friend's sex: ";
	char fs;
	cin>>fs;

	cout<<"\nDear "<<name<<",\n";
	if(rs=='m')
		cout<<"Let me wish all the best to the birthday boy!\n"; 
	else
		cout<<"Let me wish all the best to the birthday girl!\n";
	
	if(ra<12)cout<<"Next year you will be "<<ra+1<<"\n";
	if(ra==17)cout<<"Next year you will be an adult!\n";
	if(ra>70)cout<<"I hope you haven't lose your sense of humor so far.\n";

	cout<<"Well "<<f<<" and I planned a magnificent party for you! ";
	if(fs=='m')
		cout<<"Just call and ask him to pick you up when you feel ready.";
	else
		cout<<"Just call and ask her to pick you up when you feel ready.";
	cout<<"\nCan't wait to see ya!";
}