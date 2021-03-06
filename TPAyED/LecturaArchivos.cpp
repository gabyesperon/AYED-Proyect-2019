#include "LecturaArchivos.h"
/* Implementcion de primitivs */

void crearLector(Lector & lector){
}

bool abrirArchivo(Lector & lector, string nombreArchivo){
    bool res = true;
    lector.ficheroEntrada.open(nombreArchivo, ios::in);
    if (!lector.ficheroEntrada){
        return false;
    }
    return res;

}

void cerrarArchivo(Lector & lector){
    lector.ficheroEntrada.close();
}

Parametros leerArchivoParametros(Lector & lector){
    Parametros parametros;
    string parametro;
    string dato;
    if (lector.ficheroEntrada.is_open()) {
        while (!lector.ficheroEntrada.eof()){
        getline(lector.ficheroEntrada,parametro, '=');

        getline(lector.ficheroEntrada,dato);
        stringstream  issDato(dato);
        //LEO PARAMETRO Y DECIDO CUAL ES
        if (parametro == "s") issDato >> parametros.s;
        else if (parametro == "p") issDato >> parametros.p;
        else if (parametro == "a") issDato >> parametros.a;
        else if (parametro == "posXE") issDato >> parametros.posXE;
        else if (parametro == "posYE") issDato >> parametros.posYE;
        else if (parametro == "iM") issDato >> parametros.iM;
        else if (parametro == "vM") issDato >> parametros.vM;
        else if (parametro == "iB") issDato >> parametros.iB;
        else if (parametro == "vB") issDato >> parametros.vB;
        else if (parametro == "iP") issDato >> parametros.iP;

        }
    }
    toString(parametros);
    return parametros;
}

Comanda leerArchivoComandas(Lector & lector){
    Comanda comanda;
    string codItem;
    string cantidad;

    if (lector.ficheroEntrada.is_open()) {
        while (!lector.ficheroEntrada.eof()){
            getline(lector.ficheroEntrada,codItem, ';');
            getline(lector.ficheroEntrada,cantidad);
            stringstream  issCod(codItem);
            issCod >> comanda.codItem;
            stringstream iss (cantidad);
            iss >> comanda.cantidad;
            toString(comanda);
            // SE CARGA NUEVO ITEM EN LISTA DE COMANDAS
        }
    }
    return comanda;
}

Mina leerArchivoMinas(Lector & lector){
    Mina mina;
    string posX,posY,codItem,IP,seq1,seq2,seq3,seq4,seq5;

    if (lector.ficheroEntrada.is_open()) {
        while (!lector.ficheroEntrada.eof()){
            getline(lector.ficheroEntrada,posX, ';');
            getline(lector.ficheroEntrada,posY, ';');
            getline(lector.ficheroEntrada,codItem, ';');
            getline(lector.ficheroEntrada,IP, ';');
            getline(lector.ficheroEntrada,seq1, ';');
            getline(lector.ficheroEntrada,seq2, ';');
            getline(lector.ficheroEntrada,seq3, ';');
            getline(lector.ficheroEntrada,seq4, ';');
            getline(lector.ficheroEntrada,seq5);
            stringstream  issPosX(posX); issPosX >> mina.posX;
            stringstream  issPosY(posY); issPosY >> mina.posY;
            stringstream  issCod(codItem); issCod >> mina.codItem;
            stringstream  issIP(IP); issIP >> mina.IP;
            stringstream  issSeq1(seq1); issSeq1 >> mina.seq1;
            stringstream  issSeq2(seq2); issSeq2 >> mina.seq2;
            stringstream  issSeq3(seq3); issSeq3 >> mina.seq3;
            stringstream  issSeq4(seq4); issSeq4 >> mina.seq4;
            stringstream  issSeq5(seq5); issSeq5 >> mina.seq5;

            toString(mina);
        }
    }
    return mina;
}

bool esFinDeArchivo(Lector &lector){
    bool fin = (lector.ficheroEntrada).eof();
    return fin;
}

void eliminarLector(Lector & lector){
}
