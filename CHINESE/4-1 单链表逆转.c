List Reverse( List L )
{
     List current=NULL,previous=NULL;
     while(L)
     {
     	current=L->Next;//�ڸ���֮ǰ������һ���ڵ� 
     	L->Next=previous;//��ǰһ���ڵ㸳����һ���ڵ� 
     	previous=L; 
     	L=current;
     }
     return previous;
} 
