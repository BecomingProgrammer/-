#include<iostream>
using namespace std;
int Max(int *a,int N)//�㷨4 
{
	int ThisSum=0,MaxSum=0;//ThisSum:Ŀǰ���кͣ�MaxSum:������к� 
    for(int i=0;i<N;i++)
	{
		ThisSum+=a[i]; 
		if(ThisSum>MaxSum)
		MaxSum=ThisSum;
		else if(ThisSum<0)//ThisSumС��0������0 
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
