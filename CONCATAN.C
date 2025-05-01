//AVANTIKA RANA 23CE11
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
     char s1[30],s2[30],s3[100];
     int i,j;
     clrscr();
     printf("ENTER A STRING:");
     gets(s1);
     printf("ENTER A STRING:");
     gets(s2);
     for(i=0;i<strlen(s1);i++)
	       s3[i]=s1[i];
     for(j=0;j<strlen(s2);j++)
	      {s3[i]=s2[j];
	       i++;}
     printf("THE RESULTANT STRING IS:");
     puts(s3);
     strcat(s1,s2);
     printf("BY FUNCTION:");
     puts(s1);
     getch();
     }