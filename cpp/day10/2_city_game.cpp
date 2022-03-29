#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std; 

int inputPlayer();
int optionPlayer(int player);
void game(int x);

int main() {
  int option = optionPlayer(inputPlayer());
	game(option);
	return 0;
}

int inputPlayer() {
  cout << "\t\t=========================";
	cout << "\n\t\t\t City Game \n";
  cout << "\t\t=========================";
  cout << "\n\t\t1.Play User : Click 1 \n";
  cout << "\n\t\t2.Play Computer : Click 2\n";
  cout << "\t\t=========================\n\n";
	cout << "Choose player : ";
	int player;
	cin >> player;
	return player;

}

int optionPlayer(int player) {
	if(player == 1) {
    return 1;
  }
  else if(player == 2) {
    return 2;
  }
	return 0;
}

void game(int x) {
  string city[] = { "erevan",
	                  "moscow", 
	                  "prague",
	                  "paris", 
	                  "berlin",
	                  "ankara", 
	                  "baku", 
	                  "udinese",
	                  "ekaterinburg",
	                  "grozni",
	                  "irkutsk", 
	                  "kirovakan",
	                  "ninve", 
	                  "elizavetpol", 
	                  "valencia",
                    "tokio",
                    "hamburg",
                    "Oslo",
                    "krasnadar",
                    "washington",
                    "minsk",
                    "stepanakert",
                    "donbas",
                    "kiev",
                    "paris",
                    "astana",
                    "dublin",
                    "zaltsburg"
                    "pekin",
                    "mumbai"
  };
  int size = sizeof(city)/sizeof(city[0]);
  int rand_index = rand () % size;
  string user;
  bool check = false;

  while (true) {
    if (x == 2) {
      cout << "=================================" << endl;
		  cout << "computer->\t" << city[rand_index] << "\t\t";
		  x = 1;
		  check = true;
	  }

	  if (x == 1) {
      cout << "\n=================================" << endl;
		  cout << "user->   \t";
		  cin >> user;
		  x = 2;
    }

	  if (check && city [rand_index] [city[rand_index].length() - 1] != user[0]) {
		  cout << "-> You Lose! <-" << endl << endl;
		  break;
	  }

	  if (check) {
			city[rand_index] = "0";
	  };

	  for (int i = 0; i < size; i++) {
		  if (city[i][0] == user[user.length() - 1]) {
			  rand_index = i;
			  break;
		  }

		  if (i == (size - 1)) {
			  cout << "-> You Win! <-" << endl << endl;
			  break;
		  }
		}
	}
}
