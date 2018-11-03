
void readSerial() {
  int command;
  if (Serial.available() > 0) {
    command = Serial.read();
    Serial.println(command);
  }

  if (command == 1) {
    //forward();
    SetSpeed (50, true);
    SetFinalDrive ();
  }
  
  if (command == 5) {
    stop();
  }

  if (command == 4) {
    //right();
    SetSteering (50, true);
    SetFinalDrive ();

  }

  if (command == 3) {
    //left();
    SetSteering (-50, true);
    SetFinalDrive ();
  }
  
   if (command == 2) {
    //reverse();
    SetSpeed (-50, true);
    SetFinalDrive ();
  }

  
}

