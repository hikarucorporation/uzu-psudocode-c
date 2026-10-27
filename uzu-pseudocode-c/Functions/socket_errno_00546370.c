// Function : socket_errno
// Namespace: 
// Entry    : 00546370
// Prototype: int socket_errno(void)
// Body     : 00546370 - 00546379


int socket_errno(void)

{
  int *piVar1;
  
  piVar1 = __errno_location();
  return *piVar1;
}


