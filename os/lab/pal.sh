echo "enter a number"
read num
or=$num
rev=0
	while [ $num -gt 0 ] ; do
		digit=$((num%10)) 
		rev=$((rev * 10+digit))
		num=$((num/10))
	done
if [ $or -eq $rev ] ; then
	echo " the $or is palindrome"
else
	echo " the $or is not palindrome "
fi
