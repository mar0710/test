#include <stdio.h>
#include <math.h>
#include <stdbool.h>


int f1(){
    double a, b, c, x1, x2, d;
    printf("podaj a=");
    scanf("%lf",&a);
    printf("podaj b=");
    scanf("%lf",&b);
    printf("podaj c=");
    scanf("%lf",&c);

    while(a != 0 || b != 0 || c != 0)
    {

        if(a!=0){
            d=b*b-4*a*c;
            if(d>=0)
            { x1=(-b+pow(d,1./2))/(2*a);
                x2=(-b-pow(d,1./2))/(2*a);
                printf("\nx1=%lf\n",x1);
                printf("\nx2=%lf\n",x2);}
            else
            { printf("brak rozwiazan\n");}}
        else{
            if(b!=0){
                x1=-c/b;
                printf("\nx1=%lf\n",x1);
            }
            else{
                printf("sprzecznosc\n");
            }}
        printf("podaj a=");
        scanf("%lf",&a);
        printf("podaj b=");
        scanf("%lf",&b);
        printf("podaj c=");
        scanf("%lf",&c);

    }
    printf("tozsamosc");
    return 0;
}

void f2(){
    double a, b, c, x1, x2, d;
    bool shouldRun = true;
    while(shouldRun)
    {
        printf("podaj a=");
        scanf("%lf",&a);
        printf("podaj b=");
        scanf("%lf",&b);
        printf("podaj c=");
        scanf("%lf",&c);

        if(a == 0 && b == 0 && c ==0){
            printf("tozsamosc");
            shouldRun = false;
        }
        else{
            d = b*b-4*a*c;
            if (a == 0) {
                if (b != 0) {
                    x1 = -c / b;
                    printf("\nx1=%lf\n", x1);
                } else {
                    printf("sprzecznosc\n");
                }
            } else {
                if (d < 0) {
                    printf("brak rozwiazan\n");
                } else if (d == 0) {
                    x1 = (-b) / (2 * a);
                    printf("\nx=%lf\n", x1);
                } else if (d > 0) {
                    x1 = (-b + pow(d, 1. / 2)) / (2 * a);
                    x2 = (-b - pow(d, 1. / 2)) / (2 * a);
                    printf("\nx1=%lf\n", x1);
                    printf("\nx2=%lf\n", x2);
                }
            }
        }
    }
    return;
}

int main() {
    f2();
    return 0;
}