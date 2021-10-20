cat /etc/passwd | sed '/^#/d' | sed -n 'n;p' | cut -d ':' -f1 | rev | sort -r | awk 'NR>= 7 && NR<= 15' | paste -sd ',' - | sed 's/,/, /g' | sed 's/$/./' | tr -d '\n'
