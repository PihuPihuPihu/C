#include<stdio.h>
#include<conio.h>
#include<string.h>
void are_anagrams();
void main(){
     clrscr();
     are_anagrams();
     getch();
     }
void are_anagrams(){
     char s1[100],s2[100];
     int i=0;
     printf("ENTER A STRING:");
     gets(s1);
     strlwr(s1);
     printf("ENTER A STRING:");
     gets(s2);
     strlwr(s2);
     for(i=0;i<strlen(s1);i++)
	  {int j=0,t;
	   for(j=0;j<strlen(s1)-1;j++)
	      if(s1[j]==' '||s1[j]=='\t')
		{s1[j]=s1[j+1];
		 s1[j+1]=' ';}
	      else if(s1[j]<s1[j+1])
	      {
		t=s1[j];
		s1[j]=s1[j+1];
		s1[j+1]=t;
	      }
	  }
     s1[i]='\0';
     for(i=0;i<strlen(s2);i++)
	 {int j=0,t;
	  for(j=0;j<strlen(s2);j++)
	     if(s2[j]==' '||s2[j]=='\t')
	       {s2[j]=s2[j+1];
		s2[j+1]=' ';}
	     else if(s2[j]<s2[j+1])
		{t=s2[j];
		s2[j]=s2[j+1];
		s2[j+1]=t;
		}
	 }
     s2[i]='\0';
     puts(s1);
     puts(s2);
     if(strcmp(s2,s1)==0)
	printf("THE STRINGS ARE ANAGRAMS");
     else
	printf("THE STRINGS ARE NOT ANAGRAMS");
     }