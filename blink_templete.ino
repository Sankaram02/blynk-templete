#define BLYNK_TEMPLATE_ID           "TMPLfhquwIRA"
#define BLYNK_TEMPLATE_NAME         "Quickstart Template"
#define BLYNK_AUTH_TOKEN            "0cDvOWksTU3hMnFwL2_C1WsbET49zM2Q"
#define BLYNK_PRINT Serial
#include<WiFi.h>
#include<WiFiClient.h>
#include<BlynkSimpleEsp32.h>
char auth[] =  BLYNK_AUTH_TOKEN; 
char ssid[] = "SANKAR";
char pass[] = "00000000";
void setup() {
  // put your setup code here, to run once:
    Serial.begin(9600);
    Blynk.begin(auth,ssid,pass);
    
}

void loop() {
  // put your main code here, to run repeatedly:
