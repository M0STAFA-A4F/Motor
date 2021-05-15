#define F_CPU 8000000UL
#include <util/delay.h>

#include "STD_TYPES.h"
#include "DIO_Interface.h"

int main()
{
	DIO_VidSetPinDirection(0,0,1);
	DIO_VidSetPinDirection(0,1,1);

	DIO_VidSetPortValue(0,0);

	while(1)
	{
		DIO_VidSetPinValue(0,0,1);
		_delay_ms(5000);

		DIO_VidSetPinValue(0,0,1);
		DIO_VidSetPinValue(0,1,1);
		_delay_ms(2000);
		DIO_VidSetPinValue(0,0,0);

		DIO_VidSetPinValue(0,1,1);
		_delay_ms(5000);

		DIO_VidSetPinValue(0,0,1);
		DIO_VidSetPinValue(0,1,1);
		_delay_ms(2000);
		DIO_VidSetPinValue(0,1,0);
	}

	return 0;
}
