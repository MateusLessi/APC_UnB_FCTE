#include <stdio.h>
#define TAM_MAX 100

int acha_maior(int vetor_func[], int tamanho_vetor) {
    int maior = vetor_func[0];
    for(int i = 0; i < tamanho_vetor; i++) {
        if(vetor_func[i] > maior) {
            maior = vetor_func[i];
        }
    }

    return maior;
}

int main() {
    int vetor_main[TAM_MAX], N;
    scanf("%d", &N);

    for(int i = 0; i < N; i++)
        scanf("%d", &vetor_main[i]);
    
    // int maior = acha_maior(vetor_main, N);
    printf("O maior numero eh: %d\n", acha_maior(vetor_main, N));
    
    return 0;
}
