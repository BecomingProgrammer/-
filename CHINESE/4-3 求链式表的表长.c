int Length( List L )
{
	int num=0;
	while(L)
	{
		L=L->Next; 
		num++;
	}
	return num;
} 
