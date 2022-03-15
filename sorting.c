/**
 * @file sorting.c
 * 46. Write a program to sort an array in ascending order and find the 3rd largest element in array.
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-03-15
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h> 
void main(){
    int arr[10], i, next,temp, nTime;

    printf("How many array elements: ");
    scanf("%d", &nTime);
    printf("\nEnter %d elements: \n",nTime);
    for(i=0; i<nTime; i++){
        scanf("%d", &arr[i]);
    }

    for ( i = 0; i < nTime; i++)
    {
       for(next = i+1; next<nTime; next++){
           if (arr[i]>arr[next])
           {
               temp = arr[i];
               arr[i] = arr[next];
               arr[next] = temp;
           }
           
       }
    }

    printf("Array sorted in Asscending Order: ");
    for (i = 0; i < nTime; i++)
    {
        printf("%d\t", arr[i]);
    }

    printf("\n%d is the 3rd largest", arr[nTime-3]);
    

}
