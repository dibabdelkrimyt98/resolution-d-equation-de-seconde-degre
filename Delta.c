#include <stdio.h>
#include <conio.h>
#include <math.h>
int main () {
     int a,b,c;
     float delta,x,x1,x2;
     printf ("donner la valeur de a\n");
     scanf ("%d,%d,%d",&a);
     printf ("donner la valeur de b\n");
     scanf ("%d,%d,%d",&b);
     printf ("donner la valeur de c\n");
     scanf ("%d,%d,%d",&c);
     if (a==0)
        printf ("ce n est pas une equation de seconde degre" );
     else {
        delta= b*b - 4*a*c;
        if(delta<0)
            printf ("l equation sur R n admet pas des solutions");
        else {
            if (delta==0){
                x=(-b)/(2*a);
                printf(" solution double x==%f",x);
                }
            else {
                x1=(-b-sqrt(delta))/(2*a);
                printf("x1==%f",x1);
                x2=(-b+sqrt(delta))/(2*a);
                printf("x2==%f",x2);
                }
                }
     }
     getch();
     return 0;}
