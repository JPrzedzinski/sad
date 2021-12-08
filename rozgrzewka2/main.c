#include <stdio.h>
#include <stdlib.h>

float Pole(float,float);
float Obw(float,float);

int main()
{
    printf("Rozgrzewka2\n");
    float bok1=5;
    float bok2=4.25;
    printf("Prostokata o bokach %f i %f\n",bok1,bok2);
    printf("Pole prostokata: %f\n",Pole(bok1,bok2));
    printf("Obw prostokata: %f\n",Obw(bok1,bok2));

    return 0;
}

float Pole(float a,float b)
{
    return a*b;
}
float Obw(float a,float b)
{
    return 2*a+2*b;
}
