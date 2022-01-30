#include<reg52.h>

// NOTE: Umsigned int only takes positive values

delay(unsigned int y)
{
    unsigned int i;

    for (i = 0; i < y; i++) //Finite Loop
    {
        ;
    }
}

main()
{
    while (1) //Infinite Loop
    {
        // Note P! is port There are 4 ports
        // one port is of 1 bit each can take 8 LED's
         P1 = 0x00;   //LED ON
        delay(3000); // IN milliseconds 1000 milliseconds = 1 second
         P1 = 0xFF;   //LED OFF
        delay(3000);
    }
}