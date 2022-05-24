#include <iostream>

using namespace std;

class Room {
public:
  virtual ~Room() {}

  virtual double width()  const = 0;
  virtual double length() const = 0;

  virtual double square()   const = 0;
  virtual double price()    const = 0;
};

class SmallRoom : public Room {
public:
  double width()    const override { return 3; }
  double length()   const override { return 5; }

  double square() const { return width() * length(); }
  double price()    const { return square() * 100; }
};

class MiddleRoom : public Room {
public:
  double width()    const override { return 5; }
  double length()   const override { return 7; }

  double square()   const { return width() * length(); }
  double price()    const { return square() * 100 ; }
};

class BigRoom : public Room {
public:
  double width()    const override { return 7; }
  double length()   const override { return 10; }

  double square()   const { return width() * length(); }
  double price()    const { return square() * 100; }
};

class RoomCreator {
private:
  static double _sum;

public:
  virtual ~RoomCreator() {};

  virtual Room* createRoom() const = 0;

  double getSum() const { return _sum; }

  void toSell() const {
    Room* room = createRoom();
    _sum += room->price();
    delete room;
  }
};

class SmallRoomCreator : public RoomCreator {
public:
  Room* createRoom() const override { return new SmallRoom(); }
};

class MiddleRoomCreator : public RoomCreator {
public:
  Room* createRoom() const override { return new MiddleRoom(); }
};

class BigRoomCreator : public RoomCreator {
public:
  Room* createRoom() const override { return new BigRoom(); }
};

double main() {



  return 0;
}
