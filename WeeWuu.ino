int rotPin = 7;   
int blauPin = 5;  
const int tonePin = 8; 

const int NOTE_E5 = 650; 
const int NOTE_G5 = 800; 

void setup() {
    pinMode(rotPin, OUTPUT);
    pinMode(blauPin, OUTPUT);
    pinMode(tonePin, OUTPUT); 

    unsigned long startTime = millis(); 
    unsigned long duration = 20000; 

    while (millis() - startTime < duration) {
        weeewuuu();
    }

    digitalWrite(rotPin, LOW);
    digitalWrite(blauPin, LOW);
    noTone(tonePin); 
}

void loop() {
}

void weeewuuu() {
    digitalWrite(rotPin, HIGH);
    digitalWrite(blauPin, LOW);
    tone(tonePin, NOTE_E5); 
    delay(500); 
    noTone(tonePin);
    
    digitalWrite(rotPin, LOW);
    digitalWrite(blauPin, HIGH);
    tone(tonePin, NOTE_G5); 
    delay(500); 
    noTone(tonePin);

    digitalWrite(blauPin, LOW);
    digitalWrite(rotPin, HIGH);
    delay(150); 
    noTone(tonePin);

    digitalWrite(blauPin, LOW);
    digitalWrite(rotPin, HIGH);
    tone(tonePin, NOTE_E5); 
    delay(500); 
    noTone(tonePin);

    digitalWrite(rotPin, LOW);
    digitalWrite(blauPin, HIGH); 
    tone(tonePin, NOTE_G5); 
    delay(500); 
    noTone(tonePin);
}
