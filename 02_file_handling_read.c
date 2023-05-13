#include <stdio.h>
void main()
{
    FILE *fp; //declare file pointer
    //file opening
    // syntax
    //  fopen("filename","filemode");
   fp = fopen("fakefile.txt","r");
    /*
    //    this is for testing
    if(fp!=NULL)
    {
        printf("yeh");
    }
    else
    {
        printf("no");
    }
    */
    // Read Data from file


    //first declare a variable
    char buffer[100];

    //fgets(buffername,buffersize,filepointer);
    fgets(buffer,100,fp);
    printf("%s",buffer);
    fclose(fp);      
}