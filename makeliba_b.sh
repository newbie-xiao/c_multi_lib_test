echo "---makeliba_b start---"

cur_dir=$PWD
echo "---cur_dir $cur_dir---"

echo "make liba.a(so)"
cd $cur_dir/lib_a
./makeall_a.sh
./makeall_so.sh

echo "make libb.a(so)"
cd $cur_dir/lib_b
./makeall_a.sh
./makeall_so.sh

echo "---makeliba_b end---" 
