#!/bin/bash

# pio project config | grep ^env:

PIOENV=lilka
BUILD_DIR=.pio/build/${PIOENV}

pio run -e ${PIOENV} 2>log.err 1>log
[ $? -ne 0 ] && cat log.err && exit 1

# --port "/dev/ttyS31" --baud 460800 --before default_reset --after hard_reset write_flash -z --flash_mode dio --flash_freq 80m --flash_size 16MB

esptool.py --chip esp32s3 \
	merge_bin \
		--output Bruce-${PIOENV}.bin \
			0x0     ${BUILD_DIR}/bootloader.bin \
			0x8000  ${BUILD_DIR}/partitions.bin \
			0x10000 ${BUILD_DIR}/firmware.bin

[ $? -ne 0 ] && exit 1 || echo "burn cmd: esptool.py --baud 115200 write_flash 0x00 Bruce-${PIOENV}.bin"

burnFW(){
	# pio run -t upload -t nobuild -e $1
	esptool.py --baud 115200 write_flash 0x00 $1
}
