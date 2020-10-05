#include "trip.h"

#include<string>

Trip::Trip():m_origin(""),m_destination(""){}
Trip::Trip(std::string source,std::string dest):m_origin(source),m_destination(dest){}
Trip::Trip(const Trip& obj):m_origin(obj.m_origin),m_destination(obj.m_destination){}
//Trip::~Trip(){}
std::string Trip:: getDestination()
{
	return  m_destination;
}

std::string Trip:: getOrigin()
{
	return m_origin;
}
