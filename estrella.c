#include <stdio.h>

typedef struct {
    char *nombre;
    int edad;
    float altura;
    float peso;
} persona_t;

float peso_promedio (persona_t arr[], unsigned int longitud){
    float prom = 0;
    int i = 0;

    while (i<longitud){
        prom += arr[i].peso;
        i++;
    }
    
    prom = prom/longitud;

    return prom;
}

persona_t persona_de_mayor_edad (persona_t arr[], unsigned int longitud){
    persona_t persona;
    int i = 0;
    int mayor_edad = 0;

    while (i<longitud){
        if (arr[i].edad > mayor_edad) {
            mayor_edad = arr[i].edad;
        }
        i++;
    }
    i = 0;
    while (i<longitud) {
        if (arr[i].edad == mayor_edad) {
            persona = arr[i];
        }
        i++;
    }

    return persona;
}

persona_t persona_de_menor_altura (persona_t arr[], unsigned int longitud) {
    persona_t persona;
    int i = 0;
    float menor_altura = 10;

    while (i<longitud){
        if (arr[i].altura < menor_altura) {
            menor_altura = arr[i].altura;
        }
        i++;
    }
    i = 0;
    while (i<longitud) {
        if (arr[i].altura == menor_altura) {
            persona = arr[i];
        }
        i++;
    }
    
    return persona;
}


int main (){
    persona_t p1 = {"Paola", 21, 1.85, 75};
    persona_t p2 = {"Luis", 54, 1.75, 69};
    persona_t p3 = {"Julio", 40, 1.70, 80};
    unsigned int longitud = 3;
    persona_t arr[] = {p1, p2, p3};

    printf("Peso promedio %.2f\n",peso_promedio(arr,longitud));

    persona_t persona = persona_de_mayor_edad(arr, longitud);
    printf("Persona de mayor edad %s\n", persona.nombre);

    persona = persona_de_menor_altura(arr,longitud);
    printf("Persona de meno altura %s\n",persona.nombre);

    return 0;
}