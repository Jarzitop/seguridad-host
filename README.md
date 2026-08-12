cat > README.md <<'EOF'
# Seguridad en el Host — Programación en C

Repositorio de estudio y práctica para la materia **Seguridad en el Host**.

El objetivo no es únicamente resolver ejercicios de C, sino recuperar los fundamentos del lenguaje y entender cómo se relacionan con la seguridad de sistemas, especialmente con el manejo de memoria, punteros y vulnerabilidades de bajo nivel.

## Objetivos

- Recuperar los fundamentos de programación en C.
- Aprender a compilar y ejecutar programas con GCC en Linux.
- Comprender variables, tipos, operadores y estructuras de control.
- Estudiar arreglos, cadenas, funciones, estructuras y punteros.
- Comprender stack y heap.
- Trabajar con memoria dinámica mediante `malloc`, `realloc` y `free`.
- Identificar errores y vulnerabilidades como:
  - buffer overflows;
  - accesos fuera de límites;
  - punteros inválidos;
  - use-after-free;
  - double free;
  - memory leaks.

## Estructura

```text
seguridad-host/
├── README.md
├── .gitignore
├── apuntes/
│   └── C_Seguridad_Host.ipynb
└── ejercicios/
    ├── 00_entorno/
    ├── 01_variables/
    ├── 02_operadores/
    └── 03_control_de_flujo/