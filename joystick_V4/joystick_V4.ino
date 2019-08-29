#define BUTTON_UP 2

#define BUTTON_RIGHT 3

#define BUTTON_DOWN 4

#define BUTTON_LEFT 5

#define BUTTON_E 6

#define BUTTON_F 7

#define BUTTON_K 8

#define DELAY 250

#define PIN_ANALOG_X 0

#define PIN_ANALOG_Y 1

int distanceX = 0;

int distanceY = 0;

void setup() {

 Serial.begin(9600);



 // to enable pull up resistors first write pin mode

 // and then make that pin HIGH

 pinMode(BUTTON_UP, INPUT);

 digitalWrite(BUTTON_UP, HIGH);



 pinMode(BUTTON_RIGHT, INPUT);

 digitalWrite(BUTTON_RIGHT, HIGH);



 pinMode(BUTTON_DOWN, INPUT);

 digitalWrite(BUTTON_DOWN, HIGH);



 pinMode(BUTTON_LEFT, INPUT);

 digitalWrite(BUTTON_LEFT, HIGH);



 pinMode(BUTTON_E, INPUT);

 digitalWrite(BUTTON_E, HIGH);



 pinMode(BUTTON_F, INPUT);

 digitalWrite(BUTTON_F, HIGH);


 pinMode(BUTTON_K, INPUT);

 digitalWrite(BUTTON_K, HIGH);
}



void loop() {

 if(digitalRead(BUTTON_UP) == LOW) {

   Serial.println("Button A is pressed");

   delay(DELAY);

 }

 else if(digitalRead(BUTTON_RIGHT) == LOW) {

   Serial.println("Button B is pressed");

   delay(DELAY);

 }

 else if(digitalRead(BUTTON_DOWN) == LOW) {

   Serial.println("Button C is pressed");

   delay(DELAY);

 }

 else if(digitalRead(BUTTON_LEFT) == LOW) {

   Serial.println("Button D is pressed");

   delay(DELAY);

 }

 else if(digitalRead(BUTTON_E) == LOW) {

   Serial.println("Button E is pressed");

   delay(DELAY);

 }

 else if(digitalRead(BUTTON_F) == LOW) {

   Serial.println("Button F is pressed");

   delay(DELAY);

 }

else if(digitalRead(BUTTON_K) == LOW) {

   Serial.println("Button K is pressed");

   delay(DELAY);
   
}
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
  delay(DELAY);
}
