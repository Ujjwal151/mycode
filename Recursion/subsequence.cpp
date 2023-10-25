// Printing Subsequence using recursion
#include<bits/stdc++.h>
using namespace std;

void f(int i, vector<int> &v, int a[], int n)
{
    if(i == n)
    {
        for(int x : v) cout<<x<<" ";
        cout<<"\n";
        return;
    }
    v.push_back(a[i]);
    f(i+1, v, a, n);
    v.pop_back();
    f(i+1, v, a, n);
}
    
int main() 
{ 
    freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
    //         0  1  2
    int a[] = {7, 6, 9}; 
    int n = sizeof(a)/sizeof(a[0]);
    vector<int> v;
    f(0, v, a, n);
	
/*
output
7 6 9 
7 6 
7 9 
7 
6 9 
6 
9 
	// NUll set {}
*/
}