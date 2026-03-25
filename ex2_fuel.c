/*Name : okodel abraham*/
/*reg number : 24/U/BIE/11014/PE*/
#include <stdio.h>
#include <stdlib.h>

int main(){
   
     float distance_travelled;
     float fuel_used;
     float Efficiency;
    printf("Enter distance travelled (KM): ");
    scanf("%f", &distance_travelled);

    printf("Enter the number of litres : ");
    scanf("%f", &fuel_used);
    Efficiency = distance_travelled / fuel_used;
    printf("Fuel efficiency: %.2f km/litre\n", Efficiency);

system("pause");

    return 0;
}
