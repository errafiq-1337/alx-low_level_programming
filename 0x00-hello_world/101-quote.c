#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 1 (Error)
 */
int main(void)
{
char msg1[] = "and that piece of art is useful\"";
char msg2[] = " - Dora Korpar, 2015-10-19\n";

write(2, msg1, sizeof(msg1) - 1);
write(2, msg2, sizeof(msg2) - 1);
return (1);
}
