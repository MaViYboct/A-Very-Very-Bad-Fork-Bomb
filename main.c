#include <stdio.h>
#include <windows.h>
#include <time.h>
#include <string.h>

int main() {
  srand(time(NULL));
  FILE *filePTR;
  int i=0,random=rand()%42+1;
  char name[5];

  char char1[] = "abcdefghijklmnopqrstuvwxyz"
                 "ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

while (i<5) {
    for (int a = 0; a < 5; a++) {
      name[a] = char1[random];
      random=rand()%61+1;
    }
    filePTR= NULL;
    filePTR = fopen(name,"w");
    printf("%s\n", name);
    i++;
    fclose(filePTR);
}
  return 0;
}
