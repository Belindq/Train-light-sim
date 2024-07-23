

#include <Servo.h>
Servo myservo;

int count = 0;
int buttonState = 0;
int buttonPin = 8;

void setup()
{ 
  myservo.attach(9);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
    pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
    pinMode(6, OUTPUT);
     pinMode(7, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
  
}
void loop() 
{

  
 
 buttonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState == LOW) {
    //music
      tone(13, 196);
      delay(200);
      noTone(13);
   		 tone(13,  247);
      delay(300);
    
      noTone(13);
   
      tone(13,  247);
      delay(300);
      noTone(13);
    tone(13, 220);
      delay(200);
      noTone(13);
    tone(13, 196);
      delay(500);
      noTone(13);
     tone(13, 196);
      delay(300);
      noTone(13);
    tone(13, 220);
      delay(300);
    
      noTone(13);
    tone(13, 220);
      delay(300);
    
      noTone(13);
     tone(13, 196);
      delay(300);
      noTone(13);
     noTone(13);
    tone(13, 220);
      delay(300);
    noTone(13);
    // turn LED on:
     for(int x =0;x<10;x++)
        {
       
       //lights go on, flashing alternating
        digitalWrite(2, HIGH);
         delay(100);
        digitalWrite(2, LOW);
          delay(100);
         digitalWrite(3, HIGH);
          delay(100);
        digitalWrite(3, LOW);
         digitalWrite(4, HIGH);
         delay(100);
        digitalWrite(4, LOW);
          delay(100);
         digitalWrite(5, HIGH);
          delay(100);
         digitalWrite(5, LOW);
        }

        myservo.write(0); // lower barrier
      //car lights
           digitalWrite(6, HIGH); 
           digitalWrite(7, HIGH);
          delay(300);
         for(int x=0; x<15;x++) // flash in sync
        {
        digitalWrite(2, HIGH);

        digitalWrite(3, HIGH);

        digitalWrite(4, HIGH);

        digitalWrite(5, HIGH);
        delay(200);

        digitalWrite(2, LOW);

        digitalWrite(3, LOW);

        digitalWrite(4, LOW);

        digitalWrite(5, LOW);
        delay(400);
        }

        myservo.write(90); // raise barrier
      digitalWrite(2, LOW);
    digitalWrite(3, LOW);

        for(int x=0; x<5;x++) // flash alternating
       {
         digitalWrite(2, HIGH);
         delay(100);
         digitalWrite(2, LOW);
          delay(100);
         digitalWrite(3, HIGH);
          delay(100);
         digitalWrite(3, LOW);
         digitalWrite(4, HIGH);
         delay(100);
         digitalWrite(4, LOW);
          delay(100);
         digitalWrite(5, HIGH);
          delay(100);
         digitalWrite(5, LOW);
      }
    
  } else {
    // turn LED off:
      digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
     digitalWrite(7, LOW);
  }
}

