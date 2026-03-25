/*Name: Okodel Abraham*/
/*reg number : 24/U/BIE/11014/PE*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    float units_consumed, cost_per_unit, the_final_bill;

    printf("Enter units consumed: ");
    scanf("%f", &units_consumed);

    printf("Enter cost per unit: ");
    scanf("%f", &cost_per_unit);

    the_final_bill = units_consumed * cost_per_unit;

    printf("\nTotal bill: %.2f UGX\n", the_final_bill);

    system("pause");

    return 0;
}
