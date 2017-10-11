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
  char* g = calloc(sizeof(short),sizeof(char));
  //current cell pos
  unsigned short h = 0;
  //unexecuted depth
  char i = 0;
  while(e<a) {
		char j = *(x[1]+e);
		char k = *(x[2]+f);
		char* l = g+h;
		if(i){goto loop;}
		if(j=='>'){h++;}
		if(j=='<'){h--;}		
		if(j=='+'){(*l)++;}
		if(j=='-'){(*l)--;}
		if(j==','&&(f<b)){(*l)=k;f++;}else if(j==','){(*l)=0;}
		if(j=='.'){printf("%c",*l);}		
		loop:
		if(j=='['&&*l){d++;c[d]=e;}else if(j=='['){i++;}
		if(j==']'&&*l&&!i){e=c[d];}else if(j==']'&&i){i--;}
    e++;
  }
  printf("\n");
  return 0;
}
