#include <stdio.h>
 /**
  * print string in the put function
  *
  * Description: using the main function
  * this program prints "prints the size of various types on the computer it is compiled and run on"
  * Return 0
 */
        int main(void)
{
	char c;
	int i;
	long li;
	long long lli;
	float f;

	printf("size of char: %ld byte(s)", sizof(c));
	printf("size of an int: %ld byte(s)",sizeof(i));
	printf("size of long long: %ld byte(s)",sizeof(li));
	printf("size of longlong long: %ld byte(s)",sizeof(lli));
	printf("size of float float: %ld byte(s)",sizeof(f));
}
