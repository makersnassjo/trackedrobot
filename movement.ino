
void forward() {                     //call function with milliseconds

  analogWrite(3, 110);
  analogWrite(6, 110);
  
  Serial.println(F("Going forward"));
  digitalWrite(ml_forward, HIGH);
  digitalWrite(ml_reverse, LOW);
  digitalWrite(mr_forward, HIGH);
  digitalWrite(mr_reverse, LOW);

  //delay(msec);
  //stop();
  
}

void reverse() {

  analogWrite(3, 110);
  analogWrite(6, 110);

  Serial.println(F("Reversing"));
  digitalWrite(ml_forward, LOW);
  digitalWrite(ml_reverse, HIGH);
  digitalWrite(mr_forward, LOW);
  digitalWrite(mr_reverse, HIGH);
  //delay(sec);
}


void left() {
  Serial.println(F("Turning left"));
  digitalWrite(ml_forward, LOW);
  digitalWrite(ml_reverse, HIGH);
  digitalWrite(mr_forward, HIGH);
  digitalWrite(mr_reverse, LOW);
  //delay(sec);
}


void right() {
  Serial.println(F("Turning right"));
  digitalWrite(ml_forward, HIGH);
  digitalWrite(ml_reverse, LOW);
  digitalWrite(mr_forward, LOW);
  digitalWrite(mr_reverse, HIGH);
  //delay(sec);
}

void stop() {                //Pass argument in seconds as its multiplied below
  Serial.println(F("Stopping"));

  driveSpeed = 0;
  steering = 0;

  finalDriveLeft = 0;
  finalDriveRight = 0;
  
  digitalWrite(ml_forward, LOW);
  digitalWrite(ml_reverse, LOW);
  digitalWrite(mr_forward, LOW);
  digitalWrite(mr_reverse, LOW);
  
}


void SetSpeed (int value, bool relative) {

  if (relative) 
    driveSpeed += value;
  else
    driveSpeed = value;

  driveSpeed = constrain (driveSpeed, -250, 250);
  
 }

void SetSteering (int value, bool relative) {

  if (relative) 
    steering += value;
  else
    steering = value;

  steering = constrain (steering, -250, 250);

}

void SetFinalDrive () {

  finalDriveLeft = driveSpeed + steering;
  finalDriveRight = driveSpeed - steering;

  finalDriveLeft = constrain (finalDriveLeft, -250, 250);
  finalDriveRight = constrain (finalDriveRight, -250, 250);

  Serial.print("driveSpeed: ");
  Serial.println(driveSpeed);
  Serial.print("steering: ");
  Serial.println(steering);

  Serial.print("finalDriveLeft: ");
  Serial.println(finalDriveLeft);

  Serial.print("finalDriveRight: ");
  Serial.println(finalDriveRight);



  analogWrite(3, abs(finalDriveLeft));
  analogWrite(6, abs(finalDriveRight));

  if (finalDriveLeft > 0) {
    digitalWrite(ml_forward, HIGH);
    digitalWrite(ml_reverse, LOW);
  } else {
    digitalWrite(ml_forward, LOW);
    digitalWrite(ml_reverse, HIGH);
  }
  
  if (finalDriveRight > 0) {
    digitalWrite(mr_forward, HIGH);
    digitalWrite(mr_reverse, LOW);
  } else {
    digitalWrite(mr_forward, LOW);
    digitalWrite(mr_reverse, HIGH);
  }
  
//  analogWrite(5, 50);
//  digitalWrite(ml_forward, HIGH);
//  digitalWrite(mr_forward, HIGH);

//  Serial.print("analogRead(): ");
//  Serial.print(analogRead (3));
//  Serial.print(", ");
//  Serial.println(analogRead (6));
    
}


