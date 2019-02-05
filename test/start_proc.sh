#!/bin/sh

START=$SECONDS

./mem1 &
./mem4 &
./mem3 &
./mem  &
./mem2 &

wait
if [ $? -eq 0 ]; then
    DURATION=$((SECONDS - START));
    /bin/echo "Total time : ${DURATION}s";
else
    echo "wait failed"
fi
