all: flag.pdf flag.png

flag.pdf: flag.ps
	gs -sDEVICE=pdfwrite -sOutputFile=flag.pdf  -dNOPAUSE -dBATCH flag.ps

flag.png: flag.ps
	gs -sDEVICE=png16 -sOutputFile=flag.png  -dNOPAUSE -dBATCH flag.ps
