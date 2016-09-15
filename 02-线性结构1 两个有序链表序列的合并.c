//º¯ÊýÌâ 
List Merge( List L1, List L2 )
{
     List p1=L1->Next,p2=L2->Next,p,head;
	 head=p=(List)malloc(sizeof(struct Node));
     p->Next=NULL; 
     while(p1&&p2)
     {
     	if(p1->Data<=p2->Data)
     	{
     		p->Next=p1;
     		p=p1;
     		p1=p1->Next;
     	}
     	else
     	{
     		p->Next=p2;
     		p=p2;
     		p2=p2->Next;
     	}
     	
     }
     p->Next=p1?p1:p2;
     L1->Next=NULL;
     L2->Next=NULL;
     return head;
}



