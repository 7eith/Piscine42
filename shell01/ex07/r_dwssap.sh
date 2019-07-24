cat /etc/passwd | grep -v "#" | sed -n "n;p" | cut -d "*" -f 1 | rev | sort -r | sed -n "${FT_LINE1},${FT_LINE2}p" |  tr ":\n" " ," | sed 's/.$/./' | sed 's/.//' | tr -d "\n"
