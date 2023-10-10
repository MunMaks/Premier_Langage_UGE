long long int multiplication(int a, int b){
  // la multiplication d'un grand nombre a besoin plus de memoire
  // int = de -2^31 a 2^31 - 1 = 4 bytes
  // long long int = de	-(2^63) a (2^63)-1  = 8 bytes
  
  // On a besoin de changer le type aussi pour un ou deux variables:
  return (long long int)a * b;
}