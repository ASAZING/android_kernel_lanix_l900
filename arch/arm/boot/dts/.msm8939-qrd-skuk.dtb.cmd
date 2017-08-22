cmd_arch/arm/boot/dts/qcom/../msm8939-qrd-skuk.dtb := /home/scraids/Kernel/android_kernel_lanix_l900/scripts/gcc-wrapper.py /home/scraids/Android/toolchain/arm-eabi-4.8/bin/arm-eabi-gcc -E -Wp,-MD,arch/arm/boot/dts/qcom/../.msm8939-qrd-skuk.dtb.d.pre.tmp -nostdinc -I/home/scraids/Kernel/android_kernel_lanix_l900/arch/arm/boot/dts -I/home/scraids/Kernel/android_kernel_lanix_l900/arch/arm/boot/dts/include -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/qcom/../.msm8939-qrd-skuk.dtb.dts.tmp arch/arm/boot/dts/qcom/msm8939-qrd-skuk.dts ; /home/scraids/Kernel/android_kernel_lanix_l900/scripts/dtc/dtc -O dtb -o arch/arm/boot/dts/qcom/../msm8939-qrd-skuk.dtb -b 0 -i arch/arm/boot/dts/qcom/  -d arch/arm/boot/dts/qcom/../.msm8939-qrd-skuk.dtb.d.dtc.tmp arch/arm/boot/dts/qcom/../.msm8939-qrd-skuk.dtb.dts.tmp ; cat arch/arm/boot/dts/qcom/../.msm8939-qrd-skuk.dtb.d.pre.tmp arch/arm/boot/dts/qcom/../.msm8939-qrd-skuk.dtb.d.dtc.tmp > arch/arm/boot/dts/qcom/../.msm8939-qrd-skuk.dtb.d

source_arch/arm/boot/dts/qcom/../msm8939-qrd-skuk.dtb := arch/arm/boot/dts/qcom/msm8939-qrd-skuk.dts

deps_arch/arm/boot/dts/qcom/../msm8939-qrd-skuk.dtb := \
  arch/arm/boot/dts/qcom/msm8939-qrd-skuk.dtsi \
  arch/arm/boot/dts/qcom/msm8939-qrd.dtsi \
  arch/arm/boot/dts/qcom/msm8939.dtsi \
  arch/arm/boot/dts/qcom/skeleton64.dtsi \
  /home/scraids/Kernel/android_kernel_lanix_l900/arch/arm/boot/dts/include/dt-bindings/clock/msm-clocks-8936.h \
  arch/arm/boot/dts/qcom/msm8939-smp2p.dtsi \
  arch/arm/boot/dts/qcom/msm8939-ipcrouter.dtsi \
  arch/arm/boot/dts/qcom/msm8939-ion.dtsi \
  arch/arm/boot/dts/qcom/msm8939-coresight.dtsi \
  arch/arm/boot/dts/qcom/msm8939-iommu.dtsi \
  arch/arm/boot/dts/qcom/msm-iommu-v2.dtsi \
  arch/arm/boot/dts/qcom/msm-gdsc-8916.dtsi \
  arch/arm/boot/dts/qcom/msm8939-bus.dtsi \
  /home/scraids/Kernel/android_kernel_lanix_l900/arch/arm/boot/dts/include/dt-bindings/msm/msm-bus-ids.h \
    $(wildcard include/config/noc.h) \
  arch/arm/boot/dts/qcom/msm8939-iommu-domains.dtsi \
  arch/arm/boot/dts/qcom/msm-pm8916.dtsi \
  arch/arm/boot/dts/qcom/msm8939-regulator.dtsi \
  arch/arm/boot/dts/qcom/msm8939-pinctrl.dtsi \

arch/arm/boot/dts/qcom/../msm8939-qrd-skuk.dtb: $(deps_arch/arm/boot/dts/qcom/../msm8939-qrd-skuk.dtb)

$(deps_arch/arm/boot/dts/qcom/../msm8939-qrd-skuk.dtb):
