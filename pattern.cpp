#include<iostream>
using namespace std;
int main()
{
	
	int n=20;
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=n;j>+1;j--)
		{
			if(i>=j)
			cout<<"#";
			else
			cout<<"";
			
		}
		cout<<endl;
	}
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
