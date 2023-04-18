
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
        Serial.println("A");
        break;
      case 'B':
        B();
        delay(letterBreak);
        Serial.println("B");
        break;
      case 'C':
        C();
        delay(letterBreak);
        Serial.println("C");
        break;
      case 'D':
        D();
        delay(letterBreak);
        Serial.println("D");
        break;
      case 'E':
        E();
        delay(letterBreak);
        Serial.println("E");
        break;
  /*
      case 'F':
          F();
          delay(letterBreak);
          Serial.println("F");
          break;
  */
      case 'G':
        G();
        delay(letterBreak);
        Serial.println("G");
        break;
      case 'H':
        H();
        delay(letterBreak);
        Serial.println("H");
        break;
      case 'I':
        I();
        delay(letterBreak);
        Serial.println("I");
        break;
      case 'J':
        J();
        delay(letterBreak);
        Serial.println("J");
        break;
      case 'K':
        K();
        delay(letterBreak);
        Serial.println("K");
        break;
      case 'L':
        L();
        delay(letterBreak);
        Serial.println("L");
        break;
      case 'M':
        M();
        delay(letterBreak);
        Serial.println("M");
        break;
      case 'N':
        N();
        delay(letterBreak);
        Serial.println("N");
        break;
      case 'O':
        O();
        delay(letterBreak);
        Serial.println("O");
        break;
      case 'P':
        P();
        delay(letterBreak);
        Serial.println("P");
        break;
      case 'Q':
        Q();
        delay(letterBreak);
        Serial.println("Q");
        break;
      case 'R':
        R();
        delay(letterBreak);
        Serial.println("R");
        break;
      case 'S':
        S();
        delay(letterBreak);
        Serial.println("S");
        break;
      case 'T':
        T();
        delay(letterBreak);
        Serial.println("T");
        break;
      case 'U':
        U();
        delay(letterBreak);
        Serial.println("U");
        break;
      case 'V':
        V();
        delay(letterBreak);
        Serial.println("V");
        break;
      case 'W':
        W();
        delay(letterBreak);
        Serial.println("W");
        break;
      case 'X':
        X();
        delay(letterBreak);
        Serial.println("X");
        break;
      case 'Y':
        Y();
        delay(letterBreak);
        Serial.println("Y");
        break;
      case 'Z':
        Z();
        delay(letterBreak);
        Serial.println("Z");
        break;
      case ' ':
        delay(wordBreak);   
        Serial.println(" ");
      default:
        Serial.print("");
        break;
     }
  }


  for (int i = 0; i < inputLen; i++) { // clear the string array
    letters[i] = '\0';
  }





}
