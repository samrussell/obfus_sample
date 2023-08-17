#include <stdio.h>

void obfuscate_me(int number){
    printf("Checking how big the number is\n");
    int counter = 1;
    if(number < 5) {
        printf("number < 5\n");
        counter++;
    }
    else {
        printf("number >= 5\n");
        counter+= 2;
    }
    printf("Some divisors\n");
    if(number % 3) {
        printf("number %% 3\n");
        counter++;
    }
    if(number % 5) {
        printf("number %% 5\n");
        counter++;
    }
}

int check_password(char* passwd, int len) {
  if (len != 5) {
    return 0;
  }
  if (passwd[0] == 'O') {
    if (passwd[1] == 'M') {
      if (passwd[2] == 'V') {
        if (passwd[3] == 'L') {
          if (passwd[4] == 'L') {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}

int main() {
    obfuscate_me(4);
    obfuscate_me(6);
    if (check_password("ABCDE", 5)){
        printf("Password is ABCDE\n");
    }
    else{
        printf("Password is not ABCDE\n");
    }
    if (check_password("OMVLL", 5)){
        printf("Password is OMVLL\n");
    }
    else{
        printf("Password is not OMVLL\n");
    }
    return 0;
}
