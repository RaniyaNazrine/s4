echo "enter two numbers"
read a
read b
echo "choose the operation"
	echo " 1. addition "
	echo " 2. subtration "
	echo " 3. multiplication "
	echo " 4. division "
read c
case $c in 
	1) result=$(($a + $b ))
	   echo " sum =$result ";;
	2) result=$(($a - $b ))
	   echo " difference =$result ";;
	3)  result=$(($a * $b ))
	   echo " product =$result ";;
	4) result=$(($a / $b ))
	   echo " divide =$result ";;
	*) echo "invalid choice"
esac
