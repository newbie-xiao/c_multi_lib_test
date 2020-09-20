echo "---makeall start---"

echo "make lib.a"
gcc -c a.c math.c -DXSF_A_LIB -fvisibility=hidden
ar -crv liba.a a.o math.o 
echo "make liba.a done"

#echo "make test"
#gcc test.c -o test -L./ -Wl,-Bstatic -lmath -Wl,-Bdynamic

#gcc test.c -L. -Wl,-Bdynamic -ltest -Wl,-Bstatic -ltestlib  -Wl,-Bdynamic
cp liba.a ../app_static
echo "---makeall end---"
