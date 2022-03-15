/**
 * @file lineManage.c
 * 50. The scenario in front of any virtual Bank is like, Men and women are standing in a single line. It looks so bad.
Now separate men and women in different two line that it looks like a gentle management system and develop the above program to find the majority of gender in the line.
Disarranged line scenario is like - M M W W M M M M W M

M
M
W
W
M
M
M
M
W
M

M = male
W = Women

After operation-
M
M
M
M
M
M
M

W
W
W
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
    int nPerson,i,maleNewPosition = 0, femaleNewPosition = 0; 
    

    printf("How many person in line: \n");
    scanf("%d", &nPerson);
    char person[nPerson], male[nPerson], female[nPerson];

    printf("Enter m and f for male and female: ex: M M F F M M F F M) \n");
    for(i=1; i<=nPerson; i++){
        scanf(" %c",&person[i]);
    }

    //SORTING THE MEN AND WOMAN IN SEPARATE LINE
    for(i=1; i<=nPerson; i++){
        
        if (person[i] == 'm' || person[i] == 'M')
        {
            maleNewPosition++;
            male[maleNewPosition] = person[i];
        }else if (person[i] == 'f' || person[i] == 'f')
        {
            femaleNewPosition++;
            female[femaleNewPosition] = person[i];
        }
        
    }

    printf("\nNew line management: (male) \n");
    for ( i = 0; i < maleNewPosition; i++)
    {
        printf("%c ", male[i+1]);
    }

    printf("\nNew line management: (female) \n");
    for ( i = 0; i < femaleNewPosition; i++)
    {
        printf("%c ", female[i+1]);
    }

    //showing the majority. 

    if (maleNewPosition > femaleNewPosition)
    {
        printf("\n\nmale has majority: %d person\n", maleNewPosition);
    } else{
        printf("\n\nfemale has majority: %d person\n", femaleNewPosition);
    }
      
    
}
