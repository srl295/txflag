flag.pdf: flag.ps
	gs -sDEVICE=pdfwrite -sOutputFile=flag.pdf  -dNOPAUSE -dBATCH flag.ps
