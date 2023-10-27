#include<stdio.h>
int main()
{
    int bs;
    float DA,HRA,GS;
    scanf("%d",&bs);
    if(bs<=10000)
    {
      DA=bs*0.80;
      HRA=bs*0.20;
      GS=bs+DA+HRA;
    }
    else if (bs<=20000)
    {
      DA=bs*0.90;
      HRA=bs*0.25;
      GS=bs+DA+HRA;
    }
    else
    {
        DA=bs*0.95;
        HRA=bs*0.30;
        GS=bs+DA+HRA;
    }
    printf("%.2f",GS);
}