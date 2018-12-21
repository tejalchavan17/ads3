#include<stdio.h>
#include<conio.h>
#define MAX 100
void main()
{
     int hasht[MAX],data[MAX];
     int i,ts,dt;
     //clrscr();
     printf("\n Enter Table size");
     scanf("%d",&ts);
     printf("\n Enter no. of data to be placed in hash table");
     scanf("%d",&dt);
     for(i=0;i<dt;i++)
     {
	printf("\n Enter data at %d ",i);
	scanf("%d",&data[i]);
     }
      for(i=0;i<ts;i++)
	hasht[i]=-1;
     for(i=0;i<dt;i++)
     {
       int k,c=0;
       k=data[i]%ts;
       if(hasht[k]==-1)
       {
	  hasht[k]=data[i];
	  printf("\n placed at %d = %d ",k,data[i]);
       }
       else
       {
	   printf("\n collision at %d ",k);
	   while(hasht[k]!=-1)
	   {
	      k=(k+1)%ts;
	      c++;
	      printf("\t %d probe at %d ",c,k);
	   }
	   c=0;
	   hasht[k]=data[i];
	   printf("\n placed at %d = %d ",k,data[i]);
       }
     }
     printf("\n Hash Table");
     for(i=0;i<ts;i++)
     {
	printf("\n data at %d = %d ",i,hasht[i]);
     }
     getch();
}

output:

C:\Users\Tejal\Desktop>gcc -o hashing hashing.c

C:\Users\Tejal\Desktop> hashing

 Enter Table size10

 Enter no. of data to be placed in hash table5

 Enter data at 0 11

 Enter data at 1 12

 Enter data at 2 21

 Enter data at 3 22

 Enter data at 4 13

 placed at 1 = 11
 placed at 2 = 12
 collision at 1          1 probe at 2    2 probe at 3
 placed at 3 = 21
 collision at 2          1 probe at 3    2 probe at 4
 placed at 4 = 22
 collision at 3          1 probe at 4    2 probe at 5
 placed at 5 = 13
 Hash Table
 data at 0 = -1
 data at 1 = 11
 data at 2 = 12
 data at 3 = 21
 data at 4 = 22
 data at 5 = 13
 data at 6 = -1
 data at 7 = -1
 data at 8 = -1
 data at 9 = -1




