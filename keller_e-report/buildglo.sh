#!/bin/sh

echo "cleaning old files..."
rm -rf *.gxs
rm -rf *.gxs
echo "compiling latex glosstex... press any key to start..."
#read

latex keller_e-report.tex
glosstex keller_e-report.aux keller_e-report.gdf
makeindex keller_e-report.gxs -o keller_e-report.glx -s glosstex.ist
