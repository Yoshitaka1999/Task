DATE=`date '+%Y-%m-%d %H:%M'`
HOUR=`date '+%H'`

if [ $HOUR -le 12 ]; then
    ls -la
else
    echo $DATE
fi
