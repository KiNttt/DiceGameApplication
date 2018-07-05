#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void){
  int s1,s2,t;

  srand(time(NULL));

  s1=rand()%6+1;
  s2=rand()%6+1;
  t=s1+s2;

  printf("Die 1 : %d\n",s1);
  printf("Die 2 : %d\n",s2);
  printf("Total value : %d\n",t);


  return 0;
}
