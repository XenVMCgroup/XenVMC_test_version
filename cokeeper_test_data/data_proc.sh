#!/bin/bash 

test_num=$1


#计算vm add的时间
# vm1 add: [1,1] ~ max{[0,1], [1,1]}
# vm2 add: [2,1] ~ max{[0,2], [1,2], [2,2]}
# vm3 add: [3,1] ~ max{[0,3], [1,3], [2,3], [3,3]}
# vm4 add: [4,1] ~ max{[0,4], [1,4], [2,4], [3,4], [4,4]}
# ...
#

function abs(){
	if (($1>=0));then
		echo $1
	else
		echo $((-$1))
	fi
	}

function vm_add(){
	vm_amount=$1
	i=0
	start_sa=`cat cokeeper_test_result.txt$test_num-dom$1 | grep "ADD" | awk -v n=$vm_amount 'NR==1 {print $((NF-1))}' | awk 'FS=":" {print $1}'`
	start_sb=${start_sa#*:}
	start_s=${start_sb%,*}
	start_ns=`cat cokeeper_test_result.txt$test_num-dom$1 | grep "ADD" | awk -v n=$vm_amount 'NR==1 {print $NF}'`
	#echo $start_s
	#echo $start_ns
	max=0  
	while [ $i -lt $vm_amount ];do
		sa=`cat cokeeper_test_result.txt$test_num-dom$i | grep "ADD" | awk -v n=$vm_amount 'NR==n {print $((NF-1))}'`
		sb=${sa#*:}
		s=${sb%,*}
		ns=`cat cokeeper_test_result.txt$test_num-dom$i | grep "ADD" | awk -v n=$vm_amount 'NR==n {print $NF}'`
		
		length_t=$[ ($s-$start_s)*1000000000+($ns-$start_ns) ]
		#abs $length	
		length=`abs $length_t`
		echo "               length=$length"
		if [ $max -lt $length  ];then
			max=$length
		fi
		i=$(($i+1))
	done
	echo "vm$1 add, spend $max ns"
}

vm_num=1
while [ $vm_num -lt 11 ];do
	vm_add $vm_num
	vm_num=$(($vm_num+1))
done

#vm1 del:
#vm2 del: [2,9] ~ max{[1,9], [0,9]}
#vm3 del: [3,8] ~ max{[2,8], [1,8], [0,8]}
#vm4 del: [4,7] ~ max{[3,7], [2,7], [1,7], [0,7]}
#...
#mv10 del: [10,1] ~ max{[9,1], [8,1], [7,1], [6,1], [5,1], [4,1], [3,1], [2,1], [1,1], [0,1]}

function vm_del(){
	vm_amount=$1
	locate=$((11-$vm_amount))
	#echo "locate=$locate"
	start_sa=`cat cokeeper_test_result.txt$test_num-dom$1 | grep "DEL" | awk -v n=$locate 'NR==n {print $((NF-1))}' | awk 'FS=":" {print $1}'`
	start_sb=${start_sa#*:}
	start_s=${start_sb%,*}
	start_ns=`cat cokeeper_test_result.txt$test_num-dom$1 | grep "DEL" | awk -v n=$locate 'NR==n {print $NF}'`
	#echo "start_sa=$start_sa"
	i=0
	max=0  
	while [ $i -lt $vm_amount ];do
		sa=`cat cokeeper_test_result.txt$test_num-dom$i | grep "DEL" | awk -v n=$locate 'NR==n {print $((NF-1))}'`
		sb=${sa#*:}
		s=${sb%,*}
		ns=`cat cokeeper_test_result.txt$test_num-dom$i | grep "DEL" | awk -v n=$locate 'NR==n {print $NF}'`
		
		length_t=$[ ($s-$start_s)*1000000000+($ns-$start_ns) ]
		#abs $length	
		length=`abs $length_t`
		echo "               length=$length"
		if [ $max -lt $length  ];then
			max=$length
		fi
		i=$(($i+1))
	done
	echo "vm$1 del, spend $max ns"


}

vm_num=2
while [ $vm_num -lt 11 ];do
	vm_del $vm_num
	vm_num=$(($vm_num+1))
done

