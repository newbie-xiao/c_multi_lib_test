echo "---makeall start---"

echo "make lib.b"
gcc -c b.c math.c -DXSF_A_LIB -fvisibility=hidden
ar -crv libb.a b.o math.o 
echo "make libb.a done"

#echo "make test"
#gcc test.c -o test -L./ -Wl,-Bstatic -lmath -Wl,-Bdynamic

#gcc test.c -L. -Wl,-Bdynamic -ltest -Wl,-Bstatic -ltestlib  -Wl,-Bdynamic
cp libb.a ../app_static
echo "---makeall end---"
