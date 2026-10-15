/*
功能要求：

- `Message` 内部保存 `std::string payload_`。
- 提供：
  - 从消息文本构造对象；
  - 拷贝构造函数：复制消息内容，并打印 `copy constructor`；
  - 移动构造函数：使用 `std::move` 转交消息内容，并打印 `move constructor`；
  - 输出消息内容的方法；
  - 修改消息内容的方法。
- `main()` 按此顺序：
  1. 创建 `original`，内容为 `frame-A`；
  2. 用 `original` 拷贝构造 `backup`；
  3. 将 `backup` 修改为 `frame-B`，输出 `original` 与 `backup`；
  4. 用 `std::move(original)` 构造 `sent`；
  5. 输出 `sent`，并仅观察 `original` 的状态。

API 提示：需要 `#include <utility>` 才能使用 `std::move`。

验收：

- 修改 `backup` 后，`original` 仍是 `frame-A`，证明拷贝独立。
- `sent` 应取得 `frame-A`。
- 只观察移动后 `original`，不能把“它一定为空”写成判断条件；其内容是未指定的，但对象仍可安全使用、重新赋值或析构。

编译运行：

```bash
g++ -std=c++17 -Wall -Wextra -Wpedantic -Werror -g main.cpp -o copy_move
./copy_move
```
*/

#include <utility>
#include <iostream>
#include <string>

class Message
{
private:
    std::string payload_;

public:
    Message(std::string payload) : payload_(payload)
    {
        std::cout << "Create message: " << payload_ << '\n';
    }
    ~Message()
    {
        std::cout << "Destroy message: " << payload_ << '\n';
    }

    Message(const Message &other)
        : payload_(other.payload_)
    {
        // 拷贝构造日志
        std::cout << "Copy message: " << payload_ << '\n';
    }

    Message(Message &&other) noexcept
        : payload_(std::move(other.payload_))
    {
        // 移动构造日志
        std::cout << "Move message: " << payload_ << '\n';
    }

    void set(std::string payload){
        payload_ = payload;
    }

    void print(){
        std::cout << "Message payload: " << payload_ << '\n';
    }
};

int main()
{
    Message original("frame-A");
    Message backup = original;            // 自动调用拷贝构造函数
    backup.set("frame-B");
    original.print();
    backup.print();
    Message sent = std::move(original);   // 自动调用移动构造函数
    sent.print();

    std::cout << "original moved state " << '\n';
    original.print();
}