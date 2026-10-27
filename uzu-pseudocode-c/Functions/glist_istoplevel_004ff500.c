// Function : glist_istoplevel
// Namespace: 
// Entry    : 004ff500
// Prototype: bool glist_istoplevel(long param_1)
// Body     : 004ff500 - 004ff51b


bool glist_istoplevel(long param_1)

{
  return (*(ushort *)(param_1 + 0xe8) & 1) != 0 || (*(ushort *)(param_1 + 0xe8) & 0x100) == 0;
}


