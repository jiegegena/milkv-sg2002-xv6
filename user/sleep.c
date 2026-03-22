#include "kernel/types.h"
#include "user/user.h"
#include "kernel/stat.h"


int main(int argc, char *argv[]) {
  if (argc != 2) {
    fprintf(2, "usage: sleep [ticks num]\n");
    exit(1);
  }
  // atoi sys call guarantees return an integer
  int ticks = atoi(argv[1]);
  
  if(ticks <= 0){
    fprintf(2, "sleep: ticks should be > 0\n");
    exit(1);
  }

  int ret = sleep(ticks);
  exit(ret);
}