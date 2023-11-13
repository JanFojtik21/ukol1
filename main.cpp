#include <iostream>
#include "Adresa.h"
#include "IPAdresa.h"
#include "MACAdresa.h"
#include <vector>




    int main() {
        IPAdresa ipAdresa(192, 168, 1, 1);
        MACAdresa macAdresa("00:1A:2B:3C:4D:5E");

        std::vector<Adresa*> adresy;
        adresy.push_back(&ipAdresa);
        adresy.push_back(&macAdresa);

        for (const auto& adresa : adresy) {
            adresa->VypisAdresu();
            std::cout << "Typ adresy: " << Adresa::TypAdresyNaString(adresa->ZiskejTypAdresy()) << std::endl;
        }

        return 0;
    }
