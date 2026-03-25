 /*Name: Okodel Abraham*/ 
 /*Student Number: 24/U/BIE/11014/PE*/
#include <stdio.h>
#include <stdlib.h>

int main() {

    float amount, transaction_fee,fee_amount, total_amount_deducted;

    printf(" please enter amount to send: ");
    scanf("%f", &amount);

    printf("please enter the  transaction fee   (%%): ");
    scanf("%f", &transaction_fee);
    fee_amount = (transaction_fee / 100) * amount;
    total_amount_deducted = amount + fee_amount;

    printf("\n--- transaction history ---\n");
    printf("Fee Amount: %.2f\n", fee_amount);
    printf("Total Amount Deducted: %.2f\n", total_amount_deducted);
system("pause");
    return 0;
}
