#include <stdio.h>
#include <math.h>

int main()
{
int r = 5, h = 10;
float pi = 3.14;

printf("Taban alanı: %f\n", M_PI*r*r );
printf("yanal alan: %f\n", 2*M_PI*r*h);
printf("total alan: %f\n", 2*M_PI*r*h + 2*M_PI*r*r );
printf("hacim: %f\n", M_PI*r*r*h);
return 0;


}
