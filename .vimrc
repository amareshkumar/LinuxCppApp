# do not bell on tab-completion
#set bell-style none

set meta-flag on
set input-meta on
set convert-meta off
set output-meta on

# Completed names which are symbolic links to
# directories have a slash appended.
set mark-symlinked-directories on

$if mode=emacs

# for linux console and RH/Debian xterm
"\e[1~": beginning-of-line
"\e[4~": end-of-line
# commented out keymappings for pgup/pgdown to reach begin/end of history
#"\e[5~": beginning-of-history
#"\e[6~": end-of-history
"\e[5~": history-search-backward
"\e[6~": history-search-forward
"\e[3~": delete-char
"\e[2~": quoted-insert
"\e[5C": forward-word
"\e[5D": backward-word
"\e[1;5C": forward-word
"\e[1;5D": backward-word

# for rxvt
"\e[8~": end-of-line
"\eOc": forward-word
"\eOd": backward-word

# for non RH/Debian xterm, can't hurt for RH/DEbian xterm
"\eOH": beginning-of-line
"\eOF": end-of-line

# for freebsd console
"\e[H": beginning-of-line
"\e[F": end-of-line
$endif
