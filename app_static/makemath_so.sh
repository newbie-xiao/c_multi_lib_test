echo "---makeall start---"

echo "make libapp_math.a"
gcc -fPIC -c math.c -DXSF_SO_LIB
gcc -shared -o libapp_math.so math.o
#gcc -fPIC -shared -o libapp_math.so math.c
echo "make libapp_math.a done"

#echo "make test"
#gcc test.c -o test -L./ -Wl,-Bdynamic -lapp_math -Wl,-Bdynamic

#gcc test.c -L. -Wl,-Bdynamic -ltest -Wl,-Bstatic -ltestlib  -Wl,-Bdynamic
#ln -s ./libmath.so /lib/libmath.so
#echo "---makeall end---"
