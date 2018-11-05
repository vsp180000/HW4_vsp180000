
#!/bin/bash

echo "Flie Created In 4.1 is following:"
ls dir1
ls dir2
ls file1
ls link1

chmod 700 $HOME/HW4_vsp180000/HW4/script3.sh
echo "Script3.sh contains the command:"
cat $HOME/HW4_vsp180000/HW4/script3.sh


echo "New contents after running Script3.sh:"
$HOME/HW4_vsp180000/HW4/script3.sh
