#include <bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};


class Solution
{
    public:
    static bool comp(Item a, Item b){
        double r1=(double)a.value/(double)a.weight;
        double r2=(double)b.value/(double)b.weight;
        return r1>r2;
    }
    double fractionalKnapsack(int W, Item arr[], int n)
    {

        sort(arr,arr+n,comp);
        int currWeight=0;
        double value=0.0;
       
        for(int i=0;i<n;i++){
            if(currWeight+arr[i].weight<=W){
                currWeight+=arr[i].weight;
                value+=arr[i].value;
            }
            else{
                int remain=W-currWeight;
                value+=(double)arr[i].value/(double)arr[i].weight*(double)remain;
                break;
            }
        }
        return value;
    }
};

int main()
{
	int t;
	cin>>t;
	cout<<setprecision(2)<<fixed;
	while(t--){
		int n, W;
		cin>>n>>W;
		
		Item arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i].value>>arr[i].weight;
		}
		
		Solution ob;
		cout<<ob.fractionalKnapsack(W, arr, n)<<endl;
	}
    return 0;
}  

