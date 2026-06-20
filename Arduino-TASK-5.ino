int startValue = 5;
int Led = 13;

void flashLED(int times){
    for(int i = 1 ; i <= times; i++){
      Serial.print("Blink number: ");
      Serial.println(i);
    digitalWrite(Led,HIGH);
    delay(500);
    digitalWrite(Led,LOW);
    delay(500);
    //times--;

    }
  }

void setup() {
  Serial.begin(9600);
  pinMode(Led, OUTPUT);

  Serial.println("=== Smart Countdown Starting ===");
    while(startValue > 0){
    Serial.print("Count: ");
    Serial.println(startValue);

    flashLED(startValue);
    delay(1000);

    startValue--;
  }
  Serial.println("=== Countdown Complete ===" );
}

void loop() { 

}
