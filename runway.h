#ifndef _RUNWAY_H_
#define _RUNWAY_H_
#include "ex2.h"
#include "flight.h"
typedef struct run_way_t Run_way;
typedef struct Run_way* Prun_way;
typedef struct Node_flight_t* Pflight_node;
//constructor
Prun_way createRunway(int id, FlightType type);
//distructor
BOOL destroyRunway(Prun_way p_runway);
//other
BOOL isFlightExists(Prun_way p_runway, int id); // checks if flight with id exists on a run way
int getFlightNum(Prun_way p_runway); //return the number of flights in a runway
int getEmergency(Prun_way p_runway); //return the number of emergency flights
Result addFlight(Prun_way p_runway, Pflight p_flight); //add a flight to the run way
Result removeFlight(Prun_way p_runway, int id); //delete a flight from the runway by id
Result depart(Prun_way p_runway); // delete the first flight from the runway
void printRunway(Prun_way p_runway); //print the list of flights in the runway
#endif _RUNWAY_H_