#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 2

int main(){
  int s[MAX], total = 0;
  char name[30];

  printf("What is your name?\n");
  printf("> ");
  scanf("%s", name);
  printf("Hello, %s!\n", name);
  
  printf("Rolling the dice...\n");

  srand((unsigned int)time(NULL));
  for(int i = 0 ; i < MAX ; i++){
    total += s[i] = rand() % 6 + 1;
    printf("Die %d:%d\n", i+1, s[i]);
  }
  printf("Total value: %d\n", total);

  return 0;
}
