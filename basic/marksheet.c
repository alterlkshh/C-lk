#include<stdio.h>

int main()
{
  int roll_no, maths, physics, pps;
  float per;
  char name;

   printf("Enter your roll number:");
  scanf("%d", &roll_no);
  
   printf("Enter your name : ");
  scanf("%s", &name);

  printf("Enter marks of maths:");
  scanf("%d", &maths);

  printf("Enter marks of physics:");
  scanf("%d", &physics);

  printf("Enter marks of pps:");
  scanf("%d", &pps);

  per = (maths+physics+pps)/3;

  printf("your percentage is %f",per);

  return 0;
}