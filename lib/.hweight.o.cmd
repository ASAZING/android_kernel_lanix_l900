cmd_lib/hweight.o := /home/scraids/Kernel/android_kernel_lanix_l900/scripts/gcc-wrapper.py /home/scraids/Android/toolchain/arm-eabi-4.8/bin/arm-eabi-gcc -Wp,-MD,lib/.hweight.o.d  -nostdinc -isystem /home/scraids/Android/toolchain/arm-eabi-4.8/bin/../lib/gcc/arm-eabi/4.8/include -I/home/scraids/Kernel/android_kernel_lanix_l900/arch/arm/include -Iarch/arm/include/generated  -Iinclude -I/home/scraids/Kernel/android_kernel_lanix_l900/arch/arm/include/uapi -Iarch/arm/include/generated/uapi -I/home/scraids/Kernel/android_kernel_lanix_l900/include/uapi -Iinclude/generated/uapi -include /home/scraids/Kernel/android_kernel_lanix_l900/include/linux/kconfig.h -D__KERNEL__ -mlittle-endian -Iarch/arm/mach-msm/include -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -Werror-implicit-function-declaration -Wno-format-security -fno-delete-null-pointer-checks -fno-delete-null-pointer-checks -Wno-bool-compare -std=gnu89 -Os -Wno-maybe-uninitialized -fno-dwarf2-cfi-asm -fstack-protector -fno-ipa-sra -mabi=aapcs-linux -mno-thumb-interwork -funwind-tables -marm -D__LINUX_ARM_ARCH__=7 -march=armv7-a -msoft-float -Uarm -Wframe-larger-than=1024 -Wno-unused-but-set-variable -fomit-frame-pointer -fno-var-tracking-assignments -Wdeclaration-after-statement -Wno-pointer-sign -fno-strict-overflow -fconserve-stack -DCC_HAVE_ASM_GOTO    -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(hweight)"  -D"KBUILD_MODNAME=KBUILD_STR(hweight)" -c -o lib/.tmp_hweight.o lib/hweight.c

source_lib/hweight.o := lib/hweight.c

deps_lib/hweight.o := \
  include/linux/export.h \
    $(wildcard include/config/have/underscore/symbol/prefix.h) \
    $(wildcard include/config/modules.h) \
    $(wildcard include/config/modversions.h) \
    $(wildcard include/config/unused/symbols.h) \
  include/linux/bitops.h \
  arch/arm/include/generated/asm/types.h \
  /home/scraids/Kernel/android_kernel_lanix_l900/include/uapi/asm-generic/types.h \
  include/asm-generic/int-ll64.h \
  include/uapi/asm-generic/int-ll64.h \
  arch/arm/include/generated/asm/bitsperlong.h \
  include/asm-generic/bitsperlong.h \
    $(wildcard include/config/64bit.h) \
  include/uapi/asm-generic/bitsperlong.h \
  /home/scraids/Kernel/android_kernel_lanix_l900/arch/arm/include/asm/bitops.h \
    $(wildcard include/config/smp.h) \
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
  include/linux/irqflags.h \
    $(wildcard include/config/trace/irqflags.h) \
    $(wildcard include/config/irqsoff/tracer.h) \
    $(wildcard include/config/preempt/tracer.h) \
    $(wildcard include/config/trace/irqflags/support.h) \
  include/linux/typecheck.h \
  /home/scraids/Kernel/android_kernel_lanix_l900/arch/arm/include/asm/irqflags.h \
  /home/scraids/Kernel/android_kernel_lanix_l900/arch/arm/include/asm/ptrace.h \
    $(wildcard include/config/arm/thumb.h) \
  /home/scraids/Kernel/android_kernel_lanix_l900/arch/arm/include/uapi/asm/ptrace.h \
    $(wildcard include/config/cpu/endian/be8.h) \
  /home/scraids/Kernel/android_kernel_lanix_l900/arch/arm/include/asm/hwcap.h \
  /home/scraids/Kernel/android_kernel_lanix_l900/arch/arm/include/uapi/asm/hwcap.h \
  include/linux/stddef.h \
  include/uapi/linux/stddef.h \
  include/linux/types.h \
    $(wildcard include/config/uid16.h) \
    $(wildcard include/config/lbdaf.h) \
    $(wildcard include/config/arch/dma/addr/t/64bit.h) \
    $(wildcard include/config/phys/addr/t/64bit.h) \
  include/uapi/linux/types.h \
  /home/scraids/Kernel/android_kernel_lanix_l900/include/uapi/linux/posix_types.h \
  /home/scraids/Kernel/android_kernel_lanix_l900/arch/arm/include/uapi/asm/posix_types.h \
  /home/scraids/Kernel/android_kernel_lanix_l900/include/uapi/asm-generic/posix_types.h \
  include/asm-generic/bitops/non-atomic.h \
  include/asm-generic/bitops/fls64.h \
  include/asm-generic/bitops/sched.h \
  include/asm-generic/bitops/hweight.h \
  include/asm-generic/bitops/arch_hweight.h \
  include/asm-generic/bitops/const_hweight.h \
  include/asm-generic/bitops/lock.h \
  include/asm-generic/bitops/le.h \
  /home/scraids/Kernel/android_kernel_lanix_l900/arch/arm/include/uapi/asm/byteorder.h \
  include/linux/byteorder/little_endian.h \
  include/uapi/linux/byteorder/little_endian.h \
  include/linux/swab.h \
  include/uapi/linux/swab.h \
  /home/scraids/Kernel/android_kernel_lanix_l900/arch/arm/include/asm/swab.h \
  /home/scraids/Kernel/android_kernel_lanix_l900/arch/arm/include/uapi/asm/swab.h \
  include/linux/byteorder/generic.h \
  include/asm-generic/bitops/ext2-atomic-setbit.h \

lib/hweight.o: $(deps_lib/hweight.o)

$(deps_lib/hweight.o):
