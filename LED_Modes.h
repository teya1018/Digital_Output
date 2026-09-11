void blink(){
  for (int i = 0; i < 3; i++){
    for (int i = 0; i < NUM_PINS; i++){
      digitalWrite(LED[i], 1);
    }
    delay(250);
    for (int i = 0; i < NUM_PINS; i++){
      digitalWrite(LED[i], 0);
    }
    delay(250);
  }
}

void alt(){
  for (int i = 0; i < 3; i++){
    
    for (int i = 0; i < 3; i++){
      digitalWrite(LED[i], 1);
    }
    delay(250);
    for (int i = 0; i < 3; i++){
      digitalWrite(LED[i], 0);
    }

    for (int i = 3; i < NUM_PINS; i++){
      digitalWrite(LED[i], 1);
    }
    delay(250);
    for (int i = 3; i < NUM_PINS; i++){
      digitalWrite(LED[i], 0);
    }
  }
}

void run(){
  for (int j = 0; j < 3; j++){
    for (int i = 0; i < NUM_PINS; i++){
      digitalWrite(LED[i], 1); 
      delay(100); 
      digitalWrite(LED[i], 0);
    }
    for (int i = NUM_PINS - 2; i >= (j < 2); i--){
      digitalWrite(LED[i], 1); 
      delay(100); 
      digitalWrite(LED[i], 0);
    }
  }
}
