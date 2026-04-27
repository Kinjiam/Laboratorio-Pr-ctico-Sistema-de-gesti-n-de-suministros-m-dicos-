#include <stdio.h>
#include <string.h>

// Definición de la estructura Medicamento
typedef struct {
    int ID;
    char Nombre[40];
    int Stock;
    float Costo;
} Medicamento;

#define TAM_INVENTARIO 5  // Capacidad para al menos 5 medicamentos

// Función para inicializar el inventario con datos predefinidos
void inicializarInventario(Medicamento inv[]) {
    // Medicamento 1
    inv[0].ID = 1;
    strcpy(inv[0].Nombre, "Paracetamol");
    inv[0].Stock = 100;
    inv[0].Costo = 5.50;

    // Medicamento 2
    inv[1].ID = 2;
    strcpy(inv[1].Nombre, "Ibuprofeno");
    inv[1].Stock = 80;
    inv[1].Costo = 7.25;

    // Medicamento 3
    inv[2].ID = 3;
    strcpy(inv[2].Nombre, "Amoxicilina");
    inv[2].Stock = 50;
    inv[2].Costo = 12.00;

    // Medicamento 4
    inv[3].ID = 4;
    strcpy(inv[3].Nombre, "Aspirina");
    inv[3].Stock = 120;
    inv[3].Costo = 4.75;

    // Medicamento 5
    inv[4].ID = 5;
    strcpy(inv[4].Nombre, "Omeprazol");
    inv[4].Stock = 60;
    inv[4].Costo = 8.90;
}

// Función para actualizar el stock de un medicamento (usando punteros para paso por referencia)
void actualizarStock(Medicamento *med, int cambio) {
    med->Stock += cambio;  // Incrementa o decrementa el stock según el valor de cambio
}

// Función para imprimir el reporte del inventario (paso por valor o puntero constante)
void imprimirReporte(const Medicamento inv[], int tam) {
    printf("=== Reporte de Inventario de Medicamentos ===\n");
    printf("%-5s %-20s %-8s %-10s\n", "ID", "Nombre", "Stock", "Costo");
    printf("---------------------------------------------\n");
    for (int i = 0; i < tam; i++) {
        printf("%-5d %-20s %-8d %-10.2f\n", inv[i].ID, inv[i].Nombre, inv[i].Stock, inv[i].Costo);
    }
    printf("=============================================\n");
}

int main() {
    Medicamento inventario[TAM_INVENTARIO];  // Array de estructuras

    // Inicializar el inventario
    inicializarInventario(inventario);

    // Imprimir reporte inicial
    imprimirReporte(inventario, TAM_INVENTARIO);

    // Ejemplo de actualización: decrementar stock del Paracetamol en 10 unidades
    actualizarStock(&inventario[0], -10);

    // Imprimir reporte después de la actualización
    imprimirReporte(inventario, TAM_INVENTARIO);

    return 0;
}