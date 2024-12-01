main: main.o Course.o CourseRanker.o Review.o User.o
	g++ main.o Course.o CourseRanker.o Review.o User.o -o main

main.o: main.cc
	g++ -c main.cc

Course.o: Course.cc Course.h
	g++ -c Course.cc

CourseRanker.o: CourseRanker.cc CourseRanker.h
	g++ -c CourseRanker.cc

Review.o: Review.cc Review.h
	g++ -c Review.cc

User.o: User.cc User.h
	g++ -c User.cc


clean: 
	rm *.o main
