int max(int tab[], int size){
  int i;
  int max = tab[0];  // before it was unsigned max=0;

  for(i=0 ; i<size ; i++){
    if (tab[i] > max)
      max = tab[i];
  }
  return max;
}
