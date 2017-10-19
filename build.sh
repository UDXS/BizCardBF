echo "UDXS Brainf*** Compiler"
echo "Getting Minifier..."
git clone https://github.com/Scylardor/cminify.git>/dev/null
echo "Minifying..."
cminify/minifier.py bf.c > bf.min.c
echo "Cleaning Up..."
rm -rf cminify
echo "Compiling..."
gcc -O3 -o bf bf.c
echo "Done!"