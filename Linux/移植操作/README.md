# 移植修改

#### 1. ./Makefile

```
# hlg ARCH		?= $(SUBARCH)
ARCH		?= arm
# hlg CROSS_COMPILE	?= $(CONFIG_CROSS_COMPILE:"%"=%)
CROSS_COMPILE	?= arm-linux-gnueabihf-
```