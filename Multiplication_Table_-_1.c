#include<stdio.h>
int main()
{
  int i,N,A=12;
  scanf("%d",&N);
  for(i=1;i<=A;i++)
  {
      printf("%d x %d = %d
",N,i,N*i);
  }
}