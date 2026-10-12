
#include <iostream>
#include <string>

class Device {
private:
    // TODO 1: 定义std::string类型的设备名称
    std::string name;
public:
    // TODO 2: 编写接收设备名称的构造函数
    // 创建时输出："Create: 设备名称"
    Device(std::string input) : name(input) {
        std::cout << "Create: " << name << '\n';
    }

    // TODO 3: 编写析构函数
    // 销毁时输出："Destroy: 设备名称"
    ~Device() {
        std::cout << "Destroy: " << name << '\n';
    }

    // TODO 4: 编写start()函数
    // 输出："Start device: 设备名称"
    void start() const {
        std::cout << "Start device: " << name << '\n';
    }
};

int main() {
    std::cout << "Program begin\n";

    // TODO 5: 创建名称为Camera的设备对象
    // 调用start()
    Device Camera("Camera");
    Camera.start();
    {
        // TODO 6: 创建名称为Audio的设备对象
        // 调用start()]
        Device Audio("Audio");
        Audio.start();
    }

    std::cout << "Program end\n";
    return 0;
}
