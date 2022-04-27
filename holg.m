all:main.o game.o final_score.o holg
holg.o:main.c
  cc -c game.c
game.o:game.c
  cc -c game.c
final_score.o:final_score.c
  cc -c final_score.c
holg:main.o game.o final_score.o
  cc -o holg main.o game.o final_score.o
