#include <stdio.h> 
#include <stdlib.h> 
int main()
{
 int h,m,s; 
 printf("�п�J�{�b�ɶ�(24�p�ɨ�):"); 
 scanf("%d%d",&h,&m);
 int htom=h*60;
  
 if(htom+m>=450&&htom+m<=1020) 
 {
   printf("�{�b�O�W�Үɶ�");
 }
 else
 {
  printf("�{�b�O�U�Үɶ�");
 }

}
