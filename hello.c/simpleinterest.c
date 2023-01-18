#include<stdio.h>
int main()
{
    float p_a,r_o_i,N_O_Y,S_I;
    printf("Enter the principal amount:\n");
    scanf_s("%f",&p_a);
    printf("Enter rate of interest:\n");
    scanf_s("%f",&r_o_i);
    printf("Enter number of years:\n");
    scanf_s("%f",&N_O_Y);
    S_I=(p_a*r_o_i*N_O_Y)/100;
    printf("Simple interest on the given amount is:%f",S_I);

}