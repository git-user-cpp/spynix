.. _print_net_info_function:

Network Information Function
----------------------------

This module contains a function for printing network information.

.. code-block:: c

  void print_net_info(char *hostname)

Prints network information for both the specified hostname and the local system.

:param char *hostname: The hostname for which to retrieve network information.

Steps:

1. Hostname Information:

- Retrieves the hostent structure for the given hostname using gethostbyname.
- Prints the hostname and its associated IP addresses.

2. Local Interface Information:

- Retrieves the list of network interfaces using getifaddrs.
- Iterates through the list of interfaces:
- Prints the interface name.
- For IPv4 interfaces:
      - Prints the IP address.
      - Prints the netmask.

Error Handling:

- Exits with an error message if either `gethostbyname` or `getifaddrs` fails.
