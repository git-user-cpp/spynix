.. _cpu_info_functions:

CPU Information Functions
-------------------------

This module provides functions for retrieving and displaying CPU information on Linux systems.

Functions
^^^^^^^^^

.. code-block:: c

   void print_cpu_info(void)

Prints a summary of CPU information to the console.

   .. note::
       This function displays a maximum of 19 lines of information.

       Returns:
           None

-------

.. code-block:: c

   void print_full_cpu_info(void)

Prints the complete CPU information to the console.

   .. note::
      Returns:
         None

-------

Example
-------

.. code-block:: c

   #include "cpu/cpu_info.h"

   int main() {
       print_cpu_info();
       // print_full_cpu_info();  // Uncomment to print full information
       return 0;
   }
