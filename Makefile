comp: 
	cd ./test; g++ -std=c++11 tests.cpp -o tests
change_dir: 
	cd ./test
clean:
	rm tests
test_zero:comp
	cd ./test; bash tests.sh 0
test_one : comp
	cd ./test; bash tests.sh 1
test_two : comp
	cd ./test; bash tests.sh 2
test_three : comp
	cd ./test; bash tests.sh 3
test_all : 
	mingw32-make.exe test_zero
	mingw32-make.exe test_one
	mingw32-make.exe test_two
	mingw32-make.exe test_three
