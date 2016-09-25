#include<iostream>
using namespace std;
int Max(int *a,int N)//算法2 
{
	int ThisSum=0,MaxSum=0;//ThisSum:目前子列和，MaxSum:最大子列和 
	for(int i=0;i<N;i++)
	{
		ThisSum=0; 
		for(int j=i;j<N;j++)
		{
		    ThisSum+=a[j];//利用上次的子列和得出目前的子列和 
		    if(ThisSum>MaxSum)
		    MaxSum=ThisSum;
		}
	}
	return MaxSum;
}
int main()
{
	int n;
	cin>>n;
	int A[n];
	for(int i=0;i<n;i++)
	  cin>>A[i];
	cout<<Max(A,n);
	return 0;
}
