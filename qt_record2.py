#!/usr/bin/python
#coding:utf-8
import time
import os
import sys
import multiprocessing


def Mkdir(path,ip):
    os.chdir(path)  #amend the work path
    # new_dir = ip+'_'+time.strftime("%Y-%m-%d-%H:%M:%S", time.localtime())
    new_dir = ip
    os.mkdir(new_dir, 0755)
    os.chdir(new_dir)

    # str = os.getcwd()
    # os.system("echo Path : " + str)

def SetURI(dir):
    os.environ['ROS_MASTER_URI'] = dir

def record_fun(str, ros_record_Node, ros_bag_Num, ros_ip):
    SetURI(str)
    remove_str = "'/rtsp_camera_relay/camera_info" \
                 "|/rtsp_camera_relay/image" \
                 "|/rtsp_camera_relay/image/compressed/parameter_descriptions" \
                 "|/rtsp_camera_relay/image/compressed/parameter_updates" \
                 "|/rtsp_camera_relay/image/compressedDepth" \
                 "|/rtsp_camera_relay/image/compressedDepth/parameter_descriptions" \
                 "|/rtsp_camera_relay/image/compressedDepth/parameter_updates" \
                 "|/rtsp_camera_relay/image/theora" \
                 "|/rtsp_camera_relay/image/theora/parameter_descriptions" \
                 "|/rtsp_camera_relay/image/theora/parameter_updates" \
                 "|/rtsp_camera_relay/status'"
    os.system("rosnode list")
    os.system("rosrun rosbag record -aj -o B" + ros_bag_Num + "B_" + ros_ip +" -x " + remove_str + " __name:=" + ros_record_Node)

def launch_fun(str):
    SetURI(str) 
    os.environ['ROCON_RTSP_CAMERA_RELAY_URL'] = \
        'rtsp://192.168.31.10:554/user=admin&password=&channel=1&stream=.sdp?real_stream--rtp-caching=100'
    # os.system('env | grep ROCON_RTSP_CAMERA_RELAY_URL')
    os.system("roslaunch rocon_rtsp_camera_relay rtsp_camera_relay.launch")



def main(argv):

    if len(sys.argv)!=7:
        os.system("echo Parameter is Not Enough or Beyond!!!")
        os._exit(0)

    os.system("echo ----------------------Recording------------------------")
    ros_ip = sys.argv[1]
    ros_port = sys.argv[2]
    ros_record_node = sys.argv[3]
    ros_bag_path = sys.argv[4]
    ros_video_select = sys.argv[5]
    ros_bag_num = sys.argv[6]

    ip_port_str = "http://" + ros_ip + ":" + ros_port
    Mkdir(ros_bag_path, ros_ip)

    if ros_video_select != "0":
        p1 = multiprocessing.Process(target=launch_fun, args=(ip_port_str,))
        p1.start()
        time.sleep(4)
        print("----------------------------------")

    p2 = multiprocessing.Process(target=record_fun, args=(ip_port_str, ros_record_node, ros_bag_num, ros_ip))
    p2.start()

if __name__ == '__main__':
        main(sys.argv)
