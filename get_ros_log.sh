#get ROS log from robot

robot_ip=$1
bag_id=$2
out_dir=$3

echo "start to copy......"
# apt-get install sshpass

cd $out_dir
cd $robot_ip
dmkdir() { newdir=$robot_ip'_B'$bag_id'B_logs'; mkdir $newdir; }
dmkdir 
echo "data will saving in $newdir directory."
echo "$newdir directory will rename when downloadding OK."
echo "logs is copying......"
cd $newdir
sshpass -p 'a' scp -r root@$robot_ip:/root/logs ./

echo "data is copying......"
sshpass -p 'a' scp -r root@$robot_ip:/root/map_server/map ./map/
sshpass -p 'a' scp -r root@$robot_ip:/tmp/profiler.json ./
sshpass -p 'a' scp -r root@$robot_ip:/tmp/glog ./map/
sshpass -p 'a' scp -r root@$robot_ip:/tmp/consist ./map/
sshpass -p 'a' scp -r root@$robot_ip:/running.txt ./

echo "map_server_.bag is copying......"
sshpass -p 'a' scp -r root@$robot_ip:/root/map_server/map_server_.bag ./


echo "downloading data OK."
cd ..
mv $newdir $robot_ip'_'$bag_id'logs'

echo "rename directory is OK"


