// Function : socket_errno
// Namespace: 
// Entry    : 0015e680
// Prototype: int socket_errno(void)
// Body     : 0015e680 - 0015e685


int socket_errno(void)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_socket_errno_00717b40)();
  return iVar1;
}


