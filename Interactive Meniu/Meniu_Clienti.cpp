//
// Created by Rares on 17/04/2024.
//
#include <iostream>
#include "Clienti/Clienti.h"
#include "Meniu_Clienti.h"
#include <string>

const std::string Meniu_Clienti::ADD = "ADD";
const std::string Meniu_Clienti::DISPLAY_ALL = "DISPLAY";
const std::string Meniu_Clienti::REMOVE = "REMOVE";
const std::string Meniu_Clienti::STOP = "STOP";
const std::string Meniu_Clienti::TOTAL_PRET = "TOTAL_PRET";
const std::string Meniu_Clienti::ABONATI_PREMIUM = "ABONATI_PREMIUM";

void Meniu_Clienti::DisplayMenuMessages() {
    std::cout
            << ADD << " - citeste si adauga un nou abonat" << std::endl
            << REMOVE << " - sterge clientul de pe pozitia n" << std::endl
            << DISPLAY_ALL << " -afiseaza toti clientii" << std::endl
            << TOTAL_PRET << " - afiseaza suma de bani incasata de la toti clientii" << std::endl
            << ABONATI_PREMIUM << " - afiseaza numarul de abonati premium" << std::endl
            << STOP << " - opreste programul" << std::endl
            << std::endl;
}

void Meniu_Clienti::set_client(Clienti *clienti) {
        delete[] client;
        this -> client = clienti;
}

void Meniu_Clienti::RunMenu() {
    DisplayMenuMessages();
    int nr_clienti = 0;
    std :: string comanda;
    cin >> comanda;
    while (comanda != STOP){
        if (comanda ==  ADD){
            auto *a = new Abonat;
            cin >> *a;
            if (nr_clienti <= 0)
                client = new Clienti;
            client->AdaugaClient(a);
            nr_clienti++;
        }
        else if(comanda == REMOVE){
            if (nr_clienti > 0) {
                std::cout << "Introdu pozitia sau -1 pentru a sterge ultimul client:";
                int n;
                cin >> n;
                if (n > 0) {
                    client->StergeClient(n);
                } else {
                    client->StergeClient();
                }
                nr_clienti--;
            }
            else{
                std :: cout << "Nu exista clienti." <<endl;
            }
        }
        else if(comanda == DISPLAY_ALL){
            if (nr_clienti > 0) {
                cout << *client;
                std::cout << endl;
            }
            else{
                std :: cout << "Nu exista clienti." <<endl;
            }
        }
        else if(comanda == TOTAL_PRET){
            if(nr_clienti>0) {
                std::cout << "Suma de bani incasata de la toti abonatii este: " << client->SumaPret_Abonamente();
                std::cout << endl;
            }
            else {
                std::cout << "Nu exista clienti." << endl;
            }
        }
        else if(comanda == ABONATI_PREMIUM){
            if (nr_clienti > 0) {
                client->NrAbonatiPremium();
            }
            else{
                std :: cout << "Nu exista clienti." <<endl;
            }
        }
        else {
            std::cout << "Comanda invalida: " << comanda << std::endl;
        }
        std :: cout << endl;
        DisplayMenuMessages();
        std::cin>>comanda;
    }

}

