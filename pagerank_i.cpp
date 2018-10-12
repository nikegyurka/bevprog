#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

void kiir (vector<double> vector2)
{
	int i=0;
	vector<double>::iterator it;
	for(it=vector2.begin(); it!=vector2.end(); it++)
		cout<<"PageRank["<< i++ <<"]:\t" <<*it <<'\n';
}

double tavolsag(vector<double> PR, vector<double> PRv)
{
	double osszeg = 0.0;
	int i;
	for(i=0;i<PR.size();i++)
		osszeg +=(PRv[i] - PR[i])*(PRv[i] - PR[i]);
	return sqrt(osszeg);
}

int main()
{
	vector<vector<double>> L = {
		{0.0, 0.0, 1.0 / 3.0, 0.0},
		{1.0, 1.0 / 2.0, 1.0 / 3.0, 1.0},
		{0.0, 1.0 / 2.0, 0.0, 0.0},
		{0.0, 0.0, 1.0 / 3.0, 0.0}
	};

	vector<double> PR = {0.0, 0.0, 0.0, 0.0};
	vector<double> PRv = {1.0 / 4.0, 1.0 / 4.0, 1.0 / 4.0, 1.0 / 4.0};

	int i,j;

	for(;;)
	{
		for(i=0; i<4; ++i)
		{
			PR[i]=0.0;
			for(j=0; j<4; ++j)
				PR[i]+=L[i][j]*PRv[j];
		}
		if ( tavolsag(PR,PRv) < 0.0000000001)
			break;
		for(i=0; i<4; ++i)
			PRv[i]=PR[i];
	}
	kiir (PR);
	return 0;
} 
