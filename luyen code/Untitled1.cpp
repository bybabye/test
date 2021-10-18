#include<iostream>
#include<math.h>
using namespace std;
void input(int a[],int n)
{
	for(int i = 0 ; i < n; i++)
	{
		cin>>a[i];
	}
}
void sort(int a[],int n)
{
	for(int i = 0 ; i < n - 1 ; i++)
	{
		for(int j = i + 1 ; j < n ; j++)
		{
			if(a[i] < a[j])
			{
				int tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
}
void output(int a[],int n)
{
	for(int i = 0 ; i < n ; i++)
	{
		cout<<a[i]<<" ";
	}
}
main()
{
	int n;
	cin>>n;
	int a[100];
	input(a,n);
	sort(a,n);
	output(a,n);
}
