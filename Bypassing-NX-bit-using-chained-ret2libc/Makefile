all:
	echo 0 | sudo tee /proc/sys/kernel/randomize_va_space
	gcc -fno-stack-protector -g -mpreferred-stack-boundary=2 -o vuln vuln.c
	sudo chown root vuln
	sudo chgrp root vuln
	sudo chmod +s vuln
clean:
	rm -f vuln
