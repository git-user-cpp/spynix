.. _print_rom_info_function:

ROM Information Function
------------------------

This module contains a function for printing ROM (disk) information.

.. code-block:: c

  void print_rom_info(void)

Prints a formatted summary of ROM information, including:

  - Total disk space
  - Free disk space
  - Used disk space

Steps:

    1) Prints a formatted header for the ROM information.
    2) Retrieves file system information for the root directory using statvfs.
    3) If statvfs is successful: 
      - Calculates and prints the total disk space in MiB.
      - Calculates and prints the free disk space in MiB.
      - Calculates and prints the used disk space in MiB.
    4) Prints a closing footer for the ROM information.
