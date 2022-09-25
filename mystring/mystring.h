class Mystring {
 private:
  char *str;

 public:
  Mystring();
  Mystring(const char *str);
  ~Mystring();
  const char *get_str() const;
};
