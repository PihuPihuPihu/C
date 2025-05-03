#include<stdio.h>
#include<conio.h>
void hasPairWithSum(int[]);
void main(){
      int i,len,nums[30];
      clrscr();
      printf("ENTER THE NUMBER OF ELEMENTS:");
      scanf("%d",&len);
      if (len<2)
	  printf("\nERROR");
      else
	 { printf("\nENTER THE ELEMENTS:");
	   for(i=0;i<len;i++)
	       {scanf("%d",&nums[i]);
		printf("\n");
	       }
	   for(i=0;i<len-1;i++)
	      { if(nums[i]==nums[i+1])
		 { printf("\nDUPLICATE ELEMENT FOUND");
		   break;}}
	   hasPairWithSum(nums);
	 }
      getch();
      }
void hasPairWithSum(int ar[]){
     int i,target;
     printf("\nENTER THE NUMBER:");
     scanf("%d",&target);
     for





