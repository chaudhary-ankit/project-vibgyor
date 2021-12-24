int b=3;
int r=5;
int g=6;

int t=10;
int i=0;
int j=0;
int k=0;

void setup() 
{

pinMode (r,OUTPUT);
pinMode (g,OUTPUT);
pinMode (b,OUTPUT);  

}//setup

void loop()
{
  //VIBGYOR
  for(i=0;i<=255;i++)
  {
    analogWrite(r,0);
    analogWrite(g,i);
    analogWrite(b,255);
    delay(t);
  }//for

  for(j=255;j>=0;j--)
  {
    analogWrite(r,0);
    analogWrite(g,255);
    analogWrite(b,j);
    delay(t);
  }//for

  for(k=0;k<=255;k++)
  {
    analogWrite(r,k);
    analogWrite(g,255);
    analogWrite(b,0);
    delay(t);
  }//for

  for(i=255;i>=0;i--)
  {
    analogWrite(r,255);
    analogWrite(g,i);
    analogWrite(b,0);
    delay(t);
  }//for

 analogWrite(r,0);
 analogWrite(g,0);
 analogWrite(b,0);
 delay(5000);

}//loop
