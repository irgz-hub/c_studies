#include <stdio.h>

int main() {
    printf("Hello");
    //fflush(stdout); // Descarrega o buffer associado a stdout
    // (A saída agora aparecerá mesmo que não haja uma quebra de linha)

    printf(", world!\n");

    return 0;
}