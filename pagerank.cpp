#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

void ki (vector<double> tomb, int db)
{
	int i;
	for (i=0; i<db; i++)
	{
		std::cout<<"PageRank ["<< i<<"] : " << tomb[i] << std::endl;
	}
}

double tavolsag(vector<double> PR,vector<double> PR_v,int db)
{
	double tav = 0.0;
	int i;
	for(i=0;i<db;i++)
	{
		tav+=abs(PR[i] - PR_v[i]);
	}	
	return tav;
}

int main(void){

vector<vector<double>> L = {
	{0.0, 0.0, 1.0 / 3.0, 0.0},
	{1.0, 1.0 / 2.0, 1.0 / 3.0, 1.0},
	{0.0, 1.0 / 2.0, 0.0, 0.0},
	{0.0, 0.0, 1.0 / 3.0, 0.0}
};

vector<double> PR= {0.0, 0.0, 0.0, 0.0};
vector<double> PRv= {1.0 / 4.0, 1.0 / 4.0, 1.0 / 4.0, 1.0 / 4.0};
long int i=0,j=0;

	for (;;)
	{
	for(i=0;i<4;i++)
		PR[i] = PRv[i];
		for (i=0;i<4;i++)
		{
			double temp=0;
			for (j=0;j<4;j++)
			{
				temp+=L[i][j]*PR[j];
				PRv[i]=temp;
			}
		}
	if ( tavolsag(PR,PRv, 4) < 0.00001)
	break;
	}
	
	ki (PR,4);
	return 0;
	}
