

int led1 = D7;

void setup() {

  pinMode(led1, OUTPUT);
}

int morseLight(String command){
    if (command == "dot")
    {
        digitalWrite(led1, HIGH);
        delay(500);
        digitalWrite(led1, LOW);
        return 1;
    }
    if (command == "dash")
    {
        digitalWrite(led1, HIGH);
        delay(1500);
        digitalWrite(led1, LOW);
        return 1;
    }
}

void loop() {

  morseLight("dash");
  delay(500);
  morseLight("dot");
  delay(500);
  morseLight("dot");
  
  delay(1500);
  
  morseLight("dash");
  delay(500);
  morseLight("dot");
  delay(500);
  morseLight("dot");
  delay(500);
  morseLight("dash");
  
  delay(1500);
  
  morseLight("dot");
  delay(500);
  morseLight("dash");
  delay(500);
  morseLight("dot");
  delay(500);
  morseLight("dot");
  
  delay(1500);
  
  morseLight("dot");
  delay(500);
  morseLight("dash");
  
  delay(1500);
  
  morseLight("dash");
  delay(500);
  morseLight("dot");
 
}

