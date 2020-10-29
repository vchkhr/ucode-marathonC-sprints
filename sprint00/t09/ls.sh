ls -lAh "$@" | grepp -v '^total' | awk '{print $9, $5}'
