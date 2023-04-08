int ledState = LOW;  
int ledState1 = LOW;  
int ledState2 = LOW;  
int ledState3 = LOW;  

unsigned long previous_M = 0;  
unsigned long previous_M1 = 0;  
unsigned long previous_M2 = 0; 
unsigned long previous_M3 = 0;  

int delay_0 = 50;
int delay_1 = 100;
int delay_2 = 1000;
int delay_3 = 10000;


void setup() {
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop() {

  unsigned long curMillis =   micros();

  if (curMillis - previous_M >= delay_0) {
    previous_M = curMillis;
    if (ledState == LOW) {
      ledState = HIGH;
    } else {
      ledState = LOW;
    }
    digitalWrite(6, ledState);
  } 


  if (curMillis - previous_M1 >= delay_1) {
    previous_M1 = curMillis;
    if (ledState1 == LOW) {
      ledState1 = HIGH;
    } else {
      ledState1 = LOW;
    }
    digitalWrite(5, ledState1);
  }

  if (curMillis - previous_M2 >= delay_2) {
    previous_M2 = curMillis;
    if (ledState2 == LOW) {
      ledState2 = HIGH;
    } else {
      ledState2 = LOW;
    }
    digitalWrite(3, ledState2);
  }

  if (curMillis - previous_M3 >= delay_3) {
    previous_M3 = curMillis;
    if (ledState3 == LOW) {
      ledState3 = HIGH;
    } else {
      ledState3 = LOW;
    }
    digitalWrite(9, ledState3);
  }
}
