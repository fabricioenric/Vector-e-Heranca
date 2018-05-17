#include <iostream>
#include <string>
#include "cd.hpp"

using namespace std;

Cd::Cd(){
    this->gravadora = "";
    this->qtdfaixas = "";
}

string Cd::getGravadora(){
    return this->gravadora;
}

string Cd::getQtdfaixas(){
    return this->qtdfaixas;
}

void Cd::setGravadora(string gravadora){
    this->gravadora = gravadora;
}

void Cd::setQtdfaixas(string qtdfaixas){
    this->qtdfaixas = qtdfaixas;
}

void Cd::aumentarcds(){
    qtdcds++;
}

void Cd::diminuircds(){
    qtdcds--;
}
