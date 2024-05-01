//
// Created by Rares on 17/04/2024.
//

#ifndef ABONAMENT_MENIU_CLIENTI_H
#define ABONAMENT_MENIU_CLIENTI_H

#include "Clienti/Clienti.h"
#include "Abonament_Premium.h"
#include "Abonament.h"
#include <string>
#include <iostream>
#include <vector>

class Meniu_Clienti {
    Clienti *client;
    //membri statici
    static const std::string ADD; //comanda de a adauga un nou client
    static const std::string REMOVE;//comanda de a sterge un client
    static const std::string DISPLAY_ALL;//comanda de a afisa toti clientii
    static const std::string TOTAL_PRET;//comanda de a  afisa suma de bani incasata de la toti clientii
    static const std::string ABONATI_PREMIUM;//comanda de a afisa numarul de abonati premium
    static const std::string STOP;//coamnda de a opri programul
    static void DisplayMenuMessages();//Instructiuni meniu interactiv
public:
    void set_client(Clienti *client);//inlocuieste clienti cu client
    void RunMenu();//meniul interactiv
};


#endif //ABONAMENT_MENIU_CLIENTI_H
