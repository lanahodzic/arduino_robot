main: main.c adc.c servo.c motor.c lcd.c utility.c
	avr-gcc -mmcu=atmega325pa -O2 -o main.elf main.c adc.c servo.c motor.c lcd.c utility.c i2c.c
	avr-objcopy -O ihex main.elf main.hex
	avr-size main.elf

program: main 
	avrdude -F -pm325 -cusbtiny -E noreset -U flash:w:main.hex

usbprogram: main.elf
	avrdude -pm325 -P /dev/tty.usbserial-A602FK44 -c arduino -F -u -U flash:w:main.hex

#program low fuse byte to be 0xef for crystal
fuse:
	avrdude -F -pm325 -cusbtiny -E noreset -U lfuse:w:0xef:m
	#avrdude -F -pm325 -cusbtiny -E noreset -U hfuse:w:0xd8:m #use bootloader
	avrdude -F -pm325 -cusbtiny -E noreset -U hfuse:w:0xd9:m #no bootloader

clean:
	rm -fr *.elf *.hex *.o
