#include <ctime>
int returnanumber()
{
	srand(time(NULL));
	return rand()%10;
}