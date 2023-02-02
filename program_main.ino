void maju(int kecepatan)
{
  analogWrite(m1a, kecepatan);
  analogWrite(m1b, 0);
  analogWrite(m2a, kecepatan);
  analogWrite(m2b, 0);  
}

void mundur(int kecepatan)
{
  analogWrite(m1a, 0);
  analogWrite(m1b, kecepatan);
  analogWrite(m2a, 0);
  analogWrite(m2b, kecepatan);
}

void kiri(int kecepatan) {
  analogWrite(m1a, 0);
  analogWrite(m1b, 0);
  analogWrite(m2a, kecepatan);
  analogWrite(m2b, 0);
}

void kanan(int kecepatan){
  analogWrite(m1a, kecepatan);
  analogWrite(m1b, 0);
  analogWrite(m2a, 0);
  analogWrite(m2b, 0); 
}

void maju_kanan(int kecepatan){
  analogWrite(m1a, kecepatan);
  analogWrite(m1b, 0);
  analogWrite(m2a, 0);
  analogWrite(m2b, 0); 
}

void maju_kiri(int kecepatan){
  analogWrite(m1a, 0);
  analogWrite(m1b, 0);
  analogWrite(m2a, kecepatan);
  analogWrite(m2b, 0);  
}

void mundur_kanan(int kecepatan){
  analogWrite(m1a, 0);
  analogWrite(m1b, 0);
  analogWrite(m2a, kecepatan);
  analogWrite(m2b, 0);
}

void mundur_kiri(int kecepatan){
  analogWrite(m1a, 0);
  analogWrite(m1b, 0);
  analogWrite(m2a, 0);
  analogWrite(m2b, kecepatan); 
}

void stop(){
  analogWrite(m1a, 0);
  analogWrite(m1b, 0);
  analogWrite(m2a, 0);
  analogWrite(m2b, 0); 
}