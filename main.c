#include <stdio.h>
#include <stdlib.h>

void organizarValores(int* valores) {
    int soma = 0;
    int combinacaoEncontrada = 0;
    int valoresUtilizados[9] = {0}; // Array para controlar quais valores já foram utilizados

    for (int i = 0; i < 9; i++) {
        soma += valores[i];
    }



    printf("Organização agenda:\n");

    for (int i = 0; i < 7; i++) {
        for (int j = i + 1; j < 8; j++) {
            for (int k = j + 1; k < 9; k++) {

                int soma180 = valores[i] + valores[j] + valores[k];
                if (soma180 <= 180 && !valoresUtilizados[i] && !valoresUtilizados[j] && !valoresUtilizados[k] ) {
                    printf(" Soma 180: %d + %d + %d = %d\n ", valores[i], valores[j], valores[k], soma180);
                    combinacaoEncontrada++;
                    valoresUtilizados[i] = 1;
                    valoresUtilizados[j] = 1;
                    valoresUtilizados[k] = 1;
                    
                    break; // Encerra o loop interno após encontrar uma combinação válida
                }
                
                
            }
        }
    }
        for (int i = 0; i < 7; i++) {
        for (int j = i + 1; j < 8; j++) {
            for (int k = j + 1; k < 9; k++) {

                int soma240 = valores[i] + valores[j] + valores[k];
                if (soma240 <= 240 && !valoresUtilizados[i] && !valoresUtilizados[j] && !valoresUtilizados[k] )  {
                    printf("Soma 240: %d + %d + %d = %d\n ", valores[i], valores[j], valores[k], soma240);
                    combinacaoEncontrada++;
                    valoresUtilizados[i] = 1;
                    valoresUtilizados[j] = 1;
                    valoresUtilizados[k] = 1;
                   
                   break; // Encerra o loop interno após encontrar uma combinação válida
                }
                
                
            }
        }
                for (int i = 0; i < 7; i++) {
        for (int j = i + 1; j < 8; j++) {
            for (int k = j + 1; k < 9; k++) {

                int soma300 = valores[i] + valores[j] + valores[k];
                if (soma300 <= 300 && !valoresUtilizados[i] && !valoresUtilizados[j] && !valoresUtilizados[k] )  {
                    printf("Soma 300: %d + %d + %d = %d\n ", valores[i], valores[j], valores[k], soma300);
                    combinacaoEncontrada++;
                    valoresUtilizados[i] = 1;
                    valoresUtilizados[j] = 1;
                    valoresUtilizados[k] = 1;
                   
                   break; // Encerra o loop interno após encontrar uma combinação válida
                }
                
                
            }
        }
    }
    }
    


    if (combinacaoEncontrada == 0) {
        printf("Não foi possível encontrar uma combinação válida com as somas desejadas.\n");
    }
}

int main() {
    int valores[9];

    printf("Digite o horário (em minutos) dos pacientes: ");
    for (int i = 0; i < 9; i++) {
        scanf("%d", &valores[i]);
    }

    organizarValores(valores);

    return 0;
}
