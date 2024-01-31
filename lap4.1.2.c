#include<stdio.h>
int main (){
	char c1='A', c2='F';//khai báo kí tu 
	char *p1=&c1;//tro den o nho c1
	char *p2=&c2;//tro den o nho c2
	*p1 +=3;//tro thay doi gia tri trong o nho 
	*p2 -=5;//tro thay doi gia tri trong o nho 
	printf("%d", c1-c2);//tra ve gia tri 
	getchar();
	return 0;
	}
