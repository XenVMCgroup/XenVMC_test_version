#!/bin/bash

while [ 1 ]
do
	re=`ntpdate 192.168.1.50`
        num=`echo $re | awk '{print $10}'`
	echo $num
	temp=`echo "$num<0"|bc`
	if [ $temp -ne 0 ];then
		sleep 0.5
		continue;
	fi
	temp=`echo "0.000010>$num"|bc`
	if [ $temp -ne 0 ];then
		sleep 30	
	fi
	sleep 0.5	
done
