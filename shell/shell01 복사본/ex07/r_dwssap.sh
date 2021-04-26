cat /etc/passwd | sed '/#/d' | awk 'NR % 2 == 0' | cut -d ':' -f1 | rev | sort -r | tr '\n' ',' | sed s'/,/, /'g | cut -d ',' -f ${FT_LINE1}-${FT_LINE2} | tr '\n' .
