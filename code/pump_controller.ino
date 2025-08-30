#include <LiquidCrystal.h>
LiquidCrystal lcd(13, 12, 11, 10, 9, 8);
int vup=0;
int vdn=0;
int iup=0;
int idn=0;
int kk=0;
float v=0;
float vv=0.0;
float ii=0.0;
float i=0;
int relay=7;
float x=0.0;
float y=0.0;
float a=0.0;
float b=0.0;
float c=0.0;
float d=0.0;
float volta=0.0;
float voltb=0.0;
float voltc=0.0;
float voltd=0.0;
float voltx=0.0;
float volty=0.0;
unsigned int h=0;
float AcsValue=0.0,Samples=0.0,AvgAcs=0.0,AcsValueF=0.0;
void setup() {
  lcd.begin(16, 2);
  lcd.noBlink();
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  pinMode(A3, INPUT);
  pinMode(A4, INPUT);
  pinMode(A5, INPUT);
  pinMode(relay, OUTPUT);
}

void loop() {

  unsigned int h=0;
  float AcsValue=0.0,Samples=0.0,AvgAcs=0.0,AcsValueF=0.0;
  for (int h = 0; h < 150; h++){ 
  AcsValue = analogRead(A0);   
  Samples = Samples + AcsValue; 
  delay (3); 
}
AvgAcs=Samples/150.0;
AcsValueF = (2.5 - (AvgAcs * (5.0 / 1024.0)) )/0.066;
ii=AcsValueF*(-1);
ii+=0.6;
i=round(ii);

  y=analogRead(A1);
  volty=y*0.00489;
  vv=volty*8;
  v=round(vv);
  
  a=analogRead(A2);
  volta=a*0.00489;
  iup=volta*6;
  iup=round(iup);

  b=analogRead(A3);
  voltb=b*0.00489;
  idn=voltb*6;
  idn=round(idn);

  c=analogRead(A4);
  voltc=c*0.00489;
  vup=voltc*8;
  vup=round(vup);

   d=analogRead(A5);
   voltd=d*0.00489;
   vdn=voltd*8;
   vdn=round(vdn);
  
  lcd.setCursor(0, 0);
  lcd.print("V=");
  lcd.setCursor(2, 0);
  lcd.print(vv);
  lcd.setCursor(6, 0);
  lcd.print("UP=");
  lcd.setCursor(9, 0);
  lcd.print(vup);
  if (vup<10){
    lcd.setCursor(10, 0);
    lcd.print(" ");
  }
  lcd.setCursor(11, 0);
  lcd.print("DN=");
lcd.setCursor(14, 0);
  lcd.print(vdn);
  if (vdn<10){
    lcd.setCursor(15, 0);
    lcd.print(" ");
  }
  
  lcd.setCursor(0, 1);
  lcd.print("I=");
  lcd.setCursor(2, 1);
  lcd.print(ii);
  lcd.setCursor(6, 1);
  lcd.print("UP=");
  lcd.setCursor(9, 1);
  lcd.print(iup);
  if (iup<10){
    lcd.setCursor(10, 1);
    lcd.print(" ");
  }
  lcd.setCursor(11, 1);
  lcd.print("DN=");
  lcd.setCursor(14, 1);
  lcd.print(idn);
  if (idn<10){
    lcd.setCursor(15, 1);
    lcd.print(" ");
  }
  if (kk==1){
    if (i>idn and i<iup){
    if (v>vdn and v<vup){
      digitalWrite(relay, HIGH);
      delay(10000);
      kk=0;
      }
  }
  }
  
     if (i<idn or i>iup or v<vdn or v>vup){
      digitalWrite(relay, LOW);
      kk=1;
     }
}
