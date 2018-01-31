# Command Line Interface for Spotify Client on Ubuntu

## Description
This aims to be a simple tool to control Spotify Clieant on Ubuntu Linux. It is basically a wrapper for dbus command line message to MediaPlayer2.
Most probably someone already implemented a similar tool. But after a brief search, I was not able to find a tool that is simple enough so I thought it would take shorter time to implement by myself.

## Installation
In terminal enter following commands:

	make
	sudo make install

## Usage
In terminal: 

### sptfy "action"

	"action":	
	w, p, play:		Play
	s, stop:		Stop
	pa, pause:		Pause
	t,toogle:		Toggle between Play and Pause.
	d, n, next:		Next song
	a, pr, prev:	Previous song

Simply, all keys you need:	w a s d 