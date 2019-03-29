#include <stdio.h> 
#include <stdlib.h> 
int main()
{
 int h,m,s; 
 printf("請輸入現在時間(24小時制):"); 
 scanf("%d%d",&h,&m);
 int htom=h*60;
  
 if(htom+m>=450&&htom+m<=1020) 
 {
   printf("現在是上課時間");
 }
 else
 {
  printf("現在是下課時間");
 }

}
