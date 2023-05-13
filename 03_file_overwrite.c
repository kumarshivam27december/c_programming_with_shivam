#include <stdio.h>
void main()
{
    FILE *fp;
    fp = fopen("fakefile2.txt","w");
    // now we are going to  print  the file
    fprintf(fp,"\n2 shiva 12229604");

    // closing the file
    fclose(fp);
}