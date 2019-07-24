$FT_NBR1 + $FT_NBR2 | tr "\'\\\"\?\!" 01234 | tr "mrdoc" 01234 | xargs echo 'obase=13;ibase=5'| bc | tr "gtaio luSnemf" 0123456789ABC
