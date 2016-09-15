List Reverse( List L )
{
     List current=NULL,previous=NULL;
     while(L)
     {
     	current=L->Next;//在覆盖之前保存下一个节点 
     	L->Next=previous;//把前一个节点赋给下一个节点 
     	previous=L; 
     	L=current;
     }
     return previous;
} 
