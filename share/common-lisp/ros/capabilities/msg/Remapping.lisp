; Auto-generated. Do not edit!


(cl:in-package capabilities-msg)


;//! \htmlinclude Remapping.msg.html

(cl:defclass <Remapping> (roslisp-msg-protocol:ros-message)
  ((key
    :reader key
    :initarg :key
    :type cl:string
    :initform "")
   (value
    :reader value
    :initarg :value
    :type cl:string
    :initform ""))
)

(cl:defclass Remapping (<Remapping>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <Remapping>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'Remapping)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name capabilities-msg:<Remapping> is deprecated: use capabilities-msg:Remapping instead.")))

(cl:ensure-generic-function 'key-val :lambda-list '(m))
(cl:defmethod key-val ((m <Remapping>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader capabilities-msg:key-val is deprecated.  Use capabilities-msg:key instead.")
  (key m))

(cl:ensure-generic-function 'value-val :lambda-list '(m))
(cl:defmethod value-val ((m <Remapping>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader capabilities-msg:value-val is deprecated.  Use capabilities-msg:value instead.")
  (value m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <Remapping>) ostream)
  "Serializes a message object of type '<Remapping>"
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'key))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'key))
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'value))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'value))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <Remapping>) istream)
  "Deserializes a message object of type '<Remapping>"
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'key) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'key) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'value) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'value) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<Remapping>)))
  "Returns string type for a message object of type '<Remapping>"
  "capabilities/Remapping")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'Remapping)))
  "Returns string type for a message object of type 'Remapping"
  "capabilities/Remapping")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<Remapping>)))
  "Returns md5sum for a message object of type '<Remapping>"
  "cf57fdc6617a881a88c16e768132149c")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'Remapping)))
  "Returns md5sum for a message object of type 'Remapping"
  "cf57fdc6617a881a88c16e768132149c")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<Remapping>)))
  "Returns full string definition for message of type '<Remapping>"
  (cl:format cl:nil "string key~%string value~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'Remapping)))
  "Returns full string definition for message of type 'Remapping"
  (cl:format cl:nil "string key~%string value~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <Remapping>))
  (cl:+ 0
     4 (cl:length (cl:slot-value msg 'key))
     4 (cl:length (cl:slot-value msg 'value))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <Remapping>))
  "Converts a ROS message object to a list"
  (cl:list 'Remapping
    (cl:cons ':key (key msg))
    (cl:cons ':value (value msg))
))
