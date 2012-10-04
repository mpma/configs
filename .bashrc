#
# ~/.bashrc
#

# If not running interactively, don't do anything
[[ $- != *i* ]] && return

## User-aliases
# ls
alias ls='ls --color=auto'
alias lr='ls -R'
alias ll='ls -l'
alias la='ll -A'

# pacman
alias pac="sudo pacman-color -S"
alias pacu="sudo pacman-color -Syu"
alias pacs="sudo pacman-color -Ss"
alias paci="sudo pacman-color -Si"
alias pacr="sudo pacman-color -Rc"

# vim
alias v="vim"

## Prompt
PS1='\[\e[1;32m\]\w\[\033[m\] > '

case "$TERM" in
rxvt*|xterm*)
  set -o functrace
  trap '[[ $BASH_SOURCE ]] ||
    printf "\e]0;%s\a" "$BASH_COMMAND" >/dev/tty' DEBUG
  ;;
esac
