//
// Created by Rares on 16/04/2024.
//

#include "Persoana.h"

Persoana::Persoana() {
    id = -1;
    nume = "";
    cnp = "";
}
Persoana::Persoana(int id, std::string nume, std::string cnp) {
    this -> id = id;
    this -> nume = nume;
    this -> cnp = cnp;
}
Persoana ::Persoana(Persoana &p) {
    id = p.id;
    nume = p.nume;
    cnp = p.cnp;
}

Persoana::~Persoana() {

}
int Persoana ::get_id() const {
    return id;
}
std :: string Persoana::get_nume() const {
    return nume;
}
std :: string Persoana ::get_cnp() const {
    return cnp;
}
void Persoana :: set_id(int id) {
    this -> id = id;
}
void Persoana :: set_nume(std::string nume) {
    this -> nume = nume;
}
void Persoana :: set_cnp(std::string cnp) {
    this -> cnp = cnp;
}
void Persoana :: afisare(){
    afisare(std::cout);
}

void Persoana::afisare(std::ostream & out) {
    out << "Id-ul persoanei este:"<< id << std::endl;
    out << "Numele persoanei este:"<< nume << std::endl;
    out << "Cnp-ul persoanei este:"<< cnp << std::endl << std::endl;
}

std::istream &operator>>(std::istream &in, Persoana &p) {
    std :: cout << "Introduceti Id-ul Persoanei:";
    in >> p.id;
    std :: cout << "Introduceti Numele Persoanei:";
    in >> p.nume;
    std :: cout << std::endl;
    std :: cout << "Introduceti Cnp-ul Persoanei:";
    in >> p.cnp;
    std :: cout << std::endl << std::endl;
    return in;
}

std::ostream &operator<<(std::ostream &out, Persoana p) {
    out << "Id-ul Persoanei este:"<< p.id << std::endl;
    out << "Numele Persoanei este:"<< p.nume << std::endl;
    out << "Cnp-ul Persoanei este:"<< p.cnp << std::endl;
    return out;
}

Persoana &Persoana::operator=(Persoana &p) {
    id = p.id;
    nume = p.nume;
    cnp = p.cnp;
    return *this;
}



