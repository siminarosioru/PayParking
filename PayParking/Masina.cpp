#include "Masina.h"
#include <iostream>
#include <conio.h>

Masina::Masina()
{
}

void Masina::InregistrareMsina()
{
	std::string nrMasina;
	std::string dataIntrare;
	int oraIntrare, minuteIntrare;
	std::string dataIesire;
	int oraIesire, minuteIesire;

	std::cout << "Introduceti numarul masinii: ";
	std::cin >> nrMasina;

	std::cout << "Introduceti data intrarii in parcare: ";
	std::cin >> dataIntrare;

	std::cout << "Introduceti ora si minutele intrarii in parcare: ";
	std::cin >> oraIntrare >> minuteIntrare;

	//instantierea cls.InfoMasina cu obiectul obiectMasina, folosind constructorul cu parametrii
	InfoMasina obiectMasina = InfoMasina(nrMasina, dataIntrare, oraIntrare, minuteIntrare);
	//o prima masina in parcare
	m_masina.push_back(obiectMasina);
}

void Masina::LocuriDisponibile()
{
	//numarul total de locuri este 10
	int locuriDisponibile = 10 - m_masina.size();

	std::cout << "numarul de locuri de parcare disponibile: ";
	std::cout << locuriDisponibile << std::endl;

	_getch();
}

void Masina::CautareaMasinii()
{
	std::string numarMasina;
	std::cout << "introduceti numarul masinii: ";
	std::cin >> numarMasina;

	for (auto it = m_masina.begin(); it != m_masina.end(); it++)
	{
		if (it->VerificareMasina(numarMasina))
		{
			it->IstoricInregistrare();

			_getch();
		}
	}
}

bool Masina::PlataStationare()
{
	std::string numarMasina;
	std::cout << "introduceti numarul masinii: ";
	std::cin >> numarMasina;

	for (auto it = m_masina.begin(); it != m_masina.end(); it++)
	{
		if (it->VerificareMasina(numarMasina))
		{
			std::string dataIesire;
			int oraIesire, minuteIesire;

			std::cout << "introduceti data iesirii: " << std::endl;
			std::cin >> dataIesire;
			std::cout << "introduceti ora si minutele iesirii: " << std::endl;
			std::cin >> oraIesire >> minuteIesire;

			InfoMasina obMasIesire = InfoMasina();
			m_masina.push_back(obMasIesire);

			std::cout << "Plata stationarii este " << std::endl;

			obMasIesire.Plata();
			return true;

			_getch();
		}
	}
	return false;
}

void Masina::ListaMasiniStationate()
{
	std::cout << "introduceti data de intrare in parcare a masinilor: ";
	std::string data;
	std::cin >> data;

	for (auto it = m_masina.begin(); it != m_masina.end(); it++)
	{
		if (data == it->getDataIntrare())
		{
			it->IstoricInregistrare();

			_getch();
		}
	}
}
