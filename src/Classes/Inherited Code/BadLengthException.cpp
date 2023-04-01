class BadLendthException {
  public:  
    int length;

    BadLendthException(int n) {
      length = n;
    }

  int what() {
    return length;
  }
};
