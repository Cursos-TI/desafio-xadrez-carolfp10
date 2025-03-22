#include <stdio.h>

void movertorre(int casas){
    if(casas > 0) {
            printf("Direita.\n");
        movertorre(casas - 1);
    }
}
    void moverrainha(int casa){
    if(casa > 0) {
    printf("Esquerda.\n");
    moverrainha(casa - 1);
    }
}
    void moverbispo(int casas) {
        if (casas > 0){
            printf("Direita cima.\n");
            moverbispo(casas -1);
        }
    }

int main(){
    
    printf("Movimentação da Torre:\n");
        movertorre(5);
        printf("Movimentação da Rainha.\n");
        moverrainha(4);
        printf("Movimentação do Bispo.\n");
        moverbispo(3);

        printf("Movimentação cavalo.\n");
    
        int movimentocompleto = 1;
    
        while (movimentocompleto--);
        {
            for (int i = 0; i < 2; i++) {
             printf("Cima.\n");
            }
            printf("Direita.\n);
        }


    return 0;
}
