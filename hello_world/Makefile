obj-m += hello.o

all:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules

clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean
install:
	install -D -m 644 hello.ko /lib/modules/$(shell uname -r)/kernel/drivers/misc/hello.ko
	depmod -a
