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

  - Retrieves system information using the sysinfo function.
  - Prints a formatted header for the RAM information.
  - Prints the uptime in hours.
  - Calculates and prints the total RAM in MiB.
  - Calculates and prints the free RAM in MiB.
  - Prints a closing footer for the RAM information.
