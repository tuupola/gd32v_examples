TARGET = firmware
NUCLEI_SDK_ROOT = ../../nuclei-sdk
# Remove comment if using macOS and toolchain was installed from Homebrew
COMPILE_PREFIX = riscv64-unknown-elf-
# GDB_UPLOAD_ARGS += -data-directory=/usr/local/Cellar/gdb/10.2/share/gdb
SRCDIRS = .
JLINK = JLinkExe

include $(NUCLEI_SDK_ROOT)/Build/Makefile.base

$(TARGET).hex: $(TARGET).elf
	$(OBJCOPY) $< -O ihex $(TARGET).hex

$(TARGET).bin: $(TARGET).elf
	$(OBJCOPY) $< -O binary $(TARGET).bin

upload-jlink: $(TARGET).hex
	@$(ECHO) "Download and run $<"
	$(JLINK) -device GD32VF103VBT6 -speed 4000 -if JTAG -jtagconf -1,-1 -autoconnect 1 -CommanderScript upload.jlink

upload-dfu: $(TARGET).bin
	@$(ECHO) "Download and run $<"
	dfu-util -d 28e9:0189 -a 0 --dfuse-address 0x08000000:leave -D $(TARGET).bin
