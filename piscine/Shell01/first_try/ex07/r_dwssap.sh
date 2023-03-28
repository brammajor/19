
#!/bin/bash

cat /etc/passwd | cut -f 1 -d ':' | sed -e '/^;/d' | awk '!(NR%2)' | rev | sort -r | head -${FT_LINE2} | tail +${FT_LINE1} | awk '{print}' ORS=', ' | awk '{$0=substr($0,1,length($0)-3); print $0}' | sed '$s/$/./'
