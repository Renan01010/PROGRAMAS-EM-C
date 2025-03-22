#include <stdio.h> 

//Programa que faz um triangulo com numeros ate 15

int i, contador, linhas;
contador = 0;
linhas = 1;

int main(){
    for (i=1 ; i<16 ; i++ ) {                    // Laço com atribuições para contar de 1 ate 15
        
        printf("%d ", i);
        contador++;                             // Cada ves que o laço se repitir ele adiciona 1 ao contador
        if (contador == linhas){                // condição para que ele quebre a linha

            contador = 0;
            printf("\n");
            linhas++;
        }

     }
    return 0;


}