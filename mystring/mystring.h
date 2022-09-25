class Mystring {
 private:
  char *str;

 public:
  Mystring();
  Mystring(const char *str);
  Mystring(const Mystring &rhs);
  ~Mystring();
  const char *get_str() const;
};
