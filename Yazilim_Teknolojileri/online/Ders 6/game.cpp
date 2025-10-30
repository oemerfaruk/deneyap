#include <iostream>
using namespace std;

class Player{
    public:
        int health;
        int defence;
        int attack;

        Player(){
            health  = 100;
            attack  = 10;
            defence = 10;
        }
        int getHealth(){
            return health;
        }
        int getAttack(){
            return rand() % (attack + 1);
        }
        int getDefence(){
            return rand() % (defence + 1);
        }

        void setHealth(int att){
            int _ = att - getDefence();
            if (_ < health && _ > 0){
                health -= _;
            }
            else if(_ > health){
                health = 0;
            }
        }
        
};

int main(){
    Player p1;
    Player p2;

    // cout << "Karakter can: " << p1.getHealth() << endl;
    // cout << "Karakter vuruş: " << p1.getAttack() << endl;
    // cout << "Karakter savunma: " << p1.getDefence() << endl;

    cout << "Karakter can: " << p2.getHealth() << endl;
    p2.setHealth(p1.getAttack());
    cout << "Karakter can: " << p2.getHealth() << endl;
    
    int round = 1;
    while (true){
        cout << "Tur: " << round++ << endl;
        p1.setHealth(p2.getAttack());
        p2.setHealth(p1.getAttack());

        cout << "Karakter 1 can: " << p1.getHealth() << endl;
        cout << "Karakter 2 can: " << p2.getHealth() << endl;

        if(p1.getHealth() == 0){
            cout << "Karakter 2 Kazandı..." << endl;
            break;
        }
        else if(p2.getHealth() == 0){
            cout << "#####\nKarakter 1 Kazandı..." << endl;
            break;
        }
        else{
            cout << "-------------" << endl;
        }
    }
    

    return 0;
}