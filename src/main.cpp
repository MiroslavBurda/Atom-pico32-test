#include <Arduino.h>



void setup() {
    Serial.begin(115200);
}

int a =0;
void loop() {
    printf("a: %i \n", a); 
    a++;
    delay(500);
}

