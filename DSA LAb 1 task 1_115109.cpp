#include<iostream>
using namespace std;
int main()
{
	int arr[100]={12,16,78,33,45};
	int position=3;
	int value=65;

	cout<<"Elements before insertion:"<<endl;
	for(int i; i<5; i++)
	{
		cout<<arr[i]<<endl;
		
	}
	for (int i=6; i>=position; i--)
	{
		arr[i]=arr[i-1];}
		
		arr[position-1]=value;
			cout<<"Elements after insertion:"<<endl;
	for(int i; i<6; i++)
	{
		cout<<arr[i]<<endl;
		
	}
		return(0);
	
	}


