#include<iostream>
using namespace std;
class box
{
	public:
		int binary2decimal(int num)
		{
			int  binary_val, decimal_val = 0, base = 1, rem;
		    binary_val = num;
		    while (num > 0)
		    {
		        rem = num % 10;
		        decimal_val = decimal_val + rem * base;
		        num = num / 10 ;
		        base = base * 2;
		    }
		    return decimal_val;
		}
		unsigned concatenate(unsigned x, unsigned y) 
		{
		    unsigned pow = 10;
		    while(y >= pow)
		        pow *= 10;
		    return x * pow + y;        
		}
	    void binary(int num)
		{
		    int rem;
		 
		    if (num <= 1)
		    {
		        cout << num;
		        return;
		    }
		    rem = num % 2;
		    binary(num / 2);
		    cout << rem;
		}

		
};
int main()
{
	box o;
	int a[4][16] = {  
   {14,  0,  4, 15, 13,  7,  1,  4,  2, 14, 15,  2, 11, 13,  8,  1} ,   
   {3, 10, 10,  6,  6, 12, 12, 11,  5,  9,  9,  5,  0,  3,  7,  8} ,   
   {4, 15,  1, 12, 14,  8,  8,  2, 13,  4,  6,  9,  2,  1, 11,  7} ,
   {15,  5, 12, 11,  9,  3,  7, 14,  3, 10, 10,  0,  5,  6,  0, 13} 
				};
	int b[4][16] = {  /* S1 */
    15,  3,  1, 13,  8,  4, 14,  7,  6, 15, 11,  2,  3,  8,  4, 14,
     9, 12,  7,  0,  2,  1, 13, 10, 12,  6,  0,  9,  5, 11, 10,  5,
     0, 13, 14,  8,  7, 10, 11,  1, 10,  3,  4, 15, 13,  4,  1,  2,
     5, 11,  8,  6, 12,  7,  6, 12,  9,  0,  3,  5,  2, 14, 15,  9
    };
   int c[4][16] = {  /* S2 */
    10, 13,  0,  7,  9,  0, 14,  9,  6,  3,  3,  4, 15,  6,  5, 10,
     1,  2, 13,  8, 12,  5,  7, 14, 11, 12,  4, 11,  2, 15,  8,  1,
    13,  1,  6, 10,  4, 13,  9,  0,  8,  6, 15,  9,  3,  8,  0,  7,
    11,  4,  1, 15,  2, 14, 12,  3,  5, 11, 10,  5, 14,  2,  7, 12
    };
   int d[4][16] = {  /* S3 */
     7, 13, 13,  8, 14, 11,  3,  5,  0,  6,  6, 15,  9,  0, 10,  3,
     1,  4,  2,  7,  8,  2,  5, 12, 11,  1, 12, 10,  4, 14, 15,  9,
    10,  3,  6, 15,  9,  0,  0,  6, 12, 10, 11,  1,  7, 13, 13,  8,
    15,  9,  1,  4,  3,  5, 14, 11,  5, 12,  2,  7,  8,  2,  4, 14
    };
    int e[4][16] = {  /* S4 */
     2, 14, 12, 11,  4,  2,  1, 12,  7,  4, 10,  7, 11, 13,  6,  1,
     8,  5,  5,  0,  3, 15, 15, 10, 13,  3,  0,  9, 14,  8,  9,  6,
     4, 11,  2,  8,  1, 12, 11,  7, 10,  1, 13, 14,  7,  2,  8, 13,
    15,  6,  9, 15, 12,  0,  5,  9,  6, 10,  3,  4,  0,  5, 14,  3
    };
    int f[4][16] = {  /* S5 */
    12, 10,  1, 15, 10,  4, 15,  2,  9,  7,  2, 12,  6,  9,  8,  5,
     0,  6, 13,  1,  3, 13,  4, 14, 14,  0,  7, 11,  5,  3, 11,  8,
     9,  4, 14,  3, 15,  2,  5, 12,  2,  9,  8,  5, 12, 15,  3, 10,
     7, 11,  0, 14,  4,  1, 10,  7,  1,  6, 13,  0, 11,  8,  6, 13
    };
    int g[4][16] = {  /* S6 */
     4, 13, 11,  0,  2, 11, 14,  7, 15,  4,  0,  9,  8,  1, 13, 10,
     3, 14, 12,  3,  9,  5,  7, 12,  5,  2, 10, 15,  6,  8,  1,  6,
     1,  6,  4, 11, 11, 13, 13,  8, 12,  1,  3,  4,  7, 10, 14,  7,
    10,  9, 15,  5,  6,  0,  8, 15,  0, 14,  5,  2,  9,  3,  2, 12
    };
    int h[4][16] = {  /* S7 */
    13,  1,  2, 15,  8, 13,  4,  8,  6, 10, 15,  3, 11,  7,  1,  4,
    10, 12,  9,  5,  3,  6, 14, 11,  5,  0,  0, 14, 12,  9,  7,  2,
     7,  2, 11,  1,  4, 14,  1,  7,  9,  4, 12, 10, 14,  8,  2, 13,
     0, 15,  6, 12, 10,  9, 13,  0, 15,  3,  3,  5,  5,  6,  8, 11
    };
    int inp[48];
    int i;
	int r1=0,c1=0;
	int v;
	int rd1, cd1, temp1;
	cout<<"Enter the 48bits (return after each bit)"<<endl;
    for(i=0;i<48;i++)
	{
		cout<<i+1<<" element";
		cin>>inp[i];	
	}
	//
	rd1 = o.concatenate(inp[0], inp[5]);
	cd1 = o.concatenate(inp[1], inp[2]);
	temp1 = o.concatenate(cd1, inp[3]);
	cd1 = o.concatenate(temp1, inp[4]);
	r1 = o.binary2decimal(rd1);
	c1 = o.binary2decimal(cd1);
	v = a[rd1][cd1];
	o.binary(v);
	//
	rd1 = o.concatenate(inp[6], inp[11]);
	cd1 = o.concatenate(inp[7], inp[8]);
	temp1 = o.concatenate(cd1, inp[9]);
	cd1 = o.concatenate(temp1, inp[10]);
	r1 = o.binary2decimal(rd1);
	c1 = o.binary2decimal(cd1);
	v = a[rd1][cd1];
	o.binary(v);
	//
	rd1 = o.concatenate(inp[12], inp[17]);
	cd1 = o.concatenate(inp[13], inp[14]);
	temp1 = o.concatenate(cd1, inp[15]);
	cd1 = o.concatenate(temp1, inp[16]);
	r1 = o.binary2decimal(rd1);
	c1 = o.binary2decimal(cd1);
	v = a[rd1][cd1];
	o.binary(v);
	//
	rd1 = o.concatenate(inp[18], inp[23]);
	cd1 = o.concatenate(inp[19], inp[20]);
	temp1 = o.concatenate(cd1, inp[21]);
	cd1 = o.concatenate(temp1, inp[22]);
	r1 = o.binary2decimal(rd1);
	c1 = o.binary2decimal(cd1);
	v = a[rd1][cd1];
	o.binary(v);
	//
	rd1 = o.concatenate(inp[24], inp[29]);
	cd1 = o.concatenate(inp[25], inp[26]);
	temp1 = o.concatenate(cd1, inp[27]);
	cd1 = o.concatenate(temp1, inp[28]);
	r1 = o.binary2decimal(rd1);
	c1 = o.binary2decimal(cd1);
	v = a[rd1][cd1];
	o.binary(v);
	//
	rd1 = o.concatenate(inp[30], inp[35]);
	cd1 = o.concatenate(inp[31], inp[32]);
	temp1 = o.concatenate(cd1, inp[33]);
	cd1 = o.concatenate(temp1, inp[34]);
	r1 = o.binary2decimal(rd1);
	c1 = o.binary2decimal(cd1);
	v = a[rd1][cd1];
	o.binary(v);
	//
	rd1 = o.concatenate(inp[36], inp[41]);
	cd1 = o.concatenate(inp[37], inp[38]);
	temp1 = o.concatenate(cd1, inp[39]);
	cd1 = o.concatenate(temp1, inp[40]);
	r1 = o.binary2decimal(rd1);
	c1 = o.binary2decimal(cd1);
	v = a[rd1][cd1];
	o.binary(v);
	//
	rd1 = o.concatenate(inp[42], inp[47]);
	cd1 = o.concatenate(inp[43], inp[44]);
	temp1 = o.concatenate(cd1, inp[45]);
	cd1 = o.concatenate(temp1, inp[46]);
	r1 = o.binary2decimal(rd1);
	c1 = o.binary2decimal(cd1);
	v = a[rd1][cd1];
	o.binary(v);
	
	return 0;
}
