#include "nota.h"
#include "usuarios.h"

#include <iostream>
#include <cmath>
using namespace std;

//Tengo que cambiar el 1º 0 por i y el 2º por j
double calcularParcial1(int i, int j){
    //Vamos a calcular el promedio final
    double C, D, P, porcEC, porcED, porcEP, promfinal1;
    C = alumno[i].notas[j].primer_parcial.EC;
    porcEC = alumno[i].notas[j].primer_parcial.porc_EC;
    D = alumno[i].notas[j].primer_parcial.ED;
    porcED = alumno[i].notas[j].primer_parcial.porc_ED;
    P =alumno[i].notas[j].primer_parcial.EP;
    porcEP = alumno[i].notas[j].primer_parcial.porc_EP;

    promfinal1 = ((C*porcEC)+(D*porcED)+(P*porcEP));
    alumno[i].notas[j].primer_parcial.prom_parcial1 = promfinal1;
    return promfinal1;

}
double calcularParcial2(int i, int j){
    double C, D, P, porcEC, porcED, porcEP, promfinal2;
    C = alumno[i].notas[j].segundo_parcial.EC;
    porcEC = alumno[i].notas[j].segundo_parcial.porc_EC;
    D = alumno[i].notas[j].segundo_parcial.ED;
    porcED = alumno[i].notas[j].segundo_parcial.porc_ED;
    P =alumno[i].notas[j].segundo_parcial.EP;
    porcEP = alumno[i].notas[j].segundo_parcial.porc_EP;

    promfinal2 = ((C*porcEC)+(D*porcED)+(P*porcEP));
    alumno[i].notas[j].segundo_parcial.prom_parcial2 = promfinal2;
    return promfinal2;
}

int calcularNotaFinal(double Parcial_1, double Parcial_2){
    double promfinal;

    promfinal = (Parcial_1 + Parcial_2)/2;
    alumno[0].notas[1].nota_final = round(promfinal);
    return alumno[0].notas[1].nota_final;
}