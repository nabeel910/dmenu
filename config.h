/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = { "Roboto Mono Nerd Font:size=11","Noto Color Emoji:pixelsize=14:antialias=true:autohint=true" };
static const char *prompt      =" ";      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#ABB2BF", "#191724" },
	[SchemeSel] = { "#e0def4", "#31748f" },
	[SchemeSelHighlight] = { "#f6c177", "#31748f" },
	[SchemeNormHighlight] = { "#f6c177", "#191724" },
 	[SchemeOut] = { "#000000", "#ebbcba" },
	[SchemeOutHighlight] = { "#f6c177", "#ebbcba" },
	[SchemeHp] = { "#f6c177", "#191724" }
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;
/* -h option; minimum height of a menu line */
static unsigned int lineheight = 30;
static unsigned int min_lineheight = 30;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
