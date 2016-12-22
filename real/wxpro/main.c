#include<klee/klee.h>

#include"wxpro/units.h"

int main(int argc, char** argv) {
  double ft, m;

  klee_make_symbolic(&m, sizeof(m), "meters");

  ft = m2ft(m);
}
