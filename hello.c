#include <stdio.h>

enum weekDays {
	sunday,
	monday,
	tuesday,
	wednesday,
	thursday,
	friday,
	saturday
};

int main()
{
	
	enum weekDays today;
	today = sunday;

	printf("Day %d \n", today + 1);
	return 0;	
	
}
