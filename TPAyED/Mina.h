#ifndef __MINA_H__
#define __MINA_H__

#include <iostream>

using namespace std;

typedef struct Mina{
    int posX;
    int posY;
    int codItem;
    int IP;
    int seq1;
    int seq2;
    int seq3;
    int seq4;
    int seq5;
}Mina;

/************GETTERS AND SETTERS*********************/
int getPosX(Mina &mina);
int getPosY(Mina &mina);
int getCodItem(Mina &mina);
int getIp(Mina &mina);
int getSeq1(Mina &mina);
int getSeq2(Mina &mina);
int getSeq3(Mina &mina);
int getSeq4(Mina &mina);
int getSeq5(Mina &mina);

void setPosX(Mina &mina, int posX);
void setPosY(Mina &mina, int posY);
void setCodItem(Mina &mina, int codItem);
void setIp(Mina &mina, int ip);
void setSeq1(Mina &mina, int seq1);
void setSeq2(Mina &mina, int seq2);
void setSeq3(Mina &mina, int seq3);
void setSeq4(Mina &mina, int seq4);
void setSeq5(Mina &mina, int seq5);

/***************************************************/
/*
PRE: Mina existente y cargada
Post: Muestra por pantalla los atributos
*/
void toString(Mina &mina);

#endif // __PARAMETROS_H__
