#include<iostream>
using namespace std;
int Max(int *a,int N)//算法4 
{
	int ThisSum=0,MaxSum=0;//ThisSum:目前子列和，MaxSum:最大子列和 
    for(int i=0;i<N;i++)
	{
		ThisSum+=a[i]; 
		if(ThisSum>MaxSum)
		MaxSum=ThisSum;
		else if(ThisSum<0)//ThisSum小于0，重置0 
		ThisSum=0;
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
