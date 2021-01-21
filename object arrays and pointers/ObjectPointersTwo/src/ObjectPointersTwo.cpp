#include <iostream>
#include <string>
using namespace std;
class movie{
	string movie_name,game_name;
public:
	movie(string f,string o){
		this-> movie_name=f;
		this-> game_name=o;
	}
	string Write(){
		return this -> movie_name+this->game_name;
	}
	void show(){
		string a;
		a=this->Write();
		cout << a;
	}
};
int main() {
	movie object("selvi boylum al yazmalým","\nturkan soray\n");
	object.Write();

	system("PAUSE");
	return 0;
}
