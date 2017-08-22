cmd_drivers/tty/vt/consolemap_deftbl.o := /home/scraids/Kernel/android_kernel_lanix_l900/scripts/gcc-wrapper.py /home/scraids/Android/toolchain/arm-eabi-4.8/bin/arm-eabi-gcc -Wp,-MD,drivers/tty/vt/.consolemap_deftbl.o.d  -nostdinc -isystem /home/scraids/Android/toolchain/arm-eabi-4.8/bin/../lib/gcc/arm-eabi/4.8/include -I/home/scraids/Kernel/android_kernel_lanix_l900/arch/arm/include -Iarch/arm/include/generated  -Iinclude -I/home/scraids/Kernel/android_kernel_lanix_l900/arch/arm/include/uapi -Iarch/arm/include/generated/uapi -I/home/scraids/Kernel/android_kernel_lanix_l900/include/uapi -Iinclude/generated/uapi -include /home/scraids/Kernel/android_kernel_lanix_l900/include/linux/kconfig.h -D__KERNEL__ -mlittle-endian -Iarch/arm/mach-msm/include -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -Werror-implicit-function-declaration -Wno-format-security -fno-delete-null-pointer-checks -fno-delete-null-pointer-checks -Wno-bool-compare -std=gnu89 -Os -Wno-maybe-uninitialized -fno-dwarf2-cfi-asm -fstack-protector -fno-ipa-sra -mabi=aapcs-linux -mno-thumb-interwork -funwind-tables -marm -D__LINUX_ARM_ARCH__=7 -march=armv7-a -msoft-float -Uarm -Wframe-larger-than=1024 -Wno-unused-but-set-variable -fomit-frame-pointer -fno-var-tracking-assignments -Wdeclaration-after-statement -Wno-pointer-sign -fno-strict-overflow -fconserve-stack -DCC_HAVE_ASM_GOTO    -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(consolemap_deftbl)"  -D"KBUILD_MODNAME=KBUILD_STR(consolemap_deftbl)" -c -o drivers/tty/vt/.tmp_consolemap_deftbl.o drivers/tty/vt/consolemap_deftbl.c

source_drivers/tty/vt/consolemap_deftbl.o := drivers/tty/vt/consolemap_deftbl.c

deps_drivers/tty/vt/consolemap_deftbl.o := \
  include/linux/types.h \
    $(wildcard include/config/uid16.h) \
    $(wildcard include/config/lbdaf.h) \
    $(wildcard include/config/arch/dma/addr/t/64bit.h) \
    $(wildcard include/config/phys/addr/t/64bit.h) \
    $(wildcard include/config/64bit.h) \
  include/uapi/linux/types.h \
  arch/arm/include/generated/asm/types.h \
  /home/scraids/Kernel/android_kernel_lanix_l900/include/uapi/asm-generic/types.h \
  include/asm-generic/int-ll64.h \
  include/uapi/asm-generic/int-ll64.h \
  arch/arm/include/generated/asm/bitsperlong.h \
  include/asm-generic/bitsperlong.h \
  include/uapi/asm-generic/bitsperlong.h \
  /home/scraids/Kernel/android_kernel_lanix_l900/include/uapi/linux/posix_types.h \
  include/linux/stddef.h \
  include/uapi/linux/stddef.h \
  include/linux/compiler.h \
    $(wildcard include/config/sparse/rcu/pointer.h) \
    $(wildcard include/config/trace/branch/profiling.h) \
    $(wildcard include/config/profile/all/branches.h) \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/enable/warn/deprecated.h) \
    $(wildcard include/config/kprobes.h) \
  include/linux/compiler-gcc.h \
    $(wildcard include/config/arch/supports/optimized/inlining.h) \
    $(wildcard include/config/optimize/inlining.h) \
  include/linux/compiler-gcc4.h \
    $(wildcard include/config/arch/use/builtin/bswap.h) \
  /home/scraids/Kernel/android_kernel_lanix_l900/arch/arm/include/uapi/asm/posix_types.h \
  /home/scraids/Kernel/android_kernel_lanix_l900/include/uapi/asm-generic/posix_types.h \

drivers/tty/vt/consolemap_deftbl.o: $(deps_drivers/tty/vt/consolemap_deftbl.o)

$(deps_drivers/tty/vt/consolemap_deftbl.o):
