#include <unistd.h>

int putshar(char c)
{
	write(1,&c,1);
}
