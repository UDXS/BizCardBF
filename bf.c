#include <stdio.h>
//Portable Business Card Brainf*** Interpreter written in C
//By UDXS (Davit Markarian) @ udxs.me
int sl(char* a){
  char* b = a;
  while(*b!=0){
    b++;
  }
  return (b-a);
}
int main (int argc, char* argv[]){
  if(argc != 3){printf("Missing Args!\n");return 0;}
  //program size
  int a = sl(argv[1]);
  //input size
  int b = sl(argv[2]);
  //current program char
  int c = 0;
  //current input char
  int d = 0;
  //stack
  int e[256] = {0};
  //current stack pos
  char f = 0;
  //cells
  char g[256] = {0};
  //current cell pos
  char h = 0;
  //unexecuted depth
  char i = 0;
  //max executions
  int j = 64;
  while(c<a&&j) {
    
  }
}