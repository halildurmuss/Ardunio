/*
Ali Bey, televizyonda Kara�im�ek adl� diziyi izliyordur. 
Oradaki arabay� g�r�nce ayn� devreyi Arduino devresinde yapmak istemi�tir.
Ali Bey�e ba�tan sona LED�leri 0,5 saniye aral�klarla ba�tan sona yakarak
sondan ba�a do�ru s�nd�rmesine yard�mc� olmal�s�n�z.
*/
void setup() {
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
}
void loop() 
{
  for(int i=2;i<=6;i++){
    digitalWrite(i,HIGH);
    delay(500);
  }
  for(int i=6;i>=2;i--){
    digitalWrite(i,LOW);
    delay(500);
  }
}
