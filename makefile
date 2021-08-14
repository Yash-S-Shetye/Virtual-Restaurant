Code1:	main.o disp_starters.o disp_drinks.o disp_main_course.o disp_desserts.o
	g++ -o Code1  main.o disp_starters.o disp_drinks.o disp_main_course.o disp_desserts.o

Code_1.o:	main.cpp header.h
	g++ -c 	main.cpp

disp_starters.o:	disp_starters.cpp header.h
	g++ -c disp_starters.cpp 

disp_drinks.o:	disp_drinks.cpp header.h
	g++ -c disp_drinks.cpp

disp_main_course.o:	disp_main_course.cpp header.h
	g++ -c disp_main_course.cpp

disp_desserts.o:	disp_desserts.cpp header.h
	g++ -c disp_desserts.cpp

clean:
	rm -f	Code1 main.o disp_starters.o disp_drinks.o disp_main_course.o disp_desserts.o
