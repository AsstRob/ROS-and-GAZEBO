## *********************************************************
##
## File autogenerated for the freenect_camera package
## by the dynamic_reconfigure package.
## Please do not edit.
##
## ********************************************************/

from dynamic_reconfigure.encoding import extract_params

inf = float('inf')

config_description = {'upper': 'DEFAULT', 'lower': 'groups', 'srcline': 245, 'name': 'Default', 'parent': 0, 'srcfile': '/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'cstate': 'true', 'parentname': 'Default', 'class': 'DEFAULT', 'field': 'default', 'state': True, 'parentclass': '', 'groups': [], 'parameters': [{'srcline': 290, 'description': 'Image output mode', 'max': 2, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'image_mode', 'edit_method': "{'enum_description': 'output mode', 'enum': [{'srcline': 8, 'description': '1280x1024', 'srcfile': '/tmp/binarydeb/ros-indigo-freenect-camera-0.4.1/cfg/Freenect.cfg', 'cconsttype': 'const int', 'value': 1, 'ctype': 'int', 'type': 'int', 'name': 'SXGA'}, {'srcline': 9, 'description': '640x480', 'srcfile': '/tmp/binarydeb/ros-indigo-freenect-camera-0.4.1/cfg/Freenect.cfg', 'cconsttype': 'const int', 'value': 2, 'ctype': 'int', 'type': 'int', 'name': 'VGA'}]}", 'default': 2, 'level': 0, 'min': 1, 'type': 'int'}, {'srcline': 290, 'description': 'Depth output mode', 'max': 2, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'depth_mode', 'edit_method': "{'enum_description': 'output mode', 'enum': [{'srcline': 8, 'description': '1280x1024', 'srcfile': '/tmp/binarydeb/ros-indigo-freenect-camera-0.4.1/cfg/Freenect.cfg', 'cconsttype': 'const int', 'value': 1, 'ctype': 'int', 'type': 'int', 'name': 'SXGA'}, {'srcline': 9, 'description': '640x480', 'srcfile': '/tmp/binarydeb/ros-indigo-freenect-camera-0.4.1/cfg/Freenect.cfg', 'cconsttype': 'const int', 'value': 2, 'ctype': 'int', 'type': 'int', 'name': 'VGA'}]}", 'default': 2, 'level': 0, 'min': 1, 'type': 'int'}, {'srcline': 290, 'description': 'Depth data registration', 'max': True, 'cconsttype': 'const bool', 'ctype': 'bool', 'srcfile': '/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'depth_registration', 'edit_method': '', 'default': True, 'level': 0, 'min': False, 'type': 'bool'}, {'srcline': 290, 'description': 'Skip N images for every image published (rgb/depth/depth_registered/ir)', 'max': 10, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'data_skip', 'edit_method': '', 'default': 0, 'level': 0, 'min': 0, 'type': 'int'}, {'srcline': 290, 'description': 'depth image time offset in seconds', 'max': 1.0, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'depth_time_offset', 'edit_method': '', 'default': 0.0, 'level': 0, 'min': -1.0, 'type': 'double'}, {'srcline': 290, 'description': 'image time offset in seconds', 'max': 1.0, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'image_time_offset', 'edit_method': '', 'default': 0.0, 'level': 0, 'min': -1.0, 'type': 'double'}, {'srcline': 290, 'description': 'X offset between IR and depth images', 'max': 10.0, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'depth_ir_offset_x', 'edit_method': '', 'default': 5.0, 'level': 0, 'min': -10.0, 'type': 'double'}, {'srcline': 290, 'description': 'Y offset between IR and depth images', 'max': 10.0, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'depth_ir_offset_y', 'edit_method': '', 'default': 4.0, 'level': 0, 'min': -10.0, 'type': 'double'}, {'srcline': 290, 'description': 'Z offset in mm', 'max': 50, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'z_offset_mm', 'edit_method': '', 'default': 0, 'level': 0, 'min': -50, 'type': 'int'}], 'type': '', 'id': 0}

min = {}
max = {}
defaults = {}
level = {}
type = {}
all_level = 0

#def extract_params(config):
#    params = []
#    params.extend(config['parameters'])
#    for group in config['groups']:
#        params.extend(extract_params(group))
#    return params

for param in extract_params(config_description):
    min[param['name']] = param['min']
    max[param['name']] = param['max']
    defaults[param['name']] = param['default']
    level[param['name']] = param['level']
    type[param['name']] = param['type']
    all_level = all_level | param['level']

Freenect_SXGA = 1
Freenect_VGA = 2
