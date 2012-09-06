CC = g++
CFLAGS = -Wall -Wextra -Werror -pedantic -Weffc++

hello: hello.cpp
	$(CC) $(CFLAGS) -o hello hello.cpp

euler2: euler2.cpp
	$(CC) $(CFLAGS) -o euler2 euler2.cpp
