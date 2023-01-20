#include <stdio.h>
#include <Python.h>

/**
 * print_python_list_info - Prints some basic info about Python lists
 * @p: A pointer to a Python object.
 * Return: void
 */
void print_python_list_info(PyObject *p)
{
	long int size;
	long int i;
	PyListObject *list;
	PyObject *obj;

	size = Py_SIZE(p);

	printf("[*] Size of the Python List = %ld\n", size);

	list = (PyListObject *)p;

	printf("[*] Allocated = %ld\n", list->allocated);

	for (i = 0; i < size; i++)
	{
		obj = PyList_GetItem(p, i);
		printf("Element %ld: %s\n", i, Py_TYPE(obj)->tp_name);
	}
}
