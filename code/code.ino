//Leds van lampje
const int ledlampje1_rood = 12;
const int ledlampje2_geel = 13;
const int ledlampje3_groen = 11;
//Leds knopje
const int knopje1_rood = 4;
const int knopje2_geel = 5;
const int knopje3_groen = 6;
//variablen om te kijken als het knopje geklikt is
int geklikt_rood = 0;
int geklikt_geel = 0;

int randomnummer;



void setup() {  
  Serial.begin(9600);      
  //Initialiseer de lampjes         
  pinMode(ledlampje1_rood, OUTPUT);
  pinMode(ledlampje2_geel, OUTPUT);
  pinMode(ledlampje3_groen, OUTPUT);
  //initialiseer de knoppen
  pinMode(knopje1_rood,INPUT);
  randomSeed(analogRead(0));

}

void loop() {
  randomnummer = random(1,4);
  int nummers[] = {randomnummer};
  geklikt_rood = digitalRead(knopje1_rood);
  geklikt_geel = digitalRead(knopje2_geel);
                                          

  if (geklikt_rood == HIGH) {
     digitalWrite(ledlampje1_rood,HIGH);
     Serial.println("geklikt rood");
  } else if(geklikt_geel == HIGH) {
    digitalWrite(ledlampje2_geel, HIGH);
  }


  for (int i = 0; i < sizeof(nummers)/sizeof(int); i++) {
    //Serial.println(nummers[i] + " hoi");
  }



   /* if (randomnummer == 2) {
      digitalWrite(ledlampje2_geel,HIGH);      
  } else if(randomnummer == 1) {
      digitalWrite(ledlampje1_rood,HIGH);
  } else if(randomnummer == 3) {
      digitalWrite(ledlampje3_groen,HIGH);
  }
  */
  
}


