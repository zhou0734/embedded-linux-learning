#include <iostream>
#include <string>

int main() {
    std::string title = "camera";

    // 1. 创建 title 的值副本 copy
    std::string copy = title;

    // 2. 创建 title 的可写引用 alias
    std::string& alias = title;

    // 3. 创建 title 的只读引用 readonly
    const std::string& readonly = title;

    // 4. 分别输出四个变量的值及它们的地址
    std::cout << "title: " << title << '\n';
    std::cout << "&title: " << &title << '\n';
    std::cout << "copy: " << copy << '\n';
    std::cout << "&copy: " << &copy << '\n';
    std::cout << "alias: " << alias << '\n';
    std::cout << "&alias: " << &alias << '\n';
    std::cout << "readonly: " << readonly << '\n';
    std::cout << "&readonly: " << &readonly << '\n';


    // 5. 修改 copy，修改 alias
    copy += "-copy";
    alias += "-useb";
    // readonly += "-test";

    // 6. 再输出四个变量的值及地址
    std::cout << "title: " << title << '\n';
    std::cout << "&title: " << &title << '\n';
    std::cout << "copy: " << copy << '\n';
    std::cout << "&copy: " << &copy << '\n';
    std::cout << "alias: " << alias << '\n';
    std::cout << "&alias: " << &alias << '\n';
    std::cout << "readonly: " << readonly << '\n';
    std::cout << "&readonly: " << &readonly << '\n';

}