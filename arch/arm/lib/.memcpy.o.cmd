cmd_arch/arm/lib/memcpy.o := /home/scraids/Kernel/android_kernel_lanix_l900/scripts/gcc-wrapper.py /home/scraids/Android/toolchain/arm-eabi-4.8/bin/arm-eabi-gcc -Wp,-MD,arch/arm/lib/.memcpy.o.d  -nostdinc -isystem /home/scraids/Android/toolchain/arm-eabi-4.8/bin/../lib/gcc/arm-eabi/4.8/include -I/home/scraids/Kernel/android_kernel_lanix_l900/arch/arm/include -Iarch/arm/include/generated  -Iinclude -I/home/scraids/Kernel/android_kernel_lanix_l900/arch/arm/include/uapi -Iarch/arm/include/generated/uapi -I/home/scraids/Kernel/android_kernel_lanix_l900/include/uapi -Iinclude/generated/uapi -include /home/scraids/Kernel/android_kernel_lanix_l900/include/linux/kconfig.h -D__KERNEL__ -mlittle-endian -Iarch/arm/mach-msm/include  -D__ASSEMBLY__ -mabi=aapcs-linux -mno-thumb-interwork -funwind-tables -marm -D__LINUX_ARM_ARCH__=7 -march=armv7-a  -include asm/unified.h -msoft-float         -c -o arch/arm/lib/memcpy.o arch/arm/lib/memcpy.S

source_arch/arm/lib/memcpy.o := arch/arm/lib/memcpy.S

deps_arch/arm/lib/memcpy.o := \
  /home/scraids/Kernel/android_kernel_lanix_l900/arch/arm/include/asm/unified.h \
    $(wildcard include/config/arm/asm/unified.h) \
    $(wildcard include/config/thumb2/kernel.h) \
  include/linux/linkage.h \
  include/linux/compiler.h \
    $(wildcard include/config/sparse/rcu/pointer.h) \
    $(wildcard include/config/trace/branch/profiling.h) \
    $(wildcard include/config/profile/all/branches.h) \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/enable/warn/deprecated.h) \
    $(wildcard include/config/kprobes.h) \
  include/linux/stringify.h \
  include/linux/export.h \
    $(wildcard include/config/have/underscore/symbol/prefix.h) \
    $(wildcard include/config/modules.h) \
    $(wildcard include/config/modversions.h) \
    $(wildcard include/config/unused/symbols.h) \
  /home/scraids/Kernel/android_kernel_lanix_l900/arch/arm/include/asm/linkage.h \
  /home/scraids/Kernel/android_kernel_lanix_l900/arch/arm/include/asm/assembler.h \
    $(wildcard include/config/cpu/feroceon.h) \
    $(wildcard include/config/trace/irqflags.h) \
    $(wildcard include/config/smp.h) \
    $(wildcard include/config/cpu/use/domains.h) \
  /home/scraids/Kernel/android_kernel_lanix_l900/arch/arm/include/asm/ptrace.h \
    $(wildcard include/config/arm/thumb.h) \
  /home/scraids/Kernel/android_kernel_lanix_l900/arch/arm/include/uapi/asm/ptrace.h \
    $(wildcard include/config/cpu/endian/be8.h) \
  /home/scraids/Kernel/android_kernel_lanix_l900/arch/arm/include/asm/hwcap.h \
  /home/scraids/Kernel/android_kernel_lanix_l900/arch/arm/include/uapi/asm/hwcap.h \
  /home/scraids/Kernel/android_kernel_lanix_l900/arch/arm/include/asm/domain.h \
    $(wildcard include/config/verify/permission/fault.h) \
    $(wildcard include/config/io/36.h) \
  /home/scraids/Kernel/android_kernel_lanix_l900/arch/arm/include/asm/opcodes-virt.h \
  /home/scraids/Kernel/android_kernel_lanix_l900/arch/arm/include/asm/opcodes.h \
    $(wildcard include/config/cpu/endian/be32.h) \
  arch/arm/lib/copy_template.S \

arch/arm/lib/memcpy.o: $(deps_arch/arm/lib/memcpy.o)

$(deps_arch/arm/lib/memcpy.o):
