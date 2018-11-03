
/* Behöver logisk level converter
 * Räcker inte med TX kabel inkopplad..
 * 
 */


//MOvement
int ml_forward = 12;
int ml_reverse = 11;
int mr_forward = 9;
int mr_reverse = 10;



void setup() {
  Serial.begin(9600);
  Serial.println("Booting up");
  pinMode(ml_forward, OUTPUT);
  pinMode(ml_reverse, OUTPUT);
  pinMode(mr_forward, OUTPUT);
  pinMode(mr_reverse, OUTPUT);
  //forward();

}

void loop() {
  readSerial();

}
