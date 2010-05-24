# this is a basic makefile defining some common targets in order to:
# * build
# * clean
# * distribute clean

PROJNAME=$(shell basename `pwd`)

distclean:
	@rm -rf tmp out
	@find . -iname "*.log" | xargs rm -f

tar: distclean
	@tar cvzf "../$(PROJNAME).tar.gz" "../$(PROJNAME)"


