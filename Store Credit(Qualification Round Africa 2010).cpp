#include <iostream>
using namespace std;
 
int main() {
	int t,n,c,i,k,j;
	cin>>t;
	for(k=1;k<=t;k++)
	{
		cin>>c>>n;
		int arr[n];
		for(i=0;i<n;i++)
		 cin>>arr[i];
		for(i=0;i<n-1;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if(c-arr[i]==arr[j])
				break;
			}
			if(c-arr[i]==arr[j])
				break;
		}
		cout<<"Case #"<<k<<": "<<i+1<<" "<<j+1<<endl;
	}
	return 0;
}