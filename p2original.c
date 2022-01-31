#include<stdio.h>
int cmp(int a,int b,int c)
{
  int large;
  if((a>b)&&(a>c))
  printf("A is large\n");
  else if((b>a)&&(b>c))
  printf("B is large\n");
  else if((c>a)&&(c>b));
  printf("C is large\n");
}
int input()
{
  int a;
  printf("Enter the numbers\n");
  scanf("%d",&a);
  return a;
}
void output(int largest)
{
  printf("Large number is : %d\n",largest);
}
int main()
{
  int a,b,c,largest;
  a=input();
  b=input();
  c=input();
  largest=cmp(a,b,c);
  return 0;
}