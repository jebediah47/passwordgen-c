OBJ=passwordgen
if test -f "$OBJ"; then
    rm -rf $OBJ
fi

echo "Enter CFLAGS"
read CFLAGS

make
./passwordgen $CFLAGS
