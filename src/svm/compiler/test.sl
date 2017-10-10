int main(String[] test) {
  int i, n = 10;

  for (i = 1; i <= 10; i++) {
    n *= i + 1;
    print("%i\n", n);
  }
  return 0;
}
