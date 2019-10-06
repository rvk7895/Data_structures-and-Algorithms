#include<iostream>

using namespace std;

long long int fme(long long int x,long long int y,long long int p)
{
	long long int ans=1;
	x=x%p;
	while(y>0)
	{
		if(x&1)
			ans=(ans*x)%p;
		y>>=1;
		x=(x*x)%p;	
	}
	return ans;
}
int main()
{
	cout<<"Enter the base"<<endl;
	long long int a;
	cin>>a;
	cout<<"Enter the exponent"<<endl;
	long long int b;
	cin>>b;
	cout<<"Enter the number with which the a^b will be moded"<<endl;
	long long int mod;
	cin>>mod;
	long long int ans=fme(a,b,mod);
	cout<<"("<<a<<"^"<<b<<")"<<"%"<<mod<<"="<<ans<<endl;
}