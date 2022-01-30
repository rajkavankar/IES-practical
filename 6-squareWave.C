#include<reg51.h>
delay(unsigned int y)
{
    unsigned int n;

    for (n = 0; n < y; n++)
    {
        ;
    }
}

void main()
{
	while(1)
	{
		 P1 = 0x00;
		delay(50000);
		 P1 = 0xFF;
		delay(50000);
	}
}