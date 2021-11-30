int adiff(int M,int N){
  int o;
  M %= 360,N %= 360;
  if (M < 0){M += 360;}
  if (N < 0){N += 360;}
  if (M > N){o = M - N;}
  else{o = N - M;}
  if (o > 180){
      o = 360 - o;
  }
  return o;
}