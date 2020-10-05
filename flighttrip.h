#ifndef __FLIGHTTRIP_H_INCLUDED
#define __FLIGHTTRIP_H_INCLUDED
#include "trip.h"
#include<string>

class FlightTrip : public Trip
{
	std::string m_flightNumber;
	std::string m_operator;
	int m_aerialDistance;
  public:
  	FlightTrip();
  	FlightTrip(std::string,std::string,std::string,std::string,int);
  	//~FlightTrip();
  	int computeFare();
  	int computeTravelTime();
  	std::string getFlightNumber();
  	std::string getOperator();
  	int getDistance();
};
#endif
