// Function : getaddrinfo
// Namespace: _EXTERNAL_
// Entry    : 0015f300
// Prototype: int getaddrinfo(char * __name, char * __service, addrinfo * __req, addrinfo * * __pai)
// Body     : 0015f300 - 0015f305


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getaddrinfo(char *__name,char *__service,addrinfo *__req,addrinfo **__pai)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_getaddrinfo_00718180)();
  return iVar1;
}


