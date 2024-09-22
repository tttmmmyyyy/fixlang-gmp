pushd libgmpfix
sudo make install
popd
fix run -f test.fix
echo "test end."