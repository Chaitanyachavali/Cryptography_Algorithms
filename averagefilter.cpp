#include<iostream>
using namespace std;

int intialize(int a[][3])
{
	int i,j;
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			a[i][j] = 0;
		}
	}
	return 0;
}

int addmatrix(int a[][3])
{
	int i,j;
	int fin=0;
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			fin = fin+a[i][j];
		}
	}
	return fin;
}
int main()
{
	//intilize
	int n,row,col;
	float temp;
	int rf, cf;
	int pic[4][4] = {  
	   {14,  5,  4, 15} ,   
	   {3, 10, 16,  6} ,   
	   {4, 15,  1, 12} ,
	   {15,  5, 12, 12} 
					};
	int filter[3][3];
	float picfilter[4][4];
	int i,j;
	//
	n = 4;
	row = col = n;
	//
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			intialize(filter);
			rf = i;
			cf = j;
			if(rf-1 < row && rf-1 >=0 && cf-1 < col && cf-1 >=0)
			{
				filter[0][0] = pic[rf-1][cf-1];
			}
			if(rf-1 < row && rf-1 >=0)
			{
				filter[0][1] = pic[rf-1][cf];
			}
			if(rf-1 < row && rf-1 >=0 && cf+1 < col && cf+1 >=0)
			{
				filter[0][2] =  pic[rf-1][cf+1];
			}
			if(cf-1 < col && cf-1 >=0)
			{
				filter[1][0] = pic[rf][cf-1];
			}
			filter[1][1] = pic[rf][cf];
			if(cf+1 < col && cf+1 >=0)
			{
				filter[1][2] = pic[rf][cf+1];
			}
			if(rf+1 < row && rf+1 >=0 && cf-1 < col && cf-1 >=0)
			{
				filter[2][0] = pic[rf+1][cf-1];
			}
			if(rf+1 < row && rf+1 >=0)
			{
				filter[2][1] = pic[rf+1][cf];
			}
			if(rf+1 < row && rf+1 >=0 && cf+1 < col && cf+1 >=0)
			{
				filter[2][2] = pic[rf+1][cf+1];
			}
			temp = addmatrix(filter);
			picfilter[i][j] = temp/9;
			cout<<i<<j<<" element is "<<picfilter[i][j]<<endl;
		}
	}
	return 0;
}
