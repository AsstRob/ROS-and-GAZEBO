
(cl:in-package :asdf)

(defsystem "gateway_msgs-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "Rule" :depends-on ("_package_Rule"))
    (:file "_package_Rule" :depends-on ("_package"))
    (:file "GatewayInfo" :depends-on ("_package_GatewayInfo"))
    (:file "_package_GatewayInfo" :depends-on ("_package"))
    (:file "RemoteGateway" :depends-on ("_package_RemoteGateway"))
    (:file "_package_RemoteGateway" :depends-on ("_package"))
    (:file "ErrorCodes" :depends-on ("_package_ErrorCodes"))
    (:file "_package_ErrorCodes" :depends-on ("_package"))
    (:file "RemoteRule" :depends-on ("_package_RemoteRule"))
    (:file "_package_RemoteRule" :depends-on ("_package"))
    (:file "ConnectionStatistics" :depends-on ("_package_ConnectionStatistics"))
    (:file "_package_ConnectionStatistics" :depends-on ("_package"))
    (:file "RemoteRuleWithStatus" :depends-on ("_package_RemoteRuleWithStatus"))
    (:file "_package_RemoteRuleWithStatus" :depends-on ("_package"))
    (:file "ConnectionType" :depends-on ("_package_ConnectionType"))
    (:file "_package_ConnectionType" :depends-on ("_package"))
  ))