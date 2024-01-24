.. _print_sys_info_function:

System Information Function
---------------------------

This module contains a function for printing system information.

.. code-block:: c

  void print_sys_info(void)

Prints a formatted summary of system information, including:

- System name
- Host name
- Kernel release
- System version
- Machine type

Steps:

1. Retrieves system information using the uname function.
2. Prints a formatted header for the system information.
3. Prints each of the following system information fields: 
    - System name
    - Host name
    - Kernel release
    - System version
    - Machine type
4. Prints a closing footer for the system information.
