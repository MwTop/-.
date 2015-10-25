/********二倍回文数的判断******/ 
/********author:MwangTop*******/
#include "stdio.h"

int main(void)
{
   long m;
   int k,j;
   printf("请输入一个正整数：");
   scanf("%ld",&m);
   if(m<5)
   { 
    printf("输入错误，请输入大于或等于5的正整数！\n");
   	exit(0);
   }  
   m=m*2;
   k=m,j=0;
   while(k>0)
   {
	   j=j*10+k%10;    //后位与前一位比较
	   k=k/10;
   } 
      if ( m == j )
          printf( "Yes,it's a huiwen number!\n");
     else
           printf( "No,it is't\n");
}
