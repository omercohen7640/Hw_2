#include "flight.h"

typedef struct flight_t {
	int flight_num;
	FlightType Ftype;
	char dest[3];
	BOOL emergency;
} Flight;

// the function creates a new struct of flight and assigns it with data
Pflight createFlight(int flight_num, FlightType Ftype, char dest[], BOOL emergency) {
	Pflight new_flight;
	if (flight_num<1 || flight_num>MAX_ID || Ftype > 1 || Ftype < 0 || !is_dest_leagal(dest) || emergency<0 || emergency>1) return NULL;
	new_flight = (Pflight)malloc(sizeof(Flight));
	if (!new_flight) return NULL;
	new_flight->flight_num = flight_num;
	new_flight->Ftype = Ftype;
	strcpy(new_flight->dest, dest);
	new_flight->emergency = emergency;
	return new_flight;
}

//the function frees the dinamic allocated memory of the flight
BOOL destroyFlight(Pflight flight) {
	if (!flight) return FALSE;
	else free(flight);
	return TRUE;
}

// the function prints the flight information
void printFlight(Pflight flight) {
	char d_or_i;
	if (flight->Ftype == 0) d_or_i = "D";
	else d_or_i = "I";
	printf("Flight %d %s %s %d", flight->flight_num, d_or_i, flight->dest, flight->emergency);
}

static BOOL is_dest_leagal(char dest[]) {
	if (strlen(dest) != 3) return FALSE;
	for (int i = 0; i < 3; i++) {
		if (dest[i] < 'A' || dest[i] > 'Z') return FALSE;
	}
	return TRUE;
}