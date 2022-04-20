
#include <stdio.h>

int main()
{
    int amt_given,bill_amt;
    scanf ("%d %d", &bill_amt,&amt_given);
    printf ("%d\n",(bill_amt/amt_given));
    printf ("%d", (bill_amt%amt_given));
    return 0;
}
