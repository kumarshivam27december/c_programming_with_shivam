#include <stdio.h>
void main()
{
	FILE *fp;
	fp=fopen("karan.txt","r");
	char str[100];
	while(fgets(str,100,fp)){
		printf("\n%s",str);
//		str = "";
	}
	// close the file
	fclose(fp);
}
