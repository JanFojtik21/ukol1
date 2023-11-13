//
// Created by fojtik on 13.11.2023.
//


#include "IPAdresa.h"
#include <iostream>

IPAdresa::IPAdresa(int prvni, int druha, int treti, int ctvrta)
        : Adresa(AdresaTyp::IP), prvniCislo(prvni), druheCislo(druha), tretiCislo(treti), ctvrteCislo(ctvrta) {}

void IPAdresa::VypisAdresu() const {
    std::cout << "IP Adresa: " << prvniCislo << "." << druheCislo << "." << tretiCislo << "." << ctvrteCislo << std::endl;
}

int IPAdresa::ZiskejPrvniCislo() const {
    return prvniCislo;
}

int IPAdresa::ZiskejDruheCislo() const {
    return druheCislo;
}

int IPAdresa::ZiskejTretiCislo() const {
    return tretiCislo;
}

int IPAdresa::ZiskejCtvrteCislo() const {
    return ctvrteCislo;
}