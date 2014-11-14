#include <stdio.h>

void main(int a, char ** b, int c) { for(a=2;b[a] && !(c=0);printf(" ",a++)) { while(b[a][c] && printf("%c",(b[a][c-1] >= 'A' && b[a][c-1] <= 'Z')? ((b[a][c-1]-'A'+atoi(b[1]))%('['-'A'))+'A': (b[a][c-1] >= 'a' && b[a][c-1] <= 'z')? ((b[a][c-1]-'a'+atoi(b[1]))%('['-'A'))+'a' : b[a][c-1],c++)); } }
