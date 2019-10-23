//This is just a test code and use at your own risk 


enum {on, off};
int state = off, prevState = !state;
boolean isNewState;
volatile int trig;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  DDRD |= 0b00011000; //sets pin 3 and 4 as outputs--as pwm output
  PORTD |= 0b00000100;//sets pin 2 as int0 as a pullup resistor
  TCCR1A = 0b10100000; //sets to CTC mode
  TCCR1B = 0b00001100; //sets 256x prescaler
  TCNT1 = 0;
  OCR1A = 16000;
  //OCR1B = 200;
  cli();
  EIMSK = 0b00000001; //to enable the interrupt
  EIFR |= 0b00000001; //to enable the interrupt flag
  EICRA = 0b00000010; //triggers on a falling edge
  sei();
}
void loop() {
  // put your main code here, to run repeatedly:
  isNewState = (state != prevState);

  switch (state) {

    case on:
      //  Serial.println("State = manual");

      if (trig == 1)
      {
        DDRD  |= 0b00011000;


        if (TCNT1 < 8000)
        {
          PIND |= 0b00001000;
          PIND &= 0b11110111;
        }
        else
        {
          PIND |= 0b00010000;
          PIND &= 0b11101111;
        }
        if (PIND &= 0b00000100)
        {
          trig = 0;
        }
      }
      else
      {
        state = off;
        trig = 0;
        Serial.println("Back to off");
      }
      break;

    case off:

      //  Serial.println("State = off");
      if (trig == 0)
      {
        DDRD &= 0b11100111;
        PIND &= 0b11100111;
        //     Serial.println("off");
      }
      else
      {
        state = on;
        Serial.println("Back to on");
      }
      break;


  }
}
ISR(INT0_vect) { //this is on pin 2 port d
  trig = 1;
  state = on;
  Serial.println("Forced on");
}