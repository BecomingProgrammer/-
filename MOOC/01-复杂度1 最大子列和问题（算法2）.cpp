#include<iostream>
using namespace std;
int Max(int *a,int N)//�㷨2 
{
	int ThisSum=0,MaxSum=0;//ThisSum:Ŀǰ���кͣ�MaxSum:������к� 
	for(int i=0;i<N;i++)
	{
		ThisSum=0; 
		for(int j=i;j<N;j++)
		{
		    ThisSum+=a[j];//�����ϴε����к͵ó�Ŀǰ�����к� 
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
