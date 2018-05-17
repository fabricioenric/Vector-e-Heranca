#include <iostream>
#include <vector>
#include <stdlib.h>
#include "midia.hpp"
#include "midia.cpp"
#include "livro.hpp"
#include "livro.cpp"
#include "cd.hpp"
#include "cd.cpp"
#include "dvd.hpp"
#include "dvd.cpp"
#include "deposito.hpp"
#include "deposito.cpp"

using namespace std;

int main()
{
    Livro l;
    Cd c;
    Dvd d;
    l.qtdlivros = 2;
    c.qtdcds = 2;
    d.qtddvds = 2;
    Deposito deposito;
    deposito.qtd = 6;
    vector<string> v1,v2,v3,v4,v5,tipos;
    vector<string>::iterator it1,it2,it3,it4,it5,tip;
    string n;
    int op,i,tam=0;

    v1.push_back("Dom");
    v2.push_back("Machado");
    v3.push_back("Garnier");
    v4.push_back("999-675-345-567-32-2");
    v5.push_back("1899");
    tipos.push_back("Livro");

    v1.push_back("Quincas");
    v2.push_back("Machado");
    v3.push_back("Garnier");
    v4.push_back("967-969-112-124-267-323-22");
    v5.push_back("1891");
    tipos.push_back("Livro");

    v1.push_back("Xperience");
    v2.push_back("Avioes");
    v3.push_back("2017");
    v4.push_back("21");
    v5.push_back("Som");
    tipos.push_back("Cd");

    v1.push_back("Extouro");
    v2.push_back("Forro");
    v3.push_back("2013");
    v4.push_back("19");
    v5.push_back("Som");
    tipos.push_back("Cd");

    v1.push_back("Nemo");
    v2.push_back("Andrew");
    v3.push_back("1h41min");
    v4.push_back("2003");
    v5.push_back("Livre");
    tipos.push_back("Dvd");

    v1.push_back("Lenda");
    v2.push_back("Francis");
    v3.push_back("1h40min");
    v4.push_back("2007");
    v5.push_back("14+");
    tipos.push_back("Dvd");

    do{
      cout << endl;
      cout << "Opcoes:" << endl;
      cout << "1 - Inserir midia" << endl << "2 - Remover midia" << endl << "3 - Acessar detalhes de uma midia" << endl << "4 - Editar midia" << endl << "5 - Ver acervo" << endl << "6 - Ver estatisticas" << endl << "999 - Sair" << endl << endl;

      cin >> op;

      cout << endl;
      if(op == 1){
        cout << "Inserir qual tipo de midia?" << endl;
        cout << "1 - Livro" << endl << "2 - Cd" << endl << "3 - Dvd" << endl << endl;

        cin >> op;

          cout << endl;
          if(op == 1){
            cout << "Digite as caracteristicas do LIVRO: " << endl << endl;

                cout << "Nome da obra: "; cin >> n;
                v1.push_back(n);
                cout << "Autor da obra: "; cin >> n;
                v2.push_back(n);
                cout << "Editora da obra: "; cin >> n;
                v3.push_back(n);
                cout << "ISBN da obra: "; cin >> n;
                v4.push_back(n);
                cout << "Ano de lancamento da obra: "; cin >> n;
                v5.push_back(n);
                tipos.push_back("Livro");

                tam = v1.size();
                for(i = 0; i < tam-1; i++){
                  if(v1[tam-1] == v1[i]){
                    cout << endl;
                    cout << "ERRO: Nao eh possivel inserir duas midias de mesmo nome, TENTE NOVAMENTE!!...." << endl << endl;
                    exit(1);
                    }
                }

                cout << endl << "Inserindo midia na posicao: " << tam-1 << endl << endl;
                l.aumentarlivros();
                deposito.aumentar();
                cout << "Livro inserido com sucesso!!" << endl << endl;
              }

          else if(op == 2){

            cout << "Digite as caracteristicas do CD: " << endl << endl;

                cout << "Nome do Cd: "; cin >> n;
                v1.push_back(n);
                cout << "Compositor do Cd: "; cin >> n;
                v2.push_back(n);
                cout << "Ano de lancamento do Cd: "; cin >> n;
                v3.push_back(n);
                cout << "Quantidade de faixas do Cd: "; cin >> n;
                v4.push_back(n);
                cout << "Gravadora do Cd: "; cin >> n;
                v5.push_back(n);
                tipos.push_back("Cd");

                tam = v1.size();
                for(i = 0; i < tam-1; i++){
                  if(v1[tam-1] == v1[i]){
                    cout << endl;
                    cout << "ERRO: Nao eh possivel inserir duas midias de mesmo nome, TENTE NOVAMENTE!!...." << endl << endl;
                    exit(1);
                    }
                }

                cout << endl << "Inserindo midia na posicao: " << tam-1 << endl << endl;
                c.aumentarcds();
                deposito.aumentar();
                cout << "CD inserido com sucesso!!" << endl << endl;
              }

          else if(op == 3){

            cout << "Digite as caracteristicas do DVD: " << endl << endl;

                cout << "Titulo do Dvd: "; cin >> n;
                v1.push_back(n);
                cout << "Diretor do Dvd: "; cin >> n;
                v2.push_back(n);
                cout << "Duracao do Dvd: "; cin >> n;
                v3.push_back(n);
                cout << "Ano de lancamento do Dvd: "; cin >> n;
                v4.push_back(n);
                cout << "Classificacao do Dvd: "; cin >> n;
                v5.push_back(n);
                tipos.push_back("Dvd");

                tam = v1.size();
                for(i = 0; i < tam-1; i++){
                  if(v1[tam-1] == v1[i]){
                    cout << endl;
                    cout << "ERRO: Nao eh possivel inserir duas midias de mesmo nome, TENTE NOVAMENTE!!...." << endl << endl;
                    exit(1);
                  }
                }

                cout << endl << "Inserindo midia na posicao: " << tam-1 << endl << endl;
                d.aumentardvds();
                deposito.aumentar();
                cout << "DVD inserido com sucesso!!" << endl << endl;
              }
        }

      else if(op == 2){
        cout << "Para remover um item, digite pelo menos uma das caracteristicas da MIDIA: " << endl << endl;

           cout << "Digite uma caracteristica: "; cin >> n;
           cout << endl;
           cout << "Digite uma posicao do acervo: "; cin >> op;
           cout << endl;

          tam = v1.size();
          if(op >= tam)
            cout << "Esta posicao nao possui uma midia inserida" << endl << endl;

         else if(op < tam && op >= 0){
           it1 = v1.begin();
           it2 = v2.begin();
           it3 = v3.begin();
           it4 = v4.begin();
           it5 = v5.begin();
           tip = tipos.begin();

          if(n == v1[op] || n == v2[op] || n == v3[op] || n == v4[op] || n == v5[op]){
            advance(it1, op);
            advance(it2, op);
            advance(it3, op);
            advance(it4, op);
            advance(it5, op);
            advance(tip, op);
            v1.erase(it1);
            v2.erase(it2);
            v3.erase(it3);
            v4.erase(it4);
            v5.erase(it5);
              if(tipos[op] == "Livro" || tipos[op] == "livro"){
                tipos.erase(tip);
                l.diminuirlivros();
                            }
              else if(tipos[op] == "Cd" || tipos[op] == "CD" || tipos[op] == "cD" || tipos[op] == "cd"){
                tipos.erase(tip);
                c.diminuircds();
                            }
              else if(tipos[op] == "Dvd" || tipos[op] == "DVD" || tipos[op] == "DvD" || tipos[op] == "dVd" || tipos[op] == "dvD" || tipos[op] == "dvd" || tipos[op] == "DVd" || tipos[op] == "dVD"){
                tipos.erase(tip);
                d.diminuirdvds();
                            }
            deposito.diminuir();
            cout << "Midia removida com sucesso!!" << endl << endl;
                        }

            else if(n != v1[op] && n != v2[op] && n != v3[op] && n != v4[op] && n != v5[op]){
                cout << "ERRO: Nao existe midia com essa caracteristica no acervo, TENTE NOVAMENTE!!...." << endl << endl;
                  exit(1);
                }
            }
        }


      else if(op == 3){
        it1 = v1.begin();
        it2 = v2.begin();
        it3 = v3.begin();
        it4 = v4.begin();
        it5 = v5.begin();
        tip = tipos.begin();

        cout << "Qual a posicao da midia que gostaria de acessar?" << endl << endl;

        cin >> op;

        cout << endl;

        tam = v1.size();
        if(op >= tam){
          cout << "Nao ha midia nesta posicao" << endl << endl;
            }

        advance(it1, op);
        advance(it2, op);
        advance(it3, op);
        advance(it4, op);
        advance(it5, op);
        advance(tip, op);

        if(op < tam && op >= 0){
          cout << endl;
          cout << "Caracteristicas desta midia: " << endl << endl;
          cout << v1[op] << endl << v2[op] << endl << v3[op] << endl << v4[op] << endl << v5[op] << endl << tipos[op] << endl << endl;
            }
      }

      else if(op == 4){
        it1 = v1.begin();
        it2 = v2.begin();
        it3 = v3.begin();
        it4 = v4.begin();
        it5 = v5.begin();
        tip = tipos.begin();

        cout << "Qual a posicao da midia que gostaria de editar?" << endl << endl;

        cin >> op;

        cout << endl;

        tam = v1.size();
        if(op >= tam){
          cout << "Nao ha midia nesta posicao" << endl << endl;
            }

          advance(it1, op);
          advance(it2, op);
          advance(it3, op);
          advance(it4, op);
          advance(it5, op);
          advance(tip, op);

        if(op < tam){
          cout << "Caracteristicas que serao editadas: " << endl << endl;
          cout << v1[op] << endl << v2[op] << endl << v3[op] << endl << v4[op] << endl << v5[op] << endl << tipos[op] << endl << endl;

          v1.erase(it1);
          v2.erase(it2);
          v3.erase(it3);
          v4.erase(it4);
          v5.erase(it5);
          tipos.erase(tip);

          cout << "Digite as novas caracteristicas: " << endl << endl;
          cin >> n;
          v1.insert(it1, n);
          cin >> n;
          v2.insert(it2, n);
          cin >> n;
          v3.insert(it3, n);
          cin >> n;;
          v4.insert(it4, n);
          cin >> n;
          v5.insert(it5, n);
          cout << "Tipo da midia(Livro/Cd/Dvd): "; cin >> n;
          tipos.insert(tip, n);
          cout << endl << endl;

          cout << endl;
          cout << "Caracteristicas editadas com sucesso!!" << endl;
          cout << endl << "Novas caracteristicas: " << endl << endl;
          cout << v1[op] << endl << v2[op] << endl << v3[op] << endl << v4[op] << endl << v5[op] << endl << tipos[op] << endl << endl;
            }
      }

      else if(op == 5){
        tam = v1.size();
        cout << endl << "Listando todas as midias do acervo: " << endl << endl;
        for(i = 0; i < tam; i++){
          cout << v1[i] << endl << v2[i] << endl << v3[i] << endl << v4[i] << endl << v5[i] << endl << tipos[i] << endl << endl;
            }
      }

    else if(op == 6){
        cout << "Total de livros no acervo: " << l.qtdlivros << endl;
        cout << "Total de cds no acervo: " << c.qtdcds << endl;
        cout << "Total de dvds no acervo: " << d.qtddvds << endl;
        cout << "Total de midias no acervo: " << deposito.qtd << endl << endl;
        if(l.qtdlivros < 0) l.qtdlivros = 0;
        if(c.qtdcds < 0) c.qtdcds = 0;
        if(d.qtddvds < 0) d.qtddvds = 0;
        if(deposito.qtd < 0) deposito.qtd = 0;
      }

    }while(op != 999);

    cout << endl;
    cout << "Saindo...." << endl << endl;

    return 0;
}
