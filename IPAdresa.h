//
// Created by fojtik on 13.11.2023.
//

#ifndef UKOL1_IPADRESA_H
#define UKOL1_IPADRESA_H



#pragma once
#include "Adresa.h"

class IPAdresa : public Adresa {
public:
    IPAdresa(int prvni, int druha, int treti, int ctvrta);
    void VypisAdresu() const override;

    int ZiskejPrvniCislo() const;
    int ZiskejDruheCislo() const;
    int ZiskejTretiCislo() const;
    int ZiskejCtvrteCislo() const;

private:
    int prvniCislo;
    int druheCislo;
    int tretiCislo;
    int ctvrteCislo;
};
























#endif //UKOL1_IPADRESA_H
