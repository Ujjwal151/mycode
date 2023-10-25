//Finding the first subsequnces where their sum is fixed.  
#include<bits/stdc++.h>
using namespace std;

int f(int i, vector<int> &v, int a[], int n, int total, int csum, bool flag)
{
    if(flag == false) 
        return false;
    if(i == n)
    {
        if(csum == total) 
        {
            for(auto x: v) cout<<x<<" ";
            cout<<"\n";
            return false;
        }
        return true;
    }

    v.push_back(a[i]);
    csum += a[i];
    if(flag)
    {
        flag &= f(i+1, v, a, n, total, csum, flag);
    } 
    
    v.pop_back();
    csum -= a[i];
    if(flag)
    {
        flag &= f(i+1, v, a, n, total, csum, flag);
    }
    
    return flag;
}
    
int main() 
{ 
    freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
    //         0  1  2
    int a[] = {1, 3, 1, 4, 5}; 
    int n = sizeof(a)/sizeof(a[0]);
    int total = 13;
    vector<int> v;
    int csum = 0;
    bool flag = true;
    flag = f(0, v, a, n, total, csum, flag);
    if(!flag) cout<<"At least one Subsequence found of sum equal total";
    else cout<<"No such Subsequence\n";
	
/*
input
1 3 1 4 5
13
output
1 3 4 5
At least one Subsequence found

*/
}