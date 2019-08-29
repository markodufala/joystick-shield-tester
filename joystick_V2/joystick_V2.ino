// define global variables for analog pins.

// X values will be read from pin 0 and Y from pin 1

#define PIN_ANALOG_X 0

#define PIN_ANALOG_Y 1

int distanceX = 0;
int distanceY = 0;

void setup() {

 // Start serial because we will observe values at serial monitor

 Serial.begin(9600);

}



void loop() {

distanceX = analogRead(PIN_ANALOG_X) ;
distanceY = analogRead(PIN_ANALOG_Y) ;

if (distanceX>490&&distanceX<515&&distanceY>490&&distanceY<515){
  Serial.println("normal");
}
  else 
  if (distanceX>-1&&distanceX<20&&distanceY>490&&distanceY<515){
  Serial.println("left");
  }
  else 
  if (distanceX>-1&&distanceX<35&&distanceY>990&&distanceY<1024){
  Serial.println("top left");
  }
  else 
  if (distanceX>485&&distanceX<515&&distanceY>990&&distanceY<1024){
  Serial.println("top");
  }
  else 
  if (distanceX>990&&distanceX<1024&&distanceY>990&&distanceY<1024){
  Serial.println("top right");
  }
  else 
  if (distanceX>990&&distanceX<1024&&distanceY>490&&distanceY<515){
  Serial.println("right");
  }
  else 
  if (distanceX>990&&distanceX<1024&&distanceY>-1&&distanceY<35){
  Serial.println("down right");
  }
  else 
  if (distanceX>485&&distanceX<515&&distanceY>-1&&distanceY<35){
  Serial.println("down");
  }
  else 
  if (distanceX>-1&&distanceX<35&&distanceY>-1&&distanceY<35){
  Serial.println("down left");
  }
 // Some delay to clearly observe your values on serial monitor.

 delay(150);

}
