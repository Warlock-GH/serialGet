//
//     FILE: serialGet.cpp
//  VERSION: 1.0
//  PURPOSE: Allow collection user input from the Serial Monitor through
//               single line function calls
//  HISTORY:
//  1.0 by Sean Michael Lubbe (22/11/2022)
//

#include "serialGet.h"

//Return a float from user byte input
float get_float(String msg = "")
{
    Serial.print(msg);
    String readString;
    while (true) {
    while (Serial.available()) {
      char c = Serial.read();  //gets one byte from serial buffer
      readString += c; //makes the String readString
      delay(2);  //slow looping to allow buffer to fill with next character
    }

    if (readString.length() > 0) {
      int n = readString.toFloat();  //convert readString into a number
      Serial.println(n); //so you can see the integer
      readString = "";
      return n;
    }
  }
}

//return an int from user byte input
int get_int(String msg = "")
{
    Serial.print(msg);
    String readString;
    while (true) {
    while (Serial.available()) {
      char c = Serial.read();  //gets one byte from serial buffer
      readString += c; //makes the String readString
      delay(2);  //slow looping to allow buffer to fill with next character
    }

    if (readString.length() > 0) {
      int n = readString.toInt();  //convert readString into a number
      Serial.println(n); //so you can see the integer
      readString = "";
      return n;
    }
  }
}