#!/usr/bin/python
#coding:utf-8
import os
import sys
import time

def SetURI():
    dir = 'http://' + sys.argv[1] + ':' + sys.argv[2]
    os.environ['ROS_MASTER_URI'] = dir


def main(argv):

    if len(sys.argv)!=4:
        print("Parameter is Not Enough or Beyond!!!")
        exit(1)
    os.system("echo --------------------------Finish----------------------------")
    SetURI()
    os.system("rosnode kill /rtsp_camera_relay")
    os.system("rosnode kill /%s"%sys.argv[3])
    #os.system("rosnode list")
    os.system("echo There are some node is still working......")



# 输入参数
# ROS_IP
# ROS_Port
# ROS_Record_Node_Name

if __name__=='__main__':
    main(sys.argv)
