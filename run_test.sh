cd libgmpfix
sudo make install
cd ..
fix run -f test.fix gmpz.fix gmpq.fix -d gmpfix
echo "test end."