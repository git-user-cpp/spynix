.. _print_net_info_function:

Network Information Function
----------------------------

This module contains a function for printing network information.

.. code-block:: c

  void print_net_info(char *hostname)

Prints network information for both the specified hostname and the local system.

:param char *hostname: The hostname for which to retrieve network information.

Steps:

    Hostname Information:

    a. Retrieves the hostent structure for the given hostname using gethostbyname.
    b. Prints the hostname and its associated IP addresses.

    Local Interface Information:

    a. Retrieves the list of network interfaces using getifaddrs.
    b. Iterates through the list of interfaces:
        Prints the interface name.
        For IPv4 interfaces:
            Prints the IP address.
            Prints the netmask.

Error Handling:

 - Exits with an error message if either `gethostbyname` or `getifaddrs` fails.
