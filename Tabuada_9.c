#include <stdio.h>

int main(){
        printf("\n");
        printf("\n");
        printf("Taboada do 9:\n");

        int i, multiplicador, result;

        i = 9;

        for(multiplicador = 1 ; multiplicador < 11 ; multiplicador++){

           result = multiplicador * i;

            printf("|%d ", multiplicador);
            printf("x ");
            printf("%d = %d  \n", i, result);

           
            
            

        }
        printf("\n");
        printf("\n");
        
        return 0;
}