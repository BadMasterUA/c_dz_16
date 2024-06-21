#include<iostream>

using namespace std;

//создаем класс
class Hero
{
public:
    Hero(int heath): itsHeath(heath){ Mana++; }
    virtual ~Hero(){ Mana--; }
    virtual int GetHeath() { return itsHeath; }
    virtual void SetHeath(int heath) { itsHeath = heath; }
    static int GetMana() { return Mana; }

private:
    int itsHeath;
    static int Mana;
};

//инициализируем статическую переменную
int Hero::Mana = 0;

int main()
{
    
    const int MaxMana = 10; //максимальное значение
    Hero *ManaPoints[MaxMana];
    for (int i = 0; i < MaxMana; i++)
    {
        ManaPoints[i] = new Hero(i);
        cout << "Your hero has points of mana " << MaxMana << "/" << ManaPoints[i]->GetMana() << " points.\n";
    }
    for (int i = 0; i < MaxMana; i++)
    {
        cout << "Your hero has points of mana " << MaxMana << "/" << ManaPoints[i]->GetMana() << " points.\n";

        delete ManaPoints[i];
        ManaPoints[i] = nullptr;
    }

    return 0;
}