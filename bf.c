#include <stdio.h>
#include <stdlib.h>
//get string length
int y(char* a){
  char* b = a;
  while(*b!=0){
    b++;
  }
  return (b-a);
}
//check for unbalanced brackets
int z(char* a, int b){
	int c = 0;
	int d = 0;
	while(c<b){
		if(*(a+c)=='['){d++;}
		if(*(a+c)==']'){d--;}
		c++;
	}
	return d;
}
int main (int w, char* x[]){
  puts("UDXS's Business Card Brainf*** Interpreter @ udxs.me\n");
  if(w!=3){puts("Missing Args!\n");return 0;}
  //program size
  int a=y(x[1]);
  if(z(x[1],a)){puts("Unbalanced  Brackets!\n");return 0;}
  //input size
  int b=y(x[2]);
  //stack
  short c[256]={0};
  //stack pos
  char d=0;
  //current program char
  short e=0;
  //current input char
  short f=0;
  //cells
  char* g = calloc(1<<sizeof(short)*8,sizeof(char));
  //current cell pos
  unsigned short h = 0;
  //required depth
  char i = 0;
  //current depth
  char j = 0;
  while(e<a) {
		char k = *(x[1]+e);
		char l = *(x[2]+f);
    if(i!=j){
      if(k=='['){j++;}
      if(k==']'){j--;}
      e++;
      continue;
    }
    if(k=='['&&g[h]){i++;j++;d++;c[d]=e;}
    if(k=='['&&g[h]==0){j++;}
    if(k==']'&&g[h]){e=c[d];}
    if(k==']'&&g[h]==0){d--;j--;i--;}
    if(k=='+'){g[h]++;}
    if(k=='-'){g[h]--;}
    if(k=='>'){h++;}
    if(k=='<'){h--;}
    if(k=='.'){putchar(g[h]);}
    if(k==','&&f<b){g[h]=l;f++;}else if(k==','){g[h]=0;}
    e++;
  }
  printf("\n");
  return 0;
}
