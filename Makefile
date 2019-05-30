obj-m := vser.o
vser-obj-m := vser1.o bar.o

KERNELDIR := /usr/src/kernels/$(shell uname -r)
PWD := $(shell pwd)

all:
	make -C $(KERNELDIR) M=$(PWD) modules

clean:
	make -C $(KERNELDIR) M=$(PWD) clean