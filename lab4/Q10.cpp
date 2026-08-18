#include <iostream>
#include <string>

class SmartDevice {
private:
    std::string deviceName;
    std::string deviceType;
    bool powerStatus;

public:
    // Function to get inputs from the user
    void inputDetails() {
        std::cout << "Enter Device Name: ";
        std::getline(std::cin >> std::ws, deviceName);

        std::cout << "Enter Device Type: ";
        std::getline(std::cin >> std::ws, deviceType);

        int choice;
        std::cout << "Enter Initial Power Status (1 for ON, 0 for OFF): ";
        std::cin >> choice;
        powerStatus = (choice == 1);
    }

    // Friend class declaration
    friend class HomeController;
};

class HomeController {
public:
    // 1. Display device information
    void displayDeviceInfo(const SmartDevice& device) {
        std::cout << "\n--- Device Details ---\n";
        std::cout << "Device Name : " << device.deviceName << "\n";
        std::cout << "Device Type : " << device.deviceType << "\n";
        std::cout << "Power State : " << (device.powerStatus ? "ON" : "OFF") << "\n";
    }

    // 2. Turn the device ON
    void turnOn(SmartDevice& device) {
        device.powerStatus = true;
        std::cout << "\n[ACTION] Turned ON " << device.deviceName << ".\n";
    }

    // 3. Turn the device OFF
    void turnOff(SmartDevice& device) {
        device.powerStatus = false;
        std::cout << "\n[ACTION] Turned OFF " << device.deviceName << ".\n";
    }

    // 4. Display current power status
    void displayPowerStatus(const SmartDevice& device) {
        std::cout << "Current Power Status of " << device.deviceName << " : "
                  << (device.powerStatus ? "ON" : "OFF") << "\n";
    }
};

int main() {
    SmartDevice myDevice;
    HomeController controller;

    myDevice.inputDetails();

    int choice;
    do {
        std::cout << "\n--- Smart Controller Menu ---\n";
        std::cout << "1. Display Device Info\n";
        std::cout << "2. Turn Device ON\n";
        std::cout << "3. Turn Device OFF\n";
        std::cout << "4. Display Power Status\n";
        std::cout << "5. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                controller.displayDeviceInfo(myDevice);
                break;
            case 2:
                controller.turnOn(myDevice);
                break;
            case 3:
                controller.turnOff(myDevice);
                break;
            case 4:
                controller.displayPowerStatus(myDevice);
                break;
            case 5:
                std::cout << "Exiting program...\n";
                break;
            default:
                std::cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 5);

    return 0;
}