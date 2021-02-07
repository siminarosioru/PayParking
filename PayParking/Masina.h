#pragma once
#include "InfoMasina.h"
#include <vector>

class Masina
{
private:
	std::vector<InfoMasina> m_masina;

public:
	Masina();

	void InregistrareMsina();

	void LocuriDisponibile();

	void CautareaMasinii();

	bool PlataStationare();

	void ListaMasiniStationate();

};

