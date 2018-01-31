#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define RESET		"\033[0m"
#define BOLD		"\033[1m"
#define GREEN		"\033[32m"

int usage(){
	printf("\nUsage: " BOLD "sptfy <action>" RESET"\n\n"
	BOLD "\t<action>" RESET ":\t\n\
	w, p, play:\tPlay\n\
	s, stop:\tStop\n\
	pa, pause:\tPause\n\
	t,toogle:\tToggle between Play and Pause.\n\
	d, n, next:\tNext song\n\
	a, pr, prev:\tPrevious song\n\n");
	return 0;
}

int main(int argc, char* argv[]) {
	if (argc == 2)
		if (strcmp(argv[1], "p") == 0 || strcmp(argv[1], "-p") == 0 || strcmp(argv[1], "play") == 0 || strcmp(argv[1], "w") == 0)
			system("dbus-send --print-reply --dest=org.mpris.MediaPlayer2.spotify /org/mpris/MediaPlayer2 org.mpris.MediaPlayer2.Player.Play > nul ");
		else if (strcmp(argv[1], "s") == 0 || strcmp(argv[1], "-s") == 0 || strcmp(argv[1], "stop") == 0 || strcmp(argv[1], "pa") == 0 || strcmp(argv[1], "-pa") == 0 || strcmp(argv[1], "pause") == 0)
			system("dbus-send --print-reply --dest=org.mpris.MediaPlayer2.spotify /org/mpris/MediaPlayer2 org.mpris.MediaPlayer2.Player.Pause > nul ");
		else if (strcmp(argv[1], "t") == 0 || strcmp(argv[1], "-t") == 0 || strcmp(argv[1], "toggle") == 0)
			system("dbus-send --print-reply --dest=org.mpris.MediaPlayer2.spotify /org/mpris/MediaPlayer2 org.mpris.MediaPlayer2.Player.PlayPause > nul ");
		else if (strcmp(argv[1], "n") == 0 || strcmp(argv[1], "-n") == 0 || strcmp(argv[1], "next") == 0 || strcmp(argv[1], "d") == 0)
			system("dbus-send --print-reply --dest=org.mpris.MediaPlayer2.spotify /org/mpris/MediaPlayer2 org.mpris.MediaPlayer2.Player.Next > nul ");
		else if (strcmp(argv[1], "a") == 0 || strcmp(argv[1], "pr") == 0 || strcmp(argv[1], "-pr") == 0 || strcmp(argv[1], "prev") == 0 || strcmp(argv[1], "previous") == 0)
			system("dbus-send --print-reply --dest=org.mpris.MediaPlayer2.spotify /org/mpris/MediaPlayer2 org.mpris.MediaPlayer2.Player.Previous > nul ");
		else
			usage();
	else
		usage();
		
	return 0;	
}