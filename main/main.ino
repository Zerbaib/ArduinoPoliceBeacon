// Set var
// Blue led
const int b1 = 2;
const int b2 = 3;
const int b3 = 4;
// White led
const int w1 = 5;
const int w2 = 6;
// Red led
const int r1 = 7;
const int r2 = 8;
const int r3 = 9;

// Init the Arduino
void setup() {
    pinMode(b1, OUTPUT);
    pinMode(b2, OUTPUT);
    pinMode(b3, OUTPUT);
    pinMode(w1, OUTPUT);
    pinMode(w2, OUTPUT);
    pinMode(r1, OUTPUT);
    pinMode(r2, OUTPUT);
    pinMode(r3, OUTPUT);
}

// Loop
void loop() {
    digitalWrite(b1, HIGH);
    digitalWrite(b2, HIGH);
    digitalWrite(b3, HIGH);

    digitalWrite(w1, HIGH);
    digitalWrite(w2, HIGH);

    digitalWrite(r1, LOW);
    digitalWrite(r2, LOW);
    digitalWrite(r3, LOW);

    delay(1000);

    digitalWrite(b1, LOW);
    digitalWrite(b2, LOW);
    digitalWrite(b3, LOW);

    digitalWrite(w1, HIGH);
    digitalWrite(w2, HIGH);

    digitalWrite(r1, HIGH);
    digitalWrite(r2, HIGH);
    digitalWrite(r3, HIGH);

    delay(1000);
}