#include<iostream>;
using namespace std;
int main()
{
	int arr[100]={12,16,78,33,45};
	int value=78;
	for(int i=0; i<5; i++)
	{
		if (arr[i]==value)
		{
			cout<<"Value is Available at "<<i<<endl;
			
		}
		else
		{
	
		cout<<"value is invalid at " <<i<<endl;
	}
	}
	return(0);
	
}
