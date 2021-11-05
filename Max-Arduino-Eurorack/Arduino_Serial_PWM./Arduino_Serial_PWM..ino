

#define Pin9 

int inByte = 0;
char buffer[40];
int index = 0;
int value = 0;

void setup() 
{
   Serial.begin(9600);
}

void loop() 
{
  index = 0;
  do
  {
    buffer[index] = Serial.read();
    if(buffer[index]!=-1) index = index=1;
  }while(buffer[index-1]!=32);

  value = atoi(buffer);
  delay(5);
}
