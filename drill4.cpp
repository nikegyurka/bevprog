#include "std_lib_facilities.h"

int main()
{
	cout<<"Enter | to quit the program.\n";

	double smallest;
	double largest;
	double a=0;
	double sum=0;
	vector<double> vector;
	string unit;

	while(unit != "|")
	{
		cout<<"Enter a unit! (valid units: cm, ft, in, m) ";
		cin>>unit;
		if(unit!="|")
		{
			while(unit != "cm" && unit != "m" && unit !="in" && unit !="ft" && unit !="|")
			{
				cout<<"Invalid unit!"<<"\nPick one from valid units! ";
				cin.clear();
				cin.ignore();
				cin>>unit;
			}
			cout<<"Enter a value: "; cin>> a;

			while(a<=0)
			{
				cout<<"Invalid value! "<<"\nEnter a value: ";
				cin.clear();
				cin.ignore();
				cin>>a;
			}
			
			if(unit=="cm")
				a=a/100;
			else if(unit=="in")
				a=a*(2.54/100);
			else if(unit=="ft")
				a=a*(30.48/100);

			vector.push_back(a);
			if (vector.size()==1)
			{
				smallest=largest=a;
			}
			else
			{
				if(a>largest)
					largest=a;
				if(a<smallest)
					smallest=a;
			}

			sum+=a;
		}
	}
	cout<<"\nNumbers're converted in m.";
	cout<<"\nSmallest value: "<<smallest;
	cout<<"\nLargest value: "<<largest;

	cout<<"\nYou've entered "<<vector.size()<<" values.";
	cout<<"\nThe sum of these values: "<<sum<<"\n";
				
	sort(vector);
	cout<<"Values in increasing order:\n";
	for(double i:vector) 
	cout<<i<<" ";
	cout<<"\n";
	return 0;
}
