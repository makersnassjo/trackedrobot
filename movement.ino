
void forward() {                     //call function with milliseconds
  Serial.println(F("Going forward"));
  digitalWrite(ml_forward, HIGH);
  digitalWrite(ml_reverse, LOW);
  digitalWrite(mr_forward, HIGH);
  digitalWrite(mr_reverse, LOW);
  //delay(msec);
  //stop();
  
}

void reverse() {
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
  digitalWrite(ml_forward, LOW);
  digitalWrite(ml_reverse, LOW);
  digitalWrite(mr_forward, LOW);
  digitalWrite(mr_reverse, LOW);
  
}

