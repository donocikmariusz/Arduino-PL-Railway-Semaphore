#include <Arduino.h>
#line 1 "D:\\programy\\Visual Studio Code\\Arduino-PL-Railway-Semaphore\\Arduino-PL-Railway-Semaphore.ino"
#define green 11
#define uporange 2
#define red 3
#define downorange 4
#define white 5
#define blue 6
#define white2 7
#define przycisk 8
#define paszielony 9
#define paszolty 10

  String odebraneDane = "";
  int czas = 750;

#line 15 "D:\\programy\\Visual Studio Code\\Arduino-PL-Railway-Semaphore\\Arduino-PL-Railway-Semaphore.ino"
void wygas();
#line 27 "D:\\programy\\Visual Studio Code\\Arduino-PL-Railway-Semaphore\\Arduino-PL-Railway-Semaphore.ino"
void S1();
#line 39 "D:\\programy\\Visual Studio Code\\Arduino-PL-Railway-Semaphore\\Arduino-PL-Railway-Semaphore.ino"
void S2();
#line 51 "D:\\programy\\Visual Studio Code\\Arduino-PL-Railway-Semaphore\\Arduino-PL-Railway-Semaphore.ino"
void S3();
#line 69 "D:\\programy\\Visual Studio Code\\Arduino-PL-Railway-Semaphore\\Arduino-PL-Railway-Semaphore.ino"
void S4();
#line 87 "D:\\programy\\Visual Studio Code\\Arduino-PL-Railway-Semaphore\\Arduino-PL-Railway-Semaphore.ino"
void S5();
#line 99 "D:\\programy\\Visual Studio Code\\Arduino-PL-Railway-Semaphore\\Arduino-PL-Railway-Semaphore.ino"
void S6();
#line 111 "D:\\programy\\Visual Studio Code\\Arduino-PL-Railway-Semaphore\\Arduino-PL-Railway-Semaphore.ino"
void S7();
#line 129 "D:\\programy\\Visual Studio Code\\Arduino-PL-Railway-Semaphore\\Arduino-PL-Railway-Semaphore.ino"
void S8();
#line 147 "D:\\programy\\Visual Studio Code\\Arduino-PL-Railway-Semaphore\\Arduino-PL-Railway-Semaphore.ino"
void S9();
#line 159 "D:\\programy\\Visual Studio Code\\Arduino-PL-Railway-Semaphore\\Arduino-PL-Railway-Semaphore.ino"
void S10();
#line 171 "D:\\programy\\Visual Studio Code\\Arduino-PL-Railway-Semaphore\\Arduino-PL-Railway-Semaphore.ino"
void S10a();
#line 183 "D:\\programy\\Visual Studio Code\\Arduino-PL-Railway-Semaphore\\Arduino-PL-Railway-Semaphore.ino"
void S11();
#line 201 "D:\\programy\\Visual Studio Code\\Arduino-PL-Railway-Semaphore\\Arduino-PL-Railway-Semaphore.ino"
void S11a();
#line 220 "D:\\programy\\Visual Studio Code\\Arduino-PL-Railway-Semaphore\\Arduino-PL-Railway-Semaphore.ino"
void S12();
#line 238 "D:\\programy\\Visual Studio Code\\Arduino-PL-Railway-Semaphore\\Arduino-PL-Railway-Semaphore.ino"
void S12a();
#line 257 "D:\\programy\\Visual Studio Code\\Arduino-PL-Railway-Semaphore\\Arduino-PL-Railway-Semaphore.ino"
void S13();
#line 269 "D:\\programy\\Visual Studio Code\\Arduino-PL-Railway-Semaphore\\Arduino-PL-Railway-Semaphore.ino"
void S13a();
#line 284 "D:\\programy\\Visual Studio Code\\Arduino-PL-Railway-Semaphore\\Arduino-PL-Railway-Semaphore.ino"
void Sz1();
#line 305 "D:\\programy\\Visual Studio Code\\Arduino-PL-Railway-Semaphore\\Arduino-PL-Railway-Semaphore.ino"
void Sz2();
#line 330 "D:\\programy\\Visual Studio Code\\Arduino-PL-Railway-Semaphore\\Arduino-PL-Railway-Semaphore.ino"
void Sp1();
#line 342 "D:\\programy\\Visual Studio Code\\Arduino-PL-Railway-Semaphore\\Arduino-PL-Railway-Semaphore.ino"
void Sp2();
#line 354 "D:\\programy\\Visual Studio Code\\Arduino-PL-Railway-Semaphore\\Arduino-PL-Railway-Semaphore.ino"
void Sp3();
#line 372 "D:\\programy\\Visual Studio Code\\Arduino-PL-Railway-Semaphore\\Arduino-PL-Railway-Semaphore.ino"
void Sp4();
#line 390 "D:\\programy\\Visual Studio Code\\Arduino-PL-Railway-Semaphore\\Arduino-PL-Railway-Semaphore.ino"
void Ms1();
#line 403 "D:\\programy\\Visual Studio Code\\Arduino-PL-Railway-Semaphore\\Arduino-PL-Railway-Semaphore.ino"
void Ms2();
#line 417 "D:\\programy\\Visual Studio Code\\Arduino-PL-Railway-Semaphore\\Arduino-PL-Railway-Semaphore.ino"
void Sprawdzzajetosc();
#line 430 "D:\\programy\\Visual Studio Code\\Arduino-PL-Railway-Semaphore\\Arduino-PL-Railway-Semaphore.ino"
void setup();
#line 447 "D:\\programy\\Visual Studio Code\\Arduino-PL-Railway-Semaphore\\Arduino-PL-Railway-Semaphore.ino"
void loop();
#line 15 "D:\\programy\\Visual Studio Code\\Arduino-PL-Railway-Semaphore\\Arduino-PL-Railway-Semaphore.ino"
void wygas() {
  digitalWrite(green, LOW);
  digitalWrite(uporange, LOW);
  digitalWrite(red, LOW);
  digitalWrite(downorange, LOW);
  digitalWrite(white, LOW);
  digitalWrite(blue, LOW);
  digitalWrite(white2, LOW);
  digitalWrite(paszielony, LOW);
  digitalWrite(paszolty, LOW);
}

void S1() {
  digitalWrite(green, LOW);
  digitalWrite(uporange, LOW);
  digitalWrite(red, HIGH);
  digitalWrite(downorange, LOW);
  digitalWrite(white, LOW);
  digitalWrite(blue, LOW);
  digitalWrite(white2, LOW);
  digitalWrite(paszielony, LOW);
  digitalWrite(paszolty, LOW);
}

void S2() {
  digitalWrite(green, HIGH);
  digitalWrite(uporange, LOW);
  digitalWrite(red, LOW);
  digitalWrite(downorange, LOW);
  digitalWrite(white, LOW);
  digitalWrite(blue, LOW);
  digitalWrite(white2, LOW);
  digitalWrite(paszielony, LOW);
  digitalWrite(paszolty, LOW);
}

void S3() {
  Sprawdzzajetosc();
  digitalWrite(green, HIGH);
  delay(czas);
  Sprawdzzajetosc();
  digitalWrite(green, LOW);
  delay(czas);
  Sprawdzzajetosc();
  digitalWrite(uporange, LOW);
  digitalWrite(red, LOW);
  digitalWrite(downorange, LOW);
  digitalWrite(white, LOW);
  digitalWrite(blue, LOW);
  digitalWrite(white2, LOW);
  digitalWrite(paszielony, LOW);
  digitalWrite(paszolty, LOW);
}

void S4() {
  Sprawdzzajetosc();
  digitalWrite(green, LOW);
  digitalWrite(uporange, HIGH);
  delay(czas);
  Sprawdzzajetosc();
  digitalWrite(uporange, LOW);
  delay(czas);
  Sprawdzzajetosc();
  digitalWrite(red, LOW);
  digitalWrite(downorange, LOW);
  digitalWrite(white, LOW);
  digitalWrite(blue, LOW);
  digitalWrite(white2, LOW);
  digitalWrite(paszielony, LOW);
  digitalWrite(paszolty, LOW);
}

void S5() {
  digitalWrite(green, LOW);
  digitalWrite(uporange, HIGH);
  digitalWrite(red, LOW);
  digitalWrite(downorange, LOW);
  digitalWrite(white, LOW);
  digitalWrite(blue, LOW);
  digitalWrite(white2, LOW);
  digitalWrite(paszielony, LOW);
  digitalWrite(paszolty, LOW);
}

void S6() {
  digitalWrite(green, HIGH);
  digitalWrite(uporange, LOW);
  digitalWrite(red, LOW);
  digitalWrite(downorange, HIGH);
  digitalWrite(white, LOW);
  digitalWrite(blue, LOW);
  digitalWrite(white2, LOW);
  digitalWrite(paszielony, HIGH);
  digitalWrite(paszolty, LOW);
}

void S7() {
  digitalWrite(downorange, HIGH);
  digitalWrite(paszielony, HIGH);
  Sprawdzzajetosc();
  digitalWrite(green, HIGH);
  delay(czas);
  Sprawdzzajetosc();
  digitalWrite(green, LOW);
  delay(czas);
  Sprawdzzajetosc();
  digitalWrite(uporange, LOW);
  digitalWrite(red, LOW);
  digitalWrite(white, LOW);
  digitalWrite(blue, LOW);
  digitalWrite(white2, LOW); 
  digitalWrite(paszolty, LOW);
}

void S8() {  
  Sprawdzzajetosc();
  digitalWrite(green, LOW);
  digitalWrite(downorange, HIGH);
  digitalWrite(paszielony, HIGH);
  digitalWrite(uporange, HIGH);
  delay(czas);
  Sprawdzzajetosc();
  digitalWrite(uporange, LOW);
  delay(czas);
  Sprawdzzajetosc();
  digitalWrite(red, LOW);
  digitalWrite(white, LOW);
  digitalWrite(blue, LOW);
  digitalWrite(white2, LOW);
  digitalWrite(paszolty, LOW);
}

void S9() {  
  digitalWrite(green, LOW);
    digitalWrite(paszielony, HIGH);
  digitalWrite(uporange, HIGH);
  digitalWrite(red, LOW);
  digitalWrite(downorange, HIGH);
  digitalWrite(white, LOW);
  digitalWrite(blue, LOW);
  digitalWrite(white2, LOW);
  digitalWrite(paszolty, LOW);
}

void S10() {  
  digitalWrite(green, HIGH);
  digitalWrite(uporange, LOW);
  digitalWrite(red, LOW);
  digitalWrite(downorange, HIGH);
  digitalWrite(white, LOW);
  digitalWrite(blue, LOW);
  digitalWrite(white2, LOW);
  digitalWrite(paszielony, LOW);
  digitalWrite(paszolty, LOW);
}

void S10a() {  
  digitalWrite(green, HIGH);
  digitalWrite(uporange, LOW);
  digitalWrite(red, LOW);
  digitalWrite(downorange, HIGH);
  digitalWrite(white, LOW);
  digitalWrite(blue, LOW);
  digitalWrite(white2, LOW);
  digitalWrite(paszielony, LOW);
  digitalWrite(paszolty, HIGH);
}

void S11() {  
  Sprawdzzajetosc();
    digitalWrite(downorange, HIGH);
  digitalWrite(green, HIGH);
  delay(czas);
  Sprawdzzajetosc();
  digitalWrite(green, LOW);
  delay(czas);
  Sprawdzzajetosc();
  digitalWrite(uporange, LOW);
  digitalWrite(red, LOW);
  digitalWrite(white, LOW);
  digitalWrite(blue, LOW);
  digitalWrite(white2, LOW);
  digitalWrite(paszielony, LOW);
  digitalWrite(paszolty, LOW);
}

void S11a() {  
  Sprawdzzajetosc();
    digitalWrite(downorange, HIGH);
      digitalWrite(paszolty, HIGH);
  digitalWrite(green, HIGH);
  delay(czas);
  Sprawdzzajetosc();
  digitalWrite(green, LOW);
  delay(czas);
  Sprawdzzajetosc();
  digitalWrite(uporange, LOW);
  digitalWrite(red, LOW);
  digitalWrite(white, LOW);
  digitalWrite(blue, LOW);
  digitalWrite(white2, LOW);
  digitalWrite(paszielony, LOW);

}

void S12() {  
  Sprawdzzajetosc();
    digitalWrite(downorange, HIGH);
  digitalWrite(green, LOW);
  digitalWrite(uporange, HIGH);
  delay(czas);
  Sprawdzzajetosc();
  digitalWrite(uporange, LOW);
  delay(czas);
  Sprawdzzajetosc();
  digitalWrite(red, LOW);
  digitalWrite(white, LOW);
  digitalWrite(blue, LOW);
  digitalWrite(white2, LOW);
  digitalWrite(paszielony, LOW);
  digitalWrite(paszolty, LOW);
}

void S12a() {  
  Sprawdzzajetosc();
  digitalWrite(green, LOW);
    digitalWrite(downorange, HIGH);
      digitalWrite(paszolty, HIGH);
  digitalWrite(uporange, HIGH);
  delay(czas);
  Sprawdzzajetosc();
  digitalWrite(uporange, LOW);
  delay(czas);
  Sprawdzzajetosc();
  digitalWrite(red, LOW);
  digitalWrite(white, LOW);
  digitalWrite(blue, LOW);
  digitalWrite(white2, LOW);
  digitalWrite(paszielony, LOW);

}

void S13() {  
  digitalWrite(green, LOW);
  digitalWrite(uporange, HIGH);
  digitalWrite(red, LOW);
  digitalWrite(downorange, HIGH);
  digitalWrite(white, LOW);
  digitalWrite(blue, LOW);
  digitalWrite(white2, LOW);
  digitalWrite(paszielony, LOW);
  digitalWrite(paszolty, LOW);
}

void S13a() {  
  digitalWrite(green, LOW);
  digitalWrite(uporange, HIGH);
  digitalWrite(red, LOW);
  digitalWrite(downorange, HIGH);
  digitalWrite(white, LOW);
  digitalWrite(blue, LOW);
  digitalWrite(white2, LOW);
  digitalWrite(paszielony, LOW);
  digitalWrite(paszolty, HIGH);
}

int czaszastepczego = 20000;
int czaszastepczego1 = (czaszastepczego/(czas*2));

void Sz1() {  
  for (int i=0; i<=czaszastepczego1; i++)
  {
    Sprawdzzajetosc();
  digitalWrite(green, LOW);
  digitalWrite(uporange, LOW);
  digitalWrite(red, HIGH);
  digitalWrite(downorange, LOW);
  digitalWrite(white, HIGH);
  delay(czas);
  Sprawdzzajetosc();
  digitalWrite(white, LOW);
  delay(czas); 
  Sprawdzzajetosc();
  digitalWrite(blue, LOW);
  digitalWrite(white2, LOW);
  digitalWrite(paszielony, LOW);
  digitalWrite(paszolty, LOW);
  }
  }

void Sz2() {  
  for (int i=0; i<=czaszastepczego1; i++)
  {
     Sprawdzzajetosc();
  digitalWrite(green, LOW);
  digitalWrite(uporange, LOW);
  digitalWrite(red, LOW);
  digitalWrite(downorange, LOW);
  digitalWrite(white, HIGH);
  delay(czas);
  if (digitalRead(przycisk) == LOW)
  {break;}
  digitalWrite(white, LOW);
    Sprawdzzajetosc();
  delay(czas); 
    if (digitalRead(przycisk) == LOW)
  {break;}
  Sprawdzzajetosc();
  digitalWrite(blue, LOW);
  digitalWrite(white2, LOW);
  digitalWrite(paszielony, LOW);
  digitalWrite(paszolty, LOW);
  }
  }

void Sp1() {  
  digitalWrite(green, LOW);
  digitalWrite(uporange, HIGH);
  digitalWrite(red, LOW);
  digitalWrite(downorange, LOW);
  digitalWrite(white, HIGH);
  digitalWrite(blue, LOW);
  digitalWrite(white2, LOW);
  digitalWrite(paszielony, LOW);
  digitalWrite(paszolty, LOW);
  }

  void Sp2() {  
  digitalWrite(green, HIGH);
  digitalWrite(uporange, LOW);
  digitalWrite(red, LOW);
  digitalWrite(downorange, LOW);
  digitalWrite(white, HIGH);
  digitalWrite(blue, LOW);
  digitalWrite(white2, LOW);
  digitalWrite(paszielony, LOW);
  digitalWrite(paszolty, LOW);
  }

  void Sp3() {  
    Sprawdzzajetosc();
      digitalWrite(white, HIGH);
  digitalWrite(green, HIGH);
  delay(czas);
  Sprawdzzajetosc();
  digitalWrite(green, LOW);
  delay(czas);
  Sprawdzzajetosc();
  digitalWrite(uporange, LOW);
  digitalWrite(red, LOW);
  digitalWrite(downorange, LOW);
  digitalWrite(blue, LOW);
  digitalWrite(white2, LOW);
  digitalWrite(paszielony, LOW);
  digitalWrite(paszolty, LOW);
  }

  void Sp4() {  
    Sprawdzzajetosc();
      digitalWrite(white, HIGH);
  digitalWrite(green, LOW);
  digitalWrite(uporange, HIGH);
  delay(czas);
  Sprawdzzajetosc();
  digitalWrite(uporange, LOW);
  delay(czas);
  Sprawdzzajetosc();
  digitalWrite(red, LOW);
  digitalWrite(downorange, LOW);
  digitalWrite(blue, LOW);
  digitalWrite(white2, LOW);
  digitalWrite(paszielony, LOW);
  digitalWrite(paszolty, LOW);
  }

  void Ms1() {  
  digitalWrite(green, LOW);
  digitalWrite(uporange, LOW);
  digitalWrite(uporange, LOW);
  digitalWrite(red, LOW);
  digitalWrite(downorange, LOW);
  digitalWrite(white, LOW);
  digitalWrite(blue, HIGH);
  digitalWrite(white2, LOW);
  digitalWrite(paszielony, LOW);
  digitalWrite(paszolty, LOW);
  }

    void Ms2() {  
  digitalWrite(green, LOW);
  digitalWrite(uporange, LOW);
  digitalWrite(uporange, LOW);
  digitalWrite(red, LOW);
  digitalWrite(downorange, LOW);
  digitalWrite(white, LOW);
  digitalWrite(blue, LOW);
  digitalWrite(white2, HIGH);
  digitalWrite(paszielony, LOW);
  digitalWrite(paszolty, LOW);
  }


void Sprawdzzajetosc(){
  if (digitalRead(przycisk) == LOW)
  {
    wygas();
    Serial.println("Wykryto zajętość, Wygaszono");
    Serial.println("Podaj sygnał do wyświetlenia : ");
    do {
    S1();
    } while (Serial.available() == 0);
    
  }
}

void setup() {
  Serial.begin(9600);
  pinMode(green, OUTPUT);
  pinMode(uporange, OUTPUT);
  pinMode(red, OUTPUT);
  pinMode(downorange, OUTPUT);
  pinMode(white, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(white2, OUTPUT);
  pinMode(paszielony, OUTPUT);
  pinMode(paszolty, OUTPUT);
  pinMode(przycisk, INPUT_PULLUP);  
  
  S1();
  Serial.println("Podaj sygnał do wyświetlenia : ");
}

void loop() {

 if (Serial.available() > 0)
 {
   odebraneDane = Serial.readStringUntil('\n'); 

   if(odebraneDane=="S2"){
    Serial.println("Podaj sygnał do wyświetlenia : ");
    wygas();
    do {
    Sprawdzzajetosc();
    S2();
    } while (Serial.available() == 0);
     
    }

    if(odebraneDane=="S3"){
    Serial.println("Podaj sygnał do wyświetlenia : ");
    wygas();
    do {
    Sprawdzzajetosc();
    S3();
    } while (Serial.available() == 0);
     
    }

      if(odebraneDane=="S4"){
    Serial.println("Podaj sygnał do wyświetlenia : ");
    wygas();
    do {
      Sprawdzzajetosc();
    S4();
    } while (Serial.available() == 0);
     
    }

  if(odebraneDane=="S5"){
    Serial.println("Podaj sygnał do wyświetlenia : ");
    wygas();
    do {
      Sprawdzzajetosc();
    S5();
    } while (Serial.available() == 0);
     
    }

  if(odebraneDane=="S6"){
    Serial.println("Podaj sygnał do wyświetlenia : ");
    wygas();
    do {
      Sprawdzzajetosc();
    S6();
    } while (Serial.available() == 0);
     
    }

   if(odebraneDane=="S7"){
    Serial.println("Podaj sygnał do wyświetlenia : ");
    wygas();
    do {
      Sprawdzzajetosc();
    S7();
    } while (Serial.available() == 0);
     
    }

  if(odebraneDane=="S8"){
    Serial.println("Podaj sygnał do wyświetlenia : ");
    wygas();
    do {
      Sprawdzzajetosc();
    S8();
    } while (Serial.available() == 0);
     
    }

  if(odebraneDane=="S9"){
    Serial.println("Podaj sygnał do wyświetlenia : ");
    wygas();
    do {
      Sprawdzzajetosc();
    S9();
    } while (Serial.available() == 0);
     
    }

  if(odebraneDane=="S10"){
    Serial.println("Podaj sygnał do wyświetlenia : ");
    wygas();
    do {
      Sprawdzzajetosc();
    S10();
    } while (Serial.available() == 0);
     
    }

  if(odebraneDane=="S10a"){
    Serial.println("Podaj sygnał do wyświetlenia : ");
    wygas();
    do {
      Sprawdzzajetosc();
    S10a();
    } while (Serial.available() == 0);
     
    }

  if(odebraneDane=="S11"){
    Serial.println("Podaj sygnał do wyświetlenia : ");
    wygas();
    do {
      Sprawdzzajetosc();
    S11();
    } while (Serial.available() == 0);
     
    }

  if(odebraneDane=="S11a"){
  
    Serial.println("Podaj sygnał do wyświetlenia : ");
    wygas();
    do {
      Sprawdzzajetosc();
    S11a();
    } while (Serial.available() == 0);
     
    }

  if(odebraneDane=="S12"){
    Serial.println("Podaj sygnał do wyświetlenia : ");
    wygas();
    do {
      Sprawdzzajetosc();
    S12();
    } while (Serial.available() == 0);
     
    }

  if(odebraneDane=="S12a"){
    Serial.println("Podaj sygnał do wyświetlenia : ");
    wygas();
    do {
      Sprawdzzajetosc();
    S12a();
    } while (Serial.available() == 0);
  
    }

  if(odebraneDane=="S13"){
    Serial.println("Podaj sygnał do wyświetlenia : ");
    wygas();
    do {
      Sprawdzzajetosc();
    S13();
    } while (Serial.available() == 0);  
    }

  if(odebraneDane=="S13a"){
    Serial.println("Podaj sygnał do wyświetlenia : ");
    wygas();
    do {
      Sprawdzzajetosc();
    S13a();
    } while (Serial.available() == 0);
    }

  if(odebraneDane=="Sz1"){
    Serial.println("Podaj sygnał do wyświetlenia : ");
    wygas();
     Sprawdzzajetosc();
    Sz1();
    }

  if(odebraneDane=="Sz2"){

    Serial.println("Podaj sygnał do wyświetlenia : ");
    wygas();
     Sprawdzzajetosc();
    Sz2();
    }

  if(odebraneDane=="Sp1"){
    Serial.println("Podaj sygnał do wyświetlenia : ");
    wygas();
    do {
      Sprawdzzajetosc();
    Sp1();
    } while (Serial.available() == 0); 
    }

  if(odebraneDane=="Sp2"){
    Serial.println("Podaj sygnał do wyświetlenia : ");
    wygas();
    do {
      Sprawdzzajetosc();
    Sp2();
    } while (Serial.available() == 0);
    }

  if(odebraneDane=="Sp3"){
    Serial.println("Podaj sygnał do wyświetlenia : ");
    wygas();
    do {
      Sprawdzzajetosc();
    Sp3();
    } while (Serial.available() == 0);
    }

  if(odebraneDane=="Sp4"){
    Serial.println("Podaj sygnał do wyświetlenia : ");
    wygas();
    do {
      Sprawdzzajetosc();
    Sp4();
    } while (Serial.available() == 0);
    }

  if(odebraneDane=="Ms1"){
    Serial.println("Podaj sygnał do wyświetlenia : ");
    wygas();
    do {
      Sprawdzzajetosc();
    Ms1();
    } while (Serial.available() == 0);
    }

  if(odebraneDane=="Ms2"){
    Serial.println("Podaj sygnał do wyświetlenia : ");
    wygas();
    do {
      Sprawdzzajetosc();
    Ms2();
    } while (Serial.available() == 0);
    }

}
else
{
Serial.println("Komenda nieznana! Wygaszono.");
Serial.println("Podaj sygnał do wyświetlenia : ");
    wygas();
    do {
      Sprawdzzajetosc();
    S1();
    } while (Serial.available() == 0);
}
}
