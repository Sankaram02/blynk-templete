#define BLYNK_TEMPLATE_ID           "XXXXXXXXXX"
#define BLYNK_TEMPLATE_NAME         "XXXXXXXXXX"
#define BLYNK_AUTH_TOKEN            "XXXXXXXXXX"
#define BLYNK_PRINT Serial
#include<WiFi.h>
#include<WiFiClient.h>
#include<BlynkSimpleEsp32.h>
char auth[] =  BLYNK_AUTH_TOKEN; 
char ssid[] =    "XXXXXXXXXX";
char pass[] =    "XXXXXXXXXX";
void setup() {
  
    Serial.begin(9600);
    Blynk.begin(auth,ssid,pass);
  // put your setup code here, to run once:
    
}

void loop() {
  // put your main code here, to run repeatedly:

}

// generated by bhavani sankaram boddu @sankaram02 on github
