/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int fuzzy = 1;                      /* -F  option; if 0, dmenu doesn't use fuzzy matching     */
static int centered = 1;                    /* -c option; centers dmenu on screen */
static int min_width = 300;                   /* minimum width when centered */
static int max_width = 900;                    /* maximum width when centered */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
"Victor Mono:weight=180:pixelsize=20:antialias=true:autohint=true:style=italic"
};

static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#bbbbbb", "#222222" },
	[SchemeSel] = { "#eeeeee", "#005577" },
	[SchemeOut] = { "#000000", "#00ffff" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 8;


/* -h option; minimum height of a menu line */
static unsigned int lineheight = 45;
static unsigned int min_lineheight = 45;


/*
* Characters not considered part of a word while deleting words
* for example: " /?\"&[]"
*/

static const char worddelimiters[] = " ";

/* Size of the window border */
static unsigned int border_width = 20;
