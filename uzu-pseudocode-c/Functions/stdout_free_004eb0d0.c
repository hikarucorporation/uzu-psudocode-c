// Function : stdout_free
// Namespace: 
// Entry    : 004eb0d0
// Prototype: undefined stdout_free(void)
// Body     : 004eb0d0 - 004eb0de


void stdout_free(void)

{
  fflush(*(FILE **)PTR_stdout_00715898);
  return;
}


