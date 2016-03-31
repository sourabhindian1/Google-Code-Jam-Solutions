#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,i,j,q,k,p,n;
	char r;
	cin>>t;
	for(q=1;q<=t;q++)
	{
		cin>>n;
		vector< pair<char,int> > v;
		bool visited[n];
		int posOrange=1,posBlue=1;
		for(i=0;i<n;i++)
		{
			cin>>r>>p;
			v.push_back(make_pair(r,p));
			visited[i]=false;
		}
	/*	for(i=0;i<n;i++)
		{
			cout<<v[i].first<<" "<<v[i].second<<" ";
		}
		cout<<endl;
	*/	
		for(k=1;k<INT_MAX;k++)
		{
			//cout<<"k="<<k<<endl;
			for(i=0;i<n;i++)
			{
				if(v[i].first=='O' && visited[i]==false)
				break;
			}
			//cout<<"i="<<i<<endl;
			for(j=0;j<n;j++)
			{
				if(v[j].first=='B' && visited[j]==false)
				break;
			}
		   //cout<<"j="<<j<<endl;
			if(i==n && j==n)
			 break;
			if(i<j)
			{
				if(posOrange < v[i].second)
				 posOrange++;
				else if(posOrange > v[i].second)
				 posOrange--;
				else
				 visited[i]=true;
				if(posBlue < v[j].second)
				 posBlue++;
				else if(posBlue > v[j].second)
				 posBlue--; 
			}
			else
			{
				if(posOrange < v[i].second)
				 posOrange++;
				else if(posOrange > v[i].second)
				 posOrange--;
				if(posBlue < v[j].second)
				 posBlue++;
				else if(posBlue > v[j].second)
				 posBlue--;
				else
				 visited[j]=true; 
			}
     	 //cout<<"posOrange="<<posOrange<<endl;
     	 //cout<<"posBlue="<<posBlue<<endl;
		}
		cout<<"Case #"<<q<<": "<<k-1<<endl;
		
	}
	return 0;
}