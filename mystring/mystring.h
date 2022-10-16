class Mystring {
 private:
  char *str;
  friend Mystring operator+(const Mystring &lhs, const Mystring &rhs);

 public:
  Mystring();
  Mystring(const char *str);
  Mystring(const Mystring &rhs);
  Mystring(Mystring &&rhs) noexcept;
  ~Mystring();
  Mystring &operator=(const Mystring &rhs);
  Mystring &operator=(Mystring &&rhs);
  const char *get_str() const;
};
