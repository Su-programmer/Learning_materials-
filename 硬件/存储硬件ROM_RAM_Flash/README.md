# 存储硬件ROM_RAM_Flash

- `RAM` (Random Access Memory) 随机存储器
- `SRAM` 静态随机存储器
  - 需要被刷新, 直到下次被赋予新状态或者掉电后才会更改或消失
  - 速度快且省电
- `DRAM` 动态随机存储器
  - 保留数据时间短
  - 速递比SRAM慢, 比SRAM便宜

---

- `ROM` (Read-Only Memory) 只读存储器
- `PROM` 可一次性编程ROM
- `EPROM` 紫外线擦除可改写的ROM
- `EEROM` 电擦除可改写ROM

---

- `Flash` 闪存
  - 具备电子科技擦除可编程
  - 断掉不会丢失数据
  - 可快速读取数据

- `NOR Flash`
  - 可直接运行装载 `NOR Flash` 里面的代码 (减少SRAM容量)
  - 读取速度非常快

- `NAND Flash`
  - 一次读取一块
  - 技术比flash廉价
  - 不能直接运行代码
  - 通常使用`NAND Flash`的板子还附带一块`NOR Flash`来运行启动代码
