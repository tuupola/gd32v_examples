TARGET = firmware
NUCLEI_SDK_ROOT = ../../nuclei-sdk
COMPILE_PREFIX = riscv64-unknown-elf-

SRCDIRS = . lib/hagl/src lib/hagl_hal/src
INCDIRS = . lib/hagl/include lib/hagl_hal/include

# For Longan Nano
COMMON_FLAGS = -include ./longan_nano.h
# For TTGO T-Display GD32
#COMMON_FLAGS += -include ./ttgo_t_display.h

include $(NUCLEI_SDK_ROOT)/Build/Makefile.base
