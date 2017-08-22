cmd_arch/arm/boot/compressed/piggy.gzip.o := /home/scraids/Kernel/android_kernel_lanix_l900/scripts/gcc-wrapper.py /home/scraids/Android/toolchain/arm-eabi-4.8/bin/arm-eabi-gcc -Wp,-MD,arch/arm/boot/compressed/.piggy.gzip.o.d  -nostdinc -isystem /home/scraids/Android/toolchain/arm-eabi-4.8/bin/../lib/gcc/arm-eabi/4.8/include -I/home/scraids/Kernel/android_kernel_lanix_l900/arch/arm/include -Iarch/arm/include/generated  -Iinclude -I/home/scraids/Kernel/android_kernel_lanix_l900/arch/arm/include/uapi -Iarch/arm/include/generated/uapi -I/home/scraids/Kernel/android_kernel_lanix_l900/include/uapi -Iinclude/generated/uapi -include /home/scraids/Kernel/android_kernel_lanix_l900/include/linux/kconfig.h -D__KERNEL__ -mlittle-endian -Iarch/arm/mach-msm/include  -D__ASSEMBLY__ -mabi=aapcs-linux -mno-thumb-interwork -funwind-tables -marm -D__LINUX_ARM_ARCH__=7 -march=armv7-a  -include asm/unified.h -msoft-float     -DZIMAGE     -c -o arch/arm/boot/compressed/piggy.gzip.o arch/arm/boot/compressed/piggy.gzip.S

source_arch/arm/boot/compressed/piggy.gzip.o := arch/arm/boot/compressed/piggy.gzip.S

deps_arch/arm/boot/compressed/piggy.gzip.o := \
  /home/scraids/Kernel/android_kernel_lanix_l900/arch/arm/include/asm/unified.h \
    $(wildcard include/config/arm/asm/unified.h) \
    $(wildcard include/config/thumb2/kernel.h) \

arch/arm/boot/compressed/piggy.gzip.o: $(deps_arch/arm/boot/compressed/piggy.gzip.o)

$(deps_arch/arm/boot/compressed/piggy.gzip.o):
