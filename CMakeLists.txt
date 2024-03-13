cmake_minimum_required(VERSION 3.24)
project(oop)

set(CMAKE_CXX_STANDARD 17)

add_executable(oop main.cpp Guest.cpp Guest.h Cinema.cpp Cinema.h Film.cpp Film.h Hall.cpp Hall.h Ticket.cpp Ticket.h Schedule.cpp Schedule.h Terminal.cpp Terminal.h CCTV.cpp CCTV.h _Genre.cpp _Genre.h)
