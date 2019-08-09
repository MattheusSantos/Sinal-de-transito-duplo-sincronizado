//Projeto de 2 sinais de trânsito sincronizados
//por Matheus Pereira Santos T3

void setup (){
  
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  
}

void loop(){
  
  digitalWrite(5,LOW);  //apaga o led veremelho do sinal 1
  digitalWrite(7,HIGH); //acende o led verde do sinal 1
  digitalWrite(8,HIGH); //acende o led vermelho do sinal 2
  
  delay(4000);          //espera 4 segundos
  
  digitalWrite(7,LOW);  //apaga o led do sinal 1
  digitalWrite(6,HIGH); //acenede o led amarelo do sinal 1
  
  delay(2000);          //espera 2 segundos
  
  digitalWrite(6,LOW);  //apaga o led amarelo do sinal 1
  digitalWrite(5,HIGH); //acende o led vermelho do sinal 1
  digitalWrite(8,LOW);  //apaga o led vermeljo do sinal 2
  digitalWrite(10,HIGH);//acende o led verde do sinal 2
  
  delay(4000);          //espera 4 segundos
  
  digitalWrite(10,LOW); //apaga o led verde do sinal 2
  digitalWrite(9,HIGH); //acende o led amarelo do sinal 2
  
  delay(2000);          //espera 2 segujndos
  
  digitalWrite(9,LOW);  //apaga o led amarelo do sinal 2
  
}
  
