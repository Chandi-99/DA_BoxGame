/*CS_2018_049*/
#include <stdio.h>
#include <stdlib.h>
#include "stack_049.h"
#include <time.h>

void main()
{

    int x = 49;
    int inputInteger;
    time_t T;
    int topInteger1, topInteger2;


    Stack A,B;
    createStack(&A);
    createStack(&B);


    printf(".....Number Set Game start.....\n");
    printf("Input: ");


    scanf("%d", &inputInteger);


    if(inputInteger < 5 || inputInteger > 20){
        printf("Invalid input. Please enter an integer in between 5 and 20\n");
        exit(0);
    }
    else{

        int intArray[inputInteger];

        printf("System generated number set: ");
        srand((unsigned) time(&T));

        for(int  i = 0 ; i < inputInteger ; i++ ) {
        intArray[i] = rand() % 50;
        printf(" %d",intArray[i] );
        }


        printf("\nA's number set is: ");
        for(int i = 0 ; i < inputInteger; i++ ) {
            printf("%d ",intArray[i] );
            push(intArray[i],&A);
        }

        printf("\nB's number set is: ");
        for(int i = inputInteger-1 ; i > -1 ; i-- ) {
            printf("%d ",intArray[i] );
            push(intArray[i],&B);
        }

        printf("\n\nOutput:\t");
        while(!(isStackEmpty(&A) || isStackEmpty(&B))){

            pop(&topInteger1,&A);
            pop(&topInteger1,&B);

            if(topInteger1>topInteger2){
                printf("2 ");
                push(topInteger2,&B);
            }

            else if(topInteger1<topInteger1){
                printf("1 ");
                push(topInteger1,&A);
            }

            else{
                printf("0 ");
            }

        if(isStackEmpty(&A)){
            printf("\n\tA is the winner!");
            exit(0);
        }

        else if(isStackEmpty(&B)){
            printf("\n\tB is the winner!");
            exit(0);
        }

    }

    }

}
