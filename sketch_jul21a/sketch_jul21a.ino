char arr[101];
int flag=0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  
  if( Serial.available() )
  {
    for( int a=0; a<100; a++ )
    {
      arr[a] = Serial.read();
      delay(5);
    }//for
    flag=1;
  }//if avai
  
  if( flag==1 )
  {
  for( int i=0; i<50; i++ )
  {
    
    
    if( arr[i]=='*' )
    {
      i++;
      for( i; arr[i] != '*'; i++ )
      Serial.print(arr[i]);
      
      Serial.println();
      while( 1 )
      {
        char x = Serial.read();
        
        if( x=='k' )
        break;
      }
      
    }//if
  }//for
  flag=0;
  }//if flag
}//loop
