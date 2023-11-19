//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"B:", "cat /sys/class/power_supply/BAT1/capacity",	30,		0},

	{"V:", "awk -F"[][]" /dB/ { print } <(amixer sget Master)", 1, 0}, 

    {"", "date '+%a %h %d %H:%M:%S'",					1,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
