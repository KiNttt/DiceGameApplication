#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void){
  int s1,s2,t;
  char name[20];

  printf("What is your name?\n");
  printf(">");
  scanf("%s",name);

  printf("Hello, %s!! \n",name);


  srand(time(NULL));

  s1=rand()%6+1;
  s2=rand()%6+1;
  t=s1+s2;

  printf("Die 1 : %d\n",s1);
  printf("Die 2 : %d\n",s2);
  printf("Total value : %d\n",t);

  if(t>=7){
    printf("%s won!\n",name);
  }
  else {printf("%s lost!\n",name);}



  return 0;
}
