#include <stdio.h>

int main(){

  int edadAlumno;
  int cantidadAlumnosMayores = 0;

  for (int i = 0; i < 29; i++) {
    printf("Ingresa la edad del alumno %d: \n", i + 1);
    scanf("%d", &edadAlumno);

    if (edadAlumno > 21) {
       cantidadAlumnosMayores = cantidadAlumnosMayores + 1;
    } 
  }
  
    printf("La cantidad de alumnos que superan los 21 anos es: \n %d", cantidadAlumnosMayores);

    return 0;
}