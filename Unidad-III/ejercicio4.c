#include <stdio.h>
#include <stdlib.h>

/*
“La empresaSystemSRL cuenta con 5 departamentos donde serealizan diferentes actividades
(A saber: marketing, comercial, soportetécnico, administrativo y finanzas). Para cada uno de
los departamentos se conoce el número de empleados X (se ingresa).
Se tiene por otro lado, por cada uno de los empleados dentro del departamento, la cantidad de
horas trabajadas y el código de turno de trabajo (“M”: Mañana, “T”: tarde).
Se deberá mostrar:
    ● La cantidad de horas trabajadas en cada departamento.
    ● La cantidad de horas trabajadas en turno tarde y turno mañana de toda la empresa.
*/

int main ()
{
    int sector, empleados;
    int horastrab = 0, horasTrabTurnoManana = 0, horasTrabTurnoTarde = 0;
    int horasTrabDepart1 = 0, horasTrabDepart2 = 0, horasTrabDepart3 = 0, horasTrabDepart4 = 0, horasTrabDepart5 = 0;
    int horasmanana = 0, horastarde = 0;
    int turno;

printf ("Ingrese \n 1-Marketing \n 2-Finanzas \n 3-Comercial \n 4-Administrativo \n 5-Soporte \n 0-Finalizar \n");

    printf ("Ingrese el numero de su sector: \n");
    scanf ("%d", &sector);

    do
    {

        printf ("Ingrese la cantidad de empleados: \n");
        scanf ("%d", &empleados);

        for (int i = 0; i < empleados; i++)
        {
            printf ("Ingrese 1 para turno maniana o 2 para turno tarde del empleado %d: \n", i+1);
            scanf ("%d", &turno);
            if (turno == 1)
            {
                printf ("Ingrese la cantidad de horas trabajadas para el empleado: \n");
                scanf ("%d", &horastrab);
                horasTrabTurnoManana = horasTrabTurnoManana + horastrab;
                horasmanana = horasmanana + horastrab;
            } else if (turno == 2)
                {
                        printf ("Ingrese la cantidad de horas trabajadas para el empleado: \n");
                        scanf ("%d", &horastrab);
                        horasTrabTurnoTarde = horasTrabTurnoTarde + horastrab;
                        horastarde = horastarde + horastrab;

                } else {
                    printf ("Ingrese una opcion valida \n");
                    }
            switch (sector)
                {
                case 1:
                    horasTrabDepart1 = horasTrabTurnoManana + horasTrabTurnoTarde;
                    break;
                case 2:
                    horasTrabDepart2 = horasTrabTurnoManana + horasTrabTurnoTarde;
                    break;
                case 3:
                    horasTrabDepart3 = horasTrabTurnoManana + horasTrabTurnoTarde;
                    break;
                case 4:
                    horasTrabDepart4 = horasTrabTurnoManana + horasTrabTurnoTarde;
                    break;
                case 5:
                    horasTrabDepart5 = horasTrabTurnoManana + horasTrabTurnoTarde;
                    break;
                default:
                    break;
                }
        }

    horasTrabTurnoManana = 0;
    horasTrabTurnoTarde = 0;

    printf ("Ingrese el numero de su sector: \n");
    scanf ("%d", &sector);
    } while (sector != 0);
    
    printf ("Horas del sector 1 : %d \n", horasTrabDepart1);
    printf ("Horas del sector 2 : %d \n", horasTrabDepart2);
    printf ("Horas del sector 3 : %d \n", horasTrabDepart3);
    printf ("Horas del sector 4 : %d \n", horasTrabDepart4);
    printf ("Horas del sector 5 : %d \n", horasTrabDepart5);

    printf ("Horas turno Manana : %d \n", horasmanana);
    printf ("Horas turno Tarde : %d \n", horastarde);

return 0;
}