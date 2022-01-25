/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
struct library{
   char bookname[50];
   char author[50];
   float price;
};
int main(){
   struct library lib[100];
   int i,j, keepcount;
   i=j=keepcount = 0;
   printf("\n\n «Library Management»\n");
   while(j!=6){
      printf("\n1. Add book information\n");
      printf("2.Display book information\n");
      printf("3.Display highest price book\n");
      printf("4. no of books in the library\n");
      printf("5. Exit");
      printf ("\n\nEnter one of the above : ");
      scanf("%d",&j);
      switch (j){
         /* Add book */
         case 1:
            printf ("Enter book name = ");
            scanf ("%s",lib[i].bookname);
            printf ("Enter author name = ");
            scanf ("%s",lib[i].author);
            printf ("Enter price = ");
            scanf ("%f",&lib[i].price);
            keepcount++;
            i++;
            break;
         case 2:
            printf("Display all books available\n");
            for(i=0; i<keepcount; i++){
               printf ("book name = %s\n",lib[i].bookname);
               printf ("author name = %s\n",lib[i].author);
               printf ("price = %.2f\n",lib[i].price);
            }
            break;
         
          case 3:
        	printf ("Highest Price Book : ");
             float temp = 0;
      	     for (i=0;i<keepcount;i++)
	           {
	         if(temp<lib[i].price)
	         temp=lib[i].price;
               	}
         	printf("%.2f", temp);
	     	break;
         case 4:
            printf("\n No of books in library : %d", keepcount);
            break;
         case 5:
            exit (0);
      }
   }
   return 0;
}