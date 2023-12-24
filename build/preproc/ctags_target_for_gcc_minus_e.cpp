# 1 "D:\\programy\\Visual Studio Code\\Arduino-PL-Railway-Semaphore\\Arduino-PL-Railway-Semaphore.ino"
# 12 "D:\\programy\\Visual Studio Code\\Arduino-PL-Railway-Semaphore\\Arduino-PL-Railway-Semaphore.ino"
  String odebraneDane = "";
  int czas = 750;

void wygas() {
  digitalWrite(11, 0x0);
  digitalWrite(2, 0x0);
  digitalWrite(3, 0x0);
  digitalWrite(4, 0x0);
  digitalWrite(5, 0x0);
  digitalWrite(6, 0x0);
  digitalWrite(7, 0x0);
  digitalWrite(9, 0x0);
  digitalWrite(10, 0x0);
}

void S1() {
  digitalWrite(11, 0x0);
  digitalWrite(2, 0x0);
  digitalWrite(3, 0x1);
  digitalWrite(4, 0x0);
  digitalWrite(5, 0x0);
  digitalWrite(6, 0x0);
  digitalWrite(7, 0x0);
  digitalWrite(9, 0x0);
  digitalWrite(10, 0x0);
}

void S2() {
  digitalWrite(11, 0x1);
  digitalWrite(2, 0x0);
  digitalWrite(3, 0x0);
  digitalWrite(4, 0x0);
  digitalWrite(5, 0x0);
  digitalWrite(6, 0x0);
  digitalWrite(7, 0x0);
  digitalWrite(9, 0x0);
  digitalWrite(10, 0x0);
}

void S3() {
  Sprawdzzajetosc();
  digitalWrite(11, 0x1);
  delay(czas);
  Sprawdzzajetosc();
  digitalWrite(11, 0x0);
  delay(czas);
  Sprawdzzajetosc();
  digitalWrite(2, 0x0);
  digitalWrite(3, 0x0);
  digitalWrite(4, 0x0);
  digitalWrite(5, 0x0);
  digitalWrite(6, 0x0);
  digitalWrite(7, 0x0);
  digitalWrite(9, 0x0);
  digitalWrite(10, 0x0);
}

void S4() {
  Sprawdzzajetosc();
  digitalWrite(11, 0x0);
  digitalWrite(2, 0x1);
  delay(czas);
  Sprawdzzajetosc();
  digitalWrite(2, 0x0);
  delay(czas);
  Sprawdzzajetosc();
  digitalWrite(3, 0x0);
  digitalWrite(4, 0x0);
  digitalWrite(5, 0x0);
  digitalWrite(6, 0x0);
  digitalWrite(7, 0x0);
  digitalWrite(9, 0x0);
  digitalWrite(10, 0x0);
}

void S5() {
  digitalWrite(11, 0x0);
  digitalWrite(2, 0x1);
  digitalWrite(3, 0x0);
  digitalWrite(4, 0x0);
  digitalWrite(5, 0x0);
  digitalWrite(6, 0x0);
  digitalWrite(7, 0x0);
  digitalWrite(9, 0x0);
  digitalWrite(10, 0x0);
}

void S6() {
  digitalWrite(11, 0x1);
  digitalWrite(2, 0x0);
  digitalWrite(3, 0x0);
  digitalWrite(4, 0x1);
  digitalWrite(5, 0x0);
  digitalWrite(6, 0x0);
  digitalWrite(7, 0x0);
  digitalWrite(9, 0x1);
  digitalWrite(10, 0x0);
}

void S7() {
  digitalWrite(4, 0x1);
  digitalWrite(9, 0x1);
  Sprawdzzajetosc();
  digitalWrite(11, 0x1);
  delay(czas);
  Sprawdzzajetosc();
  digitalWrite(11, 0x0);
  delay(czas);
  Sprawdzzajetosc();
  digitalWrite(2, 0x0);
  digitalWrite(3, 0x0);
  digitalWrite(5, 0x0);
  digitalWrite(6, 0x0);
  digitalWrite(7, 0x0);
  digitalWrite(10, 0x0);
}

void S8() {
  Sprawdzzajetosc();
  digitalWrite(11, 0x0);
  digitalWrite(4, 0x1);
  digitalWrite(9, 0x1);
  digitalWrite(2, 0x1);
  delay(czas);
  Sprawdzzajetosc();
  digitalWrite(2, 0x0);
  delay(czas);
  Sprawdzzajetosc();
  digitalWrite(3, 0x0);
  digitalWrite(5, 0x0);
  digitalWrite(6, 0x0);
  digitalWrite(7, 0x0);
  digitalWrite(10, 0x0);
}

void S9() {
  digitalWrite(11, 0x0);
    digitalWrite(9, 0x1);
  digitalWrite(2, 0x1);
  digitalWrite(3, 0x0);
  digitalWrite(4, 0x1);
  digitalWrite(5, 0x0);
  digitalWrite(6, 0x0);
  digitalWrite(7, 0x0);
  digitalWrite(10, 0x0);
}

void S10() {
  digitalWrite(11, 0x1);
  digitalWrite(2, 0x0);
  digitalWrite(3, 0x0);
  digitalWrite(4, 0x1);
  digitalWrite(5, 0x0);
  digitalWrite(6, 0x0);
  digitalWrite(7, 0x0);
  digitalWrite(9, 0x0);
  digitalWrite(10, 0x0);
}

void S10a() {
  digitalWrite(11, 0x1);
  digitalWrite(2, 0x0);
  digitalWrite(3, 0x0);
  digitalWrite(4, 0x1);
  digitalWrite(5, 0x0);
  digitalWrite(6, 0x0);
  digitalWrite(7, 0x0);
  digitalWrite(9, 0x0);
  digitalWrite(10, 0x1);
}

void S11() {
  Sprawdzzajetosc();
    digitalWrite(4, 0x1);
  digitalWrite(11, 0x1);
  delay(czas);
  Sprawdzzajetosc();
  digitalWrite(11, 0x0);
  delay(czas);
  Sprawdzzajetosc();
  digitalWrite(2, 0x0);
  digitalWrite(3, 0x0);
  digitalWrite(5, 0x0);
  digitalWrite(6, 0x0);
  digitalWrite(7, 0x0);
  digitalWrite(9, 0x0);
  digitalWrite(10, 0x0);
}

void S11a() {
  Sprawdzzajetosc();
    digitalWrite(4, 0x1);
      digitalWrite(10, 0x1);
  digitalWrite(11, 0x1);
  delay(czas);
  Sprawdzzajetosc();
  digitalWrite(11, 0x0);
  delay(czas);
  Sprawdzzajetosc();
  digitalWrite(2, 0x0);
  digitalWrite(3, 0x0);
  digitalWrite(5, 0x0);
  digitalWrite(6, 0x0);
  digitalWrite(7, 0x0);
  digitalWrite(9, 0x0);

}

void S12() {
  Sprawdzzajetosc();
    digitalWrite(4, 0x1);
  digitalWrite(11, 0x0);
  digitalWrite(2, 0x1);
  delay(czas);
  Sprawdzzajetosc();
  digitalWrite(2, 0x0);
  delay(czas);
  Sprawdzzajetosc();
  digitalWrite(3, 0x0);
  digitalWrite(5, 0x0);
  digitalWrite(6, 0x0);
  digitalWrite(7, 0x0);
  digitalWrite(9, 0x0);
  digitalWrite(10, 0x0);
}

void S12a() {
  Sprawdzzajetosc();
  digitalWrite(11, 0x0);
    digitalWrite(4, 0x1);
      digitalWrite(10, 0x1);
  digitalWrite(2, 0x1);
  delay(czas);
  Sprawdzzajetosc();
  digitalWrite(2, 0x0);
  delay(czas);
  Sprawdzzajetosc();
  digitalWrite(3, 0x0);
  digitalWrite(5, 0x0);
  digitalWrite(6, 0x0);
  digitalWrite(7, 0x0);
  digitalWrite(9, 0x0);

}

void S13() {
  digitalWrite(11, 0x0);
  digitalWrite(2, 0x1);
  digitalWrite(3, 0x0);
  digitalWrite(4, 0x1);
  digitalWrite(5, 0x0);
  digitalWrite(6, 0x0);
  digitalWrite(7, 0x0);
  digitalWrite(9, 0x0);
  digitalWrite(10, 0x0);
}

void S13a() {
  digitalWrite(11, 0x0);
  digitalWrite(2, 0x1);
  digitalWrite(3, 0x0);
  digitalWrite(4, 0x1);
  digitalWrite(5, 0x0);
  digitalWrite(6, 0x0);
  digitalWrite(7, 0x0);
  digitalWrite(9, 0x0);
  digitalWrite(10, 0x1);
}

int czaszastepczego = 20000;
int czaszastepczego1 = (czaszastepczego/(czas*2));

void Sz1() {
  for (int i=0; i<=czaszastepczego1; i++)
  {
    Sprawdzzajetosc();
  digitalWrite(11, 0x0);
  digitalWrite(2, 0x0);
  digitalWrite(3, 0x1);
  digitalWrite(4, 0x0);
  digitalWrite(5, 0x1);
  delay(czas);
  Sprawdzzajetosc();
  digitalWrite(5, 0x0);
  delay(czas);
  Sprawdzzajetosc();
  digitalWrite(6, 0x0);
  digitalWrite(7, 0x0);
  digitalWrite(9, 0x0);
  digitalWrite(10, 0x0);
  }
  }

void Sz2() {
  for (int i=0; i<=czaszastepczego1; i++)
  {
     Sprawdzzajetosc();
  digitalWrite(11, 0x0);
  digitalWrite(2, 0x0);
  digitalWrite(3, 0x0);
  digitalWrite(4, 0x0);
  digitalWrite(5, 0x1);
  delay(czas);
  if (digitalRead(8) == 0x0)
  {break;}
  digitalWrite(5, 0x0);
    Sprawdzzajetosc();
  delay(czas);
    if (digitalRead(8) == 0x0)
  {break;}
  Sprawdzzajetosc();
  digitalWrite(6, 0x0);
  digitalWrite(7, 0x0);
  digitalWrite(9, 0x0);
  digitalWrite(10, 0x0);
  }
  }

void Sp1() {
  digitalWrite(11, 0x0);
  digitalWrite(2, 0x1);
  digitalWrite(3, 0x0);
  digitalWrite(4, 0x0);
  digitalWrite(5, 0x1);
  digitalWrite(6, 0x0);
  digitalWrite(7, 0x0);
  digitalWrite(9, 0x0);
  digitalWrite(10, 0x0);
  }

  void Sp2() {
  digitalWrite(11, 0x1);
  digitalWrite(2, 0x0);
  digitalWrite(3, 0x0);
  digitalWrite(4, 0x0);
  digitalWrite(5, 0x1);
  digitalWrite(6, 0x0);
  digitalWrite(7, 0x0);
  digitalWrite(9, 0x0);
  digitalWrite(10, 0x0);
  }

  void Sp3() {
    Sprawdzzajetosc();
      digitalWrite(5, 0x1);
  digitalWrite(11, 0x1);
  delay(czas);
  Sprawdzzajetosc();
  digitalWrite(11, 0x0);
  delay(czas);
  Sprawdzzajetosc();
  digitalWrite(2, 0x0);
  digitalWrite(3, 0x0);
  digitalWrite(4, 0x0);
  digitalWrite(6, 0x0);
  digitalWrite(7, 0x0);
  digitalWrite(9, 0x0);
  digitalWrite(10, 0x0);
  }

  void Sp4() {
    Sprawdzzajetosc();
      digitalWrite(5, 0x1);
  digitalWrite(11, 0x0);
  digitalWrite(2, 0x1);
  delay(czas);
  Sprawdzzajetosc();
  digitalWrite(2, 0x0);
  delay(czas);
  Sprawdzzajetosc();
  digitalWrite(3, 0x0);
  digitalWrite(4, 0x0);
  digitalWrite(6, 0x0);
  digitalWrite(7, 0x0);
  digitalWrite(9, 0x0);
  digitalWrite(10, 0x0);
  }

  void Ms1() {
  digitalWrite(11, 0x0);
  digitalWrite(2, 0x0);
  digitalWrite(2, 0x0);
  digitalWrite(3, 0x0);
  digitalWrite(4, 0x0);
  digitalWrite(5, 0x0);
  digitalWrite(6, 0x1);
  digitalWrite(7, 0x0);
  digitalWrite(9, 0x0);
  digitalWrite(10, 0x0);
  }

    void Ms2() {
  digitalWrite(11, 0x0);
  digitalWrite(2, 0x0);
  digitalWrite(2, 0x0);
  digitalWrite(3, 0x0);
  digitalWrite(4, 0x0);
  digitalWrite(5, 0x0);
  digitalWrite(6, 0x0);
  digitalWrite(7, 0x1);
  digitalWrite(9, 0x0);
  digitalWrite(10, 0x0);
  }


void Sprawdzzajetosc(){
  if (digitalRead(8) == 0x0)
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
  pinMode(11, 0x1);
  pinMode(2, 0x1);
  pinMode(3, 0x1);
  pinMode(4, 0x1);
  pinMode(5, 0x1);
  pinMode(6, 0x1);
  pinMode(7, 0x1);
  pinMode(9, 0x1);
  pinMode(10, 0x1);
  pinMode(8, 0x2);

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
