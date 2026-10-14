#include <iostream>
#include <string>

class MockFile {
private:
    std::string path_;

public:
    explicit MockFile(const std::string& path) : path_(path) {
        // 构造函数模拟获取资源：对象创建成功后即可使用该文件路径。
        std::cout << "open: " << path_ << '\n';
    }

    ~MockFile() {
        // 析构函数与构造函数配对，确保离开作用域时归还模拟资源。
        std::cout << "close: " << path_ << '\n';
    }
};

bool processFile(bool has_error) {
    MockFile mock_file("/dev/mock0");
    std::cout << "Create MockFile" << '\n';

    if (has_error) {
        std::cout << "Failed" << '\n';
        // 即使提前 return，mock_file 也会先析构并输出 close。
        return false;
    }

    std::cout << "Succeed" << '\n';
    return true;
}

int main() {
    const bool failed_result = processFile(true);
    // 先保存返回值，确保这一行在局部对象析构完成后才输出。
    std::cout << "failed result: " << std::boolalpha << failed_result << '\n';

    const bool succeeded_result = processFile(false);
    std::cout << "succeeded result: " << succeeded_result << '\n';
}
