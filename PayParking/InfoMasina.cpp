#include "InfoMasina.h"

InfoMasina::InfoMasina()
{
	m_nrMasina = "necunoscut";
	m_dataIntrare = "necunoscut";
	m_oraIntrare = 0;
	m_minuteIntrare = 0;

	m_dataIesire = "necunoscut";
	m_oraIesire = 0;
	m_minuteIesire = 0;

	m_plata = 10;
}

InfoMasina::InfoMasina(std::string nrMasina, std::string dataIntrare, int oraIntrare, int minuteIntrare)
{
	m_nrMasina = nrMasina;
	m_dataIntrare = dataIntrare;
	m_oraIntrare = oraIntrare;
	m_minuteIntrare = minuteIntrare;

	m_plata = 10;
}

std::string InfoMasina::getNrMasina()
{
	return m_nrMasina;
}

std::string InfoMasina::getDataIntrare()
{
	return m_dataIntrare;
}

int InfoMasina::getOraIntrare()
{
	return m_oraIntrare;
}

int InfoMasina::getMinuteIntrare()
{
	return m_minuteIntrare;
}

std::string InfoMasina::getDataIsire()
{
	return m_dataIesire;
}

int InfoMasina::getOraIesire()
{
	return m_oraIesire;
}

int InfoMasina::getMinuteIesire()
{
	return m_minuteIesire;
}

bool InfoMasina::VerificareMasina(const std::string& nrMasinaCautat)
{
	if (m_nrMasina == nrMasinaCautat)
		return true;
	else
		return false;
}

void InfoMasina::IstoricInregistrare()
{
	std::cout << "Numar masina: " << m_nrMasina << std::endl;
	std::cout << "Data intrarii in parcare: " << m_dataIntrare << std::endl;
	std::cout << "Ora intrarii in parcare: " << m_oraIntrare << std::endl;
	std::cout << "Minute: " << m_minuteIntrare << std::endl;
}

