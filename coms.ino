
void readSerial() {
  int command;
  if (Serial.available() > 0) {
    command = Serial.read();
    Serial.println(command);
  }

  if (command == 1) {
    forward();
   }
  if (command == 5) {
    stop();
  }

  if (command == 4) {
    right();
  }

  if (command == 3) {
    left();
  }
  
   if (command == 2) {
    reverse();
  }

  
}

