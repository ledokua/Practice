#include <iostream>
using namespace std;

// Функція для визначення знаків
void determineTrigSigns(int angle) {
    angle = angle % 360;
    if (angle < 0) {
        angle += 360;
    }

    cout << "For angle " << angle << " degree:\n";

    // Визначення
    if (angle > 0 && angle < 90) {
        cout << "sin: +, cos: +, tan: +, cot: +, sec: +, csc: +\n";
    } else if (angle > 90 && angle < 180) {
        cout << "sin: +, cos: -, tan: -, cot: -, sec: -, csc: +\n";
    } else if (angle > 180 && angle < 270) {
        cout << "sin: -, cos: -, tan: +, cot: +, sec: -, csc: -\n";
    } else if (angle > 270 && angle < 360) {
        cout << "sin: -, cos: +, tan: -, cot: -, sec: +, csc: -\n";
    } else if (angle == 0 || angle == 180 || angle == 360) {
        cout << "sin: 0, cos: +, tan: 0, cot: 0, sec: +, csc: 0\n";
    } else if (angle == 90 || angle == 270) {
        cout << "sin: +, cos: 0, tan: undefined, cot: undefined, sec: 0, csc: +\n";
    }
}

int main() {
    int angle;
    cout << "Write angle: ";
    cin >> angle;

    determineTrigSigns(angle);

    return 0;
}
