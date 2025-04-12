#include <stdio.h>
#include <assert.h>

// Declaración anticipada (o incluye el header si tienes uno)
int sumar(int a, int b) {
    return a + b;
}

// Pruebas unitarias
void test_sumar() {
    assert(sumar(2, 3) == 5);
    assert(sumar(-1, 1) == 0);
    assert(sumar(0, 0) == 0);
    assert(sumar(-5, -2) == -7);
    printf("✅ Todos los tests de sumar() pasaron.\n");
}
