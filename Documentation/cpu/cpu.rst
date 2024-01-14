.. _cpu_info_functions:

CPU Information Functions
-------------------------

This module provides functions for retrieving and displaying CPU information on Linux systems.

Functions
^^^^^^^^^

.. c:function:: void print_cpu_info(void)

   Prints a summary of CPU information to the console.

   .. note::
       This function displays a maximum of 19 lines of information.

       Returns:
           None

.. c:function:: void print_full_cpu_info(void)

   Prints the complete CPU information to the console.

Usage
^^^^^

.. note::
   These functions require the `stdio.h` header file.

To use these functions, include the header file ``stdio.h`` in your code.

Example
-------

.. code-block:: c

   #include <stdio.h>

   int main() {
       print_cpu_info();
       print_full_cpu_info();
       return 0;
   }
