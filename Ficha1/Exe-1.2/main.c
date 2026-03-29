#include <stdio.h>

int main() {
    int pesoTestes, pesoProjeto;

    printf("Introduza a ponderacao dos Testes Escritos (em %%): ");
    scanf("%d", &pesoTestes);

    printf("Introduza a ponderacao do Projeto (em %%): ");
    scanf("%d", &pesoProjeto);

    printf("        Componentes de Avaliacao\n\n");
    printf("  TestesEscritos              Projeto\n");
    printf("       %d%%                      %d%%\n\n", pesoTestes, pesoProjeto);
    printf("  Aulas TP + Aulas PL\n");

    return 0;
}