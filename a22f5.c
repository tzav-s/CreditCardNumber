#include <stdio.h>
#include "simpio.h"

#define DIG 16

long long GetLongLong(void);
bool fill_it(long long elements[],long long num);
bool valid_check(long long elements[],long long extra_tab[],long long num);
void new_tab (long long elements[],long long extra_tab[]);

int main ()
{
   long long elements[DIG];
    long long num;
    long long extra_tab[DIG];
    bool flag;
    flag=TRUE;

     printf("Insert card number:");

     num=GetLongLong();
     while(flag)
        {
          flag=fill_it(elements,num);
          if(flag)
          {
              flag=valid_check(elements,extra_tab,num);
              if (flag)
              {
                  printf("%lld is VALID",num);
                  break;
              }
              else
                break;
          }
          else
            break;


        }
        if (flag==FALSE)
            printf("%lld is INVILID",num);

     system("PAUSE");
     return 0;

}
long long GetLongLong(void)
{
 string line;
 long long value;
 char termch;
 while (TRUE) {
 line = GetLine();
 switch (sscanf(line, " %lld %c", &value, &termch)) {
 case 1:
 FreeBlock(line);
 return (value);
 case 2:
 printf("Unexpected character: '%c'\n", termch);
 break;
 default:
 printf("Please enter an integer\n");
 break;
 }
 FreeBlock(line);
 printf("Retry: ");
 }
}
bool fill_it(long long elements[],long long num)
{

    int i;
    i=DIG-1;


    while(num>=0&& i>=0 )
    {
        elements[i]=num%10;
        num=num/10;
        i--;


    }
    if (num==0)
        return TRUE;
    else
        return FALSE;
    if(elements[0]<4 || elements[0]>7)

     return FALSE;


}
bool valid_check(long long elements[],long long extra_tab[],long long num)
{
    long long x,y;
    long long sum=0;
    int i;
    new_tab(elements,extra_tab);

    for (i=0;i<DIG;i++)
    {
        sum+=extra_tab[i];
    }
if (sum/10==0)
        return TRUE;
     else
        return FALSE;


}

void new_tab (long long elements[],long long extra_tab[])
{
    long long x,y;
    int i;

    for (i=0;i<DIG;i++)
    {
        if (i/2==0)
        {
            extra_tab[i]=elements[i];

        }
        else
            if (elements[i]%10==0)
           {
               extra_tab[i]=elements[i]*2;
           }

            else
                x=elements[i]%10;
                y=elements[i]/10;
                extra_tab[i]=(x+y)*2;


    }
}
