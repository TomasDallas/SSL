#include <stdio.h>

int main() {
    char nomArch[] = "output.txt";
    FILE *archivo;
    archivo = fopen(nomArch, "w");
    fprintf(archivo,"Hello World");
    fclose(archivo);
}