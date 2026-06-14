#include <iostream>
#include <string>

using namespace std;

class Device {
protected:
    string brand;

public:
    Device(string b) {
        brand = b;
    }

    virtual void show() {
        cout << "Цифровий пристрій: " << brand << endl;
    }

    virtual ~Device() {}
};

class Phone : public Device {
private:
    int memory;

public:
    Phone(string b, int m) : Device(b) {
        memory = m;
    }

    void show() override {
        cout << "Мобільний телефон: "
             << brand
             << ", пам'ять "
             << memory
             << " ГБ" << endl;
    }
};

int main() {
    Device* arr[3];

    arr[0] = new Device("Samsung");
    arr[1] = new Phone("iPhone", 128);
    arr[2] = new Phone("Xiaomi", 256);

    for (int i = 0; i < 3; i++) {
        arr[i]->show();
    }

    for (int i = 0; i < 3; i++) {
        delete arr[i];
    }

    return 0;
}