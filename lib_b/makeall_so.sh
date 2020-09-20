echo "---makeall start---"

echo "make libb.so"
#gcc -fPIC -c b.c math.c -DXSF_SO_LIB -rdynamic -fvisibility=hidden
#gcc -shared -o libb.so b.o math.o -rdynamic
gcc -fPIC -shared -o libb.so math.c b.c -rdynamic -DXSF_SO_LIB -fvisibility=hidden
echo "make libb.so done"

#echo "make test"
#gcc test.c -o test -L./ -Wl,-Bdynamic -lmath -Wl,-Bdynamic

#gcc test.c -L. -Wl,-Bdynamic -ltest -Wl,-Bstatic -ltestlib  -Wl,-Bdynamic
#ln -s ./libmath.so /lib/libmath.so
cp libb.so ../app_dynamic
echo "---makeall end---"
