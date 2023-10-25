//Finding the subsequnces where their sum is fixed.
//Also find the number of those subsequences.
#include<bits/stdc++.h>
using namespace std;

int f(int i, vector<int> &v, int a[], int n, int total)
{
    if(i == n)
    {
        int sub_sum = accumulate(v.begin(), v.end(), 0);
        if(sub_sum == total)
        {
            for(auto x: v) cout<<x<<" ";
            cout<<"\n";
            return 1;
        }
        return 0;
    }
    v.push_back(a[i]);
    int fsum = f(i+1, v, a, n, total);
    v.pop_back();
    int ssum = f(i+1, v, a, n, total);
    return fsum + ssum;
}

int main()
{
    //freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
    //         0  1  2
    int a[] = {1, 3, 1, 4, 5};
    int n = sizeof(a)/sizeof(a[0]);
    int total = 5;
    vector<int> v;
    int ans = f(0, v, a, n, total);
    cout<<ans; //Number of those subsequnces.

/*
input
1 3 1 4 5   //items
5           //total
output
1 3 1   //1st Subsequence
1 4     //2nd Subsequence
1 4     //3rd Subsequence
5       //4th Subsequence
4 //Number of subsequnces
*/
}
