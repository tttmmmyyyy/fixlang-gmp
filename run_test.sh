# fix build test.fix --dynamic-link gmp --dynamic-link gmpfix && ./test
cd libgmpfix
sudo make install
cd ..
fix run test.fix --dynamic-link gmp --dynamic-link gmpfix
echo "test end."