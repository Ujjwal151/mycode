#include <bits/stdc++.h>
using namespace std;
#define N 10000000+5

vector<int> v(N);
int main(){
	///////////////////43210    
//	int a = 25; 	///11001
	// a &= ~(1<<0);///11000
	// a |= 1<<2;//////11101
	// a ^= 1<<3;//////10001
	// if(!(a^b)) cout<<"EQUAL";
	// if(!(a&1)) cout<<"EVEN";
	// if(~a&1) cout<<"EVEN";
/*	a = ~a;
	cout<<a;*/
	/*int num = -16;
	num = abs(num);
	if (num != 0 && (num & (num - 1)) == 0)
		printf("Number is power of 2");*/

	/*int num = -10;
	num = -~num;
	cout<<num;*/
						 //6543210
	// int a = INT_MAX & (1<<7)-1; 		 //1000001
//  a |= (1<<(4+1)) - 1; //1011111
//	a &= ~((1<<(4+1))-1);//1000000
	// cout<<(a|' ');
	// a &= ~(1<<5);
	// cout<<__builtin_popcount(b);

	int b = 10;
	// cout<<__builtin_clz(b)<<endl;
	// cout<<8*sizeof(INT_MAX)<<endl;// - __builtin_popcount(b)<<endl;
	
	//count number of zeros
	cout<<8*sizeof(INT_MAX) - __builtin_popcount(b)<<endl;
	int cnt = 0;
	for(int i = 31; i>=0; i--)
	{
		if(((b>>i) & 1) == 0 )cnt++;
	}
	cout<<cnt<<endl;




	cnt = 0;
	for(int i = 0 i<32; i++)
	{
		if(!(b & (1<<i))) cnt++;
	}
	cout<<cnt<<endl;

	b = 5;
	cnt = 0;
	while(b>0)
	{
		b |= b+1;
		cnt++;
	}
	cout<<cnt;

}
