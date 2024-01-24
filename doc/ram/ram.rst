.. _print_ram_info_function:

RAM Information Function
------------------------

This module contains a function for printing RAM information.

.. code-block:: c

  void print_ram_info(void)

Prints a formatted summary of RAM information, including:

- System uptime
- Total RAM
- Free RAM

Steps:

1. Retrieves system information using the sysinfo function.
2. Prints a formatted header for the RAM information.
3. Prints the uptime in hours.
4. Calculates and prints the total RAM in MiB.
5. Calculates and prints the free RAM in MiB.
6. Prints a closing footer for the RAM information.
