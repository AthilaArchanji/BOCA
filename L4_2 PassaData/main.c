#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int dia;
    int mes;
    int ano;
}tData;

tData InicializaDataParam( int dia, int mes, int ano );
int InformaQtdDiasNoMes( int mes, int ano );
tData LeData( );
int EhBissextoAno( int ano );
tData AvancaParaDiaSeguinte( tData data );
int EhIgual( tData data1, tData data2 );
void ImprimeData( tData data );

tData LeData( );

int main()
{
    tData data;
    tData dataIni;
    tData dataFim;


    dataIni = LeData();

    dataFim = LeData();

    for(data = dataIni; !EhIgual(data, dataFim); data = AvancaParaDiaSeguinte(data))
    {
        ImprimeData(data);
        printf("\n");
    }

    return 0;
}
tData InicializaDataParam( int dia, int mes, int ano )
{
    tData data;
    int qtdDiasNoMes;

    data.ano = ano;

    if (mes > 12){
        mes = 12;
    } else if (mes < 1){
        mes = 1;
    }
    data.mes = mes;

    qtdDiasNoMes = InformaQtdDiasNoMes(mes, ano);
    if ( dia > qtdDiasNoMes ){
        dia = qtdDiasNoMes;
    } else if (dia < 1){
        dia = 1;
    }
    data.dia = dia;

    return data;
}
int InformaQtdDiasNoMes( int mes, int ano )
{
    if ( mes == 4 || mes == 6 || mes == 9 || mes == 11){
        return 30;
    }
    if ( mes == 2 ){
        if ( EhBissextoAno(ano) ){
            return 29;
        }
        return 28;
    }
    return 31;
}
tData LeData( )
{
    tData dataLida;
    int d, m, a;

    scanf("%d %d %d", &d, &m, &a);

    dataLida = InicializaDataParam( d, m, a );

    return dataLida;
}
int EhBissextoAno( int ano )
{
    if ( !(ano%400) )
        return 1;

    if ( !(ano%100) )
        return 0;

    if ( !(ano%4) )
        return 1;

    return 0;
}
tData AvancaParaDiaSeguinte( tData data )
{
    if ( data.dia < InformaQtdDiasNoMes(data.mes,data.ano) ){
        data.dia++;
    } else {
        data.dia = 1;
        if ( data.mes < 12 ){
            data.mes++;
        } else {
            data.mes = 1;
            data.ano++;
        }
    }
    return data;
}
int EhIgual( tData data1, tData data2 )
{
    return  data1.dia == data2.dia && data1.mes == data2.mes && data1.ano == data2.ano;
}
void ImprimeData( tData data )
{
    printf("'%02d/%02d/%04d'", data.dia, data.mes, data.ano);
}
