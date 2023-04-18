
String ins = "Write: ";
String input;

const int letterArraySize = 50;
char letters[letterArraySize];

int led = 9;

int buzzer = 7;
int buzzFreq = 400;

int dotWait = 100;
int dashWait = 300;

int signBreak = 100;
int letterBreak = 300;
int wordBreak = 400;

void dotSound(){
  
  delay(dotWait);
  
}

void dashSound(){
  
  delay(dashWait);
  noTone(buzzer);
}


void dot(){
  digitalWrite(led, HIGH);
  tone(buzzer, buzzFreq);
  delay(dotWait);
  digitalWrite(led, LOW);
  noTone(buzzer);
}

void dash(){
  digitalWrite(led,HIGH);
  tone(buzzer, buzzFreq);
  delay(dashWait);
  digitalWrite(led,LOW);
  noTone(buzzer);
}

// Morse code implementation for letters
void A(){
  dot();
  delay(signBreak);
  dash();
}

void B(){
  dash();
  delay(signBreak);
  dot();
  delay(signBreak);
  dot();
  delay(signBreak);
  dot();
}

void C(){
  dash();
  delay(signBreak);
  dot();
  delay(signBreak);
  dash();
  delay(signBreak);
  dot();
}

void D(){
  dash();
  delay(signBreak);
  dot();
  delay(signBreak);
  dot();
}

void E(){
  dot();
}

/*
void F(){
  dot();
  delay(signBreak);
  dot();
  delay(signBreak);
  dash();
  delay(signBreak);
  dot();
}
*/


void G(){
  dash();
  delay(signBreak);
  dash();
  delay(signBreak);
  dot();
}

void H(){
  dot();
  delay(signBreak);
  dot();
  delay(signBreak);
  dot();
  delay(signBreak);
  dot();
}

void I(){
  dot();
  delay(signBreak);
  dot();
}

void J(){
  dot();
  delay(signBreak);
  dash();
  delay(signBreak);
  dash();
  delay(signBreak);
  dash();
}

void K(){
  dash();
  delay(signBreak);
  dot();
  delay(signBreak);
  dash();
}

void L(){
  dot();
  delay(signBreak);
  dash();
  delay(signBreak);
  dot();
  delay(signBreak);
  dot();
}

void M(){
  dash();
  delay(signBreak);
  dash();
}

void N(){
  dash();
  delay(signBreak);
  dot();
}

void O(){
  dash();
  delay(signBreak);
  dash();
  delay(signBreak);
  dash();
}

void P(){
  dot();
  delay(signBreak);
  dash();
  delay(signBreak);
  dash();
  delay(signBreak);
  dot();
}

void Q(){
  dash();
  delay(signBreak);
  dash();
  delay(signBreak);
  dot();
  delay(signBreak);
  dash();
}

void R(){
  dot();
  delay(signBreak);
  dash();
  delay(signBreak);
  dot();
}

void S(){
  dot();
  delay(signBreak);
  dot();
  delay(signBreak);
  dot();
}

void T(){
  dash();
}

void U(){
  dot();
  delay(signBreak);
  dot();
  delay(signBreak);
  dash();
}

void V(){
  dot();
  delay(signBreak);
  dot();
  delay(signBreak);
  dot();
  delay(signBreak);
  dash();
}

void W(){
  dot();
  delay(signBreak);
  dash();
  delay(signBreak);
  dash();
}

void X(){
  dash();
  delay(signBreak);
  dot();
  delay(signBreak);
  dot();
  delay(signBreak);
}

void Y(){
  dash();
  delay(signBreak);
  dot();
  delay(signBreak);
  dash();
  delay(signBreak);
  dash();
}

void Z(){
  dash();
  delay(signBreak);
  dash();
  delay(signBreak);
  dot();
  delay(signBreak);
  dot();
}




void setup(){

	pinMode(led, OUTPUT);
  Serial.begin(9600);

}

void loop(){

  delay(1000);
  Serial.println(ins);

  while(Serial.available() == 0) {}

  input = Serial.readString();
  
  int inputLen = input.length(); 
  inputLen = min(inputLen, letterArraySize); // clear unnecessary memory

  for (int i = 0; i < inputLen; i++) {
    letters[i] = toupper(input.charAt(i)); // Store the letters in the array
  }

  for (int i = 0; i < inputLen; i++) { //print the letters with a space between
    Serial.print(letters[i]);
  }


  for (int i = 0; i < inputLen; i++) { //print the letters with a space between
    switch (letters[i]){
      case 'A': 
        A();
        delay(letterBreak);
        break;
      case 'B':
        B();
        delay(letterBreak);
        break;
      case 'C':
          C();
          delay(letterBreak);
          break;
      case 'D':
          D();
          delay(letterBreak);
          break;
      case 'E':
          E();
          delay(letterBreak);
          break;
  /*
      case 'F':
          F();
          delay(letterBreak);
          break;
  */
      case 'G':
          G();
          delay(letterBreak);
          break;
      case 'H':
          H();
          delay(letterBreak);
          break;
      case 'I':
          I();
          delay(letterBreak);
          break;
      case 'J':
          J();
          delay(letterBreak);
          break;
      case 'K':
          K();
          delay(letterBreak);
          break;
      case 'L':
          L();
          delay(letterBreak);
          break;
      case 'M':
          M();
          delay(letterBreak);
          break;
      case 'N':
          N();
          delay(letterBreak);
          break;
      case 'O':
          O();
          delay(letterBreak);
          break;
      case 'P':
          P();
          delay(letterBreak);
          break;
      case 'Q':
          Q();
          delay(letterBreak);
          break;
      case 'R':
          R();
          delay(letterBreak);
          break;
      case 'S':
          S();
          delay(letterBreak);
          break;
      case 'T':
          T();
          delay(letterBreak);
          break;
      case 'U':
          U();
          delay(letterBreak);
          break;
      case 'V':
          V();
          delay(letterBreak);
          break;
      case 'W':
          W();
          delay(letterBreak);
          break;
      case 'X':
          X();
          delay(letterBreak);
          break;
      case 'Y':
          Y();
          delay(letterBreak);
          break;
      case 'Z':
          Z();
          delay(letterBreak);
          break;
      case ' ':
        delay(wordBreak);   
      default:
          Serial.print("Invalid character");
          break;
     }
  }


  for (int i = 0; i < inputLen; i++) { // clear the string array
    letters[i] = '\0';
  }

}
