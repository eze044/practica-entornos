#include <stdio.h>
#include <assert.h>

int sumar(int a, int b) {
    return a + b;
}

// Funci�n de pruebas autom�ticas
void test_sumar() {
    assert(sumar(3, 2) == 5);
    assert(sumar(-1, 1) == 0);
    assert(sumar(10, 5) == 15);
    printf("? Totes les proves han passat correctament!\n");
}

int main() {
    test_sumar(); // Ejecuta pruebas autom�ticas
    return 0;
}
//Ezequiel
