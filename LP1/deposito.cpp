#include <iostream>
#include <string>
#include "deposito.hpp"

using namespace std;

void Deposito::aumentar(){
    this->qtd++;
}

void Deposito::diminuir(){
    this->qtd--;
}
