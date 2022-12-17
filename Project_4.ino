int btn1 = 34;
int btn2 = 35;
boolean x = false;
int V;
// Assign each LED to a specific PIN of the ESP32 Board
int LED1 = 12;
int LED2 = 14;
int LED3 = 27;
int LED4 = 26;
int LED5 = 19;
int LED6 = 33;
int timer = 250;

void setup() {

  Serial.begin(9600);

  pinMode(btn1, INPUT);
  pinMode(btn2, INPUT);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);
  pinMode(LED6, OUTPUT);
  attachInterrupt(35, Interrupt, CHANGE);
}

void loop() {
  int btn1St = digitalRead(btn1);
  if (btn1St == 1) {
    x = true;
  }
  LightShow();
}

void Interrupt() {
  x = false;
Serial.println("interupt called");
Serial.println(x);
delay(400);
}



void LightShow() {
  //V = digitalRead(btn1);
  delay(timer);

  if (x) {
    digitalWrite(LED1, 1);
    digitalWrite(LED2, 0);
    digitalWrite(LED3, 0);
    digitalWrite(LED4, 0);
    digitalWrite(LED5, 0);
    digitalWrite(LED6, 0);
    delay(timer);
    digitalWrite(LED1, 1);
    digitalWrite(LED2, 1);
    digitalWrite(LED3, 0);
    digitalWrite(LED4, 0);
    digitalWrite(LED5, 0);
    digitalWrite(LED6, 0);
    delay(timer);
    digitalWrite(LED1, 1);
    digitalWrite(LED2, 1);
    digitalWrite(LED3, 1);
    digitalWrite(LED4, 0);
    digitalWrite(LED5, 0);
    digitalWrite(LED6, 0);
    delay(timer);
    digitalWrite(LED1, 1);
    digitalWrite(LED2, 1);
    digitalWrite(LED3, 1);
    digitalWrite(LED4, 1);
    digitalWrite(LED5, 0);
    digitalWrite(LED6, 0);
    delay(timer);
    digitalWrite(LED1, 1);
    digitalWrite(LED2, 1);
    digitalWrite(LED3, 1);
    digitalWrite(LED4, 1);
    digitalWrite(LED5, 1);
    digitalWrite(LED6, 0);
    delay(timer);
    digitalWrite(LED1, 1);
    digitalWrite(LED2, 1);
    digitalWrite(LED3, 1);
    digitalWrite(LED4, 1);
    digitalWrite(LED5, 1);
    digitalWrite(LED6, 1);
    delay(timer);
  }
  else {
    digitalWrite(LED1, 0);
    digitalWrite(LED2, 0);
    digitalWrite(LED3, 0);
    digitalWrite(LED4, 0);
    digitalWrite(LED5, 0);
    digitalWrite(LED6, 0);
  }
}
