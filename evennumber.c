#include <stdio.h>

void main(){
    
    int even = 1, odd,i;
    label: 
    int sum=0;
    printf("Enter odd number to calculate the sum of 1 to n numbers: ");
    scanf("%d", &odd);
    even = odd%2;
    while(even == 0){
        printf("Your %d is not odd number, enter odd number: ", odd);
        scanf("%d", &odd);
        even++;
        even = odd%2;
    }

    for(i=1; i<=odd; i+=2){
        sum = sum+i;
    }

    printf("1 to %d\'s odd total sum is %d ", odd, sum);
    goto label;
}