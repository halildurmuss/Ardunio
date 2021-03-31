/*
Tuğçe, 18 yaşında Elektrik Elektronik Mühendisliği öğrencisidir. 
Tuğçe derste öğrendiklerini gerçek hayatta uygulamaya çalışmaktadır.
Bunun için de bir hız kontrol devresi hazırlamak istiyor. DC motorun
hızı belli bir hıza aştığı zaman uyarı vermek için LED yansın, diğer
durumlarda LED yanmasın istiyor. Aynı zamanda hız değerini de ekrana
yazdırmak istiyor. Bu konuda Tuğçe’ye yardımcı olmalısınız.
*/


/*
 * Hız sınırı 3000 olsun.
 * Pot değeri 1Kohm.
 * Pot 100 değerindeyken motor hızı 2100rpm'dir. 
 
*/
#define led 7
#define motor 10
void setup()
{
  pinMode(led, OUTPUT);   
  pinMode(motor, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int pot=analogRead(A1);
  pot=map(pot,0,1023,0,255);
  
  Serial.print("Pot Degeri: ");
  Serial.println(pot);
  
  analogWrite(motor,pot);
  int motorHizi=map(pot,0,255,0,6666);
  if(motorHizi>=3000){ 
    digitalWrite(led,HIGH);
    }
  else{ 
    digitalWrite(led,LOW); 
  }
  Serial.print("Motor Hizi: ");
  Serial.println(motorHizi);
}
