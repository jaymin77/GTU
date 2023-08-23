/* Write a c program to prepare pay slip using following data.
Da = 10% of basic, Hra = 7.50% of basic, Ma = 300,
Pf = 12.50% of basic, Gross = basic + Da + Hra + Ma, Nt = Gross – Pf.*/
#include <stdio.h>

int main()
{
    float bs, da, hra, ma, pf, gr, nt;
    printf("Enter the basic:");
    scanf("%f", &bs);

    da = bs * 0.1;
    hra = bs * 0.075;
    ma = 300;
    pf = bs * 0.125;
    gr = bs + da + hra + ma;
    nt = gr - pf;

    printf("The value of: da:%f\n hra:%f\n ma:%f\n pf:%f\n gr:%f\n nt:%f\n", da, hra, ma, pf, gr, nt);
}