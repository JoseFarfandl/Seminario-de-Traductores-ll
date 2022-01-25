#include <cstdlib>
#include <iostream>
#include <string>
#include "lexico.h"
#include "lexico.cpp"

using namespace std;

int main(int argc, char *argv[]){
    
    Lexico lexico;
    lexico.entrada("+ - / * 17 if while -4 { } 15.4 = else != $");//agregamos los valores que se analizaran 
    //lexico.entrada("+ -17 $");
    cout << "Resultado del Analisis Lexico" << endl << endl;
    cout << "Simbolo\t\tTipo" << endl;
    
    while (lexico.simbolo.compare("$") != 0 ){//analizaremos todo asta que encontremos el simbolo de $
        lexico.sigSimbolo();
        cout <<  lexico.simbolo << "\t\t" << lexico.tipoAcad(lexico.tipo) << endl;//mostramos los datos de cada palabra       
    }
        
    cin.get();
    return 0;
}
