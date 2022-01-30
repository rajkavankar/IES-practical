#include<reg52.h>

delay(unsigned int y)
{
    unsigned int i;

    for (i = 0; i < y; i++)
    {
        ;
    }
}

void main()
{
	int a[10] = {0xC0, 0xF9, 0xa4, 0xb0, 0x99, 0x92, 0x82, 0xF8, 0x80, 0x90};
    while (1) 
    {
	  int j;
      for (j = 0; j < 10; j++)
      {
         P3 = a[j];
		 delay(50000);
      }
    }
}