# dbus SERVER

D-Bus(Desktop bus): 
- Message bus system providing an inter-process communication channel
- Part of the systems application suite
- Helps in application and system services to communicate with each other
- Applications send & receive messages through message bus
- Publish subscribe model 

## Bus Types
- DBUS_BUS_SYSTEM: System-wide D-Bus: main instance for sys communication
- DBUS_BUS_SESSION: Session-specific D-Bus instances: Instance running for a partial user…

## Package Required: 
- libdbus-1-dev

## NOTE: 
#### This code is a server code using System wide BUS, dbus communication. This is minimal code so as to remove complexities. No warranty whatsover!
    You may use below code however you like!  💪 Open source! 
    - Vaibhav Garg

## Logs
```
vaibhav@vaibhav-Lenovo-ideapad:~/Desktop/attempt4/server$ /home/vaibhav/Desktop/attempt4/server/build/wtfIsDbus
[Server] Msg rcved from client| InterfaceName: org.freedesktop.DBus MemberName: NameAcquired



[Server] Msg rcved from client| InterfaceName: org.Samsung.VaibhavGarg MemberName: VaibhavGarg
[Server] Msg rcved from client| InterfaceName: org.Samsung.VaibhavGarg MemberName: VaibhavGarg
``````