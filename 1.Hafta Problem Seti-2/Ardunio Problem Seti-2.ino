/*
Ahmet Bey bir hastane müdürüdür. Bu hastanede hastaları çok uzak noktalar 
taşıyan küçük araçlar bulunmaktadır. Çok yoğun noktalara trafik ışığı 
koyarak hastane içi kazaları önlemek istemektedir. Ahmet Bey; 10 saniye
Kırmızı ışık yandıktan sonra kırmızı ışıkla birlikte 10 saniye Sarı ışık
yanacaktır. 2 saniye sonra kırmızı ve sarı ışık sönüp 5 saniye boyunca 
yeşil ışık yanmasını istiyor. Bu konuda Ahmet Bey’e yardım eder misiniz?
*/
void setup() {
  pinMode(2,OUTPUT);//yeşil
  pinMode(3,OUTPUT);//sari
  pinMode(4,OUTPUT);//kirmizi
}
void loop() 
{
  digitalWrite(4,HIGH);
  delay(10000);
  digitalWrite(3,HIGH);
  delay(12000);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(2,HIGH);
  delay(5000),
  digitalWrite(2,LOW);
}
