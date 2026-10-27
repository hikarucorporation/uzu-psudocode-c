// Function : addrinfo_ipv6_first
// Namespace: 
// Entry    : 00545ec0
// Prototype: int addrinfo_ipv6_first(long param_1, long param_2)
// Body     : 00545ec0 - 00545ed6


int addrinfo_ipv6_first(long param_1,long param_2)

{
  int iVar1;
  
  iVar1 = 1;
  if (*(int *)(param_1 + 4) == 10) {
    iVar1 = -(uint)(*(int *)(param_2 + 4) != 10);
  }
  return iVar1;
}


