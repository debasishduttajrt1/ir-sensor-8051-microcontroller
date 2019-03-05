#include<reg51.h>
sbit IR=P1^0;
sbit LED=P1^1;
void main ()
{
  IR = 1; 
  while(1) 
  {
    if(IR == 0 ) 
    {
      LED= 1; 
    }
    else
    {
      LED= 0;
 }
 }
 }
