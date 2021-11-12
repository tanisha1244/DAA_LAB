#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	 priority_queue<int, vector<int>, greater<int> > q;
	for(int i=0;i<n;i++)
	{
		q.push(a[i]);
	}
	int s=0;
	while(q.size()>1)
	{
		int fm=q.top();
		q.pop();
		int sm=q.top();
		q.pop();
	     int sum=fm+sm;
	     s+=sum;
		q.push(sum);
	}
	cout<<s;
	return 0;
}
