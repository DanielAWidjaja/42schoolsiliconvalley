ldapsearch -Q sn="*bon*" | grep dn:. | wc -l | xargs
