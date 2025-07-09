#ifndef RUN_CONTROL_H
#define RUN_CONTROL_H

bool runProgram = false;

void handleRunControl() {
  if (Serial.available()) {
    String input = Serial.readStringUntil('\n');
    input.trim();

    if (input == "start") {
      runProgram = true;
      Serial.println("Program started.");
    } else if (input == "stop") {
      runProgram = false;
      Serial.println("Program stopped.");
    }
  }
}
#endif
