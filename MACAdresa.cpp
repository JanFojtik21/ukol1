//
// Created by fojtik on 13.11.2023.
//

#include "MACAdresa.h"

#include <iostream>

MACAdresa::MACAdresa(const std::string& adresa) : Adresa(AdresaTyp::MAC), macAdresa(adresa) {}

void MACAdresa::VypisAdresu() const {
    std::cout << "MAC Adresa: " << macAdresa << std::endl;
}

const std::string& MACAdresa::ZiskejMACAdresu() const {
    return macAdresa;
}