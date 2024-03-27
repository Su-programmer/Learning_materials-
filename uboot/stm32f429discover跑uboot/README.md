# stm32f429discover跑uboot

---

## 编译 `u-boot.bin`

- `make mrproper` 清理
- `make stm32f429-discovery_defconfig` 使用官方配置好的默认配置
- `make menuconfig` 配置, 默认的就行了
- `make ARCH=arm CROSS_COMPILE=/usr/local/gcc-arm-11.2-2022.02-x86_64-arm-none-eabi/bin/arm-none-eabi-` 执行编译命令
