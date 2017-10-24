#include <stdio.h>
#include <stdlib.h>
//get string length
int y(char* a){
  char* b = a;
  while(*b!=0){
    b++;
  }
  return b-a;
}
//check for unbalanced brackets
int z(char* a, int b){
	int c=0,d=0;
	while(c<b){
		if(a[c]=='['){d++;}
		if(a[c]==']'){d--;}
		c++;
	}
	return d;
}
int main (int w, char* x[]){
  puts("UDXS Biz Card Brainf*** Interpreter @ udxs.me\n");
  if(w!=3){puts("Missing Args!\n");return 0;}
  //program size
  int a=y(x[1]);
  if(z(x[1],a)){puts("Unbalanced Brackets!\n");return 0;}
  //input size
  int b=y(x[2]);
  //stack
  short c[256]={0};
  //stack pos, current program char, current input char, required depth
  char d=0,e=0,f=0,i=0,j=0;
  char* g = calloc(1<<sizeof(short)*8,1);
  //current cell pos
  unsigned short h = 0;
  while(e<a) {
		char k = x[1][e];
		char l = x[2][f];
    if(i!=j){
      if(k=='['){j++;}
      if(k==']'){j--;}
      e++;
      continue;
    }
    if(k=='['&&g[h]){i++;j++;d++;c[d]=e;}
    if(k=='['&&!g[h]){j++;}
    if(k==']'&&g[h]){e=c[d];}
    if(k==']'&&!g[h]){d--;j--;i--;}
    if(k=='+'){g[h]++;}
    if(k=='-'){g[h]--;}
    if(k=='>'){h++;}
    if(k=='<'){h--;}
    if(k=='.'){putchar(g[h]);}
    if(k==','&&f<b){g[h]=l;f++;}else if(k==','){g[h]=0;}
    e++;
  }
  puts("\n");
  return 0;
}
