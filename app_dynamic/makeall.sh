echo "---makeall start---"

#echo "make libapp_math.a"
#gcc -c math.c -DXSF_A_LIB
#ar -crv libapp_math.a math.o
#echo "make libapp_math.a done"

echo "make test"
#gcc test.c -o test -L./ -Wl,-Bstatic -lapp_math -Wl,-Bdynamic -la -lrt -ldl -rdynamic
gcc test.c math.c -o test -DXSF_A_LIB -L./ -lb -la -lrt -ldl -rdynamic -Wl,-Bsymbolic

#gcc test.c -L. -Wl,-Bdynamic -ltest -Wl,-Bstatic -ltestlib  -Wl,-Bdynamic

echo "---makeall end---"
