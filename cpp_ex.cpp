#include <Rcpp.h>
using namespace Rcpp;

// [[Rcpp::export]]
void counter(int starter) {
  for (int i = starter; i < 5; i++) {
    Rcout i;
  }
}
