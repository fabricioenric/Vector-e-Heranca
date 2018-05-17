#ifndef CD_HPP_INCLUDED
#define CD_HPP_INCLUDED

using namespace std;

class Cd : public Midia {
    private:
        string gravadora;
        string qtdfaixas;

    public:
        Cd();
        int qtdcds;
        void setGravadora(string gravadora);
        void setQtdfaixas(string qtdfaixas);
        string getGravadora();
        string getQtdfaixas();
        void aumentarcds();
        void diminuircds();
};

#endif // CD_HPP_INCLUDED
