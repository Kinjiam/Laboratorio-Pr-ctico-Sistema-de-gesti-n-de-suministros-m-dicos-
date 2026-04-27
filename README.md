# Laboratorio-Pr-ctico-Sistema-de-gesti-n-de-suministros-m-dicos-
Laboratorio práctico clases en vivo

## Descripción del Programa: Sistema de Gestión de Suministros Médicos (SGSM)

Este programa es una aplicación simple escrita en el lenguaje C que simula un sistema para gestionar el inventario de medicamentos en una clínica de urgencias. Imagina que es como una lista organizada en la computadora donde guardamos información sobre medicamentos, como su nombre, cantidad disponible y precio. El programa no es interactivo (no pide entradas del usuario), sino que muestra cómo funciona paso a paso con datos predefinidos.

### ¿Qué hace el programa?
El programa crea una "base de datos" en memoria con 5 medicamentos diferentes. Luego, muestra un reporte de todos ellos, actualiza la cantidad de uno (como si se usara en la clínica) y vuelve a mostrar el reporte para ver el cambio. Todo esto demuestra conceptos básicos de programación, como organizar datos y modificarlos de manera eficiente.

### Estructura del Código: Explicación Paso a Paso

#### 1. **Definición de los Datos (Estructura Medicamento)**
   - En el código, creamos un "molde" llamado `Medicamento` que agrupa información relacionada:
     - **ID**: Un número único para identificar cada medicamento (como un código de barras).
     - **Nombre**: El nombre del medicamento (hasta 40 letras).
     - **Stock**: La cantidad disponible en la clínica (número entero).
     - **Costo**: El precio por unidad (número con decimales).
   - Esto es como crear una ficha o tarjeta para cada medicamento, donde todos tienen los mismos campos.

#### 2. **Organización de los Datos (Array de Medicamentos)**
   - Usamos una "lista" (llamada array) que puede guardar hasta 5 medicamentos.
   - Es como una estantería con 5 espacios, cada uno para un medicamento diferente.

#### 3. **Módulo 1: Inicializar el Inventario**
   - Esta parte del programa "llena" la lista con datos predefinidos (no los inventa el usuario).
   - Por ejemplo:
     - Medicamento 1: Paracetamol, con 100 unidades a $5.50 cada uno.
     - Y así con otros 4 medicamentos.
   - Es como preparar la estantería al inicio del día con productos ya conocidos.

#### 4. **Módulo 2: Actualizar el Stock**
   - Aquí, el programa cambia la cantidad de un medicamento específico.
   - Usa "punteros" (como direcciones de memoria) para modificar directamente el dato original, sin copiar todo.
   - En el ejemplo, reduce el stock del Paracetamol en 10 unidades (como si se usaran en tratamientos).
   - Es como quitar productos de la estantería cuando se venden o usan.

#### 5. **Módulo 3: Imprimir el Reporte**
   - Muestra una tabla organizada con toda la información de los medicamentos.
   - No cambia nada; solo lee y presenta los datos en pantalla.
   - Es como imprimir una lista de inventario para revisar qué hay disponible.

#### 6. **Flujo Principal (Función main)**
   - El programa sigue estos pasos en orden:
     1. Crea la lista vacía.
     2. La llena con datos iniciales.
     3. Muestra el reporte inicial.
     4. Actualiza el stock de un medicamento.
     5. Muestra el reporte final para ver el cambio.
   - Es como el "recorrido" diario: preparar, revisar, usar y volver a revisar.

### Conceptos Clave Explicados de Forma Simple
- **Estructuras**: Formas de agrupar datos relacionados, como una receta con ingredientes.
- **Arrays**: Listas ordenadas de elementos, como una fila de cajones.
- **Punteros**: Referencias a ubicaciones en memoria, como direcciones de casas para encontrar algo rápidamente.
- **Paso de Parámetros**:
  - **Por referencia**: Permite cambiar el original (usado en actualización).
  - **Por valor**: Copia los datos para solo leer (usado en impresión).
- **Modularidad**: Dividir el programa en partes pequeñas y reutilizables, como separar tareas en un equipo.

### Cómo Ejecutar el Programa
1. Asegúrate de tener un compilador de C instalado (como GCC).
2. Compila el código: `gcc main.c -o sgsm`
3. Ejecuta: `./sgsm`
4. Verás dos reportes en pantalla: uno inicial y uno después del cambio.

Este laboratorio enseña fundamentos de programación en C, enfocados en manejo de datos y eficiencia, sin interfaces gráficas complejas. 
