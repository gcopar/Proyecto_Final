#ifndef NOTA_H
#define NOTA_H

struct Parcial1
{
    double EC;
    double porc_EC;
    double ED;
    double porc_ED;
    double EP;
    double porc_EP;
    double prom_parcial1; //Esto sera automatico
};

struct Parcial2
{
    double EC;
    double porc_EC;
    double ED;
    double porc_ED;
    double EP;
    double porc_EP;
    double prom_parcial2; //Esto sera automatico
};

struct Nota
{
    Parcial1 primer_parcial;
    Parcial2 segundo_parcial;
    int nota_final; //Esto sera automatico
};

double calcularParcial1(int i, int j);
double calcularParcial2(int i, int j);
int calcularNotaFinal(double Parcial_1, double Parcial_2);

#endif