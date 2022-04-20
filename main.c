/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int amt_given,bill_amt;
    scanf ("%d %d", &bill_amt,&amt_given);
    printf ("%d\n",(bill_amt/amt_given));
    printf ("%d", (bill_amt%amt_given));
    return 0;
}
