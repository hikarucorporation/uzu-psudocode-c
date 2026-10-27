// Function : socket_errno_udp
// Namespace: 
// Entry    : 00546520
// Prototype: int socket_errno_udp(void)
// Body     : 00546520 - 00546529


int socket_errno_udp(void)

{
  int *piVar1;
  
  piVar1 = __errno_location();
  return *piVar1;
}


