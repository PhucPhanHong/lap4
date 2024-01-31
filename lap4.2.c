#include<stdio.h>
#include<conio.h>
main(){
	int n=260, *p=&n;
	printf("n=%d\n",n);
	char *pp=(char*)p;// chuyen kieu tro 
	*pp=0;// dat 
	printf("n=%d\n",n);//tro thay doi n=0 chiem 4 bit 
	getchar();
	}
