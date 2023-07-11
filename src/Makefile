tester:
	gcc -o tester main.c
	#ln -s /etc/ssl/certs/java/cacerts ext_symlink

install: tester
	install -m 755 tester ${DESTDIR}
