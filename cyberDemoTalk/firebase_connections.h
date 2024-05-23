#ifndef FIREBASE_CONNECTION_H
#define FIREBASE_CONNECTION_H

#include <FirebaseESP32.h>

extern FirebaseData firebaseData;
extern FirebaseAuth auth;
extern FirebaseConfig config;

void setupFirebase();

#endif // FIREBASE_CONNECTION_H

