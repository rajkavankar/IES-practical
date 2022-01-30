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
	int a[10]={0xC0,0xF9,0xA4,0xB0,0x99,0x92,0x82,0xF8,0x80,0x90};
	int i,j;
	

	while(1)
	{
		for(j=0;j<10;j++)	
		{
			P2=a[j];
			for(i=0;i<10;i++)
			{
				P3=a[i];
				delay(30000);
			}
		}
	}
}
