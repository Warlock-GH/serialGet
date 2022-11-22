//
//     FILE: serialGet.h
//  VERSION: 1.0
//  PURPOSE: Allow collection user input from the Serial Monitor through
//               single line function calls
//  HISTORY:
//      see dht.cpp file
//

#ifndef serialGet_h
#define serialGet_h

#include "Arduino.h"

float get_float(String msg="");
int get_int(String msg="");

#endif

//
// END OF FILE
//