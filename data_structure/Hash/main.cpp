#include "hash.hpp"

int main() {
  HashTable a;
  a.insert("Gagik", 21);
  a.insert("Abo", 27);
  a.insert("Alexandr", 24);
  a.insert("Vahe", 25);
  a.remove("Vahe");

  a.resize_X2();
  a.print();

  cout << "countElement = " << a.countElement() << endl;
  cout << a.find("Alexandr") << endl;
  cout << endl;
  
 

  return 0;
}