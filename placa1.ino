// SEMAFORO 1
int red1 = 1;
int yellow1 = 2;
int green1 = 3;

// SEMAFORO 2
int red2 = 4;
int yellow2 = 5;
int green2 = 6;

// SEMAFORO 3
int red3 = 7;
int yellow3 = 8;
int green3 = 9;

// SEMAFORO 4
int red4 = 10;
int yellow4 = 11;
int green4 = 12;





void run(){

  // LOOP 1
    // SEMAFORO 1
    digitalWrite(red1, HIGH);
    digitalWrite(yellow1, LOW);
    digitalWrite(green1, LOW);

    // SEMAFORO 2
    digitalWrite(red2, LOW);
    digitalWrite(yellow2, LOW);
    digitalWrite(green2, HIGH);


    // SEMAFORO 3
    digitalWrite(red3, HIGH);
    digitalWrite(yellow3, LOW);
    digitalWrite(green3, LOW);


    // SEMAFORO 4
    digitalWrite(red4, LOW);
    digitalWrite(yellow4, LOW);
    digitalWrite(green4, HIGH);

    delay(3000);
  
  // LOOP 2
     // SEMAFORO 1
    digitalWrite(red1, HIGH);
    digitalWrite(yellow1, LOW);
    digitalWrite(green1, LOW);

    // SEMAFORO 2
    digitalWrite(red2, LOW);
    digitalWrite(yellow2, HIGH);
    digitalWrite(green2, LOW);


    // SEMAFORO 3
    digitalWrite(red3, LOW);
    digitalWrite(yellow3, HIGH);
    digitalWrite(green3, LOW);


    // SEMAFORO 4
    digitalWrite(red4, LOW);
    digitalWrite(yellow4, LOW);
    digitalWrite(green4, HIGH);

    delay(3000);

  // LOOP 3
    // SEMAFORO 1
    digitalWrite(red1, LOW);
    digitalWrite(yellow1, LOW);
    digitalWrite(green1, HIGH);

    // SEMAFORO 2
    digitalWrite(red2, HIGH);
    digitalWrite(yellow2, LOW);
    digitalWrite(green2, LOW);


    // SEMAFORO 3
    digitalWrite(red3, LOW);
    digitalWrite(yellow3, LOW);
    digitalWrite(green3, HIGH);


    // SEMAFORO 4
    digitalWrite(red4, HIGH);
    digitalWrite(yellow4, LOW);
    digitalWrite(green4, LOW);

    delay(3000);

  // LOOP 4
    // SEMAFORO 1
    digitalWrite(red1, LOW);
    digitalWrite(yellow1, HIGH);
    digitalWrite(green1, LOW);

    // SEMAFORO 2
    digitalWrite(red2, HIGH);
    digitalWrite(yellow2, LOW);
    digitalWrite(green2, LOW);


    // SEMAFORO 3
    digitalWrite(red3, LOW);
    digitalWrite(yellow3, HIGH);
    digitalWrite(green3, LOW);


    // SEMAFORO 4
    digitalWrite(red4, HIGH);
    digitalWrite(yellow4, LOW);
    digitalWrite(green4, LOW);

    delay(3000);


    
}


void setup() {
  
  // BLOCO 1
  pinMode(red1,OUTPUT);
  pinMode(yellow1,OUTPUT);
  pinMode(green1,OUTPUT);

  // BLOCO 2
  pinMode(red2,OUTPUT);
  pinMode(yellow2,OUTPUT);
  pinMode(green2,OUTPUT);


  // BLOCO 3
  pinMode(red3,OUTPUT);
  pinMode(yellow3,OUTPUT);
  pinMode(green3,OUTPUT);
  
  // BLOCO 4
  pinMode(red4,OUTPUT);
  pinMode(yellow4,OUTPUT);
  pinMode(green4,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  run();
}
