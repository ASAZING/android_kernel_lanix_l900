cmd_arch/arm/boot/dts/qcom/../msm8916-cdp.dtb := /home/scraids/Kernel/android_kernel_lanix_l900/scripts/gcc-wrapper.py /home/scraids/Android/toolchain/arm-eabi-4.8/bin/arm-eabi-gcc -E -Wp,-MD,arch/arm/boot/dts/qcom/../.msm8916-cdp.dtb.d.pre.tmp -nostdinc -I/home/scraids/Kernel/android_kernel_lanix_l900/arch/arm/boot/dts -I/home/scraids/Kernel/android_kernel_lanix_l900/arch/arm/boot/dts/include -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/qcom/../.msm8916-cdp.dtb.dts.tmp arch/arm/boot/dts/qcom/msm8916-cdp.dts ; /home/scraids/Kernel/android_kernel_lanix_l900/scripts/dtc/dtc -O dtb -o arch/arm/boot/dts/qcom/../msm8916-cdp.dtb -b 0 -i arch/arm/boot/dts/qcom/  -d arch/arm/boot/dts/qcom/../.msm8916-cdp.dtb.d.dtc.tmp arch/arm/boot/dts/qcom/../.msm8916-cdp.dtb.dts.tmp ; cat arch/arm/boot/dts/qcom/../.msm8916-cdp.dtb.d.pre.tmp arch/arm/boot/dts/qcom/../.msm8916-cdp.dtb.d.dtc.tmp > arch/arm/boot/dts/qcom/../.msm8916-cdp.dtb.d

source_arch/arm/boot/dts/qcom/../msm8916-cdp.dtb := arch/arm/boot/dts/qcom/msm8916-cdp.dts

deps_arch/arm/boot/dts/qcom/../msm8916-cdp.dtb := \
  arch/arm/boot/dts/qcom/msm8916-cdp.dtsi \
  arch/arm/boot/dts/qcom/msm8916.dtsi \
  arch/arm/boot/dts/qcom/skeleton64.dtsi \
  /home/scraids/Kernel/android_kernel_lanix_l900/arch/arm/boot/dts/include/dt-bindings/clock/msm-clocks-8916.h \
  arch/arm/boot/dts/qcom/msm8916-coresight.dtsi \
  arch/arm/boot/dts/qcom/msm8916-smp2p.dtsi \
  arch/arm/boot/dts/qcom/msm8916-ipcrouter.dtsi \
  arch/arm/boot/dts/qcom/msm-gdsc-8916.dtsi \
  arch/arm/boot/dts/qcom/msm8916-iommu.dtsi \
  arch/arm/boot/dts/qcom/msm-iommu-v2.dtsi \
  arch/arm/boot/dts/qcom/msm8916-gpu.dtsi \
  arch/arm/boot/dts/qcom/msm8916-mdss.dtsi \
  arch/arm/boot/dts/qcom/dsi-panel-sim-video.dtsi \
  arch/arm/boot/dts/qcom/msm8916-mdss-pll.dtsi \
  arch/arm/boot/dts/qcom/msm8916-iommu-domains.dtsi \
  arch/arm/boot/dts/qcom/msm8916-bus.dtsi \
  /home/scraids/Kernel/android_kernel_lanix_l900/arch/arm/boot/dts/include/dt-bindings/msm/msm-bus-rule-ops.h \
  arch/arm/boot/dts/qcom/msm8916-camera.dtsi \
  arch/arm/boot/dts/qcom/msm-pm8916-rpm-regulator.dtsi \
  arch/arm/boot/dts/qcom/msm-pm8916.dtsi \
  arch/arm/boot/dts/qcom/msm8916-regulator.dtsi \
  arch/arm/boot/dts/qcom/msm8916-pm.dtsi \
  arch/arm/boot/dts/qcom/msm8916-pinctrl.dtsi \
  arch/arm/boot/dts/qcom/msm8916-camera-sensor-cdp.dtsi \
  arch/arm/boot/dts/qcom/dsi-panel-jdi-1080p-video.dtsi \
  arch/arm/boot/dts/qcom/dsi-panel-nt35590-720p-video.dtsi \
  arch/arm/boot/dts/qcom/dsi-panel-nt35590-720p-cmd.dtsi \
  arch/arm/boot/dts/qcom/msm8916-memory.dtsi \
  arch/arm/boot/dts/qcom/msm8916-ion.dtsi \

arch/arm/boot/dts/qcom/../msm8916-cdp.dtb: $(deps_arch/arm/boot/dts/qcom/../msm8916-cdp.dtb)

$(deps_arch/arm/boot/dts/qcom/../msm8916-cdp.dtb):
