/**
 * @file shiftArray.c
 * Suppose you have taken some values in an array of any size. For example, array1 = [5, 2, 3 ,1, 9, 4].
Now your friend requesting you to shift array values one cell to the right side (Right Shift). As per the request of your friend the array1 will be now [4, 5, 2, 3, 1, 9].
Note: The array values and size will be defined by user.
Sample Input 9 3 8 2 7 1
Sample Output 1 9 3 8 2 7
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-03-16
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h> 
void main(){
    int i, n, t;
    printf("Array size: \n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the array value: \n");
    for(i=1; i<=n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Before shift: ");
    for(i=1; i<=n; i++){
        printf("%d\t", arr[i]);
    }

    printf("\n\nAFTER shift: ");
    t = arr[n];
    printf("%d\t",t);
    for(i=1; i<=(n-1); i++){
        printf("%d\t", arr[i]);
    }

}
