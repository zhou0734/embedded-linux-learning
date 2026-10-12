# 嵌入式 Linux 个人学习仓库

这是一个面向实践的长期学习仓库，用于系统学习现代 C++、Linux 系统编程、调试、内核与驱动、硬件接口，以及 U-Boot、rootfs 和 Buildroot。

## 使用原则

- 每次实验只完成一个可在 30—60 分钟内验证的小目标。
- 先独立实现，再记录思路、测试和复盘；不在此仓库预置练习答案。
- 学习进度以 `PROGRESS.md` 的真实记录为准，不按日历自动推进。

## 学习路线与导航

- `01-cpp-fundamentals/`：现代 C++ 基础、资源管理和小型工程实践。
- `02-linux-system-programming/`：文件、进程、线程、IPC 与网络编程。
- `03-linux-debugging/`：GDB、strace、ELF、内存与并发问题定位。
- `04-linux-kernel/`：内核模块、字符设备、设备模型、平台驱动与设备树。
- `05-hardware-interfaces/`：GPIO、UART、I2C、SPI 和中断。
- `06-boot-and-build/`：启动流程、U-Boot、内核配置、rootfs、Buildroot 与 QEMU。
- `07-capstone-project/`：综合项目的需求、设计、源码、测试和文档。
- `notes/`：按主题整理的学习笔记。
- `troubleshooting/`、`reviews/`、`resources/`：排障记录、代码审查和参考资料。

详细阶段目标见 `ROADMAP.md`；当前状态见 `PROGRESS.md`；与 Codex 协作规则见 `LEARNING_RULES.md`。
