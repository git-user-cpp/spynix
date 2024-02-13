.. _cpu_information_functions:

CPU Information Functions
-------------------------

This module contains functions for printing CPU information.

.. code-block:: c

   void print_cpu_info(void)

Prints a formatted CPU information using lscpu util.

.. code-block:: c

   void print_full_cpu_info(void)

Prints the complete contents of the /proc/cpuinfo file.

Common Steps:

1. Prints a formatted header for the CPU information.
2. Attempts to open the /proc/cpuinfo file for reading.
3. If the file is opened successfully:
      - Reads lines from the file and prints them within the formatted output.
      - Closes the file.
4. If the file cannot be opened, prints an error message.
5. Prints a closing footer for the CPU information.

Differences:

- print_cpu_info prints general CPU info.
- print_full_cpu_info prints the entire contents of the file.
