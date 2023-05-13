#include <stdio.h>
void main()
{
	FILE *fp;
	fp=fopen("karan.txt","r");
	char str[100];
	fgets(str,100,fp);
	printf("%s",str);
}
