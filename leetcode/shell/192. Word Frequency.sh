# Read from the file words.txt and output the word frequency list to stdout.
tr -cs A-Za-z\' '\n' < words.txt | tr A-Z a-z| sort|uniq -c|sort -k1,1nr -k2|awk '{ printf "%s %s\n",$2,$1 }'