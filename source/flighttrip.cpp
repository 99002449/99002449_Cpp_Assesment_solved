#include "flighttrip.h"
#include "trip.h"
#include<iostream>
int rupeesPerMile = 10;
int speedMilesPerHour = 500;

FlightTrip::FlightTrip():Trip()
{
	m_flightNumber="";
	m_operator="";
	m_aerialDistance =0;
}
FlightTrip::FlightTrip(std::string source,std::string dest,std::string flightNumber,std::string flightOperator,int aerialDistance):Trip(source,dest)
{
		m_flightNumber=flightNumber;
		m_operator=flightOperator;
		m_aerialDistance=aerialDistance;
}
//FlightTrip::~FlightTrip(){}

int FlightTrip::computeFare()
{
	return m_aerialDistance*rupeesPerMile;
}	

int FlightTrip::computeTravelTime()
{
	std::cout<<m_aerialDistance<<"\t";
	std::cout<<(m_aerialDistance/500)*60<<"\t"<<"\n";
	return  (  (m_aerialDistance/500)*60   );
}

std::string FlightTrip::getFlightNumber()
{
	return m_flightNumber;
}
std::string FlightTrip::getOperator()
{
	return m_operator;
}

int FlightTrip::getDistance()
{
	return m_aerialDistance;
}


