#include <stdio.h>
#include <stdlib.h>

#define ERROR NULL
typedef int ElementType;
typedef struct LNode *PtrToLNode;
struct LNode {
    ElementType Data;
    PtrToLNode Next;
};
typedef PtrToLNode Position;
typedef PtrToLNode List;

Position Find( List L, ElementType X );
List Insert( List L, ElementType X, Position P );
List Delete( List L, Position P );

int main()
{
    List L;
    ElementType X;
    Position P, tmp;
    int N;

    L = NULL;
    scanf("%d", &N);
    while ( N-- ) {
        scanf("%d", &X);
        L = Insert(L, X, L);
        if ( L==ERROR ) printf("Wrong Answer\n");
    }
    scanf("%d", &N);
    while ( N-- ) {
        scanf("%d", &X);
        P = Find(L, X);
        if ( P == ERROR )
            printf("Finding Error: %d is not in.\n", X);
        else {
            L = Delete(L, P);
            printf("%d is found and deleted.\n", X);
            if ( L==ERROR )
                printf("Wrong Answer or Empty List.\n");
        }
    }
    L = Insert(L, X, NULL);
    if ( L==ERROR ) printf("Wrong Answer\n");
    else
        printf("%d is inserted as the last element.\n", X);
    P = (Position)malloc(sizeof(struct LNode));
    tmp = Insert(L, X, P);
    if ( tmp!=ERROR ) printf("Wrong Answer\n");
    tmp = Delete(L, P);
    if ( tmp!=ERROR ) printf("Wrong Answer\n");
    for ( P=L; P; P = P->Next ) printf("%d ", P->Data);
    return 0;
}

Position Find( List L, ElementType X )
{
	Position ps=ERROR;
	while(L)
	{
		if(L->Data==X)
		{
			ps=L;
			break;
		}
		L=L->Next; 
	}
	return ps; 
}

List Insert( List L, ElementType X, Position P )
{
	List p=(List)malloc(sizeof(struct LNode));
	List head=(List)malloc(sizeof(struct LNode));
	head->Next=L;
	p->Data=X;
	L=head;
	while(L&&L->Next!=P)
	{
		L=L->Next; 
	} 
	if(L==NULL)
	{
	printf("Wrong Position for Insertion\n");
	return ERROR;
}
	L->Next=p;
	p->Next=P;
	return head->Next;
}

List Delete( List L, Position P )
{
	List head=(List)malloc(sizeof(struct LNode));
	List p;
	head->Next=L;
	L=head;
	while(L&&L->Next!=P)
	{
		L=L->Next;
	}  
	if(L==NULL)
	{
		printf("Wrong Position for Deletion\n");
		return ERROR;
	}
	p=L->Next;
	L->Next=L->Next->Next;
	free(p);
	return head->Next;
}


