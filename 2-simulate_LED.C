#include<reg52.h>

void delay(unsigned int y)
{
    unsigned int i,x;

    for (i = 0; i < y; i++) 
    {
         for (x = 0; x <= 110; x++) {}
    }
}

main()
{
    int LED=0;
    while(1) 
    {
         P1 = LED;   
         delay(1000); 
		 LED++; 
    }
}