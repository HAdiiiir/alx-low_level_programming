#include <stdio.h>
/**
 * main - prints all possible combinations of single-digit numbers
 *
 * Return: Always 0 (success)
 */
int main(void)
{
         int n;

        for (n = 48; n <58; n++)
        {
                 puthar(n);
		 if (n != 57)
		 {
			 puthar(',');
			 puthar(' ');
		 }	 
        }
        puthar('\n');
        return (0);
}
