const int rLEDPin = 3;
const int gLEDPin = 4;
const int bLEDPin = 5;

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(rLEDPin, OUTPUT);
    pinMode(gLEDPin, OUTPUT);
    pinMode(bLEDPin, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(rLEDPin, HIGH);  // change state of the LED by setting the pin to the HIGH voltage level
  digitalWrite(gLEDPin, HIGH);
  digitalWrite(bLEDPin, HIGH);
  delay(1000);                      // wait for a second
  digitalWrite(rLEDPin, LOW);   // change state of the LED by setting the pin to the LOW voltage level
  digitalWrite(gLEDPin, HIGH);
  digitalWrite(bLEDPin, HIGH);
  delay(1000);                      // wait for a second
  digitalWrite(rLEDPin, HIGH);   // change state of the LED by setting the pin to the LOW voltage level
  digitalWrite(gLEDPin, LOW);
  digitalWrite(bLEDPin, HIGH);
  delay(1000);    
    digitalWrite(rLEDPin, HIGH);   // change state of the LED by setting the pin to the LOW voltage level
  digitalWrite(gLEDPin, HIGH);
  digitalWrite(bLEDPin, LOW);
  delay(1000);      
    digitalWrite(rLEDPin, LOW);   // change state of the LED by setting the pin to the LOW voltage level
  digitalWrite(gLEDPin, LOW);
  digitalWrite(bLEDPin, LOW);
  delay(1000);      
    digitalWrite(rLEDPin, LOW);   // change state of the LED by setting the pin to the LOW voltage level
  digitalWrite(gLEDPin, HIGH);
  digitalWrite(bLEDPin, LOW);
  delay(1000);      
    digitalWrite(rLEDPin, LOW);   // change state of the LED by setting the pin to the LOW voltage level
  digitalWrite(gLEDPin, LOW);
  digitalWrite(bLEDPin, HIGH);
  delay(1000); 
    digitalWrite(rLEDPin, HIGH);   // change state of the LED by setting the pin to the LOW voltage level
  digitalWrite(gLEDPin, LOW);
  digitalWrite(bLEDPin, LOW);
  delay(1000); 
}
