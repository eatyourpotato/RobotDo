#--------------------------------------------------------------
# Makefile generated with cmak version 0.9.6 (4/2006).
# Date: 24/10/2013 10:57:19
#--------------------------------------------------------------

PREFIX  = /usr/local
CFLAGS  = -I. -std=gnu++11
LDFLAGS = 

CC = g++
RM = rm -f
INSTALL_PROG = install -m 755 -s

EXE = robot_etat

OBJS = EtatEnRoute.o EtatFige.o EtatRobot.o EtatVide.o EtatVideFaceObstacle.o Main_Robot.o Objet.o Obstacle.o Position.o Robot.o

ALL : $(EXE)

EtatEnRoute.o : EtatEnRoute.cpp
	$(CC) -c EtatEnRoute.cpp $(CFLAGS) -o EtatEnRoute.o

EtatFige.o : EtatFige.cpp
	$(CC) -c EtatFige.cpp $(CFLAGS) -o EtatFige.o

EtatRobot.o : EtatRobot.cpp
	$(CC) -c EtatRobot.cpp $(CFLAGS) -o EtatRobot.o

EtatVide.o : EtatVide.cpp
	$(CC) -c EtatVide.cpp $(CFLAGS) -o EtatVide.o

EtatVideFaceObstacle.o : EtatVideFaceObstacle.cpp
	$(CC) -c EtatVideFaceObstacle.cpp $(CFLAGS) -o EtatVideFaceObstacle.o

Main_Robot.o : Main_Robot.cpp
	$(CC) -c Main_Robot.cpp $(CFLAGS) -o Main_Robot.o

Objet.o : Objet.cpp
	$(CC) -c Objet.cpp $(CFLAGS) -o Objet.o

Obstacle.o : Obstacle.cpp
	$(CC) -c Obstacle.cpp $(CFLAGS) -o Obstacle.o

Position.o : Position.cpp
	$(CC) -c Position.cpp $(CFLAGS) -o Position.o

Robot.o : Robot.cpp
	$(CC) -c Robot.cpp $(CFLAGS) -o Robot.o

$(EXE) : $(OBJS)
	$(CC) $(OBJS) -o $(EXE) $(LDFLAGS)

install : $(EXE)
	$(INSTALL_PROG) $(EXE) $(PREFIX)/bin

uninstall :
	$(RM) $(PREFIX)/bin/$(EXE)

clean :
	$(RM) $(OBJS) $(EXE)
