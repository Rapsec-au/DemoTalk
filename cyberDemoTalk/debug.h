#ifndef DEBUG_H
#define DEBUG_H

#include <Arduino.h>

#define DEBUG 1

void debug(const char* message);
void debugf(const char* format, ...);
void debugln(const char* message = nullptr);
void debugIP(const IPAddress& ip);

#endif // DEBUG_H

