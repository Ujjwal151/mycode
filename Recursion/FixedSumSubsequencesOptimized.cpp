//Find the number of subsequences where their sum is fixed   
#include<bits/stdc++.h>
using namespace std;

int f(int i, int a[], int n, int total, int csum)
{
    if(i == n) return 0;
    
    int include_sum, exclude_sum;
    if(csum + a[i] == total) include_sum = 1;
    else if(csum + a[i] > total) include_sum = 0;
    else include_sum = f(i+1, a, n, total, csum + a[i]);

    exclude_sum = f(i+1, a, n, total, csum);
    return include_sum + exclude_sum;
}
    
int main() 
{ 
    freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
    //         0  1  2
    int a[] = {1, 1, 2}; 
    int n = sizeof(a)/sizeof(a[0]);
    int total = 1, csum = 0;
    int ans = f(0, a, n, total, csum);
    cout<<ans; //Number of those subsequnces.
	
/*
input 
1 1 2 //items
2     //total

output
2    // Basically 2 ways. i) 1 1,  ii) 2.
}