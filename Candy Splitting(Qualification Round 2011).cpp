#include <bits/stdc++.h>
using namespace std;

int main() {
	int k,n,sum,min,i,t,x;
	cin>>t;
	for(k=1;k<=t;k++)
	{
	 cin>>n;
	 int arr[n];
	 min=INT_MAX;
	 x=sum=0;
	 for(i=0;i<n;i++)
	  cin>>arr[i];
	 for(i=0;i<n;i++)
	 {
	 	x=x^arr[i];
	 	sum=sum+arr[i];
	 	if(arr[i]<min)
	 	 min=arr[i];
	 }	
	 if(x!=0)
	  cout<<"Case #"<<k<<": NO"<<endl;
	 else
	  cout<<"Case #"<<k<<": "<<sum-min<<endl;
	}
	return 0;
}