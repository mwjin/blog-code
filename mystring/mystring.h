class Mystring {
 private:
  char *str;

 public:
  Mystring();
  Mystring(const char *str);
  Mystring(const Mystring &rhs);
  ~Mystring();
  Mystring &operator=(const Mystring &rhs);
  const char *get_str() const;
};
