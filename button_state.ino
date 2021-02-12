// constants won't change. They're used here to 
// set pin numbers:
const int buttonPin = 2;     // the number of the pushbutton pin
const int ledPin =  13;      // the number of the LED pin

// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status
int ledState = 0;

void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);      
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);    
 Serial.begin(9600); 
}

void loop(){
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

  Serial.println(buttonState);
  delay(100);
  
  
  // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH:
  if (buttonState == HIGH) { 
    if(ledState == HIGH){    
    // turn LED on:    
      digitalWrite(ledPin, LOW);
      ledState = LOW; 
    } 
    else{
     digitalWrite(ledPin, HIGH);
     ledState = HIGH;     
    }
  } 
  
}
