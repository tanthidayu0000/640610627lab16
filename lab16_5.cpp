#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *,int *,int *); 

int main(){
 int a = 50, b = 100, c = 500, d = 1000;
 
 srand(time(0)); 
 
 for(int i = 0;i < 10;i++){
     shuffle(&a,&b,&c,&d); 
     cout << a << " " << b << " " << c << " " << d << "\n";
 }
 
 return 0;
}

void shuffle(int *a,int *b,int *c,int *d){
 int bank, x[] = {*a,*b,*c,*d},y;
  for(int i = 0, j =4; i < 4; i++, j--){
    y = rand()%j;
    if(y==1){
            bank = x[i];
            x[i] = x[i+1];
            x[i+1] = bank;
    }
    else if(y==2){
            bank = x[i];
            x[i] = x[i+2];
            x[i+2] = bank;
    }
    else if(y==3){
            bank = x[i];
            x[i] = x[i+3];
            x[i+3] = bank;
    }
}
*a=x[0];
*b=x[1];
*c=x[2];
*d=x[3];
}