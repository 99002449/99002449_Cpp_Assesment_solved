#ifndef __TRIP_H_INCLUDED
#define __TRIP_H_INCLUDED
#include<string>
class Trip
{
  protected:
	std::string m_origin,m_destination;
  public:
  	Trip();
  	Trip(std::string,std::string);
  	Trip(const Trip&);
  	//~Trip();
  	virtual int computeFare()=0;
  	virtual int computeTravelTime()=0;
  	std::string getDestination();
  	std::string getOrigin();

  	
};

#endif

