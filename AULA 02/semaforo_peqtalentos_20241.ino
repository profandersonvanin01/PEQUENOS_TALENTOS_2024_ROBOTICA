// VARIAVEIS DO SEMAFORO 1
int verm1 = 8;
int amar1 = 9;
int verde1 = 10;

// VARIAVEIS DO SEMAFORO 2
int verm2 = 11;
int amar2 = 12;
int verde2 = 13;


void setup()
{
  //CONFIGURAÇÃO DOS PINOS DE SAÍDA
  pinMode(verm1, OUTPUT);
  pinMode(amar1, OUTPUT);
  pinMode(verde1, OUTPUT);
  pinMode(verm2, OUTPUT);
  pinMode(amar2, OUTPUT);
  pinMode(verde2, OUTPUT);
}

void loop()
{
  //1ª FASE DOS SEMAFOROS
  digitalWrite(verm1, HIGH);
  digitalWrite(amar1, LOW);
  digitalWrite(verde1, LOW);
  digitalWrite(verm2, LOW);
  digitalWrite(amar2, LOW);
  digitalWrite(verde2, HIGH);
  delay(2000); // ESPERA 2 SEGUNDOS
  
  //2ª FASE DOS SEMAFOROS
  digitalWrite(verm1, HIGH);
  digitalWrite(amar1, LOW);
  digitalWrite(verde1, LOW);
  digitalWrite(verm2, LOW);
  digitalWrite(amar2, HIGH);
  digitalWrite(verde2, LOW);
  delay(2000); // ESPERA 2 SEGUNDOS
  
  //3ª FASE DOS SEMAFOROS
  digitalWrite(verm1, LOW);
  digitalWrite(amar1, LOW);
  digitalWrite(verde1, HIGH);
  digitalWrite(verm2, HIGH);
  digitalWrite(amar2, LOW);
  digitalWrite(verde2, LOW);
  delay(2000); // ESPERA 2 SEGUNDOS
  
  //4ª FASE DOS SEMAFOROS
  digitalWrite(verm1, LOW);
  digitalWrite(amar1, HIGH);
  digitalWrite(verde1, LOW);
  digitalWrite(verm2, HIGH);
  digitalWrite(amar2, LOW);
  digitalWrite(verde2, LOW);
  delay(2000); // ESPERA 2 SEGUNDOS
  
}