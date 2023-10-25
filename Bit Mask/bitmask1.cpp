// subset generation using bit mask 
#include<bits/stdc++.h>
using namespace std;

vector < vector <int> > subsetGenerator(vector<int> &v){

	vector< vector<int> > subsets;

	int n = v.size();
	int subset_count = 1<<n;

	for(int i = 0; i<subset_count; i++)
	{
		vector<int> subset;
		for(int j = 0; j<n; j++)
		{
			if((i & 1<<j) != 0){
				subset.push_back(v[j]);
			}
		}
		subsets.push_back(subset);
	}

	return subsets;
}

int main()
{
	int n;
	cin>>n;

	vector<int> v(n);
	for(int i = 0; i<n; i++)
	{
		cin>>v[i];
	}

	for(int i = 0; i<n; i++)
	{
		cout<<v[i]<<" ";
	}cout<<"\n";

	vector<vector<int> > subsets;
	subsets = subsetGenerator(v);

	for(auto subset : subsets)
	{
		cout<<"[";
		for(auto element : subset)
		{
			cout<<element;
			cout<<" ";
		}
		cout<<"]\n";
	}

}
