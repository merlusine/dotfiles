//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"B:", "cat /sys/class/power_supply/BAT1/capacity",	30,		0},

	{"V:", "if [[ $(amixer get Master | egrep -o 'off') == *off* ]]; then echo 'muted'; else amixer get Master | egrep -o '[0-9]{1,3}%'; fi", 30, 15}, 

    {"", "date '+%a %h %d %H:%M:%S'",					1,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "  ";
static unsigned int delimLen = 5;
