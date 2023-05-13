// write mode is dangerous as it delete
// the whole data and then write the new
// data in it


#include <stdio.h>
void main()
{
	FILE *fp;
	fp=fopen("karan.txt","w");
	fprintf(fp,"\n3 shiv cse 90000");
	
	
	

	// close the file
	fclose(fp);
}
