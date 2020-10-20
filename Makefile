flag.pdf: flag.ps
	gs -sDEVICE=pdfwrite -sOutputFile=flag.pdf  -dNOPAUSE < flag.ps