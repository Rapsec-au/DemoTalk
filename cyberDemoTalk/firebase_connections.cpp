#include "firebase_connection.h"
#include "debug.h"
#include "secrets.h"
//#include <addons/TokenHelper.h>

FirebaseData firebaseData;
FirebaseAuth auth;
FirebaseConfig config;

void signIn(const char *email, const char *password) {
    auth.user.email = email;
    auth.user.password = password;
    Firebase.reset(&config);
    Firebase.begin(&config, &auth);
}

void setupFirebase() {
    config.api_key = API_KEY;
    config.database_url = DATABASE_URL;
    Firebase.reconnectNetwork(true);
    firebaseData.setBSSLBufferSize(4096, 1024);
    firebaseData.setResponseSize(4096);
//    config.token_status_callback = tokenStatusCallback;
    signIn(USER_EMAIL1, USER_PASSWORD1);

// Setup TCP KeepAlive
    firebaseData.keepAlive(5, 5, 1); // KeepAlive idle 5 seconds, interval 5 seconds, count 1

    debugf("Firebase Client v%s\n\n", FIREBASE_CLIENT_VERSION);
}

