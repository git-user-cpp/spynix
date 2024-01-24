.. _spynix_printing_functions:

Spynix Printing Functions
-------------------------

This module contains functions for printing various visual elements in the Spynix tool.

Functions
^^^^^^^^^

.. code-block:: c

  void print_banner(void)

Prints a colorful ASCII banner with the Spynix name.

-------

.. code-block:: c

  void print_logo(void)

Prints a colorful ASCII art logo of the Spynix tool.

-------

.. code-block:: c

  void print_err_info(void)

Prints a colorful error message instructing the user to use the help option for valid commands.

-------

.. code-block:: c

  void print_hlp_info(void)

Prints a colorful comprehensive help menu, including:

- Description of the Spynix tool
- Information options (help, version, banner, logo)
- Available hardware information options (all, system, cpu, ram, rom, net)
- Advanced options (full CPU information)

-------

.. code-block:: c

  void print_ver_info(void)

Prints the current colorful version of Spynix along with a link to its GitHub repository.
