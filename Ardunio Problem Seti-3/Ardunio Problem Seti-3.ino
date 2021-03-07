/*
Onur Bey, uluslararası bir şirketin yöneticisidir. Şirkete her ülkeden 
insanlar yer almaktadır. Çalışanlarından bazıları Celcius dereceden 
sıcaklığı anlamadığı için Kelvin ve Fahrenheit cinsinden bir termometre
yapmak istemektedir. Ayrıca bunun yanında ortamın nem miktarını da
belirtmek istemektedir. Bu problemi çözmesi için Onur Bey’e yardımcı 
olmalısınız.
*/


float sicaklik;
float olculenDeger;
void setup() {
  // Seri port ekranını 9600 baund değerinde başlatıyoruz.
  Serial.begin(9600);         
}
 
void loop() {
   olculenDeger=analogRead(A0);
   olculenDeger=(olculenDeger/1023)*5000;
   sicaklik=olculenDeger/10.0;

   Serial.print(olculenDeger);
   Serial.print("mv= ");
   Serial.print("Celsius Degeri: ");
   Serial.println(sicaklik);
   Serial.print("Fahrenheit Değeri: ");
   Serial.println((sicaklik*1.8)+32);    
   Serial.print("Kelvin Değeri: ");
   Serial.println(sicaklik+273.15);    
   Serial.print("\n"); 
   delay(1000);
}
