#include <stdio.h> 
#include "DelsingleNode.h"

int printflink (ElemSN *h)
{
	ElemSN *p;
	printf ("处理后结果为：\n");
	for (p=h;p!=NULL;p=p->next)
		printf ("%d\t",p->data);
}


int main ()
{
	int a[N],i,key;
	ElemSN *head = NULL;
	printf("请输入%d个数：\n",N);
	for (i=0;i<N;i++)
		scanf ("%d",&a[i]);
	//正向创建单向链表
	head = Createlink (a);
	//删除值为key的结点
	printf ("请输入关键字key的值：");
	scanf ("%d",&key); 
	printf ("\n");
	head=DelsingleNode(head,key);
	//输出单向链表
	printflink (head); 	
}

