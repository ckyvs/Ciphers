default: caesar vignere

caesar: 
	gcc -o caesar Caesar\ Cipher/Caesar.c
	sudo mv caesar /bin/caesar

vignere:
	gcc -o vignere Polyalphabetic\ Substitution\ Cipher/Polyalphabetic.c
	sudo mv vignere /bin/vignere
