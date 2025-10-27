#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
signed main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		string x;
		double a,b,c;
		cin>>x;
		cin>>a>>b>>c;
		cout<<x<<" ";
		cout<<fixed<<setprecision(2);
		cout<<a<<" "<<b<<" "<<c<<" "<<(a+b+c)/3<<" ";
		if((a+b+c)/3>=90)cout<<"Excellent";
		cout<<endl;
	}
}
