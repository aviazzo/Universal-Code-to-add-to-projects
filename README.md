# Universal-Code-to-add-to-projects
This code that can be used between different projects to start and stop code through the Serial Monitor

## Steps
### 1) Add Library
  #include "RunControl.h"

### 2) Add to setup section
  Serial.begin(115200);
  Serial.println("Type 'start' to begin, 'stop' to halt.");

  // ... your normal setup code

### 3) Add to loop Section
    handleRunControl();  // Always check for serial input

  if (runProgram) {
    // Paste your normal loop code here
    // e.g. blinking LED, reading sensors, sending data
  }
