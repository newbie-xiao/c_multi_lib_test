echo "---makeall start---"

echo "make liba.so"
#gcc -fPIC -c a.c math.c -DXSF_SO_LIB -rdynamic -fvisibility=hidden
#gcc -shared -o liba.so a.o math.o -rdynamic

#gcc -fPIC -shared -o liba.so math.c a.c
gcc -fPIC -shared -o liba.so math.c a.c -DXSF_SO_LIB -rdynamic -fvisibility=hidden
echo "make liba.so done"

#echo "make test"
#gcc test.c -o test -L./ -Wl,-Bdynamic -lmath -Wl,-Bdynamic

#gcc test.c -L. -Wl,-Bdynamic -ltest -Wl,-Bstatic -ltestlib  -Wl,-Bdynamic
#ln -s ./libmath.so /lib/libmath.so
cp liba.so ../app_dynamic
echo "---makeall end---"
