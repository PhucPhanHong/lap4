#include<stdio.h>
int main(){
	int n=7, m=6;//khai báo bien n m 
	int *pn = &n;//tro pn den n
	int *pm = &m;//tro pm den m
	*pn= *pm + 2*m - 3*n;//tro thay doi n 
	*pm -= *pn;//tro thay doi m
	printf("%d", m+n);//tong m n sau thay doi 
	getchar();
	return 0;
	}
