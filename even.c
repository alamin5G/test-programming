/*calculate the sum of even number series from 2 to n;*/

#include <stdio.h>

void main(){

    int even, odd, sum=0,i;
    printf("Enter even number to calculate the sum of 2 to n numbers: ");
    scanf("%d", &even);
    odd = even%2;
    while(odd != 0){
        printf("Your %d is not even number, enter even number: ", even);
        scanf("%d", &even);
        odd--;
        odd = even%2;
    }

   for(i=2; i<=even; i+=2){
        sum = sum+i;
    }

    printf("2 to %d\'s even total sum is %d ", even, sum);
}