src = fraction.cpp test_fraction.cpp
project = fractiongcc
project: $(src)
	g++ $^ -lgtest -lgtest_main -lpthread -o $@
run: project
	./$^
clean:
	rm *.out