#include <iostream>
using namespace std;

class Building {
protected:
    string address;
public:
    Building(string a) : address(a) {}

    virtual void show() {
        cout << "Адреса: " << address << endl;
    }

    virtual ~Building() {}
};

class EducationalBuilding : public Building {
    int classrooms;
public:
    EducationalBuilding(string a, int c)
        : Building(a), classrooms(c) {}

    void show() override {
        cout << "Навчальний корпус: "
             << address
             << ", аудиторій: "
             << classrooms << endl;
    }
};

int main() {
    Building* arr[2];

    arr[0] = new Building("Київ");
    arr[1] = new EducationalBuilding("Львів", 30);

    for(int i = 0; i < 2; i++)
        arr[i]->show();
}