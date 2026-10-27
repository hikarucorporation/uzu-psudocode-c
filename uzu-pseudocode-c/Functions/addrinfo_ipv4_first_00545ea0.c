// Function : addrinfo_ipv4_first
// Namespace: 
// Entry    : 00545ea0
// Prototype: int addrinfo_ipv4_first(long param_1, long param_2)
// Body     : 00545ea0 - 00545eb6


int addrinfo_ipv4_first(long param_1,long param_2)

{
  int iVar1;
  
  iVar1 = 1;
  if (*(int *)(param_1 + 4) == 2) {
    iVar1 = -(uint)(*(int *)(param_2 + 4) != 2);
  }
  return iVar1;
}


