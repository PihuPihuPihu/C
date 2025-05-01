//AVANTIKA RANA
#include<stdio.h>
#include<conio.h>
#include<string.h>

void main(){
     char original[20],duplicate1[20];
     int i;
     clrscr();
     printf("ENTER A STRING:");
     gets(original);
     for(i=0;i<strlen(original);i++)
	    duplicate1[i]=original[strlen(original)-(1+i)];
     duplicate1[i]='\0';
     printf("\nTHE REVERSE STRING IS:");
     puts(duplicate1);
     getch();
     }

