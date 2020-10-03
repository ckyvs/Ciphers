default: caesar vignere

caesar: 
	gcc -o caesar Caesar\ Cipher/C/Caesar.c
	sudo mv caesar /bin/caesar

vignere:
	gcc -o vignere Polyalphabetic\ Substitution\ Cipher/C/Polyalphabetic.c
	sudo mv vignere /bin/vignere
