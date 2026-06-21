int startValue = 5;
int Led = 13;

void flashLED(int times){
    for(int i = 1 ; i <= times; i++){
    digitalWrite(Led,HIGH);
    delay(500);
    digitalWrite(Led,LOW);
    delay(500);
    }
  }

void setup() {
  Serial.begin(9600);
  pinMode(Led, OUTPUT);
    int count = startValue;
  Serial.println("=== Smart Countdown Starting ===");
    while(count > 0){
    Serial.print("Count: ");
    Serial.println(count);

    flashLED(count);
    delay(1000);

    count--;
  }
  Serial.println("=== Countdown Complete ===" );
}

void loop() { 

}
