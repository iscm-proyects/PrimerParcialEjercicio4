#include <stdio.h>

// Cálculo iterativo de pi
void calcular_pi_iterativo(int terminos, double *resultado) {
    *resultado = 0.0;
    for (int n = 0; n < terminos; n++) {
        *resultado += (n % 2 == 0 ? 1.0 : -1.0) / (2.0 * n + 1.0);
    }
    *resultado *= 4.0; // Multiplicar por 4 al final
}

// Cálculo recursivo de pi
double calcular_pi_recursivo(int n) {
    if (n == 0) {
        return 1.0; // Primer término
    } else {
        return (n % 2 == 0 ? 1.0 : -1.0) / (2.0 * n + 1.0) + calcular_pi_recursivo(n - 1);
    }
}

int main() {
    int terminos;
    double resultado_iterativo, resultado_recursivo;

    // Solicitar al usuario el número de términos
    printf("Ingrese el número de términos para calcular pi: ");
    scanf("%d", &terminos);

    // Calcular π de forma iterativa
    calcular_pi_iterativo(terminos, &resultado_iterativo);
    printf("Valor de pi (iterativo) con %d términos: %.50f\n", terminos, resultado_iterativo);

    // Calcular π de forma recursiva
    resultado_recursivo = calcular_pi_recursivo(terminos - 1) * 4.0; // Multiplicar por 4
    printf("Valor de pi (recursivo) con %d términos: %.50f\n", terminos, resultado_recursivo);

    return 0;
}
