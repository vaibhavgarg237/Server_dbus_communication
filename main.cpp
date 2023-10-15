#include <dbus/dbus.h>
#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;

static void check_and_abort(DBusError *error);
static DBusHandlerResult handle_messages(DBusConnection *connection, DBusMessage *message, void *user_data);
 
int main() {
    DBusConnection *connection = NULL;
    DBusError error;
 
    dbus_error_init(&error);
    connection = dbus_bus_get(DBUS_BUS_SESSION, &error);
    check_and_abort(&error);
 
    dbus_connection_add_filter(connection, handle_messages, NULL, NULL);
    dbus_bus_add_match(connection, "type='signal',interface='org.Samsung.VaibhavGarg'", NULL);

    while (1)
    {
        dbus_connection_read_write_dispatch(connection, 1000);
    }

    return 0;
}

static DBusHandlerResult handle_messages(DBusConnection *connection, DBusMessage *message, void *user_data) {
    const char *interface_name = dbus_message_get_interface(message);
    const char *member_name = dbus_message_get_member(message);
    cout<<"[Server] Msg rcved from client| InterfaceName: "<< interface_name<<" MemberName: "<< member_name<<endl;
    return DBUS_HANDLER_RESULT_NOT_YET_HANDLED;
}
 
static void check_and_abort(DBusError *error) {
    if (!dbus_error_is_set(error)) return;
    puts(error->message);
    abort();
}