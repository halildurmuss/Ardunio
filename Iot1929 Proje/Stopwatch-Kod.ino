#define duration 1000
int buton_pin = 2;
int buton_pinthree=3;
int buton_deger = 0;
int buton_durdur = 1;
int buton_sifirlama =1;

int buton_basilma = 0;
#define A 4
#define B 5
#define C 6
#define D 7
#define E 8
#define F 9
#define G 10

#define disp2 11
#define disp3 12
#define disp4 13

#define numbersegments { \
{1,1,1,1,1,1,0,0},\
{0,1,1,0,0,0,0,0},\
{1,1,0,1,1,0,1,0},\
{1,1,1,1,0,0,1,0},\
{0,1,1,0,0,1,1,0},\
{1,0,1,1,0,1,1,0},\
{1,0,1,1,1,1,1,0},\
{1,1,1,0,0,0,0,0},\
{1,1,1,1,1,1,1,0},\
{1,1,1,0,0,1,1,0},\
}

byte numbers[10][8] = numbersegments; 
const int segments[8] = {A, B, C, D, E, F, G};

void setup() 
{ 
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(disp2, OUTPUT);  
  pinMode(disp3, OUTPUT);
  pinMode(disp3, OUTPUT);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  digitalWrite(E, LOW);
  digitalWrite(F, LOW);
  digitalWrite(G, LOW);
  digitalWrite(disp2, LOW);
  digitalWrite(disp3, LOW);
  digitalWrite(disp4, LOW);
  
 } 

 void loop()
 { 
   enbas:
  buton_deger = digitalRead(buton_pin);

  if(buton_deger ==  HIGH )
  {
  for (int digit1=0; digit1<10; digit1++)
  { 
    for (int digit2=0; digit2<10; digit2++)
     { 
       for (int digit3=0; digit3<6; digit3++)
        { 
          for (int digit4=0; digit4<10; digit4++)
           { 
             for (int t=0; t<30; t++)
              { 
                setsegments(digit4, disp4, duration);
                setsegments(digit3, disp3, duration);
                setsegments(digit2, disp2, duration);
                buton_durdur = digitalRead(buton_pinthree);
                if(buton_durdur ==  HIGH )
                 { 
                  goto enbas;
                  
                  }
               }
            }
         }
      }
   }
   
 } 
 }       

  void setsegments(int number, int digit, int ontime)
  { 
    for (int seg=0; seg<8; seg++)
    { 
      if(numbers[number][seg]==1)
      { 
        digitalWrite(segments[seg], HIGH);
      }
      else 
      {
        digitalWrite(segments[seg], LOW);
      }
    }
    digitalWrite(digit, HIGH);
    delayMicroseconds(ontime);
    digitalWrite(digit, LOW);
  }