#pragma once
#include <string>
#include <iostream>
#include <conio.h>

class InfoMasina
{
private:
	std::string m_nrMasina;
	std::string m_dataIntrare;	//ex:05/02
	int m_oraIntrare, m_minuteIntrare;

public:
	InfoMasina();

	InfoMasina(std::string nrMasina, std::string dataIntrare, int oraIntrare, int minuteIntrare);

	std::string getNrMasina();
	std::string getDataIntrare();
	int getOraIntrare();
	int getMinuteIntrare();


	bool VerificareMasina(const std::string& nrMasinaCautat);

	void IstoricInregistrare();


};

