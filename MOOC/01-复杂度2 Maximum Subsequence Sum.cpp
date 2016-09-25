#include<iostream>
using namespace std;
int Firsti;
int Lasti; 
int Max(int *a,int N)//算法4 
{
	int m_i=0;
	int ThisSum=0,MaxSum=0;//ThisSum:目前子列和，MaxSum:最大子列和 
    for(int i=0;i<N;i++)
	{
		ThisSum+=a[i]; 
		if(ThisSum>MaxSum){
		MaxSum=ThisSum;
		Lasti=i;
		Firsti=m_i;
	    }
		else if(ThisSum<0)//ThisSum小于0，重置0 
		{
		ThisSum=0;
		m_i=i+1;
	    }
	} 
	if(MaxSum==0)//对零和负数例子进行特殊化处理 
	{
		int flag1=0;
		int flag2=0;
		for(int i=0;i<N;i++)
		{
			if(a[i]<0)
			flag1=1;
			if(a[i]==0)
			flag2=1;
		}
		if(flag1&&flag2)
		   for(int j=0;j<N;j++)
		   {
		   	if(a[j]==0)
		   	{
		   	Firsti=j;
		   	Lasti=j;
		   }
		   }
		else
		{
				Firsti=0;
	        Lasti=N-1;
		}
	}
	return MaxSum;
}
int main()
{
	int max;
	int n;
	cin>>n;
	int A[n];
	for(int i=0;i<n;i++)
	  cin>>A[i];
	Firsti=0;
	Lasti=n-1;
	max=Max(A,n);
	cout<<max;
	cout<<" "<<A[Firsti]<<" "<<A[Lasti];
	return 0;
}
