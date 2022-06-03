#include <stdio.h>

/**
 * main -Entry point
 *
 *print size of different characters
 *
 * Return: Always Success return 0
 *
 */

int maiv(void)
{
printf("Size of a char: %Id byte(s)\n",sizeof(char));
printf("Size of a int: %Id byte(s)\n",sizeof(int)); 
printf("Size of a long: %Id byte(s)\n",sizeof(long int)); 
printf("Size of a long long: %Id byte(s)\n",sizeof(long long int)); 
printf("Size of a float: %Id byte(s)\n",sizeof(float)); 
return (0);
}
